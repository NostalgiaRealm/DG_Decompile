/*
 * FUN_10008a60 at 10008a60
 * undefined FUN_10008a60(void)
 * Address ranges: 10008a60-10008b0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10008a60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x308) + -1;
  *(int *)(param_1 + 0x308) = iVar1;
  if ((iVar1 == 0) && (DAT_100aaa68 != 0)) {
    if (*(char *)(param_1 + 0x758) != '\0') {
      (*(code *)PTR_FUN_100a81cc)(*(undefined4 *)(param_1 + 0x30c),0x12,0,0);
      (*(code *)PTR_FUN_100a8100)(DAT_100aaa68,0xffffffff);
    }
    (*(code *)PTR_FUN_100a800c)(DAT_100aaa68);
    DAT_100aaa68 = 0;
    *(undefined4 *)(param_1 + 0x310) = 0;
    (*(code *)PTR_FUN_100a8034)(param_1 + 0x318);
  }
  return;
}

