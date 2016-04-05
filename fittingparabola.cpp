#include<iostream>
using namespace std;
int main(void)
{

    double y[5],x[5],sum1=0,sum2=0,sum3=0,sum4=0;
    for(int i=0;i<5;++i)
        cin>>x[i];
    for(int i=0;i<5;++i)
        cin>>y[i];
    for(int i=0;i<5;++i)
     {

            sum1+=x[i];
            sum2+=y[i];
            sum3+= x[i]*y[i];
            sum4+= x[i]*y[i];
    }

double a = (sum3+sum1-sum2*sum4)/ (sum1*sum1- sum2*sum4);
double b =  (5*sum3-sum1*sum2)/(5*sum4-sum1*sum1);
cout<<a<<endl<<b;
}
