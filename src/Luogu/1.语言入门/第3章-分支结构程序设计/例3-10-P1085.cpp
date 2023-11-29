#include <iostream>
using namespace std;

int main()
{
    int t1, t2, maxtime = 8, maxday = 0;
    cin >> t1 >> t2;
    if(t1 + t2 > maxtime) maxtime = t1 + t2, maxday = 1;
    cin >> t1 >> t2;
    if(t1 + t2 > maxtime) maxtime = t1 + t2, maxday = 2;
    cin >> t1 >> t2;
    if(t1 + t2 > maxtime) maxtime = t1 + t2, maxday = 3;
    cin >> t1 >> t2;
    if(t1 + t2 > maxtime) maxtime = t1 + t2, maxday = 4;
    cin >> t1 >> t2;
    if(t1 + t2 > maxtime) maxtime = t1 + t2, maxday = 5;
    cin >> t1 >> t2;
    if(t1 + t2 > maxtime) maxtime = t1 + t2, maxday = 6;
    cin >> t1 >> t2;
    if(t1 + t2 > maxtime) maxtime = t1 + t2, maxday = 7;
    cout << maxday << endl;
    // int a, b, happy = 0, day = 0;
    // for (int i = 1; i <= 7; i++){
    //     cin >> a >> b;
    //     if (a + b > 8)
    //         if (happy < a + b){
    //             happy = a + b;
    //             day = i;
    //         }
    // }
    // cout<<day<<endl;
    return 0;
}