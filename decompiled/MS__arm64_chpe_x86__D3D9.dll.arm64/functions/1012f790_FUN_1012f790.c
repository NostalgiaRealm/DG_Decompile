/*
 * FUN_1012f790 at 1012f790
 * undefined FUN_1012f790(void)
 * Address ranges: 1012f790-1012f83b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1012f790(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x308) + -1;
  *(int *)(param_1 + 0x308) = iVar1;
  if ((iVar1 == 0) && (DAT_10175c58 != 0)) {
    if (*(char *)(param_1 + 0x758) != '\0') {
      (*(code *)PTR_FUN_1016c244)(*(undefined4 *)(param_1 + 0x30c),0x12,0,0);
      (*(code *)PTR_FUN_1016c138)(DAT_10175c58,0xffffffff);
    }
    (*(code *)PTR_FUN_1016c048)(DAT_10175c58);
    DAT_10175c58 = 0;
    *(undefined4 *)(param_1 + 0x310) = 0;
    (*(code *)PTR_FUN_1016c06c)(param_1 + 0x318);
  }
  return;
}

