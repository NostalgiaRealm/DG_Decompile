/*
 * FUN_1800af6c0 at 1800af6c0
 * int __fastcall FUN_1800af6c0(longlong param_1)
 * Address ranges: 1800af6c0-1800af70f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800af6c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + -0x80);
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar2 = iVar2 + -1;
  if (*(int *)(param_1 + 0xc) + iVar2 == 0) {
    FUN_1800af534((longlong *)(param_1 + -0x98));
  }
  if (iVar2 == 0) {
    if (lVar3 == 0) {
      lVar3 = 0x6838;
    }
    FUN_1800b0664(lVar3);
  }
  return iVar2;
}

