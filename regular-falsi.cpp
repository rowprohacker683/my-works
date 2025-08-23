#include <iostream>

using namespace std;
#define EPSILON 0.0001
double func(double x){
    return x*x*x - 4*x - 9;
}
void regular(double a,double b){
    int count=0;
   if(func(a) * func(b) >= 0){
       cout<<"the numbers are not right this algorithom will take itself"<<endl;
       a++;
       b++;
   } 
   double c;
   while((b-a) >= EPSILON){
       c =( a * func(b) - b * func(a)) / (func(b) - func(a));
       if(func(c) == 0.0){
           break;
       }else if(func(c) * func(a) <= 0){
           b = c;
       }else{
           a = c;
       }
       count++;
       
       cout<<"the value of root after "<<count<< " input : "<<c<<endl;
       
   }
   cout<<"the value of real root : "<<c;
}
void Identity(){
    cout<<"Name : Md Rakib Hossain"<<endl;
    cout<<"ID : 11230321438"<<endl;
}
int main() {
    Identity();
    double a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    regular(a,b);

    return 0;
}