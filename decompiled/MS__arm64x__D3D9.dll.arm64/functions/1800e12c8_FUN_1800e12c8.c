/*
 * FUN_1800e12c8 at 1800e12c8
 * undefined FUN_1800e12c8(void)
 * Address ranges: 1800e12c8-1800e1347
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e12c8(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 != (longlong *)0x0) && (iVar1 = FUN_180001590(param_1 + 1), iVar1 == 0)) {
    if (*(short *)((longlong)param_1 + 0xc) != 0) {
      uVar2 = (*__imp_KERNEL32_dll_GetModuleHandleW)(0);
      (*__imp_USER32_dll_UnregisterClassW)(*(undefined2 *)((longlong)param_1 + 0xc),uVar2);
      if (param_1[2] != 0) {
        (*__imp_KERNEL32_dll_FreeLibrary)();
        param_1[2] = 0;
      }
    }
    (**(code **)(*param_1 + 0x88))(param_1);
  }
  return;
}

