/*
 * FUN_10014b00 at 10014b00
 * undefined FUN_10014b00(void)
 * Address ranges: 10014b00-10014b4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10014b00(int param_1)

{
  ulonglong uVar1;
  
  FUN_10014978(param_1);
  do {
    uVar1 = FUN_100132d8(param_1);
  } while ((uVar1 & 1) != 0);
  (*(code *)PTR_FUN_100a0090)(*(int *)(param_1 + 0x3300) + 0x4a0);
  return;
}

