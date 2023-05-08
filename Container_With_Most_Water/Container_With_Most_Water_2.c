#include <stdio.h>

int maxArea(int* height, int heightSize){
    int light = 0;
    int right = heightSize-1;
    int S = 0;
    int Smax = 0;
    while (light<right)
    {
        if(height[light] > height[right])
        {
            S = height[right] * (right-light);
            right--;
        }
        else
        {
            S = height[light]*(right-light);
            light++;
        }
        if(S>Smax){
            Smax = S;
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