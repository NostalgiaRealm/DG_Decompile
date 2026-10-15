/*
 * FUN_10025ad0 at 10025ad0
 * undefined FUN_10025ad0(void)
 * Address ranges: 10025ad0-10025b1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10025ad0(int param_1)

{
  ulonglong uVar1;
  
  FUN_10025958(param_1);
  do {
    uVar1 = FUN_10023fe0(param_1);
  } while ((uVar1 & 1) != 0);
  (*(code *)PTR_FUN_1009d090)(*(int *)(param_1 + 0x3180) + 0x4a0);
  return;
}

