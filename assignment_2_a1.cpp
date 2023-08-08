#include<iostream>
using namespace std;
int main(){
    int amt;
    int x1,x2,x5,x10,x20,x50,x100,x200,x500,x2000;
    cout<<"Enter amount of money: ";
    cin>>amt;
    x1=x2=x5=x10=x20=x50=x100=x200=x500=x2000=0;
    switch(amt>=2000)
    {
    case 1:
    x2000 = amt/2000;
    amt -= x2000 * 2000;
    cout<<"x2000: "<<x2000<<endl;
    break;
    }
    switch(amt>=500)
    {
    case 1:
    x500 = amt/500;
    amt -= x500 * 500;
    cout<<"x500: "<<x500<<endl;
    break;
    }
    switch(amt>=200)
    {
    case 1:
    x200 = amt/200;
    amt -= x200 * 200;
    cout<<"x200: "<<x200<<endl;
    break;
    }
    switch(amt>=100)
    {
    case 1:
    x100 = amt/100;
    amt -= x100 * 100;
    cout<<"x100: "<<x100<<endl;
    break;
    }
    switch(amt>=50)
    {
    case 1:
    x50 = amt/50;
    amt -= x50 * 50;
    cout<<"x50: "<<x50<<endl;
    break;
    }
    switch(amt>=20)
    {
    case 1:
    x20 = amt/20;
    amt -= x20 * 20;
    cout<<"x20: "<<x20<<endl;
    break;
    }
    switch(amt>=10)
    {
    case 1:
    x10 = amt/10;
    amt -= x10 * 10;
    cout<<"x10: "<<x10<<endl;
    break;
    }
    switch(amt>=5)
    {
    case 1:
    x5 = amt/5;
    amt -= x5 * 5;
    cout<<"x5: "<<x5<<endl;
    break;
    }
    switch(amt>=2)
    {
    case 1:
    x2 = amt/2;
    amt -= x2 * 2;
    cout<<"x2: "<<x2<<endl;
    break;
    }
    switch(amt>=1)
    {
    case 1:
    x1 = amt/1;
    amt -= x1 * 1;
    cout<<"x1: "<<x1<<endl;
    break;
    }
}