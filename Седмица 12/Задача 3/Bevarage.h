//
// Created by lyubo on 15.05.19.
//

#ifndef CLIONWORKDIR_BEVARAGE_H
#define CLIONWORKDIR_BEVARAGE_H


class Bevarage {
private:
    int code;
    double amount;

public:
    Bevarage();

    void set_code(const int&);
    void set_amount(const double&);

    const int get_code() const;
    const double get_amount() const;
};


#endif //CLIONWORKDIR_BEVARAGE_H
