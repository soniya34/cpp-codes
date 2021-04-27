#include<iostream>
#include<math.h>
using namespace std;

int main()

{ cout<<"enter your age to see that can u vote?"<<endl;
     int age;
cin>>age;
if(age>=18)
{
    cout<<"you are eligible to vote";
}
else
{
    cout<<"you are not eligible to vote";
}
return 0;
}
