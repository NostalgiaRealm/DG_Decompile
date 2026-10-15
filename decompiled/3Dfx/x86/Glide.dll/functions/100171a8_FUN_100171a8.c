/*
 * FUN_100171a8 at 100171a8
 * undefined __stdcall FUN_100171a8(int * param_1, int * param_2, uint param_3, int param_4)
 * Address ranges: 100171a8-10017210
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100171a8(int *param_1,int *param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  for (uVar5 = param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    iVar1 = *param_1;
    iVar2 = param_1[1];
    iVar3 = param_1[2];
    iVar4 = param_1[3];
    param_1 = param_1 + 4;
    *param_2 = iVar1 + param_4;
    param_2[1] = iVar2 + param_4;
    param_2[2] = iVar3 + param_4;
    param_2[3] = iVar4 + param_4;
    param_2 = param_2 + 4;
  }
  uVar5 = 0;
  if ((param_3 & 3) != 0) {
    do {
      param_2[uVar5] = param_1[uVar5] + param_4;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (param_3 & 3));
  }
  return;
}

