#include "getdetails.h"

GetDetails :: GetDetails()
{
   cout << "Content-type:text/html\r\n\r\n";
   cout << "<html>\n";
   cout << "<head>\n";
   cout << "<title>Seat Plan</title>\n";
   cout << "</head>\n";
}

void GetDetails :: body()
{
   cout << "<body>\n";

   getDetails();

   cout << "</body>\n";
}

void GetDetails :: readField(string &fieldname, string field)
{
   fi = formData.getElement(field);  
   if( !fi->isEmpty() && fi != (*formData).end()) 
   {  
      fieldname = **fi;
   }
}

void GetDetails :: getDetails()
{
   // Get Name of examination
   readField(examination, "exam");
   
   // Date
   readField(day, "day");
   readField(month, "month");
   readField(year, "year");
   
   date = day + "/" + month + "/" + year;
   
   // Time
   readField(hours, "hours");
   readField(mints, "mints");
   readField(am_pm, "ampm");
   
   time = hours + ":" + mints + " " + am_pm;
   
   // Semester
   readField(semester, "sem");
   
}

void GetDetails :: showDetails()
{
   cout << "Examination: " << examination << endl
        << "<br>Date: " << date << endl
        << "<br>Time: " << time << endl
        << "<br>Semester: " << semester << endl;
}

GetDetails :: ~GetDetails()
{
   cout << "</html>\n";
}
