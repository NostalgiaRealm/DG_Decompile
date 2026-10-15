/*
 * FUN_10068080 at 10068080
 * undefined FUN_10068080(void)
 * Address ranges: 10068080-100680a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10068080(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x88760005;
  if (*(char *)(param_1 + 0xd1) == '\0') {
    *(char *)(param_1 + 0xd1) = '\x01';
    uVar1 = 0;
  }
  return uVar1;
}

