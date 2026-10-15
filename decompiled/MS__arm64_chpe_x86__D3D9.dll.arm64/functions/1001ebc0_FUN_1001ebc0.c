/*
 * FUN_1001ebc0 at 1001ebc0
 * undefined FUN_1001ebc0(void)
 * Address ranges: 1001ebc0-1001ebf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1001ebc0(int param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0xd5) == '\0') || (*(char *)(*(int *)(param_1 + 0x2c) + 0x669d) != '\0'))
  {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

