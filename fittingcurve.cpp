#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nc,i;
    cout<<"enter number of co-ordinate of line"<<endl;
    cin>>nc;
    float x[nc],y[nc];
    float sumx=0,sumy=0,sumxy=0,srtx=0;
    cout<<"enter x co-ordinate for state line fiting"<<endl;
    for(i=0;i<nc;i++){
        cin>>x[i];
    }
    cout<<"enter y co-ordinate for state line fiting"<<endl;
     for(i=0;i<nc;i++){
        cin>>y[i];
    }
    cout<<"x"<<"--------"<<"y"<<endl;
     for(i=0;i<nc;i++){
      cout<<x[i]<<"       "<<y[i]<<endl;
    }

    for(i=0;i<nc;i++){
        sumx=sumx+x[i];
        srtx=srtx+x[i]*x[i];
        sumxy=sumxy+x[i]*y[i];
        sumy=sumy+y[i];

    }

    cout<<"value of sum of x sum of y sum of xy and sqrt of x"<<endl;
    cout<<sumx<<endl;
    cout<<srtx<<endl;
    cout<<sumxy<<endl;
    cout<<sumy<<endl;

    float uperdiv=sumxy*nc-((sumx*sumy));
    float lowerdiv=srtx*nc-((sumx*sumx));
    float b,a;
    b=uperdiv/lowerdiv;
    a=(sumy-b*sumx)/nc;


    cout<<"value of a : "<<a<<endl;
    cout<<"value of b : "<<b<<endl;

    return 0;
}
