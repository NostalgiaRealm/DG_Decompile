/*
 * FUN_18004e198 at 18004e198
 * undefined __cdecl FUN_18004e198(longlong param_1, uint param_2)
 * Address ranges: 18004e198-18004e4b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004e198(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  ulonglong extraout_x1_01;
  ulonglong extraout_x1_02;
  ulonglong extraout_x1_03;
  ulonglong extraout_x1_04;
  ulonglong extraout_x1_05;
  ulonglong extraout_x1_06;
  ulonglong extraout_x1_07;
  longlong *plVar3;
  ulonglong uVar4;
  LPVOID pvVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  
  uVar2 = FUN_18004dc68(param_1,param_2);
  if ((uVar2 & 1) != 0) {
    lVar6 = param_1 + (ulonglong)param_2 * 0x18c0;
    FUN_18005e4c0(param_1,param_2);
    uVar4 = 0;
    uVar2 = extraout_x1;
    if (*(int *)(lVar6 + 0xc04) != 0) {
      do {
        (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 0xbf8) + uVar4 * 0x48 + 0x40) + 0x10))();
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar1;
        uVar2 = extraout_x1_00;
      } while (uVar1 < *(uint *)(lVar6 + 0xc04));
    }
    *(undefined4 *)(lVar6 + 0xc04) = 0;
    uVar4 = 0;
    if (*(int *)(lVar6 + 0xc24) != 0) {
      do {
        (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 0xc18) + uVar4 * 0x118 + 0x110) + 0x10))
                  ();
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar1;
        uVar2 = extraout_x1_01;
      } while (uVar1 < *(uint *)(lVar6 + 0xc24));
    }
    *(undefined4 *)(lVar6 + 0xc24) = 0;
    uVar4 = 0;
    if (*(int *)(lVar6 + 0xc44) != 0) {
      do {
        (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 0xc38) + uVar4 * 0x118 + 0x110) + 0x10))
                  ();
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar1;
        uVar2 = extraout_x1_02;
      } while (uVar1 < *(uint *)(lVar6 + 0xc44));
    }
    *(undefined4 *)(lVar6 + 0xc44) = 0;
    uVar4 = 0;
    if (*(int *)(lVar6 + 0xc64) != 0) {
      do {
        FUN_180055810(lVar6 + 0xc58,
                      *(longlong **)(*(longlong *)(lVar6 + 0xc58) + uVar4 * 0x38 + 0x30));
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar1;
        uVar2 = extraout_x1_03;
      } while (uVar1 < *(uint *)(lVar6 + 0xc64));
    }
    *(undefined4 *)(lVar6 + 0xc64) = 0;
    uVar4 = 0;
    if (*(int *)(lVar6 + 0xc84) != 0) {
      do {
        (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 0xc78) + uVar4 * 0x20 + 0x18) + 0x10))();
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar1;
        uVar2 = extraout_x1_04;
      } while (uVar1 < *(uint *)(lVar6 + 0xc84));
    }
    *(undefined4 *)(lVar6 + 0xc84) = 0;
    uVar4 = 0;
    if (*(int *)(lVar6 + 0xca4) != 0) {
      do {
        FUN_18004fa38(*(longlong *)(lVar6 + 0xca8),*(uint *)(lVar6 + 0xcb0),
                      *(longlong **)(*(longlong *)(lVar6 + 0xc98) + uVar4 * 0x18 + 0x10));
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar1;
        uVar2 = extraout_x1_05;
      } while (uVar1 < *(uint *)(lVar6 + 0xca4));
    }
    *(undefined4 *)(lVar6 + 0xca4) = 0;
    uVar4 = 0;
    if (*(int *)(lVar6 + 0xcc4) != 0) {
      do {
        FUN_18004f908(*(longlong *)(lVar6 + 0xcc8),*(uint *)(lVar6 + 0xcd0),
                      *(longlong **)(*(longlong *)(lVar6 + 0xcb8) + uVar4 * 0x48 + 0x40));
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar1;
        uVar2 = extraout_x1_06;
      } while (uVar1 < *(uint *)(lVar6 + 0xcc4));
    }
    *(undefined4 *)(lVar6 + 0xcc4) = 0;
    uVar4 = 0;
    if (*(int *)(lVar6 + 0xce4) != 0) {
      do {
        lVar7 = 0;
        pvVar5 = *(LPVOID *)(*(longlong *)(lVar6 + 0xcd8) + uVar4 * 0x48 + 0x40);
        do {
          plVar3 = *(longlong **)((longlong)pvVar5 + lVar7 * 0x30 + 0x20);
          if (plVar3 != (longlong *)0x0) {
            FUN_18004f908(*(longlong *)(lVar6 + 0xce8),*(uint *)(lVar6 + 0xcf0),plVar3);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x14);
        FUN_18005fbc8(pvVar5);
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar1;
        uVar2 = extraout_x1_07;
      } while (uVar1 < *(uint *)(lVar6 + 0xce4));
    }
    *(undefined4 *)(lVar6 + 0xce4) = 0;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar2;
    auVar8 = auVar8 << 0x40;
    if (*(longlong **)(lVar6 + 0xea8) != (longlong *)0x0) {
      auVar8 = (**(code **)(**(longlong **)(lVar6 + 0xea8) + 0x10))();
      *(undefined8 *)(lVar6 + 0xea8) = 0;
    }
    FUN_18004f798(auVar8._0_8_,auVar8._8_8_,2,lVar6 + 0xe70,lVar6 + 0xe80);
    lVar7 = 0;
    do {
      plVar3 = *(longlong **)(lVar6 + 0xd18 + lVar7 * 8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
        *(undefined8 *)(lVar6 + 0xd18 + lVar7 * 8) = 0;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x2b);
    lVar7 = 0;
    do {
      plVar3 = *(longlong **)(lVar6 + 0xcf8 + lVar7 * 8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
        *(undefined8 *)(lVar6 + 0xcf8 + lVar7 * 8) = 0;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 4);
    if (*(longlong **)(lVar6 + 0xe98) != (longlong *)0x0) {
      FUN_18004fae8(param_1,param_2,*(longlong **)(lVar6 + 0xe98));
      *(undefined8 *)(lVar6 + 0xe98) = 0;
    }
    FUN_18004f908(param_1,param_2,*(longlong **)(lVar6 + 0xe90));
    *(undefined8 *)(lVar6 + 0xe90) = 0;
  }
  return;
}

