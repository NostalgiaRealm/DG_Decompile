/*
 * FUN_10007100 at 10007100
 * undefined FUN_10007100(void)
 * Address ranges: 10007100-100071c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10007100(int *param_1,undefined4 *param_2)

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
    iVar5 = uVar4 * 4;
    if (uVar4 >> 0x1e != 0) {
      iVar5 = -1;
    }
    iVar5 = FUN_101322b0(iVar5);
    if (iVar5 == 0) {
      return 0;
    }
    FUN_101325a0(iVar5,*param_1,((ulonglong)*puVar1 & 0x3fffffff) << 2);
    FUN_101322d0(*param_1);
    *param_1 = iVar5;
    *puVar1 = uVar4;
  }
  *(undefined4 *)(*param_1 + *puVar2 * 4) = *param_2;
  *puVar2 = *puVar2 + 1;
  return 1;
}

