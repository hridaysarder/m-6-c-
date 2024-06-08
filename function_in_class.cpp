#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    int mark1;
    int mark2;
    Person(string nm, int ag, int m1, int m2)
    {
        name = nm;
        age = ag;
        mark1 = m1;
        mark2 = m2;
    }
    void hello()
    {
        cout << name << " " << age << " " << mark1 << " " << mark2 << endl;
    }
    int total()
    {
        return mark1 + mark2;
    }
};

int main()
{
    Person rakib("Rakib Ahsan", 23, 82, 75);
    rakib.hello();
    cout << rakib.total() << endl;
    return 0;
}