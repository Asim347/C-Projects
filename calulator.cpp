#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main();
void addition(){
	system("cls");
	int range, num, sum, key;
	cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\tAddition" << endl;
	cout << "Enter your range: ";
	cin >> range;
	for(int i=1; i<=range; i++){
		cout << "Enter Number " << i << ": ";
		cin >> num;
		sum+=num;}
		cout <<"\t\t\t\t\t Total Addition: " << sum << endl << endl;
	cout << "Press from 1 to 5 to do it again: " << endl; 
	cout << "Press any button between 6 and 9 to go to the main function!" << endl;
	cout << "Or if you want to close the program press alphabet and then press enter!" << endl;
	cin >> key;
		if(key>=6 && key<=9){
			main();
			}
		else if(key>=1 && key<=5){
				addition();
			}
}

void subtraction(){
	system("cls");
	int quan, term, num, sub, key;
	cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\tSubtraction" << endl;
	cout << "Enter number from which you want to subtract: ";
	cin >> quan;
	cout << "Enter how many time you want to subtract: ";
	cin >> term;
	sub = quan;
	for(int i = 1; i <=term; i++){
		cout << "Enter Number " << i << ": ";
		cin >> num;
		sub = sub-num;
	}
	cout << "\t\t\t\t\t Total Subtraction: " << sub << endl << endl;
	cout << "Press from 1 to 5 to do it again: " << endl; 
	cout << "Press any button between 6 and 9 to go to the main function!" << endl;
	cout << "Or if you want to close the program press alphabet and then press enter!" << endl;
	cin >> key;
		if(key>=6 && key<=9){
			main();
			}
		else if(key>=1 && key<=5){
				subtraction();
			}
}

void product1(){
	system("cls");
	long double item, num, product=1, key;
	cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\tMultiplication" << endl;
	cout << "Enter items to multiply: ";
	cin >> item;
	int i=1;
	do{
		cout << "Enter Number " << i << ": ";
		cin >> num;
		product = product * num;
		i++;
	}
	while(i<=item);
	cout << "\t\t\t\t\t Total Product: " << product << endl << endl;
	cout << "Press from 1 to 5 to do it again: " << endl; 
	cout << "Press any button between 6 and 9 to go to the main function!" << endl;
	cout << "Or if you want to close the program press alphabet and then press enter!" << endl;
	cin >> key;
		if(key>=6 && key<=9){
			main();
			}
		else if(key>=1 && key<=5){
				product1();
			}
}

void division(){
	system("cls");
	float num1, num2, div, key;
	cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\tDivision" << endl;
	cout << "Enter Nominator: ";
	cin >> num1;
	cout << "Enter Denominator: ";
	cin >> num2;
	div = num1 / num2;
	cout << "\t\t\t\t\t Total Division: " << div << endl << endl;
	cout << "Press from 1 to 5 to do it again: " << endl; 
	cout << "Press any button between 6 and 9 to go to the main function!" << endl;
	cout << "Or if you want to close the program press alphabet and then press enter!" << endl;
	cin >> key;
		if(key>=6 && key<=9){
			main();
			}
		else if(key>=1 && key<=5){
				division();
			}
	}
	
void remainder(){
	system("cls");
	int num1, num2, remain, key;
	cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\tRemainder" << endl;
	cout << "Enter nominator: ";
	cin >> num1;
	cout << "Enter Denominator: ";
	cin >> num2;
	remain = num1%num2;
	cout << "\t\t\t\t\t Total Remainder: " << remain << endl << endl;
	cout << "Press from 1 to 5 to do it again: " << endl; 
	cout << "Press any button between 6 and 9 to go to the main function!" << endl;
	cout << "Or if you want to close the program press alphabet and then press enter!" << endl;
	cin >> key;
		if(key>=6 && key<=9){
			main();
			}
		else if(key>=1 && key<=5){
				remainder();
			}
}

void percentage(){
	system("cls");
	int total, subject, obtain, perage, numbers, key;
	cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\tPercentage" << endl;
	cout << "Enter total Number: ";
	cin >> total;
	cout << "How many subjects do you have: ";
	cin >> subject;
	int i=1;
	while(i<=subject){
		cout << "Enter " << i << " subject marks: ";
		cin >> numbers;
		obtain += numbers;
		i++;
	}
	perage = (obtain * 100) / total;
	cout << "\t\t\t\t\t Total Percentage: " << perage << "%" << endl << endl;
	cout << "Press from 1 to 5 to do it again: " << endl; 
	cout << "Press any button between 6 and 9 to go to the main function!" << endl;
	cout << "Or if you want to close the program press alphabet and then press enter!" << endl;
	cin >> key;
		if(key>=6 && key<=9){
			main();
			}
		else if(key>=1 && key<=5){
				percentage();
			}
}

void power1(){
	system("cls");
	int base, power, ans, key;
	cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\tPOWER Finding" << endl;
	cout << "Enter base number: ";
	cin >> base;
	cout << "Enter power number: ";
	cin >> power;
	ans = pow(base,power);
	cout << "\t\t\t\t\t Your answer: " << ans << endl << endl;
	cout << "Press from 1 to 5 to do it again: " << endl; 
	cout << "Press any button between 6 and 9 to go to the main function!" << endl;
	cout << "Or if you want to close the program press alphabet and then press enter!" << endl;
	cin >> key;
		if(key>=6 && key<=9){
			main();
			}
		else if(key>=1 && key<=5){
				power1();
			}
}

void maximum(){
	system("cls");
	int num1,num2,num3, key;
	cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\tMAXIMUM Finding" << endl;
	cout << "Enter Number 1: ";
	cin >> num1;
	cout << "Enter Number 2: ";
	cin >> num2;
	cout << "Enter Number 3: ";
	cin >> num3;
	if(num1>num2){
		if(num1>num3){
			cout <<" \tAnswer: " << num1 << " is maximum" << endl << endl;
		}}
	else if(num2>num3){
		cout <<" \tAnswer: " << num2 << " is maximum" << endl << endl;
	}
	else{
		cout <<" \tAnswer: " << num3 << " is maximum" << endl << endl;
	}
	cout << "Press from 1 to 5 to do it again: " << endl; 
	cout << "Press any button between 6 and 9 to go to the main function!" << endl;
	cout << "Or if you want to close the program press alphabet and then press enter!" << endl;
	cin >> key;
		if(key>=6 && key<=9){
			main();
			}
		else if(key>=1 && key<=5){
				maximum();
			}
}

void minimum(){
	system("cls");
	int num1,num2,num3, key;
	cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\tMINIMUM Finding" << endl;
	cout << "Enter Number 1: ";
	cin >> num1;
	cout << "Enter Number 2: ";
	cin >> num2;
	cout << "Enter Number 3: ";
	cin >> num3;
	if(num1<num2){
		if(num1<num3){
			cout <<"\tAnswer: " << num1 << " is minimum" << endl << endl;
		}
	}
	else if(num2<num3){
		cout << "\tAnswer: " << num2 << " is minimum" << endl << endl;
	}
	else{
		cout << "\tAnswer: " << num3 << " is minimum" << endl << endl;
	}
		cout << "Press from 1 to 5 to do it again: " << endl; 
	cout << "Press any button between 6 and 9 to go to the main function!" << endl;
	cout << "Or if you want to close the program press alphabet and then press enter!" << endl;
	cin >> key;
		if(key>=6 && key<=9){
			main();
			}
		else if(key>=1 && key<=5){
				minimum();
			}
}

void sqroot1(){
	system("cls");
	double number,sqroot, key;
	cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\tSruare Root Finding" << endl;
	cout << "Enter number of which you want to find squareroot: ";
	cin >> number;
	sqroot = sqrt(number);
	cout << "\t\t\t\t\t Your answer: " << sqroot << endl << endl;
	cout << "Press from 1 to 5 to do it again: " << endl; 
	cout << "Press any button between 6 and 9 to go to the main function!" << endl;
	cout << "Or if you want to close the program press alphabet and then press enter!" << endl;
	cin >> key;
		if(key>=6 && key<=9){
			main();
			}
		else if(key>=1 && key<=5){
				sqroot1();
			}
}

void circle(){
	system("cls");
	int radius, area, circum, diameter, key; 
	const float PI = 3.14;
	char op;
	cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\tCIRCLE Equations" << endl;
	cout << "Enter 'r' for finding radius: " << endl;
	cout << "Enter 'a' for finding area of the radius: " << endl;
	cout << "Enter 'c' for finding circumference of the circle: " << endl; 
	cout << "Enter 'd' for going back: " ;
	cin >> op;
	switch(op){
		case 'r':
		case 'R':
			system("cls");
			cout << "Enter Diameter of the circle: ";
			cin >> diameter;
			radius = diameter/2;
			cout << "\t\t\t\t\t Radius: " << radius << endl << endl;
			break;
			
		case 'a':
		case 'A':
			system("cls");
			cout << "Enter radius of the circle: ";
			cin >> radius;
			area =  PI * radius * radius;
			cout << "\t\t\t\t\t Area of circle: " << area << endl << endl;
			break;
			
		case 'c':
	    case 'C':
	    	system("cls");
			cout << "Enter radius of the circle: ";
			cin >> radius;
			circum = 2 * PI * radius;
			cout << "\t\t\t\t\t Circumference of the circle: " << circum << endl << endl;
			break;
			
		case 'd':
		case 'D':
			main();
			break;
			
		default:
			cout << "You have entered wrong value" << endl << endl;
			cout << "Please try again" << endl << endl;
	}
	cout << "Press from 1 to 5 to do it again: " << endl; 
	cout << "Press any button between 6 and 9 to go to the main function!" << endl;
	cout << "Or if you want to close the program press alphabet and then press enter!" << endl;
	cin >> key;
		if(key>=6 && key<=9){
			main();
			}
		else if(key>=1 && key<=5){
				circle();
			}
}

void triangle(){
	system("cls");
	int height, base, area, key;
	cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\tTRIANGLE Area" << endl;
	cout << "Enter height of the triangle: ";
	cin >> height;
	cout << "Enter base of the triangle: ";
	cin >> base;
	area = (base * height) / 2;
	cout << "\t\t\t\t\t Area of the triangle: " << area << endl << endl;
	cout << "Press from 1 to 5 to do it again: " << endl; 
	cout << "Press any button between 6 and 9 to go to the main function!" << endl;
	cout << "Or if you want to close the program press alphabet and then press enter!" << endl;
	cin >> key;
		if(key>=6 && key<=9){
			main();
			}
		else if(key>=1 && key<=5){
				triangle();
			}
}

void rectangle(){
	system("cls");
	int length, width, area, key;
	cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\tRectangle Area" << endl;
	cout << "Enter length: " ;
	cin >> length;
	cout << "Enter width: ";
	cin >> width;
	area = length * width;
	cout << "\t\t\t\t\t Area of rectangle: " << area << endl << endl;
	cout << "Press from 1 to 5 to do it again: " << endl; 
	cout << "Press any button between 6 and 9 to go to the main function!" << endl;
	cout << "Or if you want to close the program press alphabet and then press enter!" << endl;
	cin >> key;
		if(key>=6 && key<=9){
			main();
			}
		else if(key>=1 && key<=5){
				rectangle();
			}
}

void square(){
	system("cls");
	int length, area, key;
	cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\tSquare Area" << endl;
	cout << "Enter length: ";
	cin >> length;
	area = length * length;
	cout << "\t\t\t\t\t Area of square: " << area << endl << endl;
	cout << "Press from 1 to 5 to do it again: " << endl; 
	cout << "Press any button between 6 and 9 to go to the main function!" << endl;
	cout << "Or if you want to close the program press alphabet and then press enter!" << endl;
	cin >> key;
		if(key>=6 && key<=9){
			main();
			}
		else if(key>=1 && key<=5){
				square();
			}
}

void prllgm(){
	system("cls");
	int base, height, area, key;
	cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\tParallelogram Area" << endl;
	cout << "Enter base: ";
	cin >> base;
	cout << "Enter height: ";
	cin >> height;
	area = base * height;
	cout << "\t\t\t\t\t Area of Parallelogram: " << area << endl << endl;
	cout << "Press from 1 to 5 to do it again: " << endl; 
	cout << "Press any button between 6 and 9 to go to the main function!" << endl;
	cout << "Or if you want to close the program press alphabet and then press enter!" << endl;
	cin >> key;
		if(key>=6 && key<=9){
			main();
			}
		else if(key>=1 && key<=5){
				prllgm();
			}
}

void table(){
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\tParallelogram Area" << endl;
	double num, range,key;
	cout << "Enter a table: ";
	cin >> num;
	cout << "Enter range: ";
	cin >> range;
	for(int i=1; i<=range; i++){
		cout << num << "  x  " << i << "  =  " << num*i << endl;
	}
	cout << "Press from 1 to 5 to do it again: " << endl; 
	cout << "Press any button between 6 and 9 to go to the main function!" << endl;
	cout << "Or if you want to close the program press alphabet and then press enter!" << endl;
	cin >> key;
		if(key>=6 && key<=9){
			main();
			}
		else if(key>=1 && key<=5){
				table();
			}
}

void factorial1(){
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\tFactorial Finding!" << endl;
	int num, factorial=1, key;
	cout << "Enter a number to find it's factorial:  ";
	cin >> num;
	for(int i=1; i<=num; i++){
		factorial*=i;
	}
	cout <<"\t\t\t\t\t " << factorial << endl;
	cout << "Press any button between 1 and 9 to do it again!" << endl;
	cout << "Or if you want to close the program press alphabet!" << endl;
	cin >> key;
		cout << "Press from 1 to 5 to do it again: " << endl; 
		cout << "Press any button between 6 and 9 to go to the main function!" << endl;
		cout << "Or if you want to close the program press alphabet and then press enter!" << endl;
		cin >> key;
		if(key>=6 && key<=9){
			main();
			}
		else if(key>=1 && key<=5){
				factorial1();
			}
}

void logrithm(){
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\tLograthim" << endl;
	double number, logrm, key;
	int op;
	cout << "Enter from below values: " << endl;
	cout << "Enter '1' for log" << endl;
	cout << "Enter '2' for natural log" << endl << endl;
	cout << "Enter '3' for GOING BACK!: " << endl;
	cin >> op;
	switch(op){
		case 1:
			system("cls");
			cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	        cout << "\n\n\n\t\t\t\t\t\t\tLograthim" << endl;
			cout << "Enter number to find it's log: ";
			cin >> number;
			logrm = log10(number);
			cout << "\t\t\t\t\t Log of " <<  number << " is " << logrm  << endl;
			break;
			
		case 2:
			system("cls");
			cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	        cout << "\n\n\n\t\t\t\t\t\t\tLograthim" << endl;
			cout << "Enter number to find it's Natural log: ";
			cin >> number;
			logrm = log(number);
			cout << "\t\t\t\t\t Natural Log of " <<  number << " is " << logrm << endl;
			break;
			
		case 3:
			main();
			break;
			
		default:
			cout << "You have entered wrong value!" << endl;
			cout << "Please try again!" << endl;
	}
	cout << "Press from 1 to 5 to do it again: " << endl; 
	cout << "Press any button between 6 and 9 to go to the main function!" << endl;
	cout << "Or if you want to close the program press alphabet and then press enter!" << endl;
	cin >> key;
		if(key>=6 && key<=9){
			main();
			}
		else if(key>=1 && key<=5){
				logrithm();
			}
}

void trignometry(){
		system("cls");
			cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	        cout << "\n\n\n\t\t\t\t\t\t\tTrignometric Functions" << endl;
	        int op, key;
	cout << "Enter from below values: " << endl;
	cout << "Enter '1' for sin" << endl;
	cout << "Enter '2' for cos" << endl;
	cout << "Enter '3' for tan" << endl;
	cout << "Enter '4' for cot" << endl;
	cout << "Enter '5' for cosecant" << endl;
	cout << "Enter '6' for secant" << endl;
	cout << "Enter '7' for antisin" << endl;
	cout << "Enter '8' for anticos" << endl;
	cout << "Enter '0' for GOING BACK!: " << endl; 
	cin >> op;
	
	switch(op){
		case 1:
		system("cls");
		cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	    cout << "\n\n\n\t\t\t\t\t\t\tTrignometric Functions" << endl;
		double number, sintheta, x;
	    cout << "Enter a number to find sin theta: ";
		cin >> number;
		x = number*3.14159/180;
		sintheta = sin(x);
		cout <<"\t\t\t\t\t " << sintheta << endl;    
	    break;
	    
	    case 2:
		system("cls");
		cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	    cout << "\n\n\n\t\t\t\t\t\t\tTrignometric Functions" << endl;
		double num, costheta, y;
		cout << "Enter a number to find cosine theta: ";
		cin >> num;
		y = num*3.14159/180;
		costheta = cos(y);
		cout <<"\t\t\t\t\t " << costheta << endl;	 
	    break;
	    
	    case 3:
		system("cls");
		cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	    cout << "\n\n\n\t\t\t\t\t\t\tTrignometric Functions" << endl;
	    double num3, tantheta,z;
		cout << "Enter a number to find tangent theta: ";
		cin >> num3;
		z = num3*3.14159/180;
		tantheta = tan(z);
		cout <<"\t\t\t\t\t " << tantheta << endl;	
	    break;
	    
	    case 4:
		system("cls");
		cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	    cout << "\n\n\n\t\t\t\t\t\t\tTrignometric Functions" << endl;
	    double num4, cottheta,v, ans;
		cout << "Enter a number to find cotangent theta: ";
		cin >> num4;
		v = num4*3.14159/180;
		cottheta = tan(v);
		ans = 1.0/cottheta;
		cout <<"\t\t\t\t\t " << ans << endl;
	    break;
	    
	    case 5:
	    system("cls");
		cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	    cout << "\n\n\n\t\t\t\t\t\t\tTrignometric Functions" << endl;
	    double num5, cosec,g, answ;
		cout << "Enter a number to find cosecant theta: ";
		cin >> num5;
		g = num5*3.14159/180;
		cosec = sin(g);
		answ = 1.0/cosec;
		cout <<"\t\t\t\t\t " << answ << endl;
	    break;
	    
	    case 6:
	    system("cls");
		cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	    cout << "\n\n\n\t\t\t\t\t\t\tTrignometric Functions" << endl;
	    double num6, sec,m, answe;
		cout << "Enter a number to find secant theta: ";
		cin >> num5;
		m = num5*3.14159/180;
		sec = sin(m);
		answe = 1.0/sec;
		cout <<"\t\t\t\t\t " << answe << endl;
	    break;
	    
	    case 7:
		system("cls");
		cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	    cout << "\n\n\n\t\t\t\t\t\t\tTrignometric Functions" << endl;
	    double num7, antisin,f;
		cout << "Enter a number to find anti of sin: ";
		cin >> num7;
		f = num7*3.14159/180;
		antisin = asin(f);
		cout <<"\t\t\t\t\t " << antisin << endl;
	    break;
	    
	    case 8:
		system("cls");
		cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	    cout << "\n\n\n\t\t\t\t\t\t\tTrignometric Functions" << endl;
		double num8, anticos,d;
		cout << "Enter a number anti of cos: ";
		cin >> num8;
		d = num8*3.14159/180;
		anticos = acos(d);
		cout <<"\t\t\t\t\t " << anticos << endl; 
	    break;
	    
	    case 0:
	    	main();
	    	break;
	    
	    default:
			cout << "You have entered wrong value!" << endl;
			cout << "Please try again!" << endl;
	}
			cout << "Press from 1 to 5 to do it again: " << endl; 
			cout << "Press any button between 6 and 9 to go the main function!" << endl;
			cout << "Or if you want to close the program press alphabet and then press enter!" << endl;
			cin >> key;
			if(key>=6 && key<=9){
			main();
			}
			else if(key>=1 && key<=5){
				trignometry();
			}
}

void arrays(){
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\tArrays Storing" << endl;
	int n;
	cout << "Enter numbers range to save in one array: ";
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cout << "Enter Number to save in index " << i << ": ";
		cin >> arr[i];
	}
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\tYour Array Table" << endl << endl << endl;
	cout << "\t\t*********************************************************************************" << endl;
	for(int i=0; i<n; i++){
		cout << "\t\t*\t\t*\t\t"<<  i << " Index number: " << arr[i] << "\t\t*\t\t*" << endl;
	}
	cout << "\t\t*********************************************************************************" << endl;
}

int main(){
	system("cls");
	int key;
	char op;
	cout << "\n\n\n\t\t\t\t\t\t\tCALCULATOR" << endl;
	cout << "\n\n\t\t\tEnter '+' for Addition                 Enter '-' for subtraction" << endl;
	cout << "\t\t\tEnter '*' for Multiplication           Enter '/' for Division" << endl;
	cout << "\t\t\tEnter '%' for Remainder                Enter 'P' for Percentage" << endl << endl;
	cout << "\t\t\tEnter '^' for Power                    Enter '<' for Finding Minimum" << endl;
	cout << "\t\t\tEnter 'S' for SquareRoot               Enter '>' for Finding Maximum" << endl;
	cout << "\t\t\tEnter 'C' for Circle Equations         Enter 'T' for Triangle Equations" << endl << endl;
	cout << "\t\t\tEnter 'R' for Rectangle Equations      Enter 'G' for Parallelogram Equations" << endl;
	cout << "\t\t\tEnter 'L' for Table making             Enter '!' for Factorial finding" << endl;
	cout << "\t\t\tEnter 'Z' for Trignometric functions   Enter 'N' for Logarithm" << endl << endl;
	cout << "\t\t\t\t   Enter 'A' for storing your data in array" << endl;
	cin >> op;
	switch(op){
		case '+':
			addition();
			break;
			
		case '-':
			subtraction();
			break;
			
		case '*':
			product1();
			break;
			
		case '/':
			division();
			break;
			
		case '%':
			remainder();
			break;
			
		case 'P':
		case 'p':
			percentage();
			break;
			
		case 'C':
		case 'c':
			circle();
			break;
			
		case '^':
			power1();
			break;
			
	    case '>':
			maximum();
			break;
			
		case '<':
			minimum();
			break;
			
		case 'S':
		case 's':
			sqroot1();
			break;
			
		case 'T':
		case 't':
			triangle();
			break;
			
		case 'G':
		case 'g':
			prllgm();
			break;
			
		case 'R':
		case 'r':
			rectangle();
			break;
			
		case 'L':
		case 'l':
			table();
			break;
			
		case '!':
			factorial1();
			break;
			
		case 'n':
		case 'N':
			logrithm();
			break;
			
		case 'z':
		case 'Z':
			trignometry();
			break;
			
		case 'a':
		case 'A':
			arrays();
			break;
			
		default:
			cout << "\nYou have entered wrong Number!" << endl;
			cout << "Please try again!" << endl;
			cout << "Press from 1 to 5 to do it again: " << endl; 
			cout << "Press any button between 6 and 9 to go the main function!" << endl;
			cout << "Or if you want to close the program press alphabet! and then press enter" << endl;
			cin >> key;
			if(key>=6 && key<=9){
			main();
			}
}
	return 0;
}
