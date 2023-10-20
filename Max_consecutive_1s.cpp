#include <iostream>
using namespace std;

int func(int arr[100],int n)
{
    int res=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=1)
        {
          cnt=0;  
        }
        else
        {
            cnt++;
            res = max(res,cnt); 
        }
    }
    
        return res;
}

int main()
{
int n;
	cout<<"Enter number of elements : ";
    cin>>n;
int arr[n];
    cout<<"Enter elements in array : ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Max consecutive 1s = "<<func(arr,n);
return 0;
}
