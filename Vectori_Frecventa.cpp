#include <iostream>

using namespace std;

int main()
{
    int F[82] = {0};  /// elementul maxim (81 pt pb asta) + 1 -> dimensiunea vectorului de frecv
    int n,x;
    long long int sumg = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        int sum = 0;
        while (x > 0) {     
            sum =sum + x %10;
            x = x / 10;
        }
        F[sum]++; ///la citire se calculeaza frecventele
    }
    for (int i = 0; i <= 81; i++) {  ///parcurgem toate valorile posibile care pot aparea in datele de intrare
        sumg = sumg + 1ll*(F[i] - 1) *F[i] / 2;
    }
    cout << sumg;
    return 0;
}
