#include " Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount= 0;
int Account::_totalNbDeposits= 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}
void    Account::displayAccountsInfos( void )
{
    std::cout <<"accounts:"<<Account::getNbAccounts()<<";total:"<<Account::getTotalAmount() \
    <<";deposits:" << Account::getNbDeposits()<<";withdrawals:"<<Account::getNbWithdrawals()<<"\n";
}

// Account::Account( int initial_deposit )
// {
//     _nbAccounts++;
    
// }

// Account::~Account( void )
// {
 
// }

void	Account::makeDeposit( int deposit )
{
    if (deposit > 0)
    {
        // [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
        Account::_displayTimestamp();
        std::cout<<"index:"<< this->_accountIndex<<";p_amount:"<<this->_amount\
        <<";deposit:"<<this->_nbDeposits;
        _totalAmount += deposit;
        _amount += deposit;
        _totalNbDeposits++;
        _nbDeposits++;
        //affichage
    }
    else
    {
         std::cerr << "Erreur : Le montant du dépôt doit être positif." << std::endl;
    }
}

// bool	Account::makeWithdrawal( int withdrawal )
// {
//     if (withdrawal < _amount)
//     {
//         _totalAmount -= withdrawal;
//         _amount -= withdrawal;
//         _totalNbWithdrawals++;
//         _nbWithdrawals++;
//         return (true);
//     }
//     else
//     {
//         std::cerr << "Erreur : Montant de retrait invalide ou solde insuffisant." << std::endl;
//         return (false);
//     }
// }

// int		Account::checkAmount( void ) const
// {
//     return (_amount);
// }

// // void	Account::displayStatus( void ) const
// // {

// // }

void    Account::_displayTimestamp()
{
    time_t now = time(0);
    struct tm* localTime = localtime(&now);

    int Y = localTime->tm_year + 1900;
    int m = localTime->tm_mon + 1;
    int D = localTime->tm_mday;
    int H = localTime->tm_hour;
    int M = localTime->tm_min;
    int S = localTime->tm_sec;
    std::cout << "[";
    std::cout<< std::setw(4) << std::setfill('0') << (Y);
    std::cout<< std::setw(2) << std::setfill('0') << (m);
    std::cout<< std::setw(2) << std::setfill('0') << (D) << "_";
    std::cout<< std::setw(2) << std::setfill('0') << (H);
    std::cout<< std::setw(2) << std::setfill('0') << (M);
    std::cout<< std::setw(2) << std::setfill('0') << (S) << "] ";
}