#include "seatplan.h"

// Constructor
SP :: SP()
{
   i = 0;
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
   
   newform();
   
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
/*void SP :: form() // Old form
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
}*/

void SP :: newform()
{
   cout << " <form action = \"SP-CPP/getdetails.cgi\">" << endl
        << " <b>" << endl
        << "Name of examinaton"
   // Radio buttons for examinaton
        << "<input type=\"radio\" name=\"exam\" value=\"Sessional\"" << endl
        << " checked=\"checked\"/> Sessional" << endl
        << "<input type=\"radio\" name=\"exam\" value=\"Dec\" /> Dec" << endl
        << "<input type=\"radio\" name=\"exam\" value=\"June\" /> June <br><br>" << endl
        
   // Date
        << "Date <select name=\"day\">" << endl;
   // Day
   for(i = 0; i <= 31; i++)
   {
      if (i == 0)
         cout << "<option value=\"DD\" >DD</option>" << endl;
      else
         cout << "<option value=\"" << i << "\" >" << i << "</option>" << endl;
   }
   
   cout << "</select>" << endl
        << "   <select name=\"month\">" << endl;
   // Month
   for(i = 0; i <= 12; i++)
   {
      if (i == 0)
         cout << "<option value=\"MM\" >MM</option>" << endl;
      else
         cout << "<option value=\"" << i << "\" >" << i << "</option>" << endl;
   }
   
   cout << "</select>" << endl
        << "   <select name=\"year\">" << endl;
   // Year
   for(i = 2011; i <= 2025; i++)
   {
      if (i == 2011)
         cout << "<option value=\"YYYY\" >YYYY</option>" << endl;
      else
         cout << "<option value=\"" << i << "\" >" << i << "</option>" << endl;
   }
   
   cout << "</select>" << endl
   // Time
        << "<br><br>Time <select name=\"hours\">" << endl;
   // Hours
   for(i = 1; i <= 12; i++)
   {
      cout << "<option value=\"" << i << "\" >" << i << "</option>" << endl;
   }
   
   cout << "</select>" << endl
        << "   <select name=\"mints\">" << endl;
   // Minutes
   for(i = 0; i <= 6; i++)
   {
      if (i == 0)
         cout << "<option value=\"00\" >00</option>" << endl;
      else
         cout << "<option value=\"" << (i * 10) << "\" >" << (i * 10) << "</option>" << endl;
   }
   
   cout << "</select>" << endl
        << "   <select name=\"ampm\">" << endl;
   // AM/PM
   cout << "<option value=\"AM\" >AM</option>" << endl;
   cout << "<option value=\"PM\" >PM</option>" << endl;
     
   cout << "</select>" << endl;
   
   // Semester
   cout << "<br><br>Semester"
   // Radio buttons for semester
        << "<input type=\"radio\" name=\"sem\" value=\"Even\"" << endl
        << " checked=\"checked\"/> Even" << endl
        << "<input type=\"radio\" name=\"sem\" value=\"Odd\" /> Odd" << endl;
   
   cout << "<br><input type=\"submit\" value=\"Submit\" id=\"submit\" >" << endl;
        
   cout << "</form>" << endl;
}

SP :: ~SP()
{
   cout << "</html>" << endl;
}

