/*
 * FUN_180037ec0 at 180037ec0
 * undefined FUN_180037ec0(void)
 * Address ranges: 180037ec0-180037f07;180037f58-180037f6f;180037f74-180037f8b;180037f90-180037fa7;180037fac-180037fc3;180037fc8-180037fdf;180037fe4-180037ff7;180037ffc-18003800f;180038014-18003802f;180038048-1800380b7;1800380c0-1800380d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180037ec0(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  longlong unaff_x19;
  longlong *plVar4;
  longlong unaff_x20;
  longlong unaff_x21;
  undefined8 *in_stack_00000020;
  
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

