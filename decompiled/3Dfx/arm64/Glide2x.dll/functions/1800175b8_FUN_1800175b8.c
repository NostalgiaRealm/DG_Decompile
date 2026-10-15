/*
 * FUN_1800175b8 at 1800175b8
 * undefined8 __cdecl FUN_1800175b8(longlong param_1)
 * Address ranges: 1800175b8-18001777b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800175b8(longlong param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  HWND pHVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 100) == '\0') {
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x60);
    *(undefined1 *)(param_1 + 100) = 0;
    while (iVar1 != 0) {
      Sleep(1);
      iVar1 = *(int *)(param_1 + 0x60);
    }
    if (*(longlong *)(param_1 + 0x70) != 0) {
      (**(code **)(param_1 + 0x80))();
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))();
      FreeLibrary(*(HMODULE *)(param_1 + 0x70));
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    lVar5 = *(longlong *)(param_1 + 0x18);
    if (*(char *)(lVar5 + 0xee) == '\0') {
      ShowCursor(1);
      *(undefined1 *)(lVar5 + 0xee) = 1;
    }
    bVar2 = false;
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xa0);
    if ((lVar5 != 0) && (lVar5 = FUN_180007800(*(longlong *)(param_1 + 0x30),lVar5), lVar5 != 0)) {
      bVar2 = *(int *)(lVar5 + 0x3c) != 0;
    }
    FUN_18001ed80(param_1,0,0);
    pHVar4 = *(HWND *)(*(longlong *)(param_1 + 0x18) + 0xa0);
    if (pHVar4 != (HWND)0x0) {
      lVar5 = 0;
      if (param_1 != 0) {
        lVar5 = param_1 + 8;
      }
      FUN_180007508(*(longlong *)(param_1 + 0x30),pHVar4,lVar5);
    }
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    if (*(longlong *)(param_1 + 0x38) != 0) {
      PostMessageW(*(HWND *)(*(longlong *)(param_1 + 0x18) + 0xa0),0x401,0,0);
      lVar5 = *(longlong *)(param_1 + 0x48);
      while (lVar5 != 0) {
        Sleep(1);
        lVar5 = *(longlong *)(param_1 + 0x48);
      }
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    FUN_180007058(*(longlong *)(param_1 + 0x30));
    lVar5 = *(longlong *)(param_1 + 0x30);
    iVar1 = *(int *)(lVar5 + 0x160) + -1;
    *(int *)(lVar5 + 0x160) = iVar1;
    if ((iVar1 == 0) && (*(char *)(lVar5 + 0x825) != '\0')) {
      SetThreadExecutionState(*(EXECUTION_STATE *)(lVar5 + 0x15c));
      *(undefined4 *)(lVar5 + 0x15c) = 0;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (!bVar2) {
      FreeLibrary(DAT_18006b860);
    }
    uVar3 = 1;
  }
  return uVar3;
}

