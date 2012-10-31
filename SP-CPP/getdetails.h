#include <iostream>
#include <vector>  
#include <string>  
#include <stdio.h>  
#include <stdlib.h> 

#include <cgicc/CgiDefs.h> 
#include <cgicc/Cgicc.h> 
#include <cgicc/HTTPHTMLHeader.h> 
#include <cgicc/HTMLClasses.h>  

using namespace std;
using namespace cgicc;

class GetDetails
{
   Cgicc formData;
   form_iterator fi;
   
   string examination, date, day, month, year, time, hours, mints, am_pm,
          semester;
   
   public:
      GetDetails();
      ~GetDetails();
      
      void body();
      void getDetails();
      void showDetails();
      void readField(string &fieldname, string field);
};
