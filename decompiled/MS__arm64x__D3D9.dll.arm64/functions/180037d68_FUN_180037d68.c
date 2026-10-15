/*
 * FUN_180037d68 at 180037d68
 * undefined FUN_180037d68(void)
 * Address ranges: 180037d68-180037db3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180037d68(void)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong unaff_x19;
  longlong unaff_x20;
  longlong lVar8;
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
  pcVar2 = __imp_KERNEL32_dll_CloseHandle;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  (*pcVar2)(*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  thunk_FUN_180102fc0(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_180102fc0();
  *(undefined8 *)(unaff_x21 + 0x7828) = 0;
  lVar8 = *(longlong *)(unaff_x21 + 0x7820);
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) != 0) {
      uVar1 = *(uint *)(lVar8 + 0x20);
      lVar7 = *(longlong *)(lVar8 + 0x10) + (ulonglong)uVar1 * 0x30;
      plVar4 = *(longlong **)(lVar7 + 0x20);
      if ((plVar4 != (longlong *)0x0) &&
         (uVar5 = (**(code **)(*plVar4 + 0x40))(), uVar5 < *(ulonglong *)(lVar7 + 0x28))) {
        lVar7 = *(longlong *)(lVar8 + 0x10) + (ulonglong)uVar1 * 0x30;
        plVar4 = *(longlong **)(lVar7 + 0x20);
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,*(undefined8 *)(lVar7 + 0x28),*(undefined8 *)(lVar8 + 0x30));
        (*__imp_KERNEL32_dll_WaitForSingleObject)(*(undefined8 *)(lVar8 + 0x30),0xffffffff);
      }
      uVar5 = 0;
      if (*(int *)(lVar8 + 0x18) != 0) {
        do {
          (**(code **)(**(longlong **)(uVar5 * 0x30 + *(longlong *)(lVar8 + 0x10) + 8) + 0x10))();
          (**(code **)(**(longlong **)(*(longlong *)(lVar8 + 0x10) + uVar5 * 0x30) + 0x10))();
          uVar1 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(lVar8 + 0x18));
      }
      thunk_FUN_180102fc0(*(undefined8 *)(lVar8 + 0x10));
      pcVar2 = __imp_KERNEL32_dll_CloseHandle;
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (*pcVar2)(*(undefined8 *)(lVar8 + 0x30));
      *(undefined8 *)(lVar8 + 0x30) = 0;
    }
    thunk_FUN_180102fc0(*(undefined8 *)(lVar8 + 0x10));
    FUN_180102fc0(lVar8,0x38);
  }
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
  if ((plVar4 != (longlong *)0x0) && (iVar3 = FUN_180001590(plVar4 + 1), iVar3 == 0)) {
    if (*(short *)((longlong)plVar4 + 0xc) != 0) {
      uVar6 = (*__imp_KERNEL32_dll_GetModuleHandleW)(0);
      (*__imp_USER32_dll_UnregisterClassW)(*(undefined2 *)((longlong)plVar4 + 0xc),uVar6);
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

