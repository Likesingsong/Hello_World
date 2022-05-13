#include <iostream>
#include <cstdlib>

using namespace std;

/**
 * 牌堆中一共有n+m+1n+m+1n+m+1张牌，大小分别为1~n+m+1。
 * 每次Alice从牌库中抽取n张牌，Bob从牌库中抽取m张牌，剩下一张牌盖在桌子中央。
 * 每个人只能看到自己的手牌，谁先猜中桌子中间的牌的大小谁就获胜。
 */
 /**
  * debug 日志
  * 1、想通过随机数产生n+m+1张牌，选择用数字，但是产生的随机数都是0     使用&将值带回
  * 2、变量不能做数组长度
  */
//玩家
typedef struct {
    int card_hand[1000];
    int card_table[1000];
    int card_count;
}Player;
//发牌者
typedef struct {
    int card[2000];
    int card_count;
}Dealer;
//产生m+n+1张牌
void createCard(Dealer &dealer,int number){
    srand(time(nullptr));
    for (int i = 0; i < number; ++i) {
        dealer.card[i] = rand()%(5000)+1;
        dealer.card_count++;
    }
}
//发牌
void deal(Dealer &dealer,Player &player1,Player &player2,int m,int n){
    //随机发，标记m+n+1个下标
    int index[2000] = {0};
    //储存下标的值
    int value_index[2000];
    srand(time(nullptr));
    for (int i = 0; i < m+n+1; ++i) {

        value_index[i] = rand()%(m+n+1) + 1;
    }
    //给player1发n张牌
    for (int i = 0; i < n; ++i) {
        
    }
    //给player2发m张牌
    for (int i = 0; i < m; ++i) {

    }


    for (int i = 0; i < dealer.card_count; i+2) {
        player1.card_hand[i] = dealer.card[i];
        player2.card_hand[i] = dealer.card[i+1];
        player1.card_count++;
        player2.card_count++;
    }

}

void test();

int main(){
//    Player Alice,Bob;
//    Dealer dealer;
//    dealer.card_count = 0;
//    int m,n,frequency;
//    cin>>n>>m;
//    createCard(dealer,m+n+1);
//    for (int i = 0; i < 6; ++i) {
//        cout<<dealer.card[i]<<ends;
//    }
    test();

}

void test(){
    int m,n;
    cin>>n>>m;
    int value_index[2000];
    srand(time(nullptr));
    for (int i = 0; i < m+n+1; ++i) {
        value_index[i] = rand()%(m+n+1) + 1;
    }
    for (int i = 0; i < m+n+1; ++i) {
        cout<<value_index[i]<<ends;
    }
    cout<<endl;
}