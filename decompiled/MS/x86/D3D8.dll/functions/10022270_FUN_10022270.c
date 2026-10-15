/*
 * FUN_10022270 at 10022270
 * undefined1 * __fastcall FUN_10022270(undefined1 * param_1)
 * Address ranges: 10022270-100222cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __fastcall FUN_10022270(undefined1 *param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar2;
  LONG *pLVar3;
  tagMSG local_20;
  
  pLVar3 = &DAT_100ba2e4[1].RecursionCount;
  LOCK();
  iVar1 = *pLVar3;
  *pLVar3 = *pLVar3 + 1;
  UNLOCK();
  if (iVar1 == 0) {
    while (DAT_100ba2e4[1].LockCount != 0) {
      PeekMessageA(&local_20,(HWND)0x0,0,0,0x400000);
    }
  }
  lpCriticalSection = DAT_100ba2e4;
  *param_1 = 1;
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    FUN_100037f8((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  return param_1;
}

