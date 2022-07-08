#include <iostream>

using namespace std;

int main() {
    int n;
    int min = 1000000;
    int max = -1000000;

    cin >> n;
    int array[1000000];

    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
        if( max < array[i]) max = array[i];
        if( min > array[i]) min = array[i];
    }
    cout << min << ' ' << max << endl;

    return 0;


}

  
