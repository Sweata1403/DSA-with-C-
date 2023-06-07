#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int n)
{
    int i;
    int max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}
int smallest(int arr[], int n)
{
    int i;
    int min = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];

    return min;
}
int find_max(int arr[], int n, int max){
    int x=0;
    for(int i=0; i<n; i++){
            if(max==arr[i]){
                arr[i]=0;
                max-=1;
                x=2;
            }if(x!=2){
                x=1;
            }
        }
    if(x==1){
        max-=1;
    }
    return max;
}
int main(){
    int n;
    cin >> n;
    int hi[n];
    for(int i=0; i<n; i++){
        cin >> hi[i];
    }
    int max = largest(hi, n);
    int min=smallest(hi, n);
    int arrow_count=0;
    do{
        max = find_max(hi, n, max);
        arrow_count+=1;
    }while(max>=min-1);
    cout << arrow_count;
}