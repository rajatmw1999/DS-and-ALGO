#include <iostream>

using namespace std;

int a[] = {10, 2, 4, 1, 20, 7};

void initialize(){
a[0]=10,a[1]=2,a[2]=4,a[3]=1,a[4]=20,a[5]=7;
}

void insertion(){
    int n=6;
    for(int i=1; i<n; ++i){
        int j=i-1, item=a[i];
        while(j>=0 && item<a[j]){
                a[j+1] = a[j];
                --j;
        }
        a[j+1]=item;
    }
}

void selection(){
    int n=6, small;
    for(int i=0; i<n-1; ++i){
            small=a[i];
    int j=i+1, min_ind=i;
        for(; j<n; ++j)
        {
            if(a[j]<small)
                {
                    small=a[j];
                    min_ind = j;
                }
        }
    a[min_ind]=a[i];
    a[i]=small;
    }
}

void bubble(){
    int i=0;
    int n=6;
    i = n;
    while(i>0){
        int j=1;
        while(j<i){
        if(a[j-1]>a[j]){
            int temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
        }
        ++j;
        }
        --i;
    }
}

int main()
{
    bubble();
    for(int i=0; i<6; ++i)
        cout<<a[i]<<endl;
    return 0;
}
