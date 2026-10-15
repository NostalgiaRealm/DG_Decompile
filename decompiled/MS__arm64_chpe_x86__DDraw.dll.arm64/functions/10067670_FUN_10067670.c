/*
 * FUN_10067670 at 10067670
 * undefined FUN_10067670(void)
 * Address ranges: 10067670-100676b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10067670(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3a8);
  if (iVar1 != 0) {
    FUN_1006c900(iVar1);
    *(int *)(param_1 + 0x3a8) = 0;
    FUN_10067e68(param_1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

