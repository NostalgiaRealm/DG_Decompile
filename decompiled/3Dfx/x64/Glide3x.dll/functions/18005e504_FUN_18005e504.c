/*
 * FUN_18005e504 at 18005e504
 * int __fastcall FUN_18005e504(longlong param_1)
 * Address ranges: 18005e504-18005e510
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18005e504(longlong param_1)

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

