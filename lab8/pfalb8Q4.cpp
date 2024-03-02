
#include<iostream>
using namespace std;

float w,x,y,z;

float maxof2(float a,float b);
float maxof3(float a,float b);
float maxof4(float a,float b);

float maxof2(float a,float b)
{
    int m;
    if (a>=b)
        m=a;
    else
        m=b;
    return maxof3(m,y);


}
float maxof3(float a,float b)
{
    int m;
    if (a>=b)
        m=a;
    else
        m=b;
    return maxof4(m,z);

}
float maxof4(float a,float b)
{
    int m;
    if (a>=b)
        return a;
    else return b;
}

int main ()
{
cout<<"Enter any four numbers "<<endl;
cin>>w>>x>>y>>z;
cout<<"Maximum of given numbers is "<<maxof2(w,x);

return 0;
}

