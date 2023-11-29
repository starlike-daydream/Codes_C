#include <cstdio>
using namespace std;
int main(){
    float a = 0.1;
    printf("%d", int(2 - a * a * 100));//我猜答案是0，浮点数计算不精确(其实不是很明白……)
    // printf("%.10f", 2 - a * a * 100);
    return 0;
}