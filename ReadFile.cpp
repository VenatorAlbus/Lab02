#include "ReadFile.h"
#include <iostream>
#include <string>
//this is a comment
 /*ReadFile* createReadFile(const char* file_name) 
{
   ReadFile* rf = new ReadFile;

   rf->input_file.open(file_name);
   rf->closed = false;
   rf->_eof = false;

   return rf;
}

void destroyReadFile(ReadFile* rf)
{
   close(rf);
   delete rf;
}

bool eof(ReadFile* rf)
{
   return rf->_eof;
}

void close(ReadFile* rf)
{
   if (!rf->closed)
   {
      rf->input_file.close();
      rf->closed = true;
   }
}

String* readLine(ReadFile* rf)
{
   if (rf->closed) return NULL;
   if (rf->_eof) return NULL;

   string text;
   rf->_eof = !(getline(rf->input_file, text));

   String* str = new String((const char*) text.c_str());
   return str;
}
*/
ReadFile::Readfile()
{
   ReadFile* file = new ReadFile;
   ifstream file;  
}



ReadFile::~ReadFile()
{
   ReadFile file*;
   delete file;
}





void DisplayFile() {
   String* file_name = readString("Please enter the filename");
   displayString(file_name);
}






