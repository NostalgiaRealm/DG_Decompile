/*
 * FUN_10040840 at 10040840
 * undefined FUN_10040840(void)
 * Address ranges: 10040840-10040877
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040840(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_100407e0(param_1);
  if ((uVar1 & 1) == 0) {
    FUN_10040de0(param_1);
  }
  *(undefined1 *)(param_1 + 0xae) = 0;
  return;
}

