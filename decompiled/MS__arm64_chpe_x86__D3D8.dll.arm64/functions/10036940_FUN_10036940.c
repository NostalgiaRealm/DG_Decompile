/*
 * FUN_10036940 at 10036940
 * undefined FUN_10036940(void)
 * Address ranges: 10036940-10036977
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10036940(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_100368e0(param_1);
  if ((uVar1 & 1) == 0) {
    FUN_10036ee0(param_1);
  }
  *(undefined1 *)(param_1 + 0xae) = 0;
  return;
}

