/*
 * FUN_180080290 at 180080290
 * undefined FUN_180080290(void)
 * Address ranges: 180080290-18008058b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180080290(longlong param_1)

{
  uint uVar1;
  ulonglong extraout_x1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  
  if (*(longlong *)(param_1 + 0x1cf10) != 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x1d0a4) != 0) {
      do {
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1d098) + uVar4 * 0x18 + 0x10) + 0x10)
        )();
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0x1d0a4));
    }
    *(undefined4 *)(param_1 + 0x1d0a4) = 0;
    uVar4 = 0;
    if (*(int *)(param_1 + 0x1d080) != 0) {
      if (*(int *)(param_1 + 0x1d080) == 0) {
        puVar2 = (undefined8 *)&DAT_00000008;
        goto LAB_180080358;
      }
      do {
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x1d078) + uVar4 * 0x18 + 0x10);
LAB_180080358:
        lVar3 = *(longlong *)(param_1 + 0x1d088);
        plVar5 = (longlong *)*puVar2;
        lVar6 = lVar3 + (ulonglong)*(uint *)(param_1 + 0x1d090) * 0x18c0;
        (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar3 + 0x620);
        if (plVar5 == *(longlong **)(lVar6 + 0xbb0)) {
          *(undefined8 *)(lVar6 + 0xbb0) = 0;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar3 + 0x620);
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0x1d080));
    }
    thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x1d070));
    *(undefined8 *)(param_1 + 0x1d070) = 0;
    *(undefined4 *)(param_1 + 0x1d080) = 0;
    uVar4 = 0;
    *(undefined8 *)(param_1 + 0x1d078) = 0;
    *(undefined4 *)(param_1 + 0x1d084) = 0;
    if (*(int *)(param_1 + 0x1d4d4) != 0) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x1d4c8) + uVar4 * 0x48;
        plVar7 = *(longlong **)(lVar3 + 0x40);
        plVar5 = *(longlong **)(lVar3 + 0x38);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))();
        }
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0x1d4d4));
    }
    *(undefined4 *)(param_1 + 0x1d4d4) = 0;
    if (*(longlong *)(param_1 + 0x1d4f8) != 0) {
      FUN_1800e1808(*(undefined8 *)(param_1 + 0x1cf10),*(undefined4 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x1d4f8) = 0;
    }
    if (*(longlong **)(param_1 + 0x1d4f0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x1d4f0) + 0x10))();
      *(undefined8 *)(param_1 + 0x1d4f0) = 0;
    }
    lVar3 = 0;
    do {
      if (*(longlong *)(param_1 + 0x1d2b8 + lVar3 * 8) != 0) {
        FUN_1800e1808(*(undefined8 *)(param_1 + 0x1cf10),*(undefined4 *)(param_1 + 0x28));
        *(undefined8 *)(param_1 + 0x1d2b8 + lVar3 * 8) = 0;
      }
      plVar5 = *(longlong **)(param_1 + 0x1d0b8 + lVar3 * 8);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))();
        *(undefined8 *)(param_1 + 0x1d0b8 + lVar3 * 8) = 0;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x40);
    FUN_1800e18b8(*(undefined8 *)(param_1 + 0x1cf10),*(undefined4 *)(param_1 + 0x28),
                  *(undefined8 *)(param_1 + 0x1d4b8));
    *(undefined8 *)(param_1 + 0x1d4b8) = 0;
    (**(code **)(**(longlong **)(param_1 + 120000) + 0x10))();
    *(undefined8 *)(param_1 + 120000) = 0;
    lVar3 = 0;
    uVar4 = extraout_x1;
    do {
      plVar5 = *(longlong **)(param_1 + 0x1cf20 + lVar3 * 8);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar4;
      auVar8 = auVar8 << 0x40;
      if (plVar5 != (longlong *)0x0) {
        auVar8 = (**(code **)(*plVar5 + 0x10))();
        *(undefined8 *)(param_1 + 0x1cf20 + lVar3 * 8) = 0;
      }
      uVar4 = auVar8._8_8_;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x28);
    FUN_1800e15f0(auVar8._0_8_,uVar4,1,param_1 + 0x1d060,param_1 + 0x1d068);
    FUN_180001550(*(longlong *)(param_1 + 0x1cf10) + 0x618,0,param_1);
    FUN_1800e32e0(*(undefined8 *)(param_1 + 0x1cf10),*(undefined4 *)(param_1 + 0x28));
    FUN_1800e12c8(*(undefined8 *)(param_1 + 0x1cf10));
    *(undefined8 *)(param_1 + 0x1cf10) = 0;
  }
  return;
}

