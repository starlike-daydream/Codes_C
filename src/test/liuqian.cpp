#include<iostream>
#include<ctime>
#define endl '\n'
using namespace std;

void show_poke(char*, int);
void first_down(char*, int);
void first_to_third_middle(char*, int, int);
char pokes[] = { '3','4','5','6','7','8','9','0','J','Q','K','A','2' };

int main() {
    srand(time(0));
    char poke[4];
    // char* poke = (char*)malloc(sizeof(char) * 4);
    for (int i = 0;i < 4;i++)
        poke[i] = pokes[rand() % 13];
    int length = 2 * sizeof poke / sizeof(char);
    char double_poke[length];
    for (int i = 0;i < length;i++)
        double_poke[i] = poke[i % (length / 2)];
    cout << "撕开的八张牌是：" << endl;
    show_poke(double_poke, length);
    int name_length = rand() % 3 + 2;//1-4
    cout << "名字长度是：" << name_length << endl;
    for (int i = 0;i < name_length;i++)
        first_down(double_poke, length);
    cout << "把第一张牌张牌放在下面" << name_length << "次：" << endl;
    show_poke(double_poke, length);
    cout << "拿起3张牌插在中间，";
    first_to_third_middle(double_poke, length, 3);
    show_poke(double_poke, length);
    char hide = *double_poke;
    char* poke_hidden = double_poke + 1;
    length--;
    cout << "藏起来第一张牌：" << endl;
    show_poke(poke_hidden, length);
    int where = rand() % 3 + 1;
    if (where == 1)
        cout << "是南方人，";
    else if (where == 2)
        cout << "是北方人，";
    else if (where == 3)
        cout << "不确定是南方人还是北方人，";
    cout << "拿起" << where << "张牌插在中间，";
    first_to_third_middle(poke_hidden, length, where);
    show_poke(poke_hidden, length);
    char* poke_gender;
    bool gender = rand() % 2;//1男2女
    if (gender == 1) {
        poke_gender = poke_hidden + 1, length--;
        cout << "是男生，扔一张：" << endl;
    }
    else {
        poke_gender = poke_hidden + 2, length -= 2;
        cout << "是女生，扔两张：" << endl;
    }
    show_poke(poke_gender, length);
    for (int i = 0;i < 7;i++)
        first_down(poke_gender, length);
    cout << "见~证~奇~迹~的~时~刻~(七次牌放下面):" << endl;
    show_poke(poke_gender, length);
    char* poke_change = poke_gender;
    while (length != 1) {
        first_down(poke_change, length);
        cout << "好运留下来：";
        show_poke(poke_change, length);
        poke_change = poke_change + 1;
        length--;
        cout << "烦恼丢出去：";
        show_poke(poke_change, length);
    }
    cout << "最后手里的牌是：" << *poke_change << "!" << endl;
    cout << "藏起来的牌是：" << hide << "!" << endl;
    if (*poke_change == hide)
        cout << "魔术成功，龙年大吉！" << endl;
    return 0;
}
void show_poke(char* poke, int length) {
    for (int i = 0;i < length;i++)
        cout << *(poke + i) << ' ';
    cout << endl;
}
void first_down(char* poke, int length) {
    char first = *poke;
    for (int i = 0;i < length - 1;i++)
        *(poke + i) = *(poke + i + 1);
    *(poke + length - 1) = first;
}
void first_to_third_middle(char* poke, int length, int take) {
    char first = *poke;
    char second = *(poke + 1);
    char third = *(poke + 2);
    srand(time(0));
    int insert_index = rand() % (length - take - 1) + 1;//1-5
    cout << "最上面插到剩下" << length - take << "张牌第" << insert_index << "个位置:" << endl;
    for (int i = 0;i < insert_index;i++) {
        *(poke + i) = *(poke + i + take);
    }
    *(poke + insert_index) = first;
    if (take >= 2)
        *(poke + insert_index + 1) = second;
    if (take >= 3)
        *(poke + insert_index + 2) = third;
}

