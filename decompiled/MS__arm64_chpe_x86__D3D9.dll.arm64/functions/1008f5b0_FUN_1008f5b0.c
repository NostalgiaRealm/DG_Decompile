/*
 * FUN_1008f5b0 at 1008f5b0
 * undefined FUN_1008f5b0(void)
 * Address ranges: 1008f5b0-1008f68f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1008f5b0(undefined8 param_1,uint param_2,int param_3,undefined8 *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  *param_4 = 0;
  param_4[1] = 0;
  iVar6 = 0;
  iVar5 = 0;
  uVar2 = param_2;
  iVar3 = param_3;
  while (iVar3 != 0) {
    uVar4 = *(int *)(&DAT_1016238c + iVar3 * 4) - iVar5;
    iVar5 = 0;
    if (uVar2 < uVar4) {
      uVar2 = uVar2 & 0xfffffffe;
      if (2 < uVar2) {
        *(uint *)(param_4 + iVar6 * 2 + 1) = *(int *)(param_4 + iVar6 * 2 + 1) + uVar2;
        iVar5 = uVar2 - 2;
      }
      iVar6 = iVar6 + 1;
      piVar1 = (int *)(param_4 + iVar6 * 2);
      *piVar1 = param_3 - iVar3;
      piVar1[1] = iVar5;
      piVar1[2] = 0;
      piVar1[3] = 0;
      uVar2 = param_2;
    }
    else {
      iVar3 = iVar3 + -1;
      *(uint *)(param_4 + iVar6 * 2 + 1) = *(int *)(param_4 + iVar6 * 2 + 1) + uVar4;
      uVar2 = uVar2 - uVar4;
    }
  }
  iVar6 = iVar6 + 1;
  if (iVar6 != 6) {
    param_4[iVar6 * 2] = 0xffffffffffffffff;
    *(undefined4 *)(param_4 + iVar6 * 2 + 1) = 0xffffffff;
  }
  return iVar6;
}

