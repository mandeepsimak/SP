#include "javascript.h"

// Constructor
JS :: JS()
{
   cout << "Content-type:text/html\r\n\r\n";
}

void JS :: addRollNoFields()
{
   MySQL.getBranchNames(BranchName, BranchSize);

   cout << "function addRollNoFields()" << endl
        << "{" << endl
        << "var FieldName = new Array(\"Branch Name\", \"Batch\", "
        << "\"Sem\", \"Subject\", \"Subject Code\");" << endl;
       
   cout << "var BranchNames = new Array(";
   for(int i = 0; i < BranchSize; i++)
   {
      cout << "\"" << BranchName[i] << "\", ";
   }
   cout << "\"END\");" << endl;
       
   cout << "var value = document.getElementById(\"total_branches\").value;" << endl
        << "document.getElementById(\"rollnos\").innerHTML = \" \"; " << endl
        << "var num = parseInt(value);" << endl
        << "var table=document.getElementById(\"rollnos\");" << endl
        << "for(i = 0; i < num; i++)" << endl
        << "{" << endl
        << "var row = table.insertRow(i);" << endl
        << "var cell=row.insertCell( j );" << endl
        << "for(j=0; j<5; j++)" << endl
        << "{" << endl
        << "if( j == 0)" << endl
        << "{" << endl
//        << "var input = document.createElement(\"input\");" << endl
//        << "input.type = \"text\";" << endl
//        << "input.defaultValue = FieldName[j] + " " + (i + 1);" << endl
//        << "input.name = FieldName[j] + \"_\" + (i + 1);" << endl
        << "var select = document.createElement(\"select\");" << endl
        << "var option = document.createElement(\"option\");" << endl
        << "option.text = FieldName[j] + \" \" + (i + 1);" << endl
        << "option.value = FieldName[j] + (i + 1);" << endl
        << "select.name = FieldName[j] + \"_\" + (i + 1); " << endl 
        << "select.appendChild(option);" << endl
        << "cell.appendChild(select);" << endl
        << "if(j == 0)" << endl
        << "{" <<endl
        << "for(k = 0; k < " << BranchSize << "; k++ )" << endl
        << "{" << endl
        << "select.options[select.options.length] = new Option(BranchNames[k], BranchNames[k]); " //<< endl
//        sel.options[sel.options.length] = new Option("text3","value3"); 
//        << "var option = document.createElement(\"option\");" << endl
        << "select.appendChild(option);" //<< endl
        << "}" << endl
        << "}" << endl
        << "}" << endl
        << "else" << endl
        << "{" << endl
        << "var input = document.createElement(\"input\"); " << endl
        << "input.type = \"text\";" << endl
        << "input.defaultValue = FieldName[j] + " " + (i + 1);" << endl
        << "input.name = FieldName[j] + \"_\" + (i + 1);" << endl
        << "cell.appendChild(input);" << endl
        << "}" << endl
//        << "cell.appendChild(input);" << endl
        << "}" << endl
        << "}" << endl
        << "}" << endl;
}

void JS :: addRoomFields()
{
   
  // To display room fields
  
  MySQL.getRoomNos(RoomNos, RoomSize);
  
   cout << "function addRoomFields()" << endl
        << "{" << endl
        << "var FieldName=new Array(\"Room No.\", \"Rows\", \"Cols\")" << endl
        << "var value = document.getElementById(\"total_rooms\").value;" << endl;
        
   cout << "var RoomNos = new Array(";
   for(int i = 0; i < RoomSize; i++)
   {
      cout << "\"" << RoomNos[i] << "\", ";
   }
   cout << "\"END\");" << endl;
        
   cout << "document.getElementById(\"rooms\").innerHTML = \" \"; " << endl
        << "var num = parseInt(value);" << endl
        << "var table=document.getElementById(\"rooms\");" << endl;

   cout << "for(i=0; i<num; i++)" << endl
        << "{" << endl
        << "var row = table.insertRow(i);" << endl
        << "for(j=0; j<3; j++)" << endl
        << "{" << endl
        << "var cell=row.insertCell( j );" << endl
        << "if( j == 0)" << endl
        << "{" << endl
        << "var select = document.createElement(\"select\");" << endl
        << "var option = document.createElement(\"option\");" << endl
        << "option.text = FieldName[j] + " " + (i + 1);" << endl
        << "option.value = FieldName[j] + (i + 1);" << endl                    
        << "select.name = FieldName[j] + \"_\" + (i + 1);" << endl
        << "select.appendChild(option);" << endl
        << "cell.appendChild(select);" << endl
        << "for(k = 0; k < " << RoomSize << "; k++ )" << endl
        << "{" << endl
        << "select.options[select.options.length] = new Option(RoomNos[k], RoomNos[k]); " //<< endl
        << "select.appendChild(option);" //<< endl
        << "}" << endl
        << "}" << endl
        << "else" << endl
        << "{" << endl
        << "var input = document.createElement(\"input\"); " << endl
        << "input.type = \"text\";" << endl
        << "input.defaultValue = FieldName[j] + " " + (i + 1);" << endl
        << "input.name = FieldName[j] + \"_\" + (i + 1);" << endl
        << "cell.appendChild(input);" << endl
        << "}" << endl
        << "}" << endl
        << "}" << endl
        << "}" << endl;
}

JS :: ~JS()
{}
