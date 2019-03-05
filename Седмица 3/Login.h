class Login
{
    private:
        char* username;
        char* password;
        int sessionType;
    
    public:
        Login();
        Login(char*);
        Login(char*, char*);
        Login(char*, char*, int);
        Login(const Login&);

        void setUsername(const char*);
        void setPassword(const char*);
        void setSession(const int);

        void print() const;
        char* getUsername() const;
        char* getPassword() const;
        int getSession() const;
};