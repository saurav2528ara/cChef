#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter loop: ";
    cin>>n;
    for (int i=0; i<n; i++)
    {
        int number,remainder,sum=0;
        cout<<"Enter a positive number: "<<endl;
        cin>>number;
        while (number > 0)
        {
             remainder = number % 10;
             sum += remainder;
           number /= 10;
        }
        cout<<"Sum of digits is "<<sum<<endl;
    }
    return 0;
}