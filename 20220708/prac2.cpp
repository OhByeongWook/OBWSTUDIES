#include <iostream>

using namespace std;

int main() {
    int n, Max = 0;
    double result;
    double arr[1000];
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> arr[i];       
    if(arr[i] > Max){
                Max = arr[i];
            }
    }
    for (int i = 0; i < n; i++)
    {
        result +=(double)arr[i]/Max*100;
    }
    cout << result/n << endl;


}

  
