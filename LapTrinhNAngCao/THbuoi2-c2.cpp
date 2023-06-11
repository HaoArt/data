#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int main() {
    float a[MAX_SIZE];
    int n;
    cout << "nhap mang: ";
    cin >> n;
    cout << "cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
   
    int count[MAX_SIZE] = {0};
    for (int i = 0; i < n; i++) {
        count[i] = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count[i]++;
            }
        }
    }

    int found = false;
    cout << "Phan tu xuat hien 2 lan: ";
    for (int i = 0; i < n; i++) {
        if (count[i] == 2) {
            cout << a[i] << " ";
            found = true;
        }
    }
    if (!found) {
        cout << "Khong co";
    }

    return 0;
}
