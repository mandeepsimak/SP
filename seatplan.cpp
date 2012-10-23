#include <iostream>

using namespace std;

int main (void)
{  
   cout << "Content-type:text/html\r\n\r\n";
   
   cout<<"<html>\n"<<endl;
   
   cout<<"<head>\n"<<endl;
   cout<<"<title>Sitting Plan</title>\n"<<endl;
   cout<<"<script src=\"action.js\"></script>"<<endl
       <<"</head>"<<endl;
   
   cout<<"<body>"<<endl;

   cout<<"<center><h2>Sitting Plan</h2>"<<endl
       <<"<h4>Enter details for sitting plan</h4></center>"<<endl;

   cout<<"<form >"<<endl
       <<"<b>"<<endl
       <<"Name of examinaton"
       <<" <input type=\"text\" id=\"exam_name\" name=\"name_of_exam\"> "
       <<" <br />"<<endl
       <<"Date <input type=\"text\" id=\"date\" name=\"date\">  <br />"<<endl
       <<"Timings <input type=\"text\" id=\"time\" name=\"time\">  <br />"<<endl
       <<"Total Branches"
       <<" <input type=\"text\" id=\"total_branches\" name=\"totalbranches\" value=\"Interger no. only\"  onchange=\"rolls()\" onmousedown=\"javascript:this.value='';\" >  <br />"<<endl;

   cout<<"<div id=\"RollNo\">"<<endl
       <<"<table id=\"myTable\">"<<endl
       <<"</table>"<<endl
       <<"</div>"<<endl;

   cout<<"Total Rooms"
       <<" <input type=\"text\" id=\"total_rooms\" name=\"total_rooms\" onchange=\"rooms()\" onmousedown=\"javascript:this.value='';\" value=\"Interger no. only\" >  <br />"<<endl;

   cout<<"<div id=\"Room\">"<<endl
       <<"<table id=\"myTable1\">"<<endl
       <<"</table>"<<endl
       <<"</div>"<<endl;

   cout<<"<input type=\"submit\" value=\"Submit\" id=\"submit\" >"<<endl;

   cout<<"</form>"<<endl
       <<"</body>"<<endl;

   return 0;  
}
