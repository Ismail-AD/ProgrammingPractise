#include <bits/stdc++.h>
using namespace std;

class BankSystem
{
private:
    static long counter;

public:
    map<string, BankAccount *> allAccounts;
    void createAccount()
    {
        BankAccount *banktype;
        int type = -1;
        while (type != 1 && type != 2)
        {
            cout << "\nSelect account type:\n"
                 << "[1] Savings Account\n"
                 << "[2] Current Account\n"
                 << "[3] Exit\n"
                 << "Enter your choice: ";
            cin >> type;

            if (type != 1 && type != 2)
            {
                cout << "Invalid selection. Please choose 1 or 2.\n";
            }
        }
        double bal = 0.0;
        string username;
        cout << "Enter username: ";
        cin >> username;

        while (bal <= 0)
        {
            cout << "\nPlease enter some balance to deposit: ";
            cin >> bal;
        }
        string userAccountId = generateAccountNumber();
        if (type == 1)
        {
            banktype = new SavingsAccount(userAccountId, username, bal);
        }
        else
        {
            banktype = new CurrentAccount(userAccountId, username, bal, 5000);
        }
        allAccounts.insert({userAccountId, banktype});
        cout << "Account created Successfully!" << endl;
    }
    void findMyAccount(string my_Id)
    {
    }
    void performWithDraw()
    {
    }
    void performDeposit()
    {
    }
    string generateAccountNumber()
    {
        return "ACC" + to_string(++counter);
    }
};
long BankSystem::counter = 1000L;
class BankAccount
{
public:
    string account_id;
    string username;
    double balance;
    vector<Transaction> transactionHistory;
    BankAccount(string account_id, string username, double balance, vector<Transaction> transactionHistory) : account_id(account_id), username(username), balance(balance), transactionHistory(transactionHistory) {}
    virtual void deposit(double amount) = 0;
    virtual void withDraw(double amount) = 0;
    ~BankAccount()
    {
        cout << "Destructor Called!" << endl;
    }
};
class SavingsAccount : public BankAccount
{

public:
    SavingsAccount(string id, string user, double bal)
        : BankAccount(id, user, bal, {}) {}
    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited to Savings: " << amount << endl;
    }
    void withDraw(double amount)
    {
        if (amount < 0)
        {
            cout << "Amount cannot be negative!" << endl;
        }
        else if (amount > balance)
        {
            cout << "Insufficient Balance!" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Withdrawn from Savings: " << amount << endl;
        }
    }
};
class CurrentAccount : public BankAccount
{
    double overDraftLimit;

public:
    CurrentAccount(string id, string user, double bal, double overdraft)
        : BankAccount(id, user, bal, {}), overDraftLimit(overdraft) {}
    void deposit(double amount)
    {
        if (amount < 0)
        {
            cout << "Amount cannot be negative!" << endl;
            return;
        }

        if (balance < 0)
        {
            balance += amount;
            cout << "Deposited to repay overdraft: " << amount << endl;
        }
        else
        {
            balance += amount;
            cout << "Deposited to Current: " << amount << endl;
        }
    }
    void withDraw(double amount)
    {
        if (amount < 0)
        {
            cout << "Amount cannot be negative! Retry" << endl;
        }
        else if (balance - amount < -overDraftLimit)
        {
            cout << "Overdraft limit exceeded!" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Withdrawn from Current: " << amount << endl;
        }
    }
};
class Transaction
{
    string transaction_id;
    TransactionType type;
    double amount;
    // data type in library (It represents calendar time — the number of seconds since the Unix epoch.)
    time_t timestamp;
    Transaction(string id, TransactionType t, double amt, string desc)
        : transaction_id(id), type(t), amount(amt)
    {
        timestamp = time(nullptr); // store time in seconds (get the current time as a count of seconds since 1970.)
    }
    void printTransaction()
    {
        cout << "Transaction: " << transaction_id << " | ";
        switch (type)
        {
        case TransactionType::DEPOSIT:
            cout << "Deposit";
            break;
        case TransactionType::WITHDRAWAL:
            cout << "Withdrawal";
            break;
        case TransactionType::TRANSFER:
            cout << "Transfer";
            break;
        }
        cout << " | Amount: " << amount << endl;
    }
};
enum class TransactionType
{
    DEPOSIT,
    WITHDRAWAL,
    TRANSFER
};
int main()
{

    return 0;
}