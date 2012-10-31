#include<iostream>
#include<mysql.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

#include"database_details.h"

class Mysql
{
   protected:
   MYSQL *connect;
   MYSQL_RES *res_set;
   MYSQL_ROW row;
//   unsigned int i=0;
   int j, i;
   string qry;
   
   public:
   Mysql();
   ~Mysql();
    
//   void Select(string column, string table, int choice);
   void Select();
   void getBranchNames(string branchname[], int &size);
   void getRoomNos(string roomno[], int &size);
   void query(string field[], string qry, int &size);
    
};
