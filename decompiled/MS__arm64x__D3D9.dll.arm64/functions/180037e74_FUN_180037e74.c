/*
 * FUN_180037e74 at 180037e74
 * undefined FUN_180037e74(void)
 * Address ranges: 180037e74-180037ebf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180037e74(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  longlong unaff_x19;
  longlong *plVar4;
  longlong unaff_x20;
  longlong unaff_x21;
  uint unaff_w22;
  undefined8 *in_stack_00000020;
  
  do {
    (**(code **)(**(longlong **)((ulonglong)unaff_w22 * 0x30 + *(longlong *)(unaff_x20 + 0x10) + 8)
                + 0x10))();
    (**(code **)(**(longlong **)(*(longlong *)(unaff_x20 + 0x10) + (ulonglong)unaff_w22 * 0x30) +
                0x10))();
    unaff_w22 = unaff_w22 + 1;
  } while (unaff_w22 < *(uint *)(unaff_x20 + 0x18));
  thunk_FUN_180102fc0(*(undefined8 *)(unaff_x20 + 0x10));
  pcVar1 = __imp_KERNEL32_dll_CloseHandle;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  (*pcVar1)(*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  thunk_FUN_180102fc0(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_180102fc0();
  *(undefined8 *)(unaff_x21 + 0x7820) = 0;
  FUN_180042958();
  (**(code **)(**(longlong **)(unaff_x21 + 0x7730) + 0x10))();
  *(undefined8 *)(unaff_x21 + 0x7730) = 0;
  if (*(longlong *)(unaff_x21 + 0x7738) != 0) {
    FUN_1800380e0(*(longlong *)(unaff_x21 + 0x7738),1);
  }
  *(undefined8 *)(unaff_x21 + 0x7738) = 0;
  if (*(longlong *)(unaff_x21 + 0x7728) != 0) {
    FUN_1800380e0(*(longlong *)(unaff_x21 + 0x7728),1);
  }
  *(undefined8 *)(unaff_x21 + 0x7728) = 0;
  if (*(longlong *)(unaff_x21 + 0x7710) != 0) {
    FUN_1800380e0(*(longlong *)(unaff_x21 + 0x7710),1);
  }
  *(undefined8 *)(unaff_x21 + 0x7710) = 0;
  if (*(longlong *)(unaff_x21 + 0x7718) != 0) {
    FUN_1800380e0(*(longlong *)(unaff_x21 + 0x7718),1);
  }
  *(undefined8 *)(unaff_x21 + 0x7718) = 0;
  if (*(longlong *)(unaff_x21 + 0x7708) != 0) {
    FUN_180038230();
  }
  *(undefined8 *)(unaff_x21 + 0x7708) = 0;
  if (*(longlong *)(unaff_x21 + 0x7700) != 0) {
    FUN_180038230();
  }
  *(undefined8 *)(unaff_x21 + 0x7700) = 0;
  thunk_FUN_180102fc0(*(undefined8 *)(unaff_x19 + 0x28));
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  thunk_FUN_180102fc0(*(undefined8 *)(unaff_x19 + 0x20));
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  plVar4 = (longlong *)*in_stack_00000020;
  if ((plVar4 != (longlong *)0x0) && (iVar2 = FUN_180001590(plVar4 + 1), iVar2 == 0)) {
    if (*(short *)((longlong)plVar4 + 0xc) != 0) {
      uVar3 = (*__imp_KERNEL32_dll_GetModuleHandleW)(0);
      (*__imp_USER32_dll_UnregisterClassW)(*(undefined2 *)((longlong)plVar4 + 0xc),uVar3);
      if (plVar4[2] != 0) {
        (*__imp_KERNEL32_dll_FreeLibrary)();
        plVar4[2] = 0;
      }
    }
    (**(code **)(*plVar4 + 0x88))(plVar4);
  }
  *in_stack_00000020 = 0;
  return 0;
}

