#include <stdio.h>
#include "BMS_DataSender.h"
#include <assert.h>
#include <stdlib.h>

void TEST_CASE_01()
{
  SensorData_st test_01;
  assert(SendBatteryParameters(NULL,50) == DATA_SENDING_FAILED);
  
}
int main()
{
  TEST_CASE_01();
}
