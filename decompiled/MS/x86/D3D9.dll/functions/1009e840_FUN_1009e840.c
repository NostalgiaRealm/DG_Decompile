/*
 * FUN_1009e840 at 1009e840
 * undefined __fastcall FUN_1009e840(undefined4 * param_1)
 * Address ranges: 1009e840-1009e857
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1009e840(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = param_1 + 2;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (param_1[1] + iVar2 + -1 == 0) {
    FUN_1009e7ce(param_1);
  }
  return;
}

