/*
 * FUN_18000f5b4 at 18000f5b4
 * undefined __cdecl FUN_18000f5b4(longlong param_1)
 * Address ranges: 18000f5b4-18000f62f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000f5b4(longlong param_1)

{
  int iVar1;
  HMODULE hInstance;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x3330);
  if ((plVar2 != (longlong *)0x0) && (iVar1 = FUN_1800643d0((uint *)(plVar2 + 1)), iVar1 == 0)) {
    if (*(short *)((longlong)plVar2 + 0xc) != 0) {
      hInstance = GetModuleHandleW((LPCWSTR)0x0);
      UnregisterClassW((LPCWSTR)(ulonglong)*(ushort *)((longlong)plVar2 + 0xc),hInstance);
      if ((HMODULE)plVar2[2] != (HMODULE)0x0) {
        FreeLibrary((HMODULE)plVar2[2]);
        plVar2[2] = 0;
      }
    }
    (**(code **)(*plVar2 + 0x88))(plVar2);
  }
  return;
}

