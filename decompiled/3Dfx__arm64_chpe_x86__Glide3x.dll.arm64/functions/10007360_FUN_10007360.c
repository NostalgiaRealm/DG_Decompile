/*
 * FUN_10007360 at 10007360
 * undefined FUN_10007360(void)
 * Address ranges: 10007360-1000740b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10007360(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x308) + -1;
  *(int *)(param_1 + 0x308) = iVar1;
  if ((iVar1 == 0) && (DAT_100a2898 != 0)) {
    if (*(char *)(param_1 + 0x758) != '\0') {
      (*(code *)PTR_FUN_100a01cc)(*(undefined4 *)(param_1 + 0x30c),0x12,0,0);
      (*(code *)PTR_FUN_100a0100)(DAT_100a2898,0xffffffff);
    }
    (*(code *)PTR_FUN_100a000c)(DAT_100a2898);
    DAT_100a2898 = 0;
    *(undefined4 *)(param_1 + 0x310) = 0;
    (*(code *)PTR_FUN_100a0034)(param_1 + 0x318);
  }
  return;
}

