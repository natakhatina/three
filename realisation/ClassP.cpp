#include <iostream>
#include <string>
#include <ClassP.h>

#include "../headers/ClassP.h"
using namespace std;


const string &Material::getName() const {
    return name;
}

void Material::setName(const string &name) {
    Material::name = name;
}

float Material::getP() const {
    return p;
}

void Material::setP(float p) {
    Material::p = p;
}

Material::Material(const string &name, float p) : name(name), p(p) {}

void Material::Print1() {
    cout << getName() << endl;
    cout << getP() << endl;
}

Info::Info(const string &name1, float p1, int sost) : Material(name1, p1) {
    Info::sost=sost;
}

int Info::getSost() const {
    return sost;
}

void Info::setSost(int sost) {
    Info::sost = sost;
}

void Info::Print() {
    cout << getName() << endl;
    cout << getP() << endl;
    cout << getSost() << endl;
}
