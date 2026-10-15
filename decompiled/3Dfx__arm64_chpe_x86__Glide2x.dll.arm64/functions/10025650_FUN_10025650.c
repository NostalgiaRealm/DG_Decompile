/*
 * FUN_10025650 at 10025650
 * undefined FUN_10025650(void)
 * Address ranges: 10025650-1002569b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10025650(int param_1)

{
  ulonglong uVar1;
  
  FUN_100254d8(param_1);
  do {
    uVar1 = FUN_10023b60(param_1);
  } while ((uVar1 & 1) != 0);
  (*(code *)PTR_FUN_1009d090)(*(int *)(param_1 + 0x3180) + 0x4a0);
  return;
}

