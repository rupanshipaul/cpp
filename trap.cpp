#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int N,i;
    float a[25],b[25],area,sum;
    cout<<"Give the size of the array"<<endl;
    cin>>N;
    for(i=1;i<=1;++i)
    {
        cout<<"give "<<i<<"th element for x coordinate data table :"<<endl;
        cin>>a[i];
    }
     for(i=1;i<=1;++i)
    {
        cout<<"give "<<i<<"th element for y coordinate data table :"<<endl;
        cin>>b[i];
    }
    cout<<"the table for x and y coordinates is :"<<endl;
     for(i=1;i<=1;++i)
     {
        cout<<a[i]<<"\t";
     }
     cout<<endl;
      for(i=1;i<=1;++i)
      {
        cout<<b[i]<<"\t";
      }
      sum=0;
       for(i=1;i<=1;++i)
       {
        area=((a[i+1]-a[i])*(b[i+1]-b[i]))/2;
        sum=sum+area;
        cout<<endl;
        cout<<"solution = "<<sum<<endl;
       }
       

    
    


}



