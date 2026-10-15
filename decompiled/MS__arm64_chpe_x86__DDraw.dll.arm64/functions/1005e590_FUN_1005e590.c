/*
 * FUN_1005e590 at 1005e590
 * undefined FUN_1005e590(void)
 * Address ranges: 1005e590-1005e6cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1005e590(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  piVar1 = param_1 + 1;
  *param_1 = *param_2;
  FUN_100914d0(*piVar1);
  piVar1[0] = 0;
  piVar1[1] = 0;
  puVar2 = param_2 + 2;
  param_1[3] = 0;
  if (*puVar2 != 0) {
    uVar4 = param_2[3];
    iVar5 = uVar4 * 4;
    if (uVar4 >> 0x1e != 0) {
      iVar5 = -1;
    }
    iVar5 = FUN_100914b0(iVar5);
    *piVar1 = iVar5;
    if (iVar5 != 0) {
      FUN_100917a0(iVar5,param_2[1],((ulonglong)*puVar2 & 0x3fffffff) << 2);
      param_1[2] = *puVar2;
      param_1[3] = param_2[3];
    }
  }
  piVar1 = param_1 + 4;
  FUN_100914d0(*piVar1);
  piVar1[0] = 0;
  piVar1[1] = 0;
  piVar3 = param_2 + 5;
  param_1[6] = 0;
  if (*piVar3 != 0) {
    uVar4 = param_2[6];
    iVar5 = uVar4 * 8;
    if (uVar4 >> 0x1d != 0) {
      iVar5 = -1;
    }
    iVar5 = FUN_100914b0(iVar5);
    *piVar1 = iVar5;
    if (iVar5 != 0) {
      FUN_100917a0(iVar5,param_2[4],*piVar3 << 3);
      param_1[5] = *piVar3;
      param_1[6] = param_2[6];
    }
  }
  return param_1;
}

