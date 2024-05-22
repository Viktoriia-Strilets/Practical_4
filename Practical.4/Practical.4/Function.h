#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
#include "Math.h"

ref class Function abstract {
protected:
    double x;
    double y;
public:
    Function();
    Function(double, double);
    Function(Function^);

    virtual double Evaluate(double) abstract;        
};

Function::Function() : x(0), y(0) {}

Function::Function(double x, double y) {
    this->x = x;
    this->y = y;
}

Function::Function(Function^ f) {
    x = f->x;
    y = f->y;
}


// лінійна функція y = kx + b
ref class LinearFunction : public Function {
private:
    double k;
    double b;
public:
    LinearFunction();
    LinearFunction(double, double);
    LinearFunction(LinearFunction^);

    double Evaluate(double) override;
    virtual String^ ToString() override;
};

LinearFunction::LinearFunction() :k(0), b(0) {}

LinearFunction::LinearFunction(double k, double b) {
    this->k = k;
    this->b = b;
}

LinearFunction::LinearFunction(LinearFunction^ f) : Function(f) {
    k = f->k;
    b = f->b;
}

double LinearFunction::Evaluate(double x) {
    this->x = x;
    y = k * x + b;
    return y;
}

 String^ LinearFunction::ToString() {
     return "Linear f(x) = " + System::Convert::ToString(k) + "x + " + System::Convert::ToString(b);
     
}

// квадратична функція y = ax^2+bx+c
ref class QuadraticFunction : public Function {
private:
    double a;
    double b;
    double c;
public:
    QuadraticFunction();
    QuadraticFunction(double, double, double);
    QuadraticFunction(QuadraticFunction^);

    double Evaluate(double) override;
    virtual String^ ToString() override;

};

QuadraticFunction::QuadraticFunction() : a(0), b(0), c(0) {}

QuadraticFunction::QuadraticFunction(double a, double b, double c) {
    this->a = a;
    this->b = b;
    this->c = c;

}

QuadraticFunction::QuadraticFunction(QuadraticFunction^ f) : Function(f) {
    a = f->a;
    b = f->b;
    c = f->c;
}

double QuadraticFunction::Evaluate(double x) {
    this->x = x;
    y = a * pow(x, 2) + b * x + c;
    return y;
}

 String^ QuadraticFunction::ToString()  {
     return "Quadratic f(x) = " + System::Convert::ToString(a) + "x^2 + " + System::Convert::ToString(b) + "x + " + System::Convert::ToString(c);
}


// тригонометрична функція y = sin(x) ...
ref class TrigonometricFunction : public Function {
public:
    TrigonometricFunction();

    double Evaluate(double) override;
    virtual String^ ToString() override;
};

TrigonometricFunction::TrigonometricFunction() {}

double TrigonometricFunction::Evaluate(double x) {
    this->x = x;
    y = sin(x);
    return y;

}

String^ TrigonometricFunction::ToString() {
    return  "Trigonometric f(x) = sin(x) ";
 
}

// степенева функція y = x^a
ref class PowerFunction : public Function {
private:
    double a;
public:
    PowerFunction();
    PowerFunction(double);
    PowerFunction(PowerFunction^);

    double Evaluate(double) override;
    virtual String^ ToString() override;
};

PowerFunction::PowerFunction() :a(0) {}

PowerFunction::PowerFunction(double a) {
    this->a = a;
}

PowerFunction::PowerFunction(PowerFunction^ f) : Function(f) {
    a = f->a;
}

double PowerFunction::Evaluate(double x) {
    this->x = x;
    y = pow(x, a);
    return y;
}

String^ PowerFunction::ToString() {
    return  "Power f(x) = x^" + System::Convert::ToString(a);
}


// показникова функція y = a^(x)
ref class IndicatorFunction : public Function {
private:
    double a;
public:
    IndicatorFunction();
    IndicatorFunction(double);
    IndicatorFunction(IndicatorFunction^);

    double Evaluate(double) override;
    virtual String^ ToString() override;
};

IndicatorFunction::IndicatorFunction() :a(0) {}

IndicatorFunction::IndicatorFunction(double a) {
    this->a = a;
}

IndicatorFunction::IndicatorFunction(IndicatorFunction^ f) : Function(f) {
    a = f->a;
}

double IndicatorFunction::Evaluate(double x) {
    this->x = x;
    y = pow(a, x);
    return y;
}

 String^ IndicatorFunction::ToString() {
     return  "Indicator f(x) = " + System::Convert::ToString(a) + "^x";
}

// обернена пропорційність y = k/x 
ref class InverseProportionalityFunction : public Function {
private:
    double k;
public:
    InverseProportionalityFunction();
    InverseProportionalityFunction(double);
    InverseProportionalityFunction(InverseProportionalityFunction^);

    double Evaluate(double) override;
    virtual String^ ToString() override;

};

InverseProportionalityFunction::InverseProportionalityFunction() : k(0) { }

InverseProportionalityFunction::InverseProportionalityFunction(double k) {
    this->k = k;
}

InverseProportionalityFunction::InverseProportionalityFunction(InverseProportionalityFunction^ f) : Function(f) {
    k = f->k;
}

double InverseProportionalityFunction::Evaluate(double x) {
    if (x == 0) {
        throw gcnew Exception("Cannot be calculated");
    }
    this->x = x;

    y = k / x;
    return y;
}

String^ InverseProportionalityFunction::ToString() {
    return  "Inverse Proportion f(x) = " + System::Convert::ToString(k) + "/x";
}


ref class Cont {
    ref class Element {
    public:
        Function^ item;
        Element^ next;
    };
private:
    Element^ first;
    TextBox^ tBox;
    double sum;
    double x;
public:

    Cont(TextBox^);

    void addFunction(Function^);
    double SumFunctionValues(double);

    void Output();

};

Cont::Cont(TextBox^ p1) {
    tBox = p1;
    first = nullptr;
}

void Cont::addFunction(Function^ func) {
    Element^ temp = gcnew Element;
    temp->item = func;
    temp->next = first;
    first = temp;
}

double Cont::SumFunctionValues(double x) {
    this->x = x;
    Element^ temp = first;
    while (temp != nullptr) {
        sum += temp->item->Evaluate(x);
        temp = temp->next;
    }      
    return sum;
}

void Cont::Output() {
    Element^ temp = first;
    tBox->Text = "Function in container:";
    while (temp != nullptr) {
        tBox->Text += "\r\n" + temp->item->ToString();
        temp = temp->next;
        if (temp) tBox->Text += ";";       
    }    

}





