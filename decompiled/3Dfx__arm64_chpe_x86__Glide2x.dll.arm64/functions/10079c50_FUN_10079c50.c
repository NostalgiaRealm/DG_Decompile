/*
 * FUN_10079c50 at 10079c50
 * undefined FUN_10079c50(void)
 * Address ranges: 10079c50-10079d17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10079c50(int *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  puVar1 = (uint *)(param_1 + 2);
  puVar2 = (uint *)(param_1 + 1);
  uVar3 = *puVar1;
  if (*puVar2 == uVar3) {
    uVar4 = uVar3 << 1;
    if (uVar3 == 0) {
      uVar4 = 0x10;
    }
    iVar5 = uVar4 * 8;
    if (uVar4 >> 0x1d != 0) {
      iVar5 = -1;
    }
    iVar5 = FUN_1007a040(iVar5);
    if (iVar5 == 0) {
      return 0;
    }
    FUN_1007a780(iVar5,*param_1,((ulonglong)*puVar1 & 0x1fffffff) << 3);
    FUN_1007a060(*param_1);
    *param_1 = iVar5;
    *puVar1 = uVar4;
  }
  *(undefined8 *)(*param_1 + *puVar2 * 8) = *param_2;
  *puVar2 = *puVar2 + 1;
  return 1;
}

