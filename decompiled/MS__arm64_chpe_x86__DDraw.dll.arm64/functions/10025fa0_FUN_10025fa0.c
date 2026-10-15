/*
 * FUN_10025fa0 at 10025fa0
 * undefined FUN_10025fa0(void)
 * Address ranges: 10025fa0-10025fc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10025fa0(int param_1)

{
  int iVar1;
  
  iVar1 = 0x18;
  if (*(char *)(param_1 + 0x1bd) != '\0') {
    iVar1 = 0x134;
  }
  return *(undefined4 *)(iVar1 + param_1);
}

