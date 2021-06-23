// Given two integer arrays nums1 and nums2, 
//return an array of their intersection. Each element in the
// result must appear as many times as it shows in both arrays and 
//you may return the result in any order.

#include <bits/stdc++.h>
 using namespace std;
 

void intersection(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] > b[j]) {
            j++;
        }
        else if (b[j] > a[i]) {
            i++;
        }
        else {
             
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
}
 
int main()
{
    int a[] = {4,9,5};
    int b[] = { 9,4,9,8,4 };
 
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
   
    sort(a, a + n);
    sort(b, b + m);
   
    intersection(a, b, n, m);
}
