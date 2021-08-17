#include <iostream>
using namespace std;
const int n = 100;
int arr[n];
int con2 = 0;
int con = -1; //Con is the control variable.
void push(int x)
{
   //int n= sizeof arr/sizeof arr[0];
   if (con >= n - 1)
   {
      cout << "No space left." << endl;
   }
   else
   {
      con++;
      arr[con] = x;
   }
}
void pop()
{
   if (con <= -1 || con2 > con)
   {
      cout << "Empty space" << endl;
   }
   else
   {
      cout << "The popped element is " << arr[con2] << endl;
      con2++;
   }
}
void top()
{
   if (con == -1)
   {
      cout << "Empty space" << endl;
   }
   else
   {
      cout << arr[con2] << endl;
   }
}
void display()
{
   if (con >= 0)
   {
      cout << "elements are:";
      for (int i = con2; i <= con; i++)
         cout << arr[i] << " ";
      cout << endl;
   }
   else
      cout << "Stack is empty";
}
int main()
{
   push(4);
   push(5);
   push(3);
   display();
   top();
   pop();
   top();
   push(2);
   top();
   display();
   return 0;
}
