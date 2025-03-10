#ifndef CREDIT_CARD_H
#define CREDIT_CARD_H

#include <string>
#include <iostream>
class CreditCard
{
private:
    std::string cardNumber;
    std::string cardHolder;
    std::string cardType;
    int cardExpireMonth;
    int cardExpireYear;
    int cardCVV;
    int limit = 0;
    double balance = 0.0;

public:
    CreditCard(std::string cardNumber, std::string cardHolder, std::string cardType, int cardExpireMonth, int cardExpireYear, int cardCVV);
    void CreditCardAccount();
    ~CreditCard();
    void printCreditCard();
    void setCardNumber(std::string cardNumber);
    void setCardHolder(std::string cardHolder);
    void setCardType(std::string cardType);
    void setCardExpireMonth(int cardExpireMonth);
    void setCardExpireYear(int cardExpireYear);
    void setCardCVV(int cardCVV);
    void getCardNumber();
    void getCardHolder();
    void getCardType();
    void getCardExpireMonth();
    void getCardExpireYear();
    void getCardCVV();
    void getBalance();
    void getLimit();
    void setLimit(int lim);
    void setBalance(double bal);
    bool chargeIt(double price);
    void makePayment(double payment);
};

#endif