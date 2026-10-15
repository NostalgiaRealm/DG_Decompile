/*
 * FUN_18002db9c at 18002db9c
 * undefined1 * __fastcall FUN_18002db9c(undefined1 * param_1)
 * Address ranges: 18002db9c-18002dc17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_18002db9c(undefined1 *param_1)

{
  LONG *pLVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar3;
  tagMSG local_38;
  
  LOCK();
  pLVar1 = &DAT_1801123a8[1].LockCount;
  iVar2 = *pLVar1;
  *pLVar1 = *pLVar1 + 1;
  UNLOCK();
  if (iVar2 == 0) {
    iVar2 = *(int *)((longlong)&DAT_1801123a8[1].DebugInfo + 4);
    while (iVar2 != 0) {
      PeekMessageA(&local_38,(HWND)0x0,0,0,0x400000);
      iVar2 = *(int *)((longlong)&DAT_1801123a8[1].DebugInfo + 4);
    }
  }
  lpCriticalSection = DAT_1801123a8;
  *param_1 = 1;
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    FUN_1800044dc(0);
  }
  return param_1;
}

