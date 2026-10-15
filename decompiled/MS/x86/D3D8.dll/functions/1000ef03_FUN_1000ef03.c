/*
 * FUN_1000ef03 at 1000ef03
 * undefined4 __fastcall FUN_1000ef03(undefined4 param_1)
 * Address ranges: 1000ef03-1000ef69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1000ef03(undefined4 param_1)

{
  int iVar1;
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
  LOCK();
  DAT_100ba2e4[1].DebugInfo =
       (PRTL_CRITICAL_SECTION_DEBUG)((int)&(DAT_100ba2e4[1].DebugInfo)->Type + 1);
  UNLOCK();
  BVar2 = TryEnterCriticalSection(DAT_100ba2e4);
  if (BVar2 == 0) {
    FUN_100037f8((PRTL_CRITICAL_SECTION_DEBUG)0x1);
  }
  return param_1;
}

