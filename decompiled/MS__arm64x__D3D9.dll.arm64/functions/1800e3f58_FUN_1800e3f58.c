/*
 * FUN_1800e3f58 at 1800e3f58
 * undefined FUN_1800e3f58(void)
 * Address ranges: 1800e3f58-1800e40af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e3f58(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x314) != '\0') {
    (**(code **)(param_1 + 0x308))(1);
  }
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    (*__imp_KERNEL32_dll_FreeLibrary)();
    *(undefined8 *)(param_1 + 0x2f8) = 0;
  }
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    lVar1 = param_1 + 0x318;
    lVar5 = 0;
    lVar2 = param_1 + 0x330;
    do {
      lVar4 = lVar5 * 0x60;
      if (*(longlong *)(lVar1 + lVar4) != 0) {
        (*__imp_KERNEL32_dll_SetThreadPriority)(*(longlong *)(lVar1 + lVar4),1);
        *(undefined1 *)(lVar4 + param_1 + 0x371) = 1;
        (*__imp_KERNEL32_dll_SignalObjectAndWait)
                  (*(undefined8 *)(lVar2 + lVar4),*(undefined8 *)(lVar1 + lVar4),0xffffffff,0);
        (*__imp_KERNEL32_dll_CloseHandle)(*(undefined8 *)(lVar2 + lVar4));
        pcVar3 = __imp_KERNEL32_dll_DeleteCriticalSection;
        *(undefined8 *)(lVar2 + lVar4) = 0;
        (*pcVar3)(lVar4 + param_1 + 0x338);
        (*__imp_KERNEL32_dll_CloseHandle)(*(undefined8 *)(lVar1 + lVar4));
        *(undefined8 *)(lVar1 + lVar4) = 0;
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
  return;
}

