using namespace std;

#include <stdio.h>
#include <iostream>
#include <vector>
#include <locale>

#include "bank.h"
#include "client.h"
#include "individualclient.h"
#include "legalentity.h"
#include "terminal.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	Terminal* terminal = new Terminal();
	terminal->LoadDemoData();
	terminal->ShowDemo();

	terminal->Start();

	delete(terminal);
	return 0;
}