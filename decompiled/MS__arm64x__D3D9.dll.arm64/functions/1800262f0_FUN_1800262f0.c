/*
 * FUN_1800262f0 at 1800262f0
 * undefined FUN_1800262f0(void)
 * Address ranges: 1800262f0-1800262fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800262f0(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  lVar6 = *(longlong *)(param_1 + 0xf6d0);
  if (lVar6 != 0) {
    (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar6 + 0x620);
    *(longlong *)(lVar6 + 0x618) = param_1;
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    (**(code **)(*plVar4 + 0x78))(plVar4,*(undefined8 *)(param_1 + 0xf718),0);
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    (**(code **)(*plVar4 + 0x78))(plVar4,*(undefined8 *)(param_1 + 0xf710),0);
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(*(longlong *)(param_1 + 0xf6d0) + 0x620);
    FUN_180001550(*(longlong *)(param_1 + 0xf6d0) + 0x618,0,param_1);
    (**(code **)(**(longlong **)(param_1 + 0xf7b0) + 0x10))();
    *(undefined8 *)(param_1 + 0xf7b0) = 0;
    (**(code **)(**(longlong **)(param_1 + 0xf7d8) + 0x10))();
    *(undefined8 *)(param_1 + 0xf7d8) = 0;
    (**(code **)(**(longlong **)(param_1 + 0xf7b8) + 0x10))();
    *(undefined8 *)(param_1 + 0xf7b8) = 0;
    (**(code **)(**(longlong **)(param_1 + 0xf7c0) + 0x10))();
    *(undefined8 *)(param_1 + 0xf7c0) = 0;
    (**(code **)(**(longlong **)(param_1 + 0xf7c8) + 0x10))();
    *(undefined8 *)(param_1 + 0xf7c8) = 0;
    uVar7 = 0;
    if (*(int *)(param_1 + 0xf75c) != 0) {
      do {
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xf750) + uVar7 * 0x20 + 0x18) + 0x10))
                  ();
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0xf75c));
    }
    *(undefined4 *)(param_1 + 0xf75c) = 0;
    uVar7 = 0;
    iVar3 = 0;
    if (*(int *)(param_1 + 0xf7a0) != 0) {
      if (*(int *)(param_1 + 0xf7a0) == 0) {
        lVar6 = 0;
        goto LAB_180026480;
      }
      do {
        iVar3 = (int)uVar7;
        lVar6 = *(longlong *)(param_1 + 0xf798) + uVar7 * 0x30;
LAB_180026480:
        puVar9 = *(undefined8 **)(lVar6 + 0x28);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &PTR_FUN_180234130;
          FUN_180033e00(puVar9[3],puVar9[1],*(undefined4 *)(puVar9 + 2));
          thunk_FUN_180102fc0(puVar9[0x10]);
          puVar9[0x10] = 0;
          puVar9[0x11] = 0;
          puVar9[0x12] = 0;
          *puVar9 = &PTR_D3DPERF_GetStatus_180234120;
          puVar9[4] = &PTR_FUN_180234a00;
          FUN_180102fc0(puVar9,0x2f8);
        }
        uVar7 = (ulonglong)(iVar3 + 1U);
      } while (iVar3 + 1U < *(uint *)(param_1 + 0xf7a0));
    }
    thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0xf790));
    *(undefined8 *)(param_1 + 0xf790) = 0;
    *(undefined8 *)(param_1 + 0xf798) = 0;
    *(undefined4 *)(param_1 + 0xf7a0) = 0;
    *(undefined4 *)(param_1 + 0xf7a4) = 0;
    FUN_180032180(param_1 + 0xf728);
    lVar6 = 0;
    do {
      FUN_1800e3bf8(*(longlong *)(param_1 + 0xf6d8) + 0x628,
                    *(undefined8 *)(param_1 + 0xfb20 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x10);
    lVar6 = 0;
    do {
      FUN_1800e3bf8(*(longlong *)(param_1 + 0xf6d8) + 0x628,
                    *(undefined8 *)(param_1 + 0xfc88 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 != 5);
    lVar8 = *(longlong *)(param_1 + 0xf6d0);
    plVar4 = *(longlong **)(param_1 + 0xf720);
    lVar6 = lVar8 + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
    (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar8 + 0x620);
    if (plVar4 == *(longlong **)(lVar6 + 0x710)) {
      *(undefined8 *)(lVar6 + 0x710) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x718)) {
      *(undefined8 *)(lVar6 + 0x718) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x720)) {
      *(undefined8 *)(lVar6 + 0x720) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x728)) {
      *(undefined8 *)(lVar6 + 0x728) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x730)) {
      *(undefined8 *)(lVar6 + 0x730) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x738)) {
      *(undefined8 *)(lVar6 + 0x738) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x740)) {
      *(undefined8 *)(lVar6 + 0x740) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x748)) {
      *(undefined8 *)(lVar6 + 0x748) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x750)) {
      *(undefined8 *)(lVar6 + 0x750) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x758)) {
      *(undefined8 *)(lVar6 + 0x758) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x760)) {
      *(undefined8 *)(lVar6 + 0x760) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x768)) {
      *(undefined8 *)(lVar6 + 0x768) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x770)) {
      *(undefined8 *)(lVar6 + 0x770) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x778)) {
      *(undefined8 *)(lVar6 + 0x778) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x780)) {
      *(undefined8 *)(lVar6 + 0x780) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x788)) {
      *(undefined8 *)(lVar6 + 0x788) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x790)) {
      *(undefined8 *)(lVar6 + 0x790) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x798)) {
      *(undefined8 *)(lVar6 + 0x798) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x7a0)) {
      *(undefined8 *)(lVar6 + 0x7a0) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x7a8)) {
      *(undefined8 *)(lVar6 + 0x7a8) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x7b0)) {
      *(undefined8 *)(lVar6 + 0x7b0) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x7b8)) {
      *(undefined8 *)(lVar6 + 0x7b8) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x7c0)) {
      *(undefined8 *)(lVar6 + 0x7c0) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x7c8)) {
      *(undefined8 *)(lVar6 + 0x7c8) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 2000)) {
      *(undefined8 *)(lVar6 + 2000) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x7d8)) {
      *(undefined8 *)(lVar6 + 0x7d8) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x7e0)) {
      *(undefined8 *)(lVar6 + 0x7e0) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x7e8)) {
      *(undefined8 *)(lVar6 + 0x7e8) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x7f0)) {
      *(undefined8 *)(lVar6 + 0x7f0) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x7f8)) {
      *(undefined8 *)(lVar6 + 0x7f8) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x800)) {
      *(undefined8 *)(lVar6 + 0x800) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x808)) {
      *(undefined8 *)(lVar6 + 0x808) = 0;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar8 + 0x620);
    *(undefined8 *)(param_1 + 0xf720) = 0;
    (**(code **)(**(longlong **)(param_1 + 0xf700) + 0x10))();
    *(undefined8 *)(param_1 + 0xf700) = 0;
    (**(code **)(**(longlong **)(param_1 + 0xf6f8) + 0x10))();
    *(undefined8 *)(param_1 + 0xf6f8) = 0;
    (**(code **)(**(longlong **)(param_1 + 0xf708) + 0x10))();
    pcVar2 = __imp_KERNEL32_dll_EnterCriticalSection;
    lVar8 = *(longlong *)(param_1 + 0xf6d0);
    *(undefined8 *)(param_1 + 0xf708) = 0;
    plVar4 = *(longlong **)(param_1 + 0xf710);
    uVar1 = *(uint *)(param_1 + 0x18);
    (*pcVar2)(lVar8 + 0x620);
    lVar6 = lVar8 + (ulonglong)uVar1 * 0x18c0;
    if (plVar4 == *(longlong **)(lVar6 + 0xb70)) {
      *(undefined8 *)(lVar6 + 0xb70) = 0;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar8 + 0x620);
    pcVar2 = __imp_KERNEL32_dll_EnterCriticalSection;
    lVar8 = *(longlong *)(param_1 + 0xf6d0);
    *(undefined8 *)(param_1 + 0xf710) = 0;
    plVar4 = *(longlong **)(param_1 + 0xf718);
    uVar1 = *(uint *)(param_1 + 0x18);
    (*pcVar2)(lVar8 + 0x620);
    lVar6 = lVar8 + (ulonglong)uVar1 * 0x18c0;
    if (plVar4 == *(longlong **)(lVar6 + 0xa70)) {
      *(undefined8 *)(lVar6 + 0xa70) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0xa78)) {
      *(undefined8 *)(lVar6 + 0xa78) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0xa80)) {
      *(undefined8 *)(lVar6 + 0xa80) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0xa88)) {
      *(undefined8 *)(lVar6 + 0xa88) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0xa90)) {
      *(undefined8 *)(lVar6 + 0xa90) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0xa98)) {
      *(undefined8 *)(lVar6 + 0xa98) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0xaa0)) {
      *(undefined8 *)(lVar6 + 0xaa0) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0xaa8)) {
      *(undefined8 *)(lVar6 + 0xaa8) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0xab0)) {
      *(undefined8 *)(lVar6 + 0xab0) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0xab8)) {
      *(undefined8 *)(lVar6 + 0xab8) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0xac0)) {
      *(undefined8 *)(lVar6 + 0xac0) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0xac8)) {
      *(undefined8 *)(lVar6 + 0xac8) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0xad0)) {
      *(undefined8 *)(lVar6 + 0xad0) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0xad8)) {
      *(undefined8 *)(lVar6 + 0xad8) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0xae0)) {
      *(undefined8 *)(lVar6 + 0xae0) = 0;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0xae8)) {
      *(undefined8 *)(lVar6 + 0xae8) = 0;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar8 + 0x620);
    *(undefined8 *)(param_1 + 0xf718) = 0;
    thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    plVar4 = *(longlong **)(param_1 + 0xf6d0);
    if ((plVar4 != (longlong *)0x0) && (iVar3 = FUN_180001590(plVar4 + 1), iVar3 == 0)) {
      if (*(short *)((longlong)plVar4 + 0xc) != 0) {
        uVar5 = (*__imp_KERNEL32_dll_GetModuleHandleW)(0);
        (*__imp_USER32_dll_UnregisterClassW)(*(undefined2 *)((longlong)plVar4 + 0xc),uVar5);
        if (plVar4[2] != 0) {
          (*__imp_KERNEL32_dll_FreeLibrary)();
          plVar4[2] = 0;
        }
      }
      (**(code **)(*plVar4 + 0x88))(plVar4);
    }
    *(undefined8 *)(param_1 + 0xf6d0) = 0;
  }
  return;
}

