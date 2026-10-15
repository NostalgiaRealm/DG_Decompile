/*
 * FUN_10037368 at 10037368
 * undefined FUN_10037368(void)
 * Address ranges: 10037368-1003745b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10037368(float *param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  
  switch(param_2) {
  default:
    fVar4 = param_1[1];
    fVar3 = *param_1;
    break;
  case 6:
    fVar4 = (float)(int)*(short *)((int)param_1 + 2);
    fVar3 = (float)(int)*(short *)param_1;
    break;
  case 9:
    sVar1 = *(short *)((int)param_1 + 2);
    sVar2 = *(short *)param_1;
    fVar4 = 32767.0;
    goto LAB_100373d8;
  case 0xb:
    sVar1 = *(short *)((int)param_1 + 2);
    sVar2 = *(short *)param_1;
    fVar4 = 65535.0;
LAB_100373d8:
    return CONCAT44((float)(int)sVar1 / fVar4,(float)(int)sVar2 / fVar4);
  case 0xd:
    return CONCAT44((float)(float2)((uint)*param_1 >> 0x10),(float)SUB42(*param_1,0));
  }
  return CONCAT44(fVar4,fVar3);
}

