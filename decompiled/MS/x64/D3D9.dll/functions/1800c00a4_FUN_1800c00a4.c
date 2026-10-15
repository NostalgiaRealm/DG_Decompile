/*
 * FUN_1800c00a4 at 1800c00a4
 * int __fastcall FUN_1800c00a4(longlong param_1)
 * Address ranges: 1800c00a4-1800c00f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800c00a4(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + -0x38);
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar2 = iVar2 + -1;
  if (*(int *)(param_1 + 0xc) + iVar2 == 0) {
    FUN_1800140f0((undefined8 *)(param_1 + -0x78));
  }
  if (iVar2 == 0) {
    if (lVar3 == 0) {
      lVar3 = 0x6838;
    }
    FUN_1800b0664(lVar3);
  }
  return iVar2;
}

