/*
 * FUN_10019fb0 at 10019fb0
 * undefined FUN_10019fb0(void)
 * Address ranges: 10019fb0-1001a06b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10019fb0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  piVar1 = param_1 + 1;
  *param_1 = *param_2;
  FUN_101322d0(*piVar1);
  piVar1[0] = 0;
  piVar1[1] = 0;
  puVar2 = param_2 + 2;
  param_1[3] = 0;
  if (*puVar2 != 0) {
    uVar3 = param_2[3];
    iVar4 = uVar3 * 4;
    if (uVar3 >> 0x1e != 0) {
      iVar4 = -1;
    }
    iVar4 = FUN_101322b0(iVar4);
    *piVar1 = iVar4;
    if (iVar4 != 0) {
      FUN_101325a0(iVar4,param_2[1],((ulonglong)*puVar2 & 0x3fffffff) << 2);
      param_1[2] = *puVar2;
      param_1[3] = param_2[3];
    }
  }
  return param_1;
}

