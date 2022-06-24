#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    float number;
    int sum = 0;
    cout << "Enter 10 numbers:" << endl;
    
    while (i<=10){
        cin>> number;
        sum = sum + number;
        i++;

    }

    if(sum==0)
    {
        cout<< "Division By Zero Error" <<endl;
    }
    else
    {
    double average;
    average =(sum)/10;
    cout << "The sum is:" <<sum<<endl;
    cout << "average is:" <<average<<endl;

    }

    return 0;
}
