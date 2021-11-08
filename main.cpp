#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout << "Enter 10 numbers:" << endl;
    float a,b,c,d,e,f,g,h,i,j,sum;
    cin >>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
    sum=a+b+c+d+e+f+g+h+i+j;
    if(sum==0)
    {
        cout<< "zero error:" <<endl;
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
