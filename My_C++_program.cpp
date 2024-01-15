#include <iostream>
#include <string>
using namespace std;
struct ConNguoi {
    int tuoi;
    float chieu_cao;
    float can_nang;
    string hoten;
    int so_do_3_vong[3];
};
int main() {
    int tuoi = 0;
    cout << tuoi << endl;
    tuoi = 18;
    char xyz = 'T';
    cout << tuoi << endl;
    cout << xyz << endl;
    bool logic = true;
    bool logic2 = false;
    cout << logic << endl;
    cout << logic2 << endl;
    int xyz2[5] = {2, 3, 2, 1, 5};
    cout << xyz2[8] << endl;
    char ho_ten[100] = {'K', 'h', 'a', 'n', 'g'};
    cout << ho_ten << endl;
    string ho_ten_2 = "Khang";
    cout << ho_ten_2 << endl;
    return 0;
}
