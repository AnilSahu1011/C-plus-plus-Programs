
#include <iostream>

using namespace std;


int main()
{
    int arr[5];
    int arr2[5];
    
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<5;i++)
    {
        int pd=1;
        for(int j=0;j<5;j++)
        {
            if(i != j)
            {
                pd = pd*arr[j];
            }
        }
        arr2[i]=pd;
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr2[i]<<" ";
    }
    return 0;
}
