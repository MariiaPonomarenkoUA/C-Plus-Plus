#include <iostream>
#include <string>
using namespace std;
//Написати програму, яка реалізує телефонну книгу з вказаною користувачем кількістю абонентів і всіма необхідними функціями.Використати вкладені структури(для адреси чи ПІБ).


struct Address {

	string country;
	string city;
	string street;
	string home;
	string apartment;
	string index;

	void ShowAddress()
	{
		cout << "Country: " << GetCountry() << "\nCity: " << GetCity() << "\nStreet: " << GetStreet() << "\nHome: " << GetHome() << "\nApartment: " << GetApartment() << "\nIndex: " << GetIndex() << endl;
		cout << "--------------\n";
	}

	void SetCountry()
	{
		cout << "Write a country: ";
		cin >> country;
	}
	string GetCountry()
	{
		return country;
	}
	void SetCity()
	{
		cout << "Write a city: ";
		cin >> city;
	}
	string GetCity()
	{
		return city;
	}

	void SetStreet()
	{
		cout << "Write a street: ";
		cin >> street;
	}
	string GetStreet()
	{
		return street;
	}

	void SetHome()
	{
		cout << "Write a home: ";
		cin >> home;
	}
	string GetHome()
	{
		return home;
	}

	void SetApartment()
	{
		cout << "Write apartment number: ";
		cin >> apartment;
	}
	string GetApartment()
	{
		return apartment;
	}

	void SetIndex()
	{
		cout << "Write index: ";
		cin >> index;
	}
	string GetIndex()
	{
		return index;
	}

	void FillAddress(/*int size*/)
	{
		/*for (int i = 0; i < size; i++)
		{*/
			SetCountry();
			SetCity();
			SetStreet();
			SetApartment();
			SetIndex();
	/*	}*/
	}
};

struct Person
{
//private:
	string name;
	string surname;

//public:
	string phone;
	string email;
	Address address;

	void SetName()
	{
		cout << "Write a name: ";
		cin >> name;
	}
	string GetName()
	{
		return name;
	}

	void SetSurname()
	{
		cout << "Write a surname: ";
		cin >> surname;
	}
	string GetSurname()
	{
		return surname;
	}

	void SetPhoneNumber()
	{
		cout << "Write a phone number: ";
		cin >> phone;
	}
	string GetPhoneNumber()
	{
		return phone;
	}

	void SetEmail()
	{
		cout << "Write email: ";
		cin >> email;
	}
	string GetEmail()
	{
		return email;
	}

	void FillPerson()

	{
		SetName();
		SetSurname();
		SetPhoneNumber();
		SetEmail();
	}

	void ShowContactsInfo()
	{
		cout << "\n--------------\n";
		cout << "Name: " << GetName() << "\nSurname: " << GetSurname() << "\nPhone: " << GetPhoneNumber() << "\nEmail: " << GetEmail() << endl;
		address.ShowAddress();
	}
};

int main() {

	int size = 0;
	cout << "How many contacts do you want add? ";
	cin >> size;
	Person *Contacts = new Person[size];
	for (int i = 0; i < size; i++)
	{
		Contacts[i].FillPerson();
		Contacts[i].address.FillAddress(/*size*/);
		Contacts[i].ShowContactsInfo();
		cout << "Press any key to continue ..." << endl;
		cin.ignore(cin.rdbuf()->in_avail());
		cin.get();
		system("cls");
	}

	system("cls");

	cout << "=================TEST!!!!!=========PhoneBook==================" << endl << endl;
	
	for (int i = 0; i < size; i++)
	{
		cout << "Name: " << "\tSurname: " << "\tPhone: " << "\tEmail" << "\tCountry (...)" << endl;		
		cout << Contacts[i].GetName() << "\t" << Contacts[i].GetSurname() << "\t\t" << Contacts[i].GetPhoneNumber() << "\t" << Contacts[i].GetEmail() << "\t" << Contacts[i].address.GetCountry() << endl;
	}

	system("pause");
	return 0;
}