#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

/*
여기서는 내 어카운트 이름/계좌번호/
*/
class Account{
    private: 
        std::string name{};
        std::string account_number{};

        Account();
        ~Account();

    public:
        std::string getAccountName(){
            return name;
        }
        std::string getAccountNumber(){
            return account_number;
        }
        void setAccountName(std::string n){
            name=n;
        }
        void set_accountNumber(std::string n){
            
        }        


};


#endif