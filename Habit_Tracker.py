import tkinter as tk
from tkinter import messagebox, ttk
from datetime import date, timedelta


# ---------- Habit Class ----------
class Habit:
    def __init__(self, name, goal):
        self.name = name
        self.streak = 0
        self.goal = goal
        self.longest_streak = 0
        self.last_done = None  # track the last day user marked complete

    def mark_complete(self):
        today = date.today()

        # If skipped yesterday, streak resets
        if self.last_done is not None and today > self.last_done + timedelta(days=1):
            self.streak = 0

        # Already marked today
        if self.last_done == today:
            return False

        # Otherwise increase streak
        self.streak += 1
        self.last_done = today
        if self.streak > self.longest_streak:
            self.longest_streak = self.streak
        return True

    def reset(self):
        self.streak = 0

    def progress_percent(self):
        if self.goal <= 0:
            return 0.0
        return round((self.streak / self.goal) * 100, 2)


# ---------- Habit Tracker App ----------
class HabitTrackerApp:
    def __init__(self, root):
        self.root = root
        self.root.title("🌟 Habit Tracker")
        self.root.geometry("750x600")
        self.root.config(bg="#f9f9f9")

        self.habits = []

        # --- Title Bar ---
        header = tk.Frame(root, bg="#4CAF50")
        header.pack(fill="x")
        tk.Label(header, text="🌱 Habit Tracker", font=("Helvetica Rounded", 26, "bold"),
                 bg="#4CAF50", fg="white", pady=15).pack()

        # --- Input Frame (Centered, moved further below) ---
        input_frame = tk.LabelFrame(root, text="➕ Add New Habit", font=("Arial", 12, "bold"),
                                    bg="#ffffff", fg="#4CAF50", padx=15, pady=10, relief="groove")
        input_frame.pack(pady=(40, 20), anchor="center")

        tk.Label(input_frame, text="Habit Name:", font=("Arial", 11), bg="white")\
            .grid(row=0, column=0, padx=5, pady=5, sticky="e")
        self.name_entry = tk.Entry(input_frame, font=("Arial", 11), width=25, bd=2, relief="solid")
        self.name_entry.grid(row=0, column=1, padx=10, pady=5)

        tk.Label(input_frame, text="Goal (days):", font=("Arial", 11), bg="white")\
            .grid(row=1, column=0, padx=5, pady=5, sticky="e")
        self.goal_entry = tk.Entry(input_frame, font=("Arial", 11), width=25, bd=2, relief="solid")
        self.goal_entry.grid(row=1, column=1, padx=10, pady=(5, 15))

        tk.Button(input_frame, text="Add Habit", command=self.add_habit,
                  bg="#4CAF50", fg="white", font=("Arial", 11, "bold"),
                  width=20, relief="flat", cursor="hand2")\
            .grid(row=2, columnspan=2, pady=5)

        # --- Habit Display Frame (Centered) ---
        self.display_frame = tk.Frame(root, bg="#f9f9f9")
        self.display_frame.pack(pady=10, anchor="center")

        # --- Action Buttons (Centered at Bottom) ---
        action_frame = tk.Frame(root, bg="#f9f9f9")
        action_frame.pack(pady=50, anchor="center", side="bottom")

        self.complete_btn = tk.Button(action_frame, text="✅ Mark Complete", command=self.mark_complete,
                                      bg="#2196F3", fg="white", font=("Arial", 11, "bold"),
                                      width=18, relief="flat", cursor="hand2")
        self.complete_btn.pack(side="left", padx=10)

        self.reset_btn = tk.Button(action_frame, text="🔄 Reset Streak", command=self.reset_streak,
                                   bg="#FF9800", fg="white", font=("Arial", 11, "bold"),
                                   width=18, relief="flat", cursor="hand2")
        self.reset_btn.pack(side="left", padx=10)

        self.delete_btn = tk.Button(action_frame, text="🗑 Delete Habit", command=self.delete_habit,
                                    bg="#E53935", fg="white", font=("Arial", 11, "bold"),
                                    width=18, relief="flat", cursor="hand2")
        self.delete_btn.pack(side="left", padx=10)

        self.selected_index = None

    # ---------- Methods ----------
    def add_habit(self):
        name = self.name_entry.get()
        goal = self.goal_entry.get()

        if not name or not goal.isdigit():
            messagebox.showerror("Error", "Enter a valid habit name and numeric goal.")
            return

        new_habit = Habit(name, int(goal))
        self.habits.append(new_habit)
        self.refresh_list()

        self.name_entry.delete(0, tk.END)
        self.goal_entry.delete(0, tk.END)

    def get_selected_habit(self):
        if self.selected_index is None:
            messagebox.showwarning("Warning", "Please click on a habit first.")
            return None
        return self.habits[self.selected_index]

    def mark_complete(self):
        habit = self.get_selected_habit()
        if habit:
            success = habit.mark_complete()
            if not success:
                messagebox.showinfo("Info", f"'{habit.name}' is already marked for today ✅")
            self.refresh_list()

    def reset_streak(self):
        habit = self.get_selected_habit()
        if habit:
            habit.reset()
            self.refresh_list()

    def delete_habit(self):
        if self.selected_index is not None:
            del self.habits[self.selected_index]
            self.selected_index = None
            self.refresh_list()
        else:
            messagebox.showwarning("Warning", "Please select a habit first.")

    def refresh_list(self):
        for widget in self.display_frame.winfo_children():
            widget.destroy()

        if not self.habits:
            tk.Label(self.display_frame, text="No habits yet. Add one above 👆",
                     font=("Arial", 12, "italic"), bg="#f9f9f9", fg="gray").pack()
            return

        for idx, habit in enumerate(self.habits):
            card = tk.Frame(self.display_frame, bg="white", bd=2, relief="ridge", padx=10, pady=10)
            card.pack(pady=10, anchor="center")

            card.bind("<Button-1>", lambda e, i=idx: self.select_card(i, card))

            name_lbl = tk.Label(card, text=f"{habit.name}", font=("Arial Rounded MT Bold", 14), bg="white")
            name_lbl.pack(anchor="w")

            streak_lbl = tk.Label(
                card,
                text=f"Streak: {habit.streak} | Goal: {habit.goal} | Best: {habit.longest_streak}",
                font=("Arial", 11), bg="white", fg="gray"
            )
            streak_lbl.pack(anchor="w", pady=2)

            progress = ttk.Progressbar(card, length=400, value=habit.progress_percent(), maximum=100)
            progress.pack(pady=5)

    def select_card(self, index, card):
        for widget in self.display_frame.winfo_children():
            widget.config(bg="white")
        card.config(bg="#e0f7fa")
        self.selected_index = index


# ---------- Run App ----------
if __name__ == "__main__":
    root = tk.Tk()
    app = HabitTrackerApp(root)
    root.mainloop()
