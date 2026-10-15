/*
 * FUN_18005c3a0 at 18005c3a0
 * int __fastcall FUN_18005c3a0(longlong param_1)
 * Address ranges: 18005c3a0-18005c3ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18005c3a0(longlong param_1)

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

