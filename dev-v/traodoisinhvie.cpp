#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string HoTen;
	string TruongHoc;
	float Diem;
};
void InDanhSachGioi(SinhVien* sv, int n) {
    for(int i = 0; i < n; i++) {
        if(sv[i].Diem >= 8.0) {
            cout <<sv[i].HoTen << ", " <<sv[i].TruongHoc << ", " <<sv[i].Diem <<endl;
        }
    }
}

int main() {
    int n;
    cin >> n;
    SinhVien* sv = new SinhVien[n];
    for(int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, sv[i].HoTen);
        getline(cin, sv[i].TruongHoc);
        cin >> sv[i].Diem;
    }
    InDanhSachGioi(sv, n);
}
