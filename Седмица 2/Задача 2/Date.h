
class Date
{
    private:
        int day;
        int month;
        int year;
        char* dayName;
    
    public:
        void setDay(int);
        void setMonth(int);
        void setYear(int);
        void setDayName(char*);

        void displayA() const; //dd/mm/yyyy
        void displayB() const; //dd.month_name.year
        void displayC() const; //day dd month_name
};