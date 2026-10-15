/*
 * FUN_18005bef8 at 18005bef8
 * int __fastcall FUN_18005bef8(longlong param_1)
 * Address ranges: 18005bef8-18005bf04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18005bef8(longlong param_1)

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

