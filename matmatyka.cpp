bool czy_pierwsza(int number_one)
{
    if(number_one<2)
    {
		return false;
    }

	for(int i=2; i*i <=number_one; i++)
    {
		if(number_one % i == 0)
        {
			return false;
        }
    }
	return true;
}
int skrocone_mnozenie(int number_one, int number_two)
{
    //(a+b)2= a2 +2ab +b2
    return number_one*number_one + 2*number_two*number_one + number_two*number_two;
}
bool czy_parzysta(int number_one)
{
    if(number_one%2==0)
    {
        return true;
    }
}
