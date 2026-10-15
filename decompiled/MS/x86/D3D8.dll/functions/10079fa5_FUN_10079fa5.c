/*
 * FUN_10079fa5 at 10079fa5
 * int __stdcall FUN_10079fa5(int param_1)
 * Address ranges: 10079fa5-1007a00b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10079fa5(int param_1)

{
  int *piVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 *puVar4;
  
  piVar1 = (int *)(param_1 + 4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*(int *)(param_1 + 8) + iVar2 + -1 == 0) {
    BVar3 = TryEnterCriticalSection(DAT_100ba2e4);
    if (BVar3 == 0) {
      FUN_100037f8((PRTL_CRITICAL_SECTION_DEBUG)0x0);
    }
    puVar4 = (undefined4 *)(param_1 + -0x70);
    FUN_10079f0d((int)puVar4);
    if (puVar4 != (undefined4 *)0x0) {
      FUN_10079d0f(puVar4);
      FUN_100ad48c(puVar4);
    }
    LeaveCriticalSection(DAT_100ba2e4);
  }
  return iVar2 + -1;
}

