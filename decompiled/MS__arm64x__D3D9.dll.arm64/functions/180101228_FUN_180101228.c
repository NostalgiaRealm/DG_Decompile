/*
 * FUN_180101228 at 180101228
 * undefined FUN_180101228(void)
 * Address ranges: 180101228-180101333
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180101228(longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(undefined1 *)(param_1 + 0x206) = 1;
  (*__imp_KERNEL32_dll_SignalObjectAndWait)
            (*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78),0xffffffff,0);
  (*__imp_KERNEL32_dll_CloseHandle)(*(undefined8 *)(param_1 + 0x78));
  (*__imp_KERNEL32_dll_CloseHandle)(*(undefined8 *)(param_1 + 0x80));
  lVar3 = 0;
  do {
    lVar4 = lVar3 * 0x28;
    (*__imp_KERNEL32_dll_CloseHandle)(*(undefined8 *)(param_1 + 0xa8 + lVar4));
    thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0xa0 + lVar4));
    puVar1 = (undefined8 *)(lVar4 + param_1 + 0x88);
    lVar3 = lVar3 + 1;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[4] = 0;
    pcVar2 = __imp_KERNEL32_dll_FreeLibrary;
  } while (lVar3 != 8);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  (*pcVar2)(*(undefined8 *)(param_1 + 0x40));
  pcVar2 = __imp_KERNEL32_dll_FreeLibrary;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  (*pcVar2)(*(undefined8 *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x1e0));
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)(param_1 + 0x207) = 0;
  return;
}

