#include<iostream>
#include<stdbool.h>
#define MAX 5
using namespace std;
int stack[MAX],TOP=-1;
void PUSH()
{
    int n;
    if(TOP==(MAX-1))
        cout<<"\nStack OVERFLOW. [Stack-Full]\n\n";
    else
    {
        TOP++;
        cout<<"\nInput the integer element to PUSH: ";
        cin>>n;
        stack[TOP]=n;
        cout<<"\n";
    }
}
void POP()
{
    if(TOP==-1)
        cout<<"\nStack UNDERFLOW. [NO-Element]\n\n";
    else
    {
        TOP--;
        cout<<"\nSuccessfully POPPED the TOP element.\n\n";
    }
}
void DISPLAY()
{
    int i;
    if(TOP==-1)
        cout<<"\nStack is EMPTY.\n\n";
    else
    {
        for(i=0;i<=TOP;i++)
        {
        cout<<"\nElement " <<i+1<< " Of STACK is: "<<stack[i];
        }
        cout<<"\n\n";
    }
}
int main()
{
    int a;
    while(true)
    {
        cout<<"Select Your Choice For STACK-OPERATION:\n1)PUSH\n2)POP\n3)Display\n4)Exit.\n\n[-]>>> ";
        cin>>a;
        switch(a)
        {
            default:cout<<"Invalid Choice Please Re-Select.";
            case(1):PUSH();break;
            case(2):POP();break;
            case(3):DISPLAY();break;
            case(4):return false;
        }
    }   return 0;
}
