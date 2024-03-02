//problem 2
#include<iostream>
using namespace std ;


                    void insertionsort(int arr[],int sizeofarr)
                    {


                    for (int i=1;i<sizeofarr;i++)
                    {
                        for(int j=i-1;j>=0;j--)
                        {
                        if(arr[j]>arr[j+1])
                        {
                                int temp=arr[j];
                                arr[j]=arr[j+1];
                                arr[j+1]=temp;
                        }
                        }

                    }
                    cout<<"The insertion sorted array in ascending order is "<<endl;
                    for (int i=0;i<sizeofarr;i++)
                        cout<<arr[i];

                        }



int main ()
{
                    int sizeofarr1;
                    cout<<"Enter size of array "<<endl;
                    cin>>sizeofarr1;
                    cout<<"Enter an integer array "<<endl;
                    int arr1[sizeofarr1];
                    for (int i=0;i<sizeofarr1;i++)
                        cin>>arr1[i];
                    insertionsort(arr1, sizeofarr1);


}




