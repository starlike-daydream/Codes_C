#include<bits/stdc++.h>
using namespace std;
int num[10005][4];
void sort_min(int);

int main() {
    int n0, n1, n, ans0, ans1, room_boy, room_girl, index = 0;
    cin >> n0 >> n1 >> n;
    for (ans0 = 1;ans0 < n;ans0++) {//女生房间数
        ans1 = n - ans0;//男生房间数
        // cout << ans0 << " " << ans1 << endl;
        // if (((ans0 == 0 && n0 == 0) || ((ans0 != 0) && (n0 % ans0 == 0))) && ((ans1 == 0 && n1 == 0) || ((ans1 != 0) && (n1 % ans1 == 0)))) {
        if (n0 % ans0 == 0 && n1 % ans1 == 0) {
            // room_girl = (ans0 == 0 ? 0 : n0 / ans0);
            room_girl=n0/ans0;//女生每个房间人数
            // room_boy = (ans1 == 0 ? 0 : n1 / ans1);//男生每个房间人数
            room_boy=n1/ans1;//女生每个房间人数
            if (room_boy == 1 || room_girl == 1)
                continue;
            num[index][0] = ans0;
            num[index][1] = ans1;
            num[index][2] = fabs(room_boy - room_girl);
            // cout << ans0 << " " << ans1 << " " << num[index][2] << endl;
            index++;
        }
    }
    if (index >= 1) {
        sort_min(index);
        cout << num[0][0] << " " << num[0][1];
    }
    else
        cout << "No Solution";
    //ans2*room_boy=n2
    //ans1*room_girl=n1
    //room_people!=1
    //ans1+ans2=n
    //abs(room_girl-room_boy)->min
    return 0;
}
void sort_min(int index) {
    for (int i = 0;i < index - 1;i++) {
        for (int j = i + 1;j < index;j++) {
            if (num[i][2] > num[j][2])
                for (int k = 0;k < 3;k++) {
                    int temp = num[i][k];
                    num[i][k] = num[j][k];
                    num[j][k] = temp;
                }
        }
    }
}