#include <iostream>
using namespace std;

int main(){
    int hour=0, minute=0, duration=0;
    int hour2=0, minute2=0;
    float cost=0;
    cout<<"Input the hour when the call started = ";
    cin>>hour;
    cout<<"Input the minute when the call started = ";
    cin>>minute;
    cout<<"Input the duration of the call = ";
    cin>>duration;

    int start = ((hour*60)+minute);
    int end = start + duration;

    if (start < (8*60)){
        if (end < (8*60))
            cost = duration*3.75;
        
        else
            if (end<=(18*60))
            {
                cost = cost + ((8*60)-start)*3.75;
                cost = cost + (end - (8*60))*6.0;
            }
            else
            {
                cost =cost + ((8*60)-start)*3.75;
                cost =cost + (((18-8)*60)*6.0);
                cost =cost + (end - (18*60))*3.75;
            
    }}
    else if (start >= (8*60) && (start <= (18*60))){
        if (end <= (18*60))
            cost =cost + duration*6.0;
        
        else{
            cost =cost + ((18*60)-start)*6.0;
            cost =cost + (end-(18*60))*3.75;
        }
    }
    else
        cost =cost + duration*3.75;
    cout<<"The Total Cost = "<<cost;
    return 0;
}