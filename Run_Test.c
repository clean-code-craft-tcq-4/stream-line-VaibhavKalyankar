#include <stdio.h>
#include "BMS_DataSender.h"

void TEST_CASE_01()
{
  assert(SendBatteryParameters(NULL,50) == DATA_SENDING_FAILED);
  
}
int main()
{
  TEST_CASE_01();
}
