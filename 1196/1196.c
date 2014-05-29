    #include<stdio.h>
     
    #define sf scanf
    #define pf printf
     
    int arr[15050], N;
     
    int call(int n)
    {
    int first = 0, last = N-1, mid;
    while(first<last)
    {
    mid = (first+last)/2;
    if(arr[mid] < n)
    first = mid+1;
    else
    last = mid;
    }
    if(arr[first] == n) return 1;
    return 0;
    }
     
    int main()
    {
    int m, key, i, kount = 0;
    sf("%d", &N);
    for(i=0; i<N; i++) sf("%d", &arr[i]);
    sf("%d", &m);
    while(m--)
    {
    sf("%d", &key);
    kount += call(key);
    }
    pf("%d\n", kount);
    return 0;
    }
     
