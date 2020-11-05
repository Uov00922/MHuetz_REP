#include <iostream>
#include "date.hpp"
#include <string.h>

int main() {

std::cout << "Enter the dates in year month day (YYYY MM DD) format, one date per line. \nExample: To finish, enter the date 0 0 0 (0 0 0).\n\n";

  int yy, mm, dd;
  //char year, month, day;
  int i = 0;

  //char end1[5] = "0 0 ", end2[2] = "0";
  //strcpy(frase2,frase1);
  //std::cout << "Cadena # 1: " << frase1 << endl;
  //std::cout << "Cadena # 2: " << frase2 << endl;

  //char colon[1], Desc[20], year[5], month[3], day[3], text[20];
  std::string texto, colon, Desc, year, month, day;
  /*end1 = {'0',' ','0',' '};
  end2 = {'0','\n'};*/

  date dates[20];
  date storeDates[20];

  std::cout << "1\nTexto de fin:'" << end1 << end2 << "'\n" ;
  getline(std::cin,texto);
  //std::cin >> texto;//>> yy >> mm >> dd;
  std::cout << "2\nTexto introducido: " << texto << "\n";
  std::cout << "3\n";
  do {
    year = "";
    year= texto.c_str()[0]+texto.c_str()[1]+texto.c_str()[2]+texto.c_str()[3];
    //printf("%s",year);
    std::cout << "4\nYear:" << year << "-" << texto[0] << texto[1] << texto[2] << texto[3] << "\n";
    //yy = {texto[0],texto[1],texto[2],texto[3]};
    month = texto[5]&texto[6];
    day = texto[8]&texto[9];
    colon = texto [10];
    //Desc = (texto,(strlen(texto)-11));
    Desc = texto[11]&texto[12];
    //const char *str = "hello";
    //std::cout << str << ":" << strlen(str);
    std::cout << year << " - " << month << " - " << day << " - " << Desc;

    dates[i].askYear(yy);
    dates[i].askMonth(mm);
    dates[i].askDay(dd);
    storeDates[i].askYear(yy);
    storeDates[i].askMonth(mm);
    storeDates[i].askDay(dd);
    i++;
    //std::cin >> yy >> mm >> dd;
  }
  while (i<3 );//|| (strncmp(year,end1,4) && strncmp(month,end2,2))); //yy != 0 && mm != 0 && dd != 0)

  std::cout << "pepe\n";
  return 0;


  int DayNumber[i];
  for (int j = 0; j < i; j++) {
    DayNumber[j] = dates[j].inTotalDays();
  }

  for (int s = 0; s < i; s++) {
    int x = s;
    int fromstart = DayNumber[x];
    for (int s2 = s + 1; s2 < i; s2++) {
      if (DayNumber[s2] < fromstart) {
        fromstart = DayNumber[s2];
        x = s2;
      }
    }
    DayNumber[x] = DayNumber[s];
    DayNumber[s] = fromstart;
  }

  for (int n = 0; n < i; n++) {
    for (int v = 0; v < i; v++) {
      if (DayNumber[n] == storeDates[v].inTotalDays()) {
        storeDates[v].outDate();
        std::cout << DayNumber[n] << "\n";
      }
    }
  }

  return 0;
}
