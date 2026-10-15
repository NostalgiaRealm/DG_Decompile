/*
 * FUN_10014798 at 10014798
 * undefined FUN_10014798(void)
 * Address ranges: 10014798-100147c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10014798(int param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x151) == '\0') || (*(char *)(param_1 + 0x152) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

