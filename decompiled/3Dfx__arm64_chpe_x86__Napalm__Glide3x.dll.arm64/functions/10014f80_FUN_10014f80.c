/*
 * FUN_10014f80 at 10014f80
 * undefined FUN_10014f80(void)
 * Address ranges: 10014f80-10014fcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10014f80(int param_1)

{
  ulonglong uVar1;
  
  FUN_10014e08(param_1);
  do {
    uVar1 = FUN_10014370(param_1);
  } while ((uVar1 & 1) != 0);
  (*(code *)PTR_FUN_100a8090)(*(int *)(param_1 + 0x3680) + 0x4a0);
  return;
}

