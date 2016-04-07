

#include<iostream>
using namespace std;
int main()
{
    int i,n,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0;
    double s1,s2,s3,d;
    cout<<"Enter the no set to be fit :"<<endl;
    cin>>n;
    int x[n],y[n];
    cout<<"enter the value of x:"<<flush;
    for(i=0;i<n;i++)
    {cin>>x[i];
     cout<<" "<<endl;
    }
    cout<<"Enter the value of y"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>y[i];
       cout<<" "<<endl;
    }

    for(i=0;i<n;i++)
    {
        a1=a1+x[i];
        a2=a2+x[i]*x[i];
        a3=a3+x[i]*x[i]*x[i];
        a4=a4+x[i]*x[i]*x[i]*x[i];
        a5=a5+y[i];
        a6=a6+x[i]*y[i];
        a7=a7+x[i]*x[i]*y[i];

    }
    d=(a2*(a2*a2-a1*a3))-(a1*(a3*a2-a1*a4))+(n*(a3*a3-a2*a4));
    s1=((a5*(a2*a2-a1*a3))-(a1*(a6*a2-a1*a7))+(n*(a6*a3-a2*a7)))/d;
    s2=((a2*(a6*a2-a7*a1))-(a5*(a2*a3-a4*a1))+(n*(a3*a7-a4*a6)))/d;
    s3=((a2*(a2*a7-a3*a6))-(a1*(a3*a7-a4*a6))+(a5*(a3*a3-a4*a2)))/d;
    cout<<"The value of s1,s2and s3 are="<<s1<<" and "<<s2<<"and"<<s3<<endl;
    return 0;
    }

