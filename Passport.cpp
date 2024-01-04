#include <iostream>
#include "Pass.h"

int main()
{
    Passport passport;

    cout << "Enter your name: ";
    string name;
    getline(cin, name);
    passport.setname(name);

    cout << "Enter your age: ";
    int age;
    cin >> age;
    passport.setage(age);

    cout << "Enter number: ";
    int n;
    cin >> n;
    passport.setnumb(n);

    cout << "Enter your adress: ";
    string adr;
    getline(cin, adr);
    passport.setadress(adr);

    cout << "Do you have wife/husband (1/0)";
    bool wife;
    cin >> wife;
    passport.setjenat(wife);

    cout << "Your passport info: " << endl;
    passport.print();

    cout << "Do you want to enter your foreign passport info(1-yes, 0-no): ";
    int vrem;
    cin >> vrem;
    if (vrem == 0) return 0;

    cout << "Enter your foreign passport number: ";
    int newn; cin >> newn;
    cout << "Enter quantity of your visas: ";
    int q; cin >> q;
    vector<string> vis;
    string s;
    while (q--) {
        cout << "City: ";
        cin >> s;
        vis.push_back(s);
    }
    ForeignPassport foreign(name, age, n, adr, wife, vis, newn);
    foreign.printforeign();
}
