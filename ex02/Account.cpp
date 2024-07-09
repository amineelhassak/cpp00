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

// void    Account::displayAccountsInfos( void )
// {

// }

Account::Account( int initial_deposit )
{
    _nbAccounts++;
    
}

Account::~Account( void )
{
 
}

void	Account::makeDeposit( int deposit )
{
    if (deposit > 0)
    {
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

bool	Account::makeWithdrawal( int withdrawal )
{
    if (withdrawal < _amount)
    {
        _totalAmount -= withdrawal;
        _amount -= withdrawal;
        _totalNbWithdrawals++;
        _nbWithdrawals++;
        return (true);
    }
    else
    {
        std::cerr << "Erreur : Montant de retrait invalide ou solde insuffisant." << std::endl;
        return (false);
    }
}

int		Account::checkAmount( void ) const
{
    return (_amount);
}

// void	Account::displayStatus( void ) const
// {

// }

std::string _displayTimestamp()
{
    std::time_t now = std::time(nullptr);
    if (!now)
        return (NULL);
    std::tm* localTime = std::localtime(&now);
        
    if (localTime == nullptr)
        return (NULL);
    std::ostringstream oss;
    oss << std::put_time(localTime, "[%Y%m%d_%H%M%S]");
    if (oss.fail())
        return (NULL);
    return (oss.str());
}