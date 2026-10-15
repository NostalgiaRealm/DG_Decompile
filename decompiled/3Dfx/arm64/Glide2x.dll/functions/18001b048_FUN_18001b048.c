/*
 * FUN_18001b048 at 18001b048
 * undefined __cdecl FUN_18001b048(longlong param_1)
 * Address ranges: 18001b048-18001b04b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001b048(longlong param_1)

{
  int iVar1;
  HMODULE hInstance;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x31b0);
  if ((plVar2 != (longlong *)0x0) && (iVar1 = FUN_1800608a0((uint *)(plVar2 + 1)), iVar1 == 0)) {
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

