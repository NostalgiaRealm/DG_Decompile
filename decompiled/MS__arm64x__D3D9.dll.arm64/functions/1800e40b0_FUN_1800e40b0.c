/*
 * FUN_1800e40b0 at 1800e40b0
 * undefined FUN_1800e40b0(void)
 * Address ranges: 1800e40b0-1800e42db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e40b0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x310) != '\0') {
    if (*(longlong **)(param_1 + 0x2e8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x10))();
      *(undefined8 *)(param_1 + 0x2e8) = 0;
    }
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(param_1 + 0x18 + lVar5 * 0x28);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
        lVar1 = param_1 + lVar5 * 0x28;
        *(undefined8 *)(param_1 + 0x18 + lVar5 * 0x28) = 0;
        *(undefined4 *)(lVar1 + 0x28) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined1 *)(lVar1 + 0x2c) = 0;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x10);
    if (*(longlong **)(param_1 + 0x688) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x688) + 0x10))();
      *(undefined8 *)(param_1 + 0x688) = 0;
    }
    thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x690));
    *(undefined8 *)(param_1 + 0x690) = 0;
    *(undefined8 *)(param_1 + 0x698) = 0;
    if (*(short *)(param_1 + 0xc) != 0) {
      uVar4 = (*__imp_KERNEL32_dll_GetModuleHandleW)(0);
      (*__imp_USER32_dll_UnregisterClassW)(*(undefined2 *)(param_1 + 0xc),uVar4);
      if (*(longlong *)(param_1 + 0x10) != 0) {
        (*__imp_KERNEL32_dll_FreeLibrary)();
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
    }
    if (*(char *)(param_1 + 0x314) != '\0') {
      (**(code **)(param_1 + 0x308))(1);
    }
    if (*(longlong *)(param_1 + 0x2f8) != 0) {
      (*__imp_KERNEL32_dll_FreeLibrary)();
      *(undefined8 *)(param_1 + 0x2f8) = 0;
    }
    if (*(longlong *)(param_1 + 0x2b0) != 0) {
      lVar5 = 0;
      do {
        lVar6 = lVar5 * 0x60;
        lVar1 = param_1 + lVar6;
        if (*(longlong *)(lVar1 + 0x318) != 0) {
          (*__imp_KERNEL32_dll_SetThreadPriority)(*(longlong *)(lVar1 + 0x318),1);
          *(undefined1 *)(lVar6 + param_1 + 0x371) = 1;
          (*__imp_KERNEL32_dll_SignalObjectAndWait)
                    (*(undefined8 *)(lVar1 + 0x330),*(undefined8 *)(lVar1 + 0x318),0xffffffff,0);
          (*__imp_KERNEL32_dll_CloseHandle)(*(undefined8 *)(lVar1 + 0x330));
          pcVar2 = __imp_KERNEL32_dll_DeleteCriticalSection;
          *(undefined8 *)(lVar1 + 0x330) = 0;
          (*pcVar2)(lVar6 + param_1 + 0x338);
          (*__imp_KERNEL32_dll_CloseHandle)(*(undefined8 *)(lVar1 + 0x318));
          *(undefined8 *)(lVar1 + 0x318) = 0;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != 8);
      (*__imp_KERNEL32_dll_FreeLibrary)(*(undefined8 *)(param_1 + 0x2b0));
      *(undefined8 *)(param_1 + 0x2b0) = 0;
    }
    if (*(longlong *)(param_1 + 0x2d8) != 0) {
      (*__imp_KERNEL32_dll_FreeLibrary)();
      *(undefined8 *)(param_1 + 0x2d8) = 0;
    }
    if (*(longlong *)(param_1 + 0x2a0) != 0) {
      (*__imp_KERNEL32_dll_FreeLibrary)();
      *(undefined8 *)(param_1 + 0x2a0) = 0;
    }
    (*__imp_KERNEL32_dll_DeleteCriticalSection)(param_1 + 0x620);
    *(undefined1 *)(param_1 + 0x310) = 0;
  }
  return;
}

