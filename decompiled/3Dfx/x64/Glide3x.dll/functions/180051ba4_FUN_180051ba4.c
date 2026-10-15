/*
 * FUN_180051ba4 at 180051ba4
 * undefined __fastcall FUN_180051ba4(undefined8 param_1, undefined8 * param_2, uint param_3, uint param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10)
 * Address ranges: 180051ba4-180051d87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180051ba4(undefined8 param_1,undefined8 *param_2,uint param_3,uint param_4,float param_5,
                  float param_6,float param_7,float param_8,float param_9,float param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = (float)param_3;
  fVar2 = (float)param_4;
  fVar5 = (param_9 + param_9) / fVar1;
  fVar8 = ((param_5 + param_5) - fVar1) / fVar1;
  fVar1 = ((param_7 + param_7) - fVar1) / fVar1;
  fVar7 = (param_10 + param_10) / fVar2;
  fVar4 = fVar5 + fVar8;
  fVar6 = (fVar2 - (param_6 + param_6)) / fVar2;
  fVar5 = fVar1 - fVar5;
  fVar2 = (fVar2 - (param_8 + param_8)) / fVar2;
  fVar3 = fVar6 - fVar7;
  fVar7 = fVar7 + fVar2;
  *param_2 = CONCAT44(fVar3,fVar4);
  param_2[1] = 0;
  param_2[2] = CONCAT44(fVar6,fVar8);
  param_2[3] = 0;
  param_2[4] = CONCAT44(fVar3,fVar5);
  param_2[5] = 0;
  param_2[6] = CONCAT44(fVar6,fVar1);
  param_2[7] = 0;
  param_2[8] = CONCAT44(fVar7,fVar5);
  param_2[9] = 0;
  param_2[10] = CONCAT44(fVar2,fVar1);
  param_2[0xb] = 0;
  param_2[0xc] = CONCAT44(fVar7,fVar4);
  param_2[0xd] = 0;
  param_2[0xe] = CONCAT44(fVar2,fVar8);
  param_2[0xf] = 0;
  param_2[0x10] = CONCAT44(fVar3,fVar4);
  param_2[0x11] = 0;
  param_2[0x12] = CONCAT44(fVar6,fVar8);
  param_2[0x13] = 0;
  return;
}

