/*
 * Player1.cpp
 *
 *  Created on: May 20, 2017
 *      Author: kunkz
 */

#include "INCLUDE.h"

class People {
protected:
	float randomVar;
public:
	void setRandomVar (float random) {
			this->randomVar = random;
		}
		float getRandomVar() {
			return randomVar;
		}
};

class Player:public People
{
	private:
		int bonusian;
		string name;
		float gpa; //gpa menyimpan nilai gpa rata"
		float gps[6]; //gps menyimpan nilai gp setiap stage
		float gpss[8]; //gpss menyimpan nilai gps (smt 1-8)
		int comserv;
		int sat;
		int strLvl; //stress level
		int money;

	public:
		void setBonusian (int bonusian) {
			this->bonusian = bonusian;
		}
		int getBonusian () {
			return bonusian;
		}

		void setName (string name) {
			this->name = name;
		}
		string getName() {
			return name;
		}

		void setGpa (float gpa) {
			this->gpa = gpa;
		}
		float getGpa() {
			return gpa;
		}

		void setComserv (int comserv) {
			this->comserv = comserv;
		}
		int getComserv() {
			return comserv;
		}

		void setSat (int sat) {
			this->sat = sat;
		}
		int getSat() {
			return sat;
		}

		void setStrLvl (int strLvl) {
			if(strLvl < 0)
			{
				this->strLvl = 0;
			}
			else if(strLvl >100)
			{
				this->strLvl = 100;
			}
			else
			{
				this->strLvl = strLvl;
			}
		}
		int getStrLvl() {
			return strLvl;
		}

		void setGps(float gps, int index)
		{
			this->gps[index] = gps;
		}
		float getGps(int index)
		{
			return gps[index];
		}

		void setGpss(float gpss, int index)
		{
			this->gpss[index] = gpss;
		}
		float getGpss(int index)
		{
			return gpss[index];
		}

		void setMoney(int money) {
			this->money = money;
		}
		
		int getMoney() {
			return money;
		}

	//CONSTRUCTOR
		Player() {
			sat = 100; //sat poinnya 100 dari awal
			money = 100; //pemain dikasih duit 100
		};

};





