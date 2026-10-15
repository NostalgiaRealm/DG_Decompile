/*
 * FUN_18001a864 at 18001a864
 * undefined __fastcall FUN_18001a864(undefined8 param_1, int * param_2, int * param_3, uint param_4, int param_5)
 * Address ranges: 18001a864-18001a8c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001a864(undefined8 param_1,int *param_2,int *param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  for (uVar5 = param_4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    iVar1 = *param_2;
    iVar2 = param_2[1];
    iVar3 = param_2[2];
    iVar4 = param_2[3];
    param_2 = param_2 + 4;
    *param_3 = iVar1 + param_5;
    param_3[1] = iVar2 + param_5;
    param_3[2] = iVar3 + param_5;
    param_3[3] = iVar4 + param_5;
    param_3 = param_3 + 4;
  }
  uVar6 = 0;
  if ((param_4 & 3) != 0) {
    do {
      uVar5 = (int)uVar6 + 1;
      param_3[uVar6] = param_2[uVar6] + param_5;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < (param_4 & 3));
  }
  return;
}

