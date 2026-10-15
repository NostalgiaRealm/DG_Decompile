/*
 * FUN_1800c2a7c at 1800c2a7c
 * int __fastcall FUN_1800c2a7c(longlong param_1)
 * Address ranges: 1800c2a7c-1800c2acb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800c2a7c(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + -0x50);
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar2 = iVar2 + -1;
  if (*(int *)(param_1 + 0xc) + iVar2 == 0) {
    FUN_180018028((longlong *)(param_1 + -0x90));
  }
  if (iVar2 == 0) {
    if (lVar3 == 0) {
      lVar3 = 0x6838;
    }
    FUN_1800b0664(lVar3);
  }
  return iVar2;
}

