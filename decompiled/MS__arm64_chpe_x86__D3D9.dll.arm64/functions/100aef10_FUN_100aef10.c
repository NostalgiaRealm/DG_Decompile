/*
 * FUN_100aef10 at 100aef10
 * undefined FUN_100aef10(void)
 * Address ranges: 100aef10-100aef33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100aef10(int param_1)

{
  int iVar1;
  
  iVar1 = 0x18;
  if (*(char *)(param_1 + 0x151) != '\0') {
    iVar1 = 0xe0;
  }
  return *(undefined4 *)(iVar1 + param_1);
}

