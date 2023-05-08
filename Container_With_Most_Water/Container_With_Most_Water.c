#include <stdio.h>

int Min(int x , int y){
    if(x>y)
    return y;
    else
    return x;
}

int maxArea(int* height, int heightSize){
    int i=0;
    int Smax = 0;
    for(i=0 ; i<heightSize ; ++i){
        int j=0;
        for(j=i+1 ; j<heightSize ; ++j){
            int S = (Min(height[i] , height[j]))*(j-i);
            if(S>Smax){
                Smax = S;
            }
        }
    }
    return Smax;
}

int main()
{
    int arr[9] = {1,8,6,2,5,4,8,3,7};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int max = maxArea(arr,sz);
    printf("%d",max);
    return 0;
}