/*
 * FUN_1800c3e8c at 1800c3e8c
 * int __fastcall FUN_1800c3e8c(longlong param_1)
 * Address ranges: 1800c3e8c-1800c3ede
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800c3e8c(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + -0x100);
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar2 = iVar2 + -1;
  if (*(int *)(param_1 + 0xc) + iVar2 == 0) {
    FUN_1800c3ae8((longlong *)(param_1 + -0x118));
  }
  if (iVar2 == 0) {
    if (lVar3 == 0) {
      lVar3 = 0x6838;
    }
    FUN_1800b0664(lVar3);
  }
  return iVar2;
}

