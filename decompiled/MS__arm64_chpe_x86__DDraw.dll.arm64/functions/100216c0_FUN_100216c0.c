/*
 * FUN_100216c0 at 100216c0
 * undefined FUN_100216c0(void)
 * Address ranges: 100216c0-100216e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100216c0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xfc);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x54);
  }
  return iVar1;
}

