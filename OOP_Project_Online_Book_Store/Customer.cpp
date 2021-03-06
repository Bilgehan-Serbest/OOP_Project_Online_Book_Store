#include "Customer.h"

int Customer::totalCustomer = 0;

/*! Customer constructor.
Set "bonus" to zero, increase "totalCustomer" by one and set "customerID".
\param _name Name of the customer.
\param _adress Adress of the customer.
\param _phone Phone of the customer.
\param _email email of the customer.
\param _username Username of the customer.
\param _password Password of the customer.

*/
Customer::Customer(string _name, string _adress, string _phone, string _email, string _username, string _password):name(_name), adress(_adress), phone(_phone), email(_email), username(_username), password(_password)
{
	bonus = 0;
	customerID = ++totalCustomer;
}

/*! Customer destructor. */
Customer::~Customer()
{
}
/*! Sends the invoice to the customer as an e-mail. */
void Customer::sendBill() const
{
	cout << "Invoice sent to " << email << endl;
}
/* \return The customer's ID.*/
const long& Customer::getCustomerID() const
{
	return customerID;
}
/*! \param customer_id Sets the Customer's ID.*/
void Customer::setCustomerID(const long customer_id)
{
	customerID = customer_id;
}
/*! \return The customer's Name. */
const string& Customer::getName() const
{
	return name;
}
/*! \param name Sets the Customer's Name. */
void Customer::setName(const string& name)
{
	this->name = name;
}
/*! \return The customer's Adress. */
const string& Customer::getAdress() const
{
	return adress;
}
/*! \param adress Sets the Customer's Adress. */
void Customer::setAdress(const string& adress)
{
	this->adress = adress;
}
/*! \return The customer's Phone number. */
const string& Customer::getPhone() const
{
	return phone;
}
/*! \param phone Sets the Customer's Phone number.*/
void Customer::setPhone(const string& phone)
{
	this->phone = phone;
}
/*! \return The customer's Bonus. */
const double& Customer::getBonus() const
{
	return bonus;
}
/*! \param bonus Sets the Customer's Bonus.*/
void Customer::setBonus(const double bonus)
{
	this->bonus += bonus;
}
/*! \return The customer's E-mail. */
const string& Customer::getEmail() const
{
	return email;
}
/*! \param email Sets the Customer's E-mail.*/
void Customer::setEmail(const string& email)
{
	this->email = email;
}
/*! \return The customer's Username. */
const string& Customer::getUsername() const
{
	return username;
}
/*! \param username Sets the Customer's username.*/
void Customer::setUsername(const string& username)
{
	this->username = username;
}
/*! \return The customer's password*/
const string& Customer::getPassword() const
{
	return password;
}
/*! \param password Sets the Customer's password.*/
void Customer::setPassword(const string& password)
{
	this->password = password;
}
/*! 
\param username The username that is entered by the user to try login.
\param password The password that is entered by the user to try login.
*/
bool Customer::checkAccount(const string& username, const string& password) const
{
	if (this->username == username&&this->password == password)
		return true;
	else
		return false;
}
/*!
\param bonus The amount that will be added to current bonus of customer
*/

void Customer::addBonus(const double bonus)
{
	this->bonus += bonus;
}
/*!
\param totalPrice Cost of whole shopping. 
*/
void Customer::useBonus(double & totalPrice)
{
	if (totalPrice - bonus <= 0)
	{
		bonus -= totalPrice;
		totalPrice = 0;
		return;
	}

	totalPrice -= bonus;
	bonus = 0;
}

