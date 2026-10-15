/*
 * FUN_18004e174 at 18004e174
 * undefined __fastcall FUN_18004e174(longlong * param_1)
 * Address ranges: 18004e174-18004e1d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004e174(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  HMODULE hInstance;
  
  if (param_1 != (longlong *)0x0) {
    LOCK();
    plVar1 = param_1 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      if (*(short *)((longlong)param_1 + 0xc) != 0) {
        hInstance = GetModuleHandleW((LPCWSTR)0x0);
        UnregisterClassW((LPCWSTR)(ulonglong)*(ushort *)((longlong)param_1 + 0xc),hInstance);
        if ((HMODULE)param_1[2] != (HMODULE)0x0) {
          FreeLibrary((HMODULE)param_1[2]);
          param_1[2] = 0;
        }
      }
      (**(code **)(*param_1 + 0x88))(param_1);
    }
  }
  return;
}

