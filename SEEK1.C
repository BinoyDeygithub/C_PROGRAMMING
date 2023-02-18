#include<bits/stdc++.h>
using namespace std;
int size=8;
void fcfs (int arr[] , int head)
{
int seek_count =0;
int distance,cur_track;
for (int i=0;i<size; i++)
{
cur_track=arr[i];
distance=abs(cur_track -head);
seek_count +=distance;
head=cur_track:
}
cout <<" total number of seek operations ="
<<seek_count << end1;
cout<< "seek sequence is"<<end1;
for (int i=0;i<size;i++)
{
cout <<arr[i]<<end1;
}
int main()
int arr [size] ={176,79,34,60,92,11,41,114};
int head 50;
fcfs(arr , head);
return 0;
}