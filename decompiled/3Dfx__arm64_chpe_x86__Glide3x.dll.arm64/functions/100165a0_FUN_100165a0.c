/*
 * FUN_100165a0 at 100165a0
 * undefined FUN_100165a0(void)
 * Address ranges: 100165a0-100165df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100165a0(int param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_10008178();
  if (((uVar1 & 1) == 0) && (*(char *)(param_1 + 0x38) != '\0')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

