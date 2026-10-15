/*
 * FUN_1010f488 at 1010f488
 * undefined FUN_1010f488(void)
 * Address ranges: 1010f488-1010f567
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010f488(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,undefined8 param_7,undefined8 *param_8,uint param_9,uint param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = (float)param_9;
  fVar1 = (float)param_10;
  fVar8 = (param_5 + param_5) / fVar2;
  fVar7 = (param_6 + param_6) / fVar1;
  fVar6 = ((param_1 + param_1) - fVar2) / fVar2;
  fVar2 = ((param_3 + param_3) - fVar2) / fVar2;
  fVar4 = fVar6 + fVar8;
  fVar5 = (fVar1 - (param_2 + param_2)) / fVar1;
  fVar1 = (fVar1 - (param_4 + param_4)) / fVar1;
  fVar8 = fVar2 - fVar8;
  fVar3 = fVar5 - fVar7;
  fVar7 = fVar1 + fVar7;
  param_8[1] = 0;
  *param_8 = CONCAT44(fVar3,fVar4);
  param_8[3] = 0;
  param_8[2] = CONCAT44(fVar5,fVar6);
  param_8[5] = 0;
  param_8[4] = CONCAT44(fVar3,fVar8);
  param_8[7] = 0;
  param_8[6] = CONCAT44(fVar5,fVar2);
  param_8[9] = 0;
  param_8[8] = CONCAT44(fVar7,fVar8);
  param_8[0xb] = 0;
  param_8[10] = CONCAT44(fVar1,fVar2);
  param_8[0xd] = 0;
  param_8[0xc] = CONCAT44(fVar7,fVar4);
  param_8[0xf] = 0;
  param_8[0xe] = CONCAT44(fVar1,fVar6);
  param_8[0x11] = 0;
  param_8[0x10] = CONCAT44(fVar3,fVar4);
  param_8[0x13] = 0;
  param_8[0x12] = CONCAT44(fVar5,fVar6);
  return;
}

