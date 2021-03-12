// prepareed by @Mahin 
 #include<iostream>
using namespace std;
int main()
{
    int n,arr[1005];
    int mx=-1000000,mi=1000000,posmx,posmn;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(arr[i] > mx)
        {
            mx=arr[i];
            posmx=i;
        }
        if(arr[i] < mi)
        {
            mi=arr[i];
            posmn=i;
        }
    }
    swap(arr[posmx],arr[posmn]);
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
