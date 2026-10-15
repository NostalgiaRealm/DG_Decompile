/*
 * FUN_100c0938 at 100c0938
 * undefined FUN_100c0938(void)
 * Address ranges: 100c0938-100c0963
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100c0938(int param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x1bd) == '\0') || (*(char *)(param_1 + 0x1be) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

