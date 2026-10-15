/*
 * FUN_180015888 at 180015888
 * undefined8 __fastcall FUN_180015888(undefined8 param_1)
 * Address ranges: 180015888-180015900
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180015888(undefined8 param_1)

{
  LONG *pLVar1;
  int iVar2;
  BOOL BVar3;
  tagMSG local_38;
  
  LOCK();
  pLVar1 = &DAT_1801123a8[1].LockCount;
  iVar2 = *pLVar1;
  *pLVar1 = *pLVar1 + 1;
  UNLOCK();
  if (iVar2 == 0) {
    while (*(int *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) != 0) {
      PeekMessageA(&local_38,(HWND)0x0,0,0,0x400000);
    }
  }
  LOCK();
  *(int *)&DAT_1801123a8[1].DebugInfo = *(int *)&DAT_1801123a8[1].DebugInfo + 1;
  UNLOCK();
  BVar3 = TryEnterCriticalSection(DAT_1801123a8);
  if (BVar3 == 0) {
    FUN_1800044dc(1);
  }
  return param_1;
}

