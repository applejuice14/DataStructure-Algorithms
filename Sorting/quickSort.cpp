#include <iostream>
using namespace std;

int partition(int ar[], int lo, int hi) {
    int pivot = ar[hi];
    int i = lo - 1;
    for(int j = lo; j < hi; j++) {
        if(ar[j] <= pivot) {
            i++;
            swap(ar[i],ar[j]);
        }
    }
    swap(ar[i+1],ar[hi]);
    return i+1;
}
void quick_sort(int ar[], int lo, int hi) {
    if(lo < hi) {
        int pi = partition(ar, lo, hi);
        quick_sort(ar, lo, pi-1);
        quick_sort(ar, pi+1, hi);
    }
}
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    quick_sort(ar, 0, n-1);
    for(int i = 0; i <n; i++)
    cout << ar[i] << " ";
    return 0;
}