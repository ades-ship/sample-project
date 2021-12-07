#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c ,var1,var2;
    cout<<"\nenter the values of coefficient...";
    cin>>a>>b>>c;
    var1=b*b-4*a*c;
    if(var1>=0)
    {
        var2=(-b+ sqrt(var1))/(2*a);
        var1= (-b - sqrt(var1))/(2*a);
        cout<<"real roots are :"<<var1<<","<<var2;
    }
    else
    cout<<"no real roots or imaginary \n";
    return 0;
}
