//problem 1
#include<iostream>
using namespace std;

void bubblesort(int arr[],int sizeofarr)
{
                    for (int i=0;i<sizeofarr-1;i++)
                    {
                        for(int j=i+1;j<sizeofarr;j++)
                        {
                        if(arr[j]>arr[i])
                        {
                                int temp=arr[j];
                                arr[j]=arr[i];
                                arr[i]=temp;
                        }
                        }

                    }
                    cout<<"The sorted array in descending order is "<<endl;
                    for (int i=0;i<sizeofarr;i++)
                        cout<<arr[i];
}

int main ()
{

                    int sizeofarr;
                    cout<<"Enter size of array "<<endl;
                    cin>>sizeofarr;
                    cout<<"Enter an integer array "<<endl;
                    int arr[sizeofarr];
                    for (int i=0;i<sizeofarr;i++)
                        cin>>arr[i];
                    bubblesort(arr,sizeofarr);

                        return 0;





}
