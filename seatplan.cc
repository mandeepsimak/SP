#include "seatplan.h"

// Constructor
SP :: SP()
{
   cout << "Content-type:text/html\r\n\r\n";
   
   cout<<"<html>\n"<<endl;
}

// Head section
void SP :: head()
{
   cout << "<head>\n" << endl;
   cout << "<title>Sitting Plan</title>\n" << endl;
   
   javascript();
   
   cout << "</head>" << endl;
}

// Body Section
void SP :: body()
{
   cout << "<body>" << endl;
   
   cout << "<div>" << endl;

   cout << "<div id = \"header\">" << endl;

   cout << "<center><h2>Sitting Plan</h2>" << endl
        << "<h4>Enter details for sitting plan</h4></center>" << endl;
   
   cout << "</div>" << endl;
   cout << "<div id = \"form\" >" << endl;
   
   form();
   
   cout << "</div>" << endl;
   cout << "<div>" << endl;
   cout << "</body>" << endl;
}

// Include javascript files
void SP :: javascript()
{

   cout << "<script src=\"fields.js\"></script>" << endl;
//       <<"<script src=\"action.js\"></script>"<<endl;

}

// Form for getting values
void SP :: form()
{
   cout << " <form >" << endl
        << " <b>" << endl
        << " Name of examinaton"
        << " <input type=\"text\" id=\"exam_name\" name=\"name_of_exam\" <br />" << endl
        //<< " onfocus = \"showBatch(this.value)\"> "
        << " <br />" << endl
        << " Date <input type=\"text\" id=\"date\" name=\"date\">  <br />" << endl
        << " Timings <input type=\"text\" id=\"time\" name=\"time\">  <br />" << endl
        << " Total Branches"
        << " <input type=\"text\" id=\"total_branches\" "
        << " name=\"totalbranches\" value=\"Interger no. only\"  "
        << " onchange=\"addRollNoFields()\" onmousedown=\"javascript:this.value='';\" >"
        << " <br />" << endl;
   
   cout << " <div id=\"rollnos_list\">" << endl
        << " </div>" << endl;
   
   cout << " <table id=\"rollnos\">" << endl
        << " </table>" << endl;

   cout << " Total Rooms"
        << " <input type=\"text\" id=\"total_rooms\" name=\"total_rooms\" "
        << " onchange=\"addRoomFields()\" onmousedown=\"javascript:this.value='';\" "
        << " value=\"Interger no. only\" >  <br />" << endl;

        
   cout << "<div id=\"rooms_list\">" << endl
        << "</div>" << endl;


   cout << "<table id=\"rooms\">" << endl
        << "</table>" << endl;
  
   cout << "<input type=\"submit\" value=\"Submit\" id=\"submit\" >" << endl;

   cout << "</form>" << endl;
}

SP :: ~SP()
{
   cout << "</html>" << endl;
}

