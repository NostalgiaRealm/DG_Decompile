/*
 * FUN_10019860 at 10019860
 * undefined FUN_10019860(void)
 * Address ranges: 10019860-10019897
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10019860(int param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0xd5) == '\0') || (*(char *)(*(int *)(param_1 + 0x2c) + 0x58bd) != '\0'))
  {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

