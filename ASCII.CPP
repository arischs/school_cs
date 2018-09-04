#include <iostream.h>
#include <conio.h>

void main(){
int ascii;
char input='Y', chr;

while(input=='Y'){
clrscr();

    cout<<"\nEnter a character: ";
    cin>>chr;

    ascii=chr;

    cout<<"\nASCII value of "<<chr<<" is: "<<ascii;

    cout<<"\nDo you want to continue? (Y/N): ";
    cin>>input;

    }
getch();
}