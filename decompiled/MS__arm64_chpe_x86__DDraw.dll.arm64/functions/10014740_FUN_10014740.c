/*
 * FUN_10014740 at 10014740
 * undefined FUN_10014740(void)
 * Address ranges: 10014740-10014763
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10014740(int param_1)

{
  int iVar1;
  
  iVar1 = 0x14;
  if (*(char *)(param_1 + 0x151) != '\0') {
    iVar1 = 0xdc;
  }
  return *(undefined4 *)(iVar1 + param_1);
}

