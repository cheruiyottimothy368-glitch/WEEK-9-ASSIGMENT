#include <iostream>
using namespace std;
class Payment {
    private:
    int amount;
    double fee;
    double discount;

    public:
    void setAmount(int a) {

        amount = a;
    }
    void setfee(double f) {
        fee = f;
    }
    void setdiscount(double d) {
        discount = d;
    }
    int getAmount() {
        return amount;
    }
    double getFee() {
        return fee;
        
    }
    double getDiscount() {
        return discount;
    }
    void processPayment(int a) {
        setAmount(a);
        cout<<"\nCash Payment"<<endl;
        cout<<"Final Amount: "<<getAmount()<<endl;

    }
    void processPayment(int a, double f) {
        setAmount(a);
        setfee(f);
        double total = getAmount() + getFee();
        cout<<"\nCard Payment"<<endl;
        cout<<"Final Amount:"<<total<<endl;
    }
    void processPayment(int a, double f, double d) {
        setAmount(a);
        setfee(f);
        setdiscount(d);
        double total = getAmount() + getFee() - getDiscount();
        cout<<"\nMobile Payment"<<endl;
        cout<<"Final Amount:"<<total<<endl;

    }
};
int main() {
    Payment p;
    p.processPayment(1000);
    p.processPayment(2000, 50);
    p.processPayment(3000, 100, 200);
    return 0;
}