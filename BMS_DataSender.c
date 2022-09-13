#include<stdio.h>

DataStatus_en SendBatteryParameters(SensorData_st *SensorData,int DataSize)
{
  DataStatus_en FinalStatus = DATA_SENDING_FAILED ;
  
  if(SensorData != NULL)
  {
    FinalStatus = GenerateSensorData(SensorData,DataSize);
    if(FinalStatus)
    {
      PrintBatteryData(SensorData,DataSize);
      FinalStatus = DATA_SENDING_OK;
    }
  }
  return(FinalStatus);
}
    
