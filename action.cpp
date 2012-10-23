#include <iostream>

using namespace std;

int main ()
{  
   cout << "Content-type:text/html\r\n\r\n";

   // To display roll no fields

   cout<<"function rolls()"<<endl
       <<"{"<<endl
       <<"var FieldName=new Array(\"Branch Name\", \"Batch\", \"Sem\", \"Subject\", \"Subject Code\");"<<endl
       <<"var value = document.getElementById(\"total_branches\").value;"<<endl
       <<"document.getElementById(\"myTable\").innerHTML = \" \"; "<<endl
       <<"var num = parseInt(value);"<<endl
       <<"var table=document.getElementById(\"myTable\");"<<endl
       <<"for(i = 0; i < num; i++)"<<endl
       <<"{"<<endl
       <<"var row = table.insertRow(i);"<<endl
       <<"for(j=0; j<5; j++)"<<endl
       <<"{"<<endl
       <<"var cell=row.insertCell( j );"<<endl
       <<"var select = document.createElement(\"select\");"<<endl
       <<"var option = document.createElement(\"option\");"<<endl
       <<"option.text = FieldName[j] + \" \" + (i + 1);"<<endl
       <<"option.value = FieldName[j] + (i + 1);"<<endl
       <<"select.name = FieldName[j] + \"_\" + (i + 1); "<<endl                    
       <<"select.appendChild(option);"<<endl
       <<"cell.appendChild(select);"<<endl
       <<"}"<<endl
       <<"}"<<endl
       <<"}"<<endl;
  
  // To display room fields
  
   cout<<"function rooms()"<<endl
       <<"{"<<endl
       <<"var FieldName=new Array(\"Room No.\", \"Rows\", \"Cols\")"<<endl
       <<"var value = document.getElementById(\"total_rooms\").value;"<<endl
       <<"document.getElementById(\"myTable1\").innerHTML = \" \"; "<<endl
       <<"var num = parseInt(value);"<<endl
       <<"var table=document.getElementById(\"myTable1\");"<<endl;

   cout<<"for(i=0; i<num; i++)"<<endl
       <<"{"<<endl
       <<"var row = table.insertRow(i);"<<endl
       <<"for(j=0; j<3; j++)"<<endl
       <<"{"<<endl
       <<"var cell=row.insertCell( j );"<<endl
       <<"if( j == 0)"<<endl
       <<"{"<<endl
       <<"var select = document.createElement(\"select\");"<<endl
       <<"var option = document.createElement(\"option\");"<<endl
       <<"option.text = FieldName[j] + " " + (i + 1);"<<endl
       <<"option.value = FieldName[j] + (i + 1);"<<endl                    
       <<"select.name = FieldName[j] + \"_\" + (i + 1);"<<endl
       <<"select.appendChild(option);"<<endl
       <<"cell.appendChild(select);"<<endl
       <<"}"<<endl
       <<"else"<<endl
       <<"{"<<endl
       <<"var input = document.createElement(\"input\"); "<<endl
       <<"input.type = \"text\";"<<endl
       <<"input.defaultValue = FieldName[j] + " " + (i + 1);"<<endl
       <<"input.name = FieldName[j] + \"_\" + (i + 1);"<<endl
       <<"cell.appendChild(input);"<<endl
       <<"}"<<endl
       <<"}"<<endl
       <<"}"<<endl
       <<"}"<<endl;
}
