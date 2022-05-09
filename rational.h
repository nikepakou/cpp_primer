#ifndef RATIONAL_H
#define RATIONAL_H
// 定义有理数
class Rational {
public:
    Rational(int numerator=0, int denominator=1) {
        // 构造函数刻意不是explicit,允许int to Rational隐式转换
        this->numerator_ = numerator;
        this->denominator_ = denominator;
    }
    int numerator() const {return this->numerator_;}    // 分子和分母访问函数
    int denominator() const { return this->denominator_;}
    const Rational operator* (const Rational& rhs) const; // 只支持有理数*整数

private:
    int numerator_;
    int denominator_;
};

const Rational operator*(const Rational& lhs, const Rational& rhs) {
    // non-member函数，支持有理数*整数，也支持整数*有理数
    return Rational(lhs.numerator() * rhs.numerator(),
                    lhs.denominator() * rhs.denominator());
}

#endif
