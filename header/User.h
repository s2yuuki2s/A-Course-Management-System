#pragma once
#include "Libs.h"

struct subject {
  string IDMH;
  string name;
  subject *next;
};

struct Account {
  string account;
  string password;
};

struct academyStaff {
  string ID;
  string name;
  Account accountAcademy;
  subject *ListSubject;
  academyStaff *pNext;
};

struct student {
  string MSSV;
  string name;
  string className;
  student *sNext;
};
