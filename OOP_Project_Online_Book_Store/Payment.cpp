#include "Payment.h"



Payment::Payment()
{
}


Payment::~Payment()
{
}

double Payment::getAmount() const
{
	return amount;
}
/*!
\param amount Amount to pay will be set to this
*/
void Payment::setAmount(double amount)
{
	this->amount = amount;
}
