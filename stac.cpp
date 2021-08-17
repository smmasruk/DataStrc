#include <iostream>
using namespace std;
const int n = 100;
int arr[n];
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
   if (con <= -1)
   {
      cout << "Empty space" << endl;
   }
   else
   {
      cout << "The popped element is " << arr[con] << endl;
      con--;
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
      cout << arr[con] << endl;
   }
}
void display()
{
   if (con >= 0)
   {
      cout << "elements are:";
      for (int i = con; i >= 0; i--)
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
   top();
   pop();
   top();
   display();
   top();

   return 0;
}
