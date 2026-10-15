/*
 * FUN_180080590 at 180080590
 * undefined FUN_180080590(void)
 * Address ranges: 180080590-18008063f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180080590(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x1cf10);
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(lVar3 + 0x318 + lVar4 * 0x60);
      if (lVar1 != 0) {
        (*__imp_KERNEL32_dll_TerminateThread)(lVar1,0);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 8);
    if (*(short *)(lVar3 + 0xc) != 0) {
      uVar2 = (*__imp_KERNEL32_dll_GetModuleHandleW)(0);
      (*__imp_USER32_dll_UnregisterClassW)(*(undefined2 *)(lVar3 + 0xc),uVar2);
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        (*__imp_KERNEL32_dll_FreeLibrary)();
        *(undefined8 *)(lVar3 + 0x10) = 0;
      }
    }
    *(undefined8 *)(param_1 + 0x1cf10) = 0;
  }
  return;
}

