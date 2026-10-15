/*
 * FUN_100168b0 at 100168b0
 * undefined FUN_100168b0(void)
 * Address ranges: 100168b0-100168ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100168b0(int param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_10009878();
  if (((uVar1 & 1) == 0) && (*(char *)(param_1 + 0x38) != '\0')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

