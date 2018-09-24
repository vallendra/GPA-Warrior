/*
 * Main.cpp
 *
 *  Created on: May 20, 2017
 *      Author: SAPA
 */

#include "INCLUDE.h"
#include "sources.h"

Player player1;

#define ff cin.sync(); cin.clear()
#define penter cout << endl; cout << endl << "Press ENTER to continue..."; cin.get()

//Variable Global
int input;
int cheat; //indikator apabila pemain nyontek atau engak
int currentSmt = 1;
string tempS;
int tempI;
int superman = 0; //langsung menang

//////////// LETTER
void letterEntry() {
	cout << "Dear " << player1.getName() << ", " << "Bonusian " << player1.getBonusian() << endl << endl;
	cout << "Congratulations by being a student in this great university! This is your first semester."  << endl;
	cout << "Please use your time wisely.." << endl;
	cout << "- Mr. Rector" << endl << endl;
}

void letterPrep() {
	cout << "Dear " << player1.getName() << ", " << "Bonusian " << player1.getBonusian() << endl << endl;
	cout << "After this semester you will have to make SKRIPSI."  << endl;
	cout << "Please use choose your path wisely.." << endl;
	cout << "- Mr. Rector" << endl << endl;
}
void letterExpelled() {
	cout << "Dear " << player1.getName() << ", " << "Bonusian " << player1.getBonusian() << endl << endl;
	cout << "Based on your action by: " << endl << endl;
	if (cheat == 1) {cout << "CHEATING ON EXAM" << endl << endl;}
	else {cout << "DISQUALIFIED TO GRADUATE" << endl << endl;}
	cout << "On behalf of this administration, you have been EXPELLED IN THIS UNIVERSITY." << endl;
	cout << "Please reconsider your thoughts and try to be better person next time." << endl << endl;
	cout << "- Mr. Rector";
	}
//////////// LETTER

void setProfile()
{
	cout << "== SET YOUR PROFILE ==" << endl << endl;
	do
	{
		cout << "Please input your name [3.20]: ";

		getline(cin,tempS); ff;
		player1.setName(tempS);
	}
	while (player1.getName().length() > 20 || player1.getName().length() < 1);

	do
	{
		cout << "Please input your year of entry in this University [2000-2999]: ";

		cin >> tempI; ff;
		player1.setBonusian(tempI);
		tempI = 0;
	}
	while (player1.getBonusian() < 2000 || player1.getBonusian() > 2999);

	player1.setBonusian( player1.getBonusian()+ 4);


			cout << "Hello " << player1.getName() << "," << "Bonusian " << player1.getBonusian();
			penter;
		}



void userInfo(int currentStage)
{
	cout << "======= USER INFO ========" << endl;
	cout << "Name            : " << player1.getName() << endl;
	cout << "Major           : Computer Science" << endl;
	cout << "Current S'mt    : " << currentSmt << endl;
	cout << "Current GP      : " << player1.getGps( currentStage-1) << endl;
	cout << "Your GPA        : " << player1.getGpa() << endl;
	cout << "Com-serv hour(s): " << player1.getComserv() << endl;
	cout << "SAT point(s)    : " << player1.getSat() << endl;
	cout << "Stress-level    : " << player1.getStrLvl() << "%" << endl;
	cout << "Your money      : " << player1.getMoney() << endl <<endl;

}


void takeInput() {
		cout << "Input choice: ";
		cin >> input; ff;
	}



void mainMenu() {

	cout << " .88888.   888888ba   .d888888  " << endl; Sleep(500);
	cout << " .88888.   888888ba   .d888888  " << endl; Sleep(500);
	cout << " .88888.   888888ba   .d888888  " << endl; Sleep(500);
	cout << "d8'   `88  88    `8b d8'    88  " << endl; Sleep(500);
	cout << "88        a88aaaa8P' 88aaaaa88a " << endl; Sleep(500);
	cout << "88   YP88  88        88     88  " << endl; Sleep(500);
	cout << "Y8.   .88  88        88     88 " << endl; Sleep(500);
	cout << " `88888'   dP        88     88 " << endl  << endl << endl; Sleep(500);
	cout << "dP   dP   dP                            oo                   " << endl; Sleep(500);
	cout << "88   88   88                                                 " << endl; Sleep(500);
	cout << "88  .8P  .8P .d8888b. 88d888b. 88d888b. dP .d8888b. 88d888b. " << endl; Sleep(500);
	cout << "88  d8'  d8' 88'  `88 88'  `88 88'  `88 88 88'  `88 88'  `88 " << endl; Sleep(500);
	cout << "88.d8P8.d8P  88.  .88 88       88       88 88.  .88 88       " << endl; Sleep(500);
	cout << "8888' Y88'   `88888P8 dP       dP       dP `88888P' dP       " << endl << endl; Sleep(500);
	cout << "                 \"Go Get Cum Laude!\"                       " << endl << endl;
	 
	cout << "--- MENU ---" << endl;
	cout << "1. Start Game" << endl;
	cout << "2. About" << endl;
	cout << "3. Exit" << endl;

	do {
		takeInput();
	} while (input > 3 || input < 1);

	switch (input) {
		case 1:
			system("cls");
			setProfile();
			break;
		case 2:
			system("cls");
			cout << "ABOUT" << endl;
			cout << "=====" << endl << endl;
			cout << "GPA Warrior is a simple text game where you - an IT student at Bonus University," <<endl;
			cout << "strives to get good GPA through undergoing quests." <<endl;
			cout << "Just follow the instructions and enjoy the game!";
			penter;
			system("cls");
			mainMenu();
			break;
		case 3:
			break;
	}
}


void gpaRandom(int currentStage, float min, float max)
{
	if(player1.getStrLvl()>=50&&currentStage!=6)
	{
		player1.setRandomVar((rand()%200));
		player1.setGps((player1.getRandomVar()/100),currentStage) ;
	}
	else
	{
		do
		{
			player1.setRandomVar((rand()%400));
			player1.setGps((player1.getRandomVar()/100),currentStage) ;
			
		}
		while(player1.getGps(currentStage)<min || player1.getGps(currentStage) > max);
	}
}

void quest(int currentStage) {
	cout << "Quests (Stage " << currentStage << "/6): " << endl;
	cout <<	"1. Study" << endl;
	cout << "2. Do organization activity" << endl;
	cout << "3. Play and get lazy" << endl;
	cout << "4. Drop out" << endl;
	if (currentStage == 4 || currentStage == 5) {cout << "5. Take community service" << endl;}

	do {
		takeInput();
	} while (input < 1 || input > 6969);


	srand(time(NULL));
	switch (input) {
	case 1:
		cout << player1.getName() << " gets study." << endl;

		gpaRandom(currentStage,3.67,4);

		player1.setStrLvl(player1.getStrLvl()+10);

		cout << "Your grade is: " << player1.getGps(currentStage) << endl;
		penter;
		break;
	case 2:
		cout << player1.getName() << " does some activity at his organization." << endl;

		gpaRandom(currentStage,3,3.5);
		
		player1.setStrLvl(player1.getStrLvl()+15);

		player1.setSat(player1.getSat()+5);

		cout << "Your grade is: " << player1.getGps(currentStage) << endl;
		penter;

		break;
	case 3:
		cout << player1.getName() << " plays with his friends." << endl;
		gpaRandom(currentStage,1.5,3);
		player1.setStrLvl(player1.getStrLvl()-10);

		cout << "Your grade is: " << player1.getGps(currentStage) << endl;
		penter;

		break;
	case 4:
		cout << "Unfortunately. You're now drop-out from the university." << endl;
		penter;
		system("cls");
		letterExpelled();
		penter;
		//PANGGIL EXIT
		exit(0);
		break;
	case 5:
		cout << player1.getName() << " does some community service. TFI likes it." << endl;

		gpaRandom(currentStage,3,3.5);
		if(player1.getStrLvl()>-1&&player1.getStrLvl()<100)
		{
			player1.setStrLvl(player1.getStrLvl()+10);
		}
		player1.setComserv(player1.getComserv()+5);

		cout << "Your grade is: " << player1.getGps(currentStage) << endl;
		penter;
		break;
	case 6969:
		player1.setGpa(4);
		player1.setComserv(30);
		player1.setMoney(10000);
		player1.setSat(500);
		for (int i = 1; i < 8; i++) {
			player1.setGps(4,i);
			player1.setGpss(4,i);
		}
		superman = 1;
		break;
	default:
		cout << "WRONG INPUT";
		exit(0);
		break;
	}
	system("cls");
}


void moneyOption() {
	cout << "== MONEY OPTION ==" << endl;
	cout << "1. BE Jockey [+20 Gold, +5% Stress-level]" << endl;
	cout << "2. USE Jockey[-30 Gold, -10% Stress-level]" << endl;

	do {
		takeInput();
	} while (input < 1 || input > 2);

	switch(input) {
	case 1:
		player1.setMoney(player1.getMoney()+20);
		if(player1.getStrLvl()>-1&&player1.getStrLvl()<100) {
		player1.setStrLvl(player1.getStrLvl()+5);
		}
		cout << "You have been given 20 gold from your wallet," << endl  << "and your stress-level increased by 5%." << endl;
		penter;
		break;
	case 2:
		if (player1.getMoney()<=30) {
			cout << "Not enough balance!. Unable to make transaction!" << endl;
			penter;
			break;
		}
		player1.setMoney(player1.getMoney()-30);
		player1.setStrLvl(player1.getStrLvl()-5);
		cout << "You have been deducted 20 gold from your wallet," << endl << "and your stress-level decreased by 10%." << endl;
		penter;
		break;
	}
}

void exam(int currentStage) {
	cout << "== EXAMINATION TIME ==" << endl << endl;
	cout << "What do you want to do?" << endl;
	cout << "1. Study harder" << endl;
	cout << "2. Study as usual" << endl;
	cout << "3. YOLO  [try your luck w/o studying]" << endl;
	cout << "4. YOLO [Try cheating for the best score]" << endl;
	cout << "5. MONEY OPTION [Let the MONEY talk]"<< endl;

	do {
		takeInput();
	} while (input < 1 || input > 5);
		//EDIT BIAR RANDOM
	switch(input) {
		case 1:
			cout << player1.getName() << " studies harder...";
			gpaRandom(currentStage,3.6,4);
			player1.setStrLvl(player1.getStrLvl()+10);	
			cout << "Your Exam's grade is: " << player1.getGps(currentStage) << endl;
			penter;
			break;
		case 2:
			cout << player1.getName() << " Study as usual...";
			gpaRandom(currentStage,3,4);
			player1.setStrLvl(player1.getStrLvl()+5);
			cout << "Your Exam's grade is: " << player1.getGps(currentStage) << endl;
			penter;
			break;
		case 3:
			cout << player1.getName() << " goes YOLO and don't study...";
			gpaRandom(currentStage,0,4);
			cout << "Your Exam's grade is: " << player1.getGps(currentStage) << endl;
			penter;
			break;
		case 4:
			cout << player1.getName() << " goes YOLO and tries to cheat...";
			gpaRandom(currentStage,3.8,4);
			cout << "Your Exam's grade is: " << player1.getGps(currentStage) << endl;
			cheat = rand()%100;
			if(cheat<30)
			{
				cheat = 0;
			}
			else
			{
				cheat = 1;
			}
			//random antara 1-0
			penter;
			break;
		case 5:
			system("cls");
			moneyOption();
			system("cls");
			userInfo(6);
			exam(6);
			break;

		default:
			cout << "WRONG INPUT";
			penter;
			break;
	}
}


void examStage() {
	//EXAMINATION TIME
	userInfo(6);
	exam(6);
	player1.setGpss((player1.getGps(1)+ player1.getGps(2)+ player1.getGps(3)+ player1.getGps(4)+ player1.getGps(5)+ (player1.getGps(6)*3))/ 8,currentSmt);
	// Hasil semester
	system("cls");
	cout << "Semester " << currentSmt << " cleared..." << endl << endl;
	cout << "Exam Result: ";
	if (cheat == 1 || player1.getGpss(currentSmt)<2) {
		cout << "FAILED" << endl;
	}
	else {
		cout << "PASSED" << endl;
	}

	if (cheat == 1) {
		cout << "Oh, no! You have been caught cheating by Mr. Exam Supervisor." << endl;
		penter;
		system("cls");
		letterExpelled();
		penter;
		exit(0); //DESTRUCTOR PANGGIL
	}
	else if (player1.getGpss(currentSmt)<2) {
		cout << "Your GPS this semester : "<<player1.getGpss(currentSmt)<<endl;
		cout << "You seems underestimate the exam. You got bad score on the exam." << endl;
	}
	else {
		cout << "Your GPS this semester : "<<player1.getGpss(currentSmt)<<endl;
		cout << "You got good enough score to pass this semester. Nice luck." <<endl;
	}
	player1.setGpa((player1.getGpss(1)+player1.getGpss(2)+player1.getGpss(3)+player1.getGpss(4)+player1.getGpss(5)+player1.getGpss(6)+player1.getGpss(7)+player1.getGpss(8))/currentSmt); //Set GPA semesternya
	player1.setStrLvl(player1.getStrLvl()-20); //Stress level semester berikutnya di -20
	penter;
}

void impactSmt() {
	cout << "Do you want to take IMPACT SEMESTER? [-40 gold, GPA +0.2]" << endl << endl;
	cout << "1. YES" <<endl;
	cout << "2. NO" << endl;
	do {
		takeInput();
	} while (input < 1 || input > 2);
	switch (input) {
	case 1:
		if (player1.getMoney()>40) {
			player1.setMoney(player1.getMoney()-40);
			player1.setGpa(player1.getGpa()+0.2);
			cout << "You have been deducted 40 gold," << endl << "Your GPA has increased by 0.2 points." << endl;
		}
		else {
			cout << "Not enough gold! Unable to make transaction!" << endl;
		}
		penter;
		break;
	case 2:
		break;
	}
}

void stage() {
	int currentStage = 1;
	system("cls");
	if (currentSmt == 1) {letterEntry();}
	if (currentSmt == 7) {letterPrep();}
	do {
		userInfo(currentStage);
		quest(currentStage);
		if (superman == 1) {currentSmt = 7; break;}
		currentStage++;
	} while (currentStage <= 5);
	examStage();
	
}

// SKRIPSI TIME
void userInfoMini()
{
	cout << "======= USER INFO ========" << endl;
	cout << "Name            : " << player1.getName() << endl;
	cout << "Major           : Computer Science" << endl;
	cout << "GPA             : " << player1.getGpa() << endl;
	cout << "Com-serv hour(s): " << player1.getComserv() << endl;
	cout << "SAT point(s)    : " << player1.getSat() << endl;
	cout << "Stress-level    : " << player1.getStrLvl() << "%" << endl;
	cout << "Your money      : " << player1.getMoney() << endl <<endl;
}

/*void examinerInfo() {
	cout << "======= EXAMINER INFO ========" << endl;
	cout << "HP: " << hpnya 100 << endl;
	cout << "Strength: " << random << endl;
	cout << "Mood: " << endl;
}

void skripsiAction() {
	userInfoMini();
	examinerInfo();

	cout << "What do you want to do?" << endl;
	cout << "1. Submit/Revise your thesis (Strength: " << player1.getGPA() << ")";
	cout << "2. Study for awhile" << endl;
	cout << "3. Bribe the examiner (your GPA will be reduced by .02 points)" << endl;

	do {
		takeInput();
	} while (input < 1 || input > 3);

	switch (input) {
		case 1:
			//IPK mahasiswa pengaruhin HP dosen
		case 2:
			//pemain gak ngapa"in
		case 3:
			//pemain coba nyogok dosen biar moodnya berubah, tapi ipknya turun
	}
}

void skripsiTime() {
	cout << "== SKRIPSI TIME =="
	cout << "This is the time to face THE EXAMINER..." << endl;
	cout << "Prepared yourself..." << endl;
	penter;

	while (/*dosen belom kasih ijin lulus) {
		skripsiAction();
	}
}
*/

int main()
{
	PlaySound("opening.wav", NULL, SND_LOOP | SND_ASYNC); 
	mainMenu();
	for (int i = 1; i < 8; i++)
	{
		stage();
		currentSmt++;
		if (superman == 1) {currentSmt = 7; break;}
		if(currentSmt != 1 && currentSmt % 2 != 0) {
			system("cls");
			userInfoMini();
			impactSmt();
		}
	}
	//skripsiTime();
	return 0;
}



