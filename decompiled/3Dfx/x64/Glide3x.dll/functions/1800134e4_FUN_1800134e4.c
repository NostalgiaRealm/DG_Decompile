/*
 * FUN_1800134e4 at 1800134e4
 * undefined __fastcall FUN_1800134e4(longlong param_1, undefined8 * param_2, float * param_3)
 * Address ranges: 1800134e4-180013604
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800134e4(longlong param_1,undefined8 *param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = (float)(int)*param_2;
  fVar7 = (float)(int)((ulonglong)*param_2 >> 0x20);
  fVar4 = (float)(int)param_2[1];
  fVar5 = (float)(int)((ulonglong)param_2[1] >> 0x20);
  fVar3 = (float)*(uint *)(*(longlong *)(param_1 + 8) + 0xb0);
  uVar1 = *(uint *)(*(longlong *)(param_1 + 8) + 0xb4);
  param_3[6] = fVar4;
  param_3[7] = fVar7;
  param_3[10] = fVar6;
  fVar2 = (float)uVar1;
  *(ulonglong *)(param_3 + 2) = CONCAT44(fVar7,fVar6);
  fVar7 = 1.0 - (fVar7 + fVar7) / fVar2;
  param_3[0xb] = fVar5;
  *(ulonglong *)(param_3 + 0xe) = CONCAT44(fVar5,fVar4);
  fVar6 = (fVar6 + fVar6) / fVar3 - 1.0;
  param_3[1] = fVar7;
  fVar3 = (fVar4 + fVar4) / fVar3 - 1.0;
  param_3[5] = fVar7;
  *param_3 = fVar6;
  fVar2 = 1.0 - (fVar5 + fVar5) / fVar2;
  param_3[8] = fVar6;
  param_3[4] = fVar3;
  param_3[0xc] = fVar3;
  param_3[9] = fVar2;
  param_3[0xd] = fVar2;
  return;
}

