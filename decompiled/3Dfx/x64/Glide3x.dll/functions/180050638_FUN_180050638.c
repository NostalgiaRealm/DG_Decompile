/*
 * FUN_180050638 at 180050638
 * undefined __fastcall FUN_180050638(longlong param_1)
 * Address ranges: 180050638-180050724
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050638(longlong param_1)

{
  longlong *plVar1;
  HMODULE hInstance;
  longlong lVar2;
  
  lVar2 = 0;
  if (*(char *)(param_1 + 0x310) != '\0') {
    if (*(longlong **)(param_1 + 0x2e8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x10))();
      *(undefined8 *)(param_1 + 0x2e8) = 0;
    }
    do {
      plVar1 = *(longlong **)(param_1 + 0x18 + lVar2 * 0x28);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
        *(undefined8 *)(param_1 + 0x18 + lVar2 * 0x28) = 0;
        *(undefined8 *)(param_1 + 0x24 + lVar2 * 0x28) = 0;
        *(undefined4 *)(param_1 + 0x20 + lVar2 * 0x28) = 0;
        *(undefined1 *)(param_1 + 0x2c + lVar2 * 0x28) = 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x10);
    if (*(longlong **)(param_1 + 0x688) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x688) + 0x10))();
      *(undefined8 *)(param_1 + 0x688) = 0;
    }
    FUN_180060ac0(*(LPVOID *)(param_1 + 0x690));
    *(undefined8 *)(param_1 + 0x690) = 0;
    *(undefined8 *)(param_1 + 0x698) = 0;
    if (*(short *)(param_1 + 0xc) != 0) {
      hInstance = GetModuleHandleW((LPCWSTR)0x0);
      UnregisterClassW((LPCWSTR)(ulonglong)*(ushort *)(param_1 + 0xc),hInstance);
      if (*(HMODULE *)(param_1 + 0x10) != (HMODULE)0x0) {
        FreeLibrary(*(HMODULE *)(param_1 + 0x10));
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
    }
    FUN_180050210(param_1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
    *(undefined1 *)(param_1 + 0x310) = 0;
  }
  return;
}

