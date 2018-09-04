#include <iostream.h>
#include <conio.h>

void input();
void sum();
void sub();
void div();
void mul();

void main(){
clrscr();
char y_n;
int choice;

do{
    clrscr();
    cout<<"\nWhat do you want to calculate?\n";

    cout<<"\nPress 1 for Summation";
    cout<<"\nPress 2 for Subtraction";
    cout<<"\nPress 3 for Division";
    cout<<"\nPress 4 for Multiplication\n";

    cout<<"\nEnter your choice: ";
    cin>>choice;

    if (choice==1)
	sum();
    else if (choice==2)
	sub();
    else if (choice==3)
	div();
    else if (choice==4)
	mul();
    else
	cout<<"\nPlease make a valid choice";

    cout<<"\n\nDo you want to calculate again? Y/N : ";
    cin>>y_n;
}while (y_n=='Y');

getch();
}
void input(){
    cout<<"\nEnter a number: ";
}
void sum(){
    float a, b;
    input();
    cin>>a;
    input();
    cin>>b;
    cout<<"\nSum of the numbers is: "<<a+b;

}

void sub(){
    float a, b;
    input();
    cin>>a;
    input();
    cin>>b;

    cout<<"\nSubtraction of the numbers is: "<<a-b;

}
void div(){
    float a, b;
    input();
    cin>>a;
    input();
    cin>>b;

    cout<<"\nQuotient of the numbers is: "<<a/b;

}
void mul(){
    float a, b;
    input();
    cin>>a;
    input();
    cin>>b;

    cout<<"\nProduct of the numbers is: "<<a*b;

}