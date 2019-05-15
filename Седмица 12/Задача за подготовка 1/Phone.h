//
// Created by lyubo on 14.05.19.
//

#ifndef CLIONWORKDIR_PHONE_H
#define CLIONWORKDIR_PHONE_H


class Phone {
private:
    char* name;
    double screen;
    int number;

public:
    Phone();
    Phone(const Phone&);
    Phone&operator=(const Phone&);
    ~Phone();

    void set_name(const char*);
    void set_screen(const double&);
    void set_number(const int&);

    void call(const Phone&) const;
    void print() const;

    const char* get_name() const;
    const double get_screen() const;
    const int get_number() const;

};


#endif //CLIONWORKDIR_PHONE_H
