#include <bits/stdc++.h>
using namespace std;

vector<int> AllDivisors(int n) {
    vector<int> Divisors;
    int sq = sqrt(n); 

    for (int i = 1; i <= sq; i++) {
        if (n % i == 0) {
            Divisors.push_back(i);
            if (i != n / i) { 
                Divisors.push_back(n / i);
            }
        }
    }

    sort(Divisors.begin(), Divisors.end()); 
    return Divisors;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> divisors = AllDivisors(n);

    cout << "Divisors of " << n << " are: ";
  for (int i = 0; i < divisors.size(); i++) {  
        cout << divisors[i] << " ";
    }
    cout << endl;

    return 0;
}

