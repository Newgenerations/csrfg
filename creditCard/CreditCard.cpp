#include "exe_head/CreditCard.h"

CreditCard::CreditCard(std::string cardNumber, std::string cardHolder, std::string cardType, int cardExpireMonth, int cardExpireYear, int cardCVV)
{
    this->cardNumber = cardNumber;
    this->cardHolder = cardHolder;
    this->cardType = cardType;
    this->cardExpireMonth = cardExpireMonth;
    this->cardExpireYear = cardExpireYear;
    this->cardCVV = cardCVV;
}

CreditCard::~CreditCard()
{
    std::cout << "CreditCard object destroyed" << std::endl;
}

void CreditCard::printCreditCard()
{
    std::cout << "Card Number: " << cardNumber << std::endl;
    std::cout << "Card Holder: " << cardHolder << std::endl;
    std::cout << "Card Type: " << cardType << std::endl;
    std::cout << "Card Expire Month: " << cardExpireMonth << std::endl;
    std::cout << "Card Expire Year: " << cardExpireYear << std::endl;
    std::cout << "Card CVV: " << cardCVV << std::endl;
}

void CreditCard::setCardNumber(std::string cardNumber)
{
    this->cardNumber = cardNumber;
}

void CreditCard::setCardHolder(std::string cardHolder)
{
    this->cardHolder = cardHolder;
}

void CreditCard::setCardType(std::string cardType)
{
    this->cardType = cardType;
}

void CreditCard::setCardExpireMonth(int cardExpireMonth)
{
    this->cardExpireMonth = cardExpireMonth;
}

void CreditCard::setCardExpireYear(int cardExpireYear)
{
    this->cardExpireYear = cardExpireYear;
}

void CreditCard::setCardCVV(int cardCVV)
{
    this->cardCVV = cardCVV;
}

void CreditCard::getCardNumber()
{
    std::cout << "Card Number: " << cardNumber << std::endl;
}

void CreditCard::getCardHolder()
{
    std::cout << "Card Holder: " << cardHolder << std::endl;
}

void CreditCard::getCardType()
{
    std::cout << "Card Type: " << cardType << std::endl;
}

void CreditCard::getCardExpireMonth()
{
    std::cout << "Card Expire Month: " << cardExpireMonth << std::endl;
}

void CreditCard::getCardExpireYear()
{
    std::cout << "Card Expire Year: " << cardExpireYear << std::endl;
}

void CreditCard::getCardCVV()
{
    std::cout << "Card CVV: " << cardCVV << std::endl;
}

bool CreditCard::chargeIt(double price)
{
    if (price + balance > limit)
    {
        return false;
    }
    balance += price;
    std::cout << "Charge made: " << price << std::endl;
    std::cout << "Actual Balance: " << balance << std::endl;
    return true;
}

void CreditCard::makePayment(double payment)
{
    double interest = payment * 0.1;
    if (payment < 0)
    {
        std::cout << "Payment must be positive" << std::endl;
        return;
    }
    if (payment + interest > balance)
    {
        std::cout << "Payment + interest exceeds balance" << std::endl;
        return;
    }
    this->balance -= (payment + interest);
    std::cout << "Payment made: " << payment << std::endl;
    std::cout << "Acutal Balance: " << balance << std::endl;
    std::cout << "Interest Paid: " << interest << std::endl;
}

void CreditCard::CreditCardAccount()
{
    std::cout << "Your card number is: " << this->cardNumber << std::endl;
    std::cout << "Your card holder is: " << this->cardHolder << std::endl;
    std::cout << "Your card type is: " << this->cardType << std::endl;
    std::cout << "Your card expire month is: " << this->cardExpireMonth << std::endl;
    std::cout << "Your card expire year is: " << this->cardExpireYear << std::endl;
    std::cout << "Your card CVV is: " << this->cardCVV << std::endl;
    std::cout << "Your limit is: " << this->limit << std::endl;
    std::cout << "Your balance is: " << this->balance << std::endl;
}

void CreditCard::setLimit(int lim)
{
    this->limit = lim;
}

void CreditCard::setBalance(double bal)
{
    this->balance = bal;
}

void CreditCard::getBalance()
{
    std::cout << "Your balance is: " << this->balance << std::endl;
}

void CreditCard::getLimit()
{
    std::cout << "Your limit is: " << this->limit << std::endl;
}