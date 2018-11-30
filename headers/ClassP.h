#include <iostream>
#include <string>
using namespace std;

#ifndef THREE_CLASSP_H
#define THREE_CLASSP_H

class Material{
private:
    string name;
    float p;
protected:
    bool flag;
public:
    Material(const string &name, float p);

    const string &getName() const;

    void setName(const string &name);

    float getP() const;

    void setP(float p);

    void Print1();
};

class Info: public Material{
private:
    int sost;
public:
    Info(const string &name1, float p1,  int sost);

    int getSost() const;

    void setSost(int sost);

    void Print();

};

#endif //THREE_CLASSP_H
