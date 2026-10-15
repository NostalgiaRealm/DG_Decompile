/*
 * FUN_10014770 at 10014770
 * undefined FUN_10014770(void)
 * Address ranges: 10014770-10014793
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10014770(int param_1)

{
  int iVar1;
  
  iVar1 = 0x18;
  if (*(char *)(param_1 + 0x151) != '\0') {
    iVar1 = 0xe0;
  }
  return *(undefined4 *)(iVar1 + param_1);
}

