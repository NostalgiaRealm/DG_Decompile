/*
 * FUN_1006445c at 1006445c
 * int __stdcall FUN_1006445c(uint param_1, int param_2, undefined4 * param_3)
 * Address ranges: 1006445c-1006451a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1006445c(uint param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar3 = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  uVar2 = param_1;
  iVar5 = param_2;
  while (iVar5 != 0) {
    uVar1 = *(int *)(&DAT_100d5e5c + iVar5 * 4) - iVar3;
    iVar3 = 0;
    if (uVar2 < uVar1) {
      uVar2 = uVar2 & 0xfffffffe;
      iVar3 = 0;
      if (2 < uVar2) {
        iVar3 = uVar2 - 2;
        param_3[iVar4 * 4 + 2] = param_3[iVar4 * 4 + 2] + uVar2;
      }
      iVar4 = iVar4 + 1;
      param_3[iVar4 * 4] = param_2 - iVar5;
      param_3[iVar4 * 4 + 1] = iVar3;
      param_3[iVar4 * 4 + 2] = 0;
      param_3[iVar4 * 4 + 3] = 0;
      uVar2 = param_1;
    }
    else {
      param_3[iVar4 * 4 + 2] = param_3[iVar4 * 4 + 2] + uVar1;
      iVar5 = iVar5 + -1;
      uVar2 = uVar2 - uVar1;
    }
  }
  iVar4 = iVar4 + 1;
  if (iVar4 != 6) {
    param_3[iVar4 * 4] = 0xffffffff;
    param_3[iVar4 * 4 + 2] = 0xffffffff;
    param_3[iVar4 * 4 + 1] = 0xffffffff;
  }
  return iVar4;
}

