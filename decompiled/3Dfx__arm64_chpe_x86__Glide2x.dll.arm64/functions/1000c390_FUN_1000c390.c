/*
 * FUN_1000c390 at 1000c390
 * undefined FUN_1000c390(void)
 * Address ranges: 1000c390-1000c4cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1000c390(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  piVar1 = param_1 + 1;
  *param_1 = *param_2;
  FUN_1007a060(*piVar1);
  piVar1[0] = 0;
  piVar1[1] = 0;
  piVar2 = param_2 + 2;
  param_1[3] = 0;
  if (*piVar2 != 0) {
    uVar3 = param_2[3];
    iVar4 = uVar3 * 4;
    if (uVar3 >> 0x1e != 0) {
      iVar4 = -1;
    }
    iVar4 = FUN_1007a040(iVar4);
    *piVar1 = iVar4;
    if (iVar4 != 0) {
      FUN_1007a780(iVar4,param_2[1],*piVar2 << 2);
      param_1[2] = *piVar2;
      param_1[3] = param_2[3];
    }
  }
  piVar1 = param_1 + 4;
  FUN_1007a060(*piVar1);
  piVar1[0] = 0;
  piVar1[1] = 0;
  piVar2 = param_2 + 5;
  param_1[6] = 0;
  if (*piVar2 != 0) {
    uVar3 = param_2[6];
    iVar4 = uVar3 * 8;
    if (uVar3 >> 0x1d != 0) {
      iVar4 = -1;
    }
    iVar4 = FUN_1007a040(iVar4);
    *piVar1 = iVar4;
    if (iVar4 != 0) {
      FUN_1007a780(iVar4,param_2[4],*piVar2 << 3);
      param_1[5] = *piVar2;
      param_1[6] = param_2[6];
    }
  }
  return param_1;
}

