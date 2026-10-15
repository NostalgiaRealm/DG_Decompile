/*
 * FUN_100083f0 at 100083f0
 * undefined FUN_100083f0(void)
 * Address ranges: 100083f0-10008427
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100083f0(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_10008390(param_1);
  if ((uVar1 & 1) == 0) {
    FUN_10009018(param_1);
  }
  *(undefined1 *)(param_1 + 0xae) = 0;
  return;
}

