#include <stdio.h>
#include <stdlib.h>
#include "BMS_DataSender.h"

DataStatus_en GenerateSensorData(SensorDta_st *SensorData,int DataSize)
{
  DataStatus_en FinalStatus = DATA_GENERATION_FAILED;
  
  if((SensorData != NULL) && (DataSize))
  {
    FinalStatus = DATA_GENERATION_OK;
    
    for(int Count=0;Count<DataSize;Count++)
    {
          SensorData->Temprature[Count] = rand()%TEMP_RANGE;
          SensorData->Soc[Count] = rand()%SOC_RANGE;
    }
  
  }
  
  return(FinalStatus);
}
    

DataStatus_en SendBatteryParametersa(SensorDta_st *SensorData,int DataSize)
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
    
