/*
 * FUN_1800f0888 at 1800f0888
 * int __fastcall FUN_1800f0888(longlong param_1)
 * Address ranges: 1800f0888-1800f0894
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800f0888(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x18);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}

