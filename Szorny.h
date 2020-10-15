/**
 * \class Sz�rny
 * 
 * \brief Sz�rny class
 * 
 * \author Hab�n Andr�s, Tranta M�t�, T�th Nroerbert
 * 
 * Created on: 2020/10/14 17:15
*/
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include <cmath>

class Szorny
{
public:
	Szorny(std::string nev, int hp, int dmg,double speed) :nev(nev), hp(hp), dmg(dmg),speed(speed) {}  ///< Sz�rny oszt�ly konstruktora
	int getDmg()const;	///< Lek�ri a h�s DMG-�t
	int getHp()const;	///< Lek�ri a h�s HP-j�t
	static void harc(Szorny &,Szorny &); ///< A parancsori argumentumban megadott k�t h�st harcoltatja
	double getSpeed()const;	///< Lek�ri a h�s atackspeedj�t
	std::string getName()const;		///< Lek�ri a h�s nev�t
	static Szorny parseUnit(const std::string);	///< Beolvassa a h�s �rt�keit
private:
	std::string nev; ///< A h�s neve
	int hp; 	///< A h�s �letpontjai
	int dmg;	///< A h�s �t�s�nek er�sege
	double speed;	///< A h�s �t�seinek gyorsas�ga
	void tamad(Szorny &)const; ///< Egy darab �t�st visz be
};
