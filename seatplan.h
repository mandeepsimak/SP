#include <iostream>

using namespace std;

const int MAX_SIZE = 10;
const int MIN_SIZE = 8;

class SP
{
   int i, subSize_IT[MIN_SIZE][MIN_SIZE], totalSem_IT;
   string subCode_IT[MIN_SIZE][MAX_SIZE];
   
   public:
      SP();
      ~SP();
   
      void head();
      void javascript();
      void body();
//      void form();
      void newform();
};
