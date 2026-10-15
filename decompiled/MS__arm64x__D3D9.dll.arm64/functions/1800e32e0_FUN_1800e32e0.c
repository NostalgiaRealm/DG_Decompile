/*
 * FUN_1800e32e0 at 1800e32e0
 * undefined FUN_1800e32e0(void)
 * Address ranges: 1800e32e0-1800e37b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e32e0(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  ulonglong extraout_x1_01;
  ulonglong extraout_x1_02;
  ulonglong extraout_x1_03;
  ulonglong extraout_x1_04;
  ulonglong extraout_x1_05;
  ulonglong extraout_x1_06;
  ulonglong extraout_x1_07;
  ulonglong extraout_x1_08;
  ulonglong extraout_x1_09;
  ulonglong extraout_x1_10;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  
  uVar3 = param_2 & 0xffffffff;
  lVar4 = param_1 + uVar3 * 0x28;
  iVar2 = *(int *)(lVar4 + 0x28) + -1;
  *(int *)(lVar4 + 0x28) = iVar2;
  if (iVar2 == 0) {
    lVar4 = param_1 + uVar3 * 0x18c0;
    if (*(longlong **)(lVar4 + 0x6c0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar4 + 0x6c0) + 0x10))();
      *(undefined8 *)(lVar4 + 0x6c0) = 0;
      param_2 = extraout_x1;
    }
    if (*(longlong **)(lVar4 + 0x6b8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar4 + 0x6b8) + 0x10))();
      *(undefined8 *)(lVar4 + 0x6b8) = 0;
      param_2 = extraout_x1_00;
    }
    if (*(longlong **)(lVar4 + 0x6b0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar4 + 0x6b0) + 0x10))();
      *(undefined8 *)(lVar4 + 0x6b0) = 0;
      param_2 = extraout_x1_01;
    }
    if (*(longlong *)(lVar4 + 0x1f08) != 0) {
      (**(code **)(**(longlong **)(lVar4 + 0x1f10) + 0x10))();
      *(undefined8 *)(lVar4 + 0x1f10) = 0;
      (**(code **)(**(longlong **)(lVar4 + 0x1ef8) + 0x10))();
      *(undefined8 *)(lVar4 + 0x1ef8) = 0;
      (**(code **)(**(longlong **)(lVar4 + 0x1f18) + 0x10))();
      *(undefined8 *)(lVar4 + 0x1f18) = 0;
      (**(code **)(**(longlong **)(lVar4 + 0x1f00) + 0x10))();
      *(undefined8 *)(lVar4 + 0x1f00) = 0;
      (**(code **)(**(longlong **)(lVar4 + 0x1f08) + 0x10))();
      *(undefined8 *)(lVar4 + 0x1f08) = 0;
      (**(code **)(**(longlong **)(lVar4 + 0x1ef0) + 0x10))();
      *(undefined8 *)(lVar4 + 0x1ef0) = 0;
      (**(code **)(**(longlong **)(lVar4 + 0x1f58) + 0x10))();
      *(undefined8 *)(lVar4 + 0x1f58) = 0;
      (**(code **)(**(longlong **)(lVar4 + 0x1f48) + 0x10))();
      *(undefined8 *)(lVar4 + 0x1f48) = 0;
      (**(code **)(**(longlong **)(lVar4 + 0x1f50) + 0x10))();
      *(undefined8 *)(lVar4 + 0x1f50) = 0;
      (**(code **)(**(longlong **)(lVar4 + 8000) + 0x10))();
      *(undefined8 *)(lVar4 + 8000) = 0;
      (**(code **)(**(longlong **)(lVar4 + 0x1f38) + 0x10))();
      *(undefined8 *)(lVar4 + 0x1f38) = 0;
      (**(code **)(**(longlong **)(lVar4 + 0x1f30) + 0x10))();
      *(undefined8 *)(lVar4 + 0x1f30) = 0;
      (**(code **)(**(longlong **)(lVar4 + 0x1f28) + 0x10))();
      *(undefined8 *)(lVar4 + 0x1f28) = 0;
      (**(code **)(**(longlong **)(lVar4 + 0x1f20) + 0x10))();
      *(undefined8 *)(lVar4 + 0x1f20) = 0;
      param_2 = extraout_x1_02;
    }
    uVar5 = 0;
    if (*(int *)(lVar4 + 0xc04) != 0) {
      do {
        (**(code **)(**(longlong **)(*(longlong *)(lVar4 + 0xbf8) + uVar5 * 0x48 + 0x40) + 0x10))();
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar1;
        param_2 = extraout_x1_03;
      } while (uVar1 < *(uint *)(lVar4 + 0xc04));
    }
    *(undefined4 *)(lVar4 + 0xc04) = 0;
    uVar5 = 0;
    if (*(int *)(lVar4 + 0xc24) != 0) {
      do {
        (**(code **)(**(longlong **)(*(longlong *)(lVar4 + 0xc18) + uVar5 * 0x118 + 0x110) + 0x10))
                  ();
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar1;
        param_2 = extraout_x1_04;
      } while (uVar1 < *(uint *)(lVar4 + 0xc24));
    }
    *(undefined4 *)(lVar4 + 0xc24) = 0;
    uVar5 = 0;
    if (*(int *)(lVar4 + 0xc44) != 0) {
      do {
        (**(code **)(**(longlong **)(*(longlong *)(lVar4 + 0xc38) + uVar5 * 0x118 + 0x110) + 0x10))
                  ();
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar1;
        param_2 = extraout_x1_05;
      } while (uVar1 < *(uint *)(lVar4 + 0xc44));
    }
    *(undefined4 *)(lVar4 + 0xc44) = 0;
    uVar5 = 0;
    if (*(int *)(lVar4 + 0xc64) != 0) {
      do {
        lVar6 = *(longlong *)(lVar4 + 0xc68);
        plVar7 = *(longlong **)(*(longlong *)(lVar4 + 0xc58) + uVar5 * 0x38 + 0x30);
        lVar8 = lVar6 + (ulonglong)*(uint *)(lVar4 + 0xc70) * 0x18c0;
        (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar6 + 0x620);
        if (plVar7 == *(longlong **)(lVar8 + 0x708)) {
          *(undefined8 *)(lVar8 + 0x708) = 0;
        }
        (**(code **)(*plVar7 + 0x10))(plVar7);
        (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar6 + 0x620);
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar1;
        param_2 = extraout_x1_06;
      } while (uVar1 < *(uint *)(lVar4 + 0xc64));
    }
    *(undefined4 *)(lVar4 + 0xc64) = 0;
    uVar5 = 0;
    if (*(int *)(lVar4 + 0xc84) != 0) {
      do {
        (**(code **)(**(longlong **)(*(longlong *)(lVar4 + 0xc78) + uVar5 * 0x20 + 0x18) + 0x10))();
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar1;
        param_2 = extraout_x1_07;
      } while (uVar1 < *(uint *)(lVar4 + 0xc84));
    }
    *(undefined4 *)(lVar4 + 0xc84) = 0;
    uVar5 = 0;
    if (*(int *)(lVar4 + 0xca4) != 0) {
      do {
        FUN_1800e1808(*(undefined8 *)(lVar4 + 0xca8),*(undefined4 *)(lVar4 + 0xcb0),
                      *(undefined8 *)(*(longlong *)(lVar4 + 0xc98) + uVar5 * 0x18 + 0x10));
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar1;
        param_2 = extraout_x1_08;
      } while (uVar1 < *(uint *)(lVar4 + 0xca4));
    }
    *(undefined4 *)(lVar4 + 0xca4) = 0;
    uVar5 = 0;
    if (*(int *)(lVar4 + 0xcc4) != 0) {
      do {
        FUN_1800e1760(*(undefined8 *)(lVar4 + 0xcc8),*(undefined4 *)(lVar4 + 0xcd0),
                      *(undefined8 *)(*(longlong *)(lVar4 + 0xcb8) + uVar5 * 0x48 + 0x40));
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar1;
        param_2 = extraout_x1_09;
      } while (uVar1 < *(uint *)(lVar4 + 0xcc4));
    }
    *(undefined4 *)(lVar4 + 0xcc4) = 0;
    uVar5 = 0;
    if (*(int *)(lVar4 + 0xce4) != 0) {
      do {
        lVar6 = 0;
        lVar8 = *(longlong *)(*(longlong *)(lVar4 + 0xcd8) + uVar5 * 0x48 + 0x40);
        do {
          if (*(longlong *)(lVar8 + 0x20 + lVar6 * 0x30) != 0) {
            FUN_1800e1760(*(undefined8 *)(lVar4 + 0xce8),*(undefined4 *)(lVar4 + 0xcf0));
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0x14);
        FUN_180102fc0(lVar8,0x3c0);
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar1;
        param_2 = extraout_x1_10;
      } while (uVar1 < *(uint *)(lVar4 + 0xce4));
    }
    *(undefined4 *)(lVar4 + 0xce4) = 0;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = param_2;
    auVar9 = auVar9 << 0x40;
    if (*(longlong **)(lVar4 + 0xea8) != (longlong *)0x0) {
      auVar9 = (**(code **)(**(longlong **)(lVar4 + 0xea8) + 0x10))();
      *(undefined8 *)(lVar4 + 0xea8) = 0;
    }
    FUN_1800e15f0(auVar9._0_8_,auVar9._8_8_,2,lVar4 + 0xe70,lVar4 + 0xe80);
    lVar6 = 0;
    do {
      plVar7 = *(longlong **)(lVar4 + 0xd18 + lVar6 * 8);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))();
        *(undefined8 *)(lVar4 + 0xd18 + lVar6 * 8) = 0;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x2b);
    lVar6 = 0;
    do {
      plVar7 = *(longlong **)(lVar4 + 0xcf8 + lVar6 * 8);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))();
        *(undefined8 *)(lVar4 + 0xcf8 + lVar6 * 8) = 0;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 4);
    if (*(longlong *)(lVar4 + 0xe98) != 0) {
      FUN_1800e18b8(param_1,uVar3);
      *(undefined8 *)(lVar4 + 0xe98) = 0;
    }
    FUN_1800e1760(param_1,uVar3,*(undefined8 *)(lVar4 + 0xe90));
    *(undefined8 *)(lVar4 + 0xe90) = 0;
  }
  return;
}

