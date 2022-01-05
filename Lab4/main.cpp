#include <iostream>
using namespace std;
struct Advertising{
    int num_ad;
    double percent;
    double income_per_ad;
};
void print(const Advertising ad){
    cout << "number of ads: " << ad.num_ad << endl;
    cout << "percent of people clicking on ads: " << ad.percent << "%" << endl;
    cout << "income per ad: " << ad.income_per_ad << endl;
}
void setAd(Advertising &ad){
    cout << "enter num of ad:\n";
    cin >> ad.num_ad;
    cout << "enter percent:\n";
    cin >> ad.percent;
    cout << "enter income per ad:\n";
    cin >> ad.income_per_ad;
}
double TotalIncome(Advertising &ad){
    return ad.income_per_ad*ad.percent*ad.num_ad*0.01;
}
int main() {
    Advertising become_A_millionaire;
    setAd(become_A_millionaire);
    print(become_A_millionaire);
    cout << "Your today's income is!!! " << TotalIncome(become_A_millionaire) << endl;
    return 0;
}
