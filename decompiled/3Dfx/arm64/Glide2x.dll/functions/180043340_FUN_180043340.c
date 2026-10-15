/*
 * FUN_180043340 at 180043340
 * undefined __cdecl FUN_180043340(longlong param_1)
 * Address ranges: 180043340-180043463
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180043340(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  HMODULE hInstance;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  plVar4 = *(longlong **)(param_1 + 0x480);
  if (plVar4 != (longlong *)0x0) {
    iVar3 = FUN_1800608a0((uint *)(plVar4 + 1));
    if (iVar3 == 0) {
      if (*(short *)((longlong)plVar4 + 0xc) != 0) {
        hInstance = GetModuleHandleW((LPCWSTR)0x0);
        UnregisterClassW((LPCWSTR)(ulonglong)*(ushort *)((longlong)plVar4 + 0xc),hInstance);
        if ((HMODULE)plVar4[2] != (HMODULE)0x0) {
          FreeLibrary((HMODULE)plVar4[2]);
          plVar4[2] = 0;
        }
      }
      (**(code **)(*plVar4 + 0x88))(plVar4);
    }
    *(undefined8 *)(param_1 + 0x480) = 0;
    lVar5 = 0;
    do {
      lVar7 = lVar5 * 0x10;
      uVar6 = 0;
      if (*(int *)(param_1 + 0x28 + lVar7) != 0) {
        do {
          thunk_FUN_18005fbc8(*(LPVOID *)(*(longlong *)(param_1 + (lVar5 + 2) * 0x10) + uVar6 * 8));
          uVar1 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(lVar7 + param_1 + 0x28));
      }
      lVar2 = param_1 + lVar7;
      thunk_FUN_18005fbc8(*(LPVOID *)(lVar2 + 0x20));
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28 + lVar7) = 0;
      *(undefined4 *)(lVar2 + 0x2c) = 0;
      thunk_FUN_18005fbc8(*(LPVOID *)(lVar2 + 0x120));
      *(undefined8 *)(lVar2 + 0x120) = 0;
      *(undefined8 *)(lVar2 + 0x128) = 0;
      thunk_FUN_18005fbc8(*(LPVOID *)(lVar2 + 0x220));
      lVar5 = lVar5 + 1;
      *(undefined8 *)(lVar2 + 0x220) = 0;
      *(undefined8 *)(lVar2 + 0x228) = 0;
    } while (lVar5 != 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

