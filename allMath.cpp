#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int mathType = 0;
    int firstNum = 0;
    int secondNum = 0;

   cout << "What type of math would you like to do?" << endl;
   cin >> mathType; 


    cout << "What is the first number?" << endl;
    cin >> firstNum;
	
    cout << "What is the second number?" << endl;
    cin >> secondNum;

    if (mathType == 0)
    {
        cout << "Your answer is " << firstNum + secondNum << "."<< endl;        
    }
    
    if (mathType == 1)
    {
        cout << "Your answer is " << firstNum - secondNum << "."<< endl;
    }
   
    if (mathType == 2)
    {
         cout << "Your answer is " << firstNum * secondNum << "."<< endl;
    }
   
    if (mathType == 3)
    {
         cout << "Your answer is " << firstNum / secondNum << "."<< endl;
    }

    if (mathType > 3)
    {
        cout << "Invalid type. Please pick a number between 0 and 3." << endl; 
    }
	system("pause");
}

