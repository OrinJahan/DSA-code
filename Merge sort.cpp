#include<iostream>
using namespace std;
void mergeArray(int ara[],int left,int mid,int right)
{
    int n1=mid-left+1;
    int n2=right-mid;
    int ara1[n1],ara2[n2];
    for(int i=0;i<n1;i++)
    {
        ara1[i]=ara1[left+i];
    }
    for(int i=0;i<n2;i++)
    {
        ara2[i]=ara[n1+i];
    }
    int i=0, j=0, k=left;
    while(i<n1&&j<n2)
    {
        if(ara1[i]<ara2[j])
        {
            ara[k]=ara1[i];
            i++;
        }
        else{
            ara[k]=ara2[j];
            i++;
        }
            k++;
        }
        while(i<n1)
        {
            ara[k]=ara1[i];
            i++;
            k++;
        }
        while(i<n2)
        {
            ara[k]=ara2[j];
            j++;
            k++;
        }
    }
}
void divideArray(int ara[],int left,int right)
{
    if(left>=right)
    {
        return;
    }
    int mid=left+(right-left)/2;
    dividedArray(ara,left,mid);
    dividedArray(ara,mid+1,right);
}
int main()
{
    int ara[]={2,1,20,40,30,15,7,9};
    int len=8;
    divideArray(ara,0,len-1);
    cout<<"Sorted Array is: "<<endl;
    for(int i=0; i<len; i++)
    {
        cout<<ara[i]<<" ";
    }

}
