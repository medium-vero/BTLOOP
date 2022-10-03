
#include <iostream>
#include <string>
using namespace std;
class SinhVien{
private:
    string HoTen;
    float DiemVan,DiemToan;
    string NgaySinh,GioiTinh;
public:
    SinhVien(string hoTen, string ngaySinh, string gioiTinh, float diemVan, float diemToan);
    ~SinhVien();
    float DiemTrungBinh();
    friend ostream& operator<<(ostream&COUT, SinhVien& s1);
    friend istream& operator>>(istream&CIN, SinhVien& s1);
    bool operator>(SinhVien s1);
};
float SinhVien::DiemTrungBinh(){
    return (DiemVan+DiemToan)/2.0;
}
bool SinhVien::operator>(SinhVien s1){
    if(DiemTrungBinh()>s1.DiemTrungBinh())
        return true;
    else
        return false;
}
SinhVien::SinhVien(string hoTen, string ngaySinh, string gioiTinh, float diemVan=0, float diemToan=0){
    HoTen=hoTen;
    DiemVan=diemVan;
    DiemToan=diemToan;
    NgaySinh=ngaySinh;
    GioiTinh=gioiTinh;
}
SinhVien::~SinhVien(){
    cout <<"\nDa huy class";
}
ostream& operator<<(ostream&COUT, SinhVien& s1){
    COUT<<"\nHo Ten: "<<s1.HoTen;
    COUT<<"\nNgay Sinh: "<<s1.NgaySinh;
    COUT<<"\nGioi Tinh: "<<s1.GioiTinh;
    COUT<<"\nDiem Van: "<<s1.DiemVan;
    COUT<<"\nDiem Toan: "<<s1.DiemToan;
    return COUT;
}
istream& operator>>(istream&CIN, SinhVien& s1){
    cout<<"\nHo Ten: ";
    CIN>>s1.HoTen;
    cout<<"\nNgay Sinh: ";
    CIN>>s1.NgaySinh;
    cout<<"\nGioi Tinh: ";
    CIN>>s1.GioiTinh;
    cout<<"\nDiem Van: ";
    CIN>>s1.DiemVan;
    cout<<"\nDiem Toan: ";
    CIN>>s1.DiemToan;
    return CIN;
}
int main(){
    SinhVien sv1=SinhVien("Nguyen thi thanh","17/04/2003","Nu");
    cin >>sv1;
    SinhVien sv2=SinhVien("ngoc huy","211/2312321/3123/123","Nam");
    sv1=sv2;
    cout<<sv1;
}
