/*
 * FUN_100aeee0 at 100aeee0
 * undefined FUN_100aeee0(void)
 * Address ranges: 100aeee0-100aef03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100aeee0(int param_1)

{
  int iVar1;
  
  iVar1 = 0x14;
  if (*(char *)(param_1 + 0x151) != '\0') {
    iVar1 = 0xdc;
  }
  return *(undefined4 *)(iVar1 + param_1);
}

