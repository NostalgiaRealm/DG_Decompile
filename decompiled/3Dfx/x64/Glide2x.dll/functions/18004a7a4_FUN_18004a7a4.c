/*
 * FUN_18004a7a4 at 18004a7a4
 * undefined __fastcall FUN_18004a7a4(longlong param_1, uint param_2)
 * Address ranges: 18004a7a4-18004aa7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004a7a4(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  plVar3 = (longlong *)(ulonglong)param_2;
  uVar1 = FUN_18004a364(param_1,param_2);
  uVar7 = 0;
  if ((char)uVar1 != '\0') {
    lVar4 = (longlong)plVar3 * 0x18c0 + param_1;
    FUN_18005b5f4(param_1,param_2);
    uVar6 = uVar7;
    if (*(int *)(lVar4 + 0xc04) != 0) {
      do {
        (**(code **)(**(longlong **)(*(longlong *)(lVar4 + 0xbf8) + 0x40 + uVar6 * 0x48) + 0x10))();
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(lVar4 + 0xc04));
    }
    *(undefined4 *)(lVar4 + 0xc04) = 0;
    uVar6 = uVar7;
    if (*(int *)(lVar4 + 0xc24) != 0) {
      do {
        (**(code **)(**(longlong **)(*(longlong *)(lVar4 + 0xc18) + 0x110 + uVar6 * 0x118) + 0x10))
                  ();
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(lVar4 + 0xc24));
    }
    *(undefined4 *)(lVar4 + 0xc24) = 0;
    uVar6 = uVar7;
    if (*(int *)(lVar4 + 0xc44) != 0) {
      do {
        (**(code **)(**(longlong **)(*(longlong *)(lVar4 + 0xc38) + 0x110 + uVar6 * 0x118) + 0x10))
                  ();
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(lVar4 + 0xc44));
    }
    *(undefined4 *)(lVar4 + 0xc44) = 0;
    uVar6 = uVar7;
    if (*(int *)(lVar4 + 0xc64) != 0) {
      do {
        plVar3 = *(longlong **)(*(longlong *)(lVar4 + 0xc58) + 0x30 + uVar6 * 0x38);
        FUN_180053ad8(lVar4 + 0xc58,plVar3);
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(lVar4 + 0xc64));
    }
    *(undefined4 *)(lVar4 + 0xc64) = 0;
    uVar6 = uVar7;
    if (*(int *)(lVar4 + 0xc84) != 0) {
      do {
        (**(code **)(**(longlong **)(*(longlong *)(lVar4 + 0xc78) + 0x18 + uVar6 * 0x20) + 0x10))();
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(lVar4 + 0xc84));
    }
    *(undefined4 *)(lVar4 + 0xc84) = 0;
    uVar6 = uVar7;
    if (*(int *)(lVar4 + 0xca4) != 0) {
      do {
        plVar3 = (longlong *)(ulonglong)*(uint *)(lVar4 + 0xcb0);
        FUN_18004cb4c(*(longlong *)(lVar4 + 0xca8),*(uint *)(lVar4 + 0xcb0),
                      *(longlong **)(*(longlong *)(lVar4 + 0xc98) + 0x10 + uVar6 * 0x18));
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(lVar4 + 0xca4));
    }
    *(undefined4 *)(lVar4 + 0xca4) = 0;
    uVar6 = uVar7;
    if (*(int *)(lVar4 + 0xcc4) != 0) {
      do {
        plVar3 = (longlong *)(ulonglong)*(uint *)(lVar4 + 0xcd0);
        FUN_18004ca44(*(longlong *)(lVar4 + 0xcc8),*(uint *)(lVar4 + 0xcd0),
                      *(longlong **)(*(longlong *)(lVar4 + 0xcb8) + 0x40 + uVar6 * 0x48));
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(lVar4 + 0xcc4));
    }
    *(undefined4 *)(lVar4 + 0xcc4) = 0;
    uVar6 = uVar7;
    if (*(int *)(lVar4 + 0xce4) == 0) {
      *(undefined4 *)(lVar4 + 0xce4) = 0;
    }
    else {
      do {
        plVar3 = *(longlong **)(*(longlong *)(lVar4 + 0xcd8) + 0x40 + uVar6 * 0x48);
        FUN_180053b34(lVar4 + 0xcd8,plVar3);
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(lVar4 + 0xce4));
    }
    *(undefined4 *)(lVar4 + 0xce4) = 0;
    plVar2 = *(longlong **)(lVar4 + 0xea8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
      *(undefined8 *)(lVar4 + 0xea8) = 0;
    }
    FUN_18004c8e0(plVar2,plVar3,2,lVar4 + 0xe70,lVar4 + 0xe80);
    uVar6 = uVar7;
    do {
      plVar3 = *(longlong **)(lVar4 + 0xd18 + uVar6 * 8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
        *(undefined8 *)(lVar4 + 0xd18 + uVar6 * 8) = 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0x2b);
    do {
      plVar3 = *(longlong **)(lVar4 + 0xcf8 + uVar7 * 8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
        *(undefined8 *)(lVar4 + 0xcf8 + uVar7 * 8) = 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 4);
    if (*(longlong **)(lVar4 + 0xe98) != (longlong *)0x0) {
      FUN_18004cbd4(param_1,(ulonglong)param_2,*(longlong **)(lVar4 + 0xe98));
      *(undefined8 *)(lVar4 + 0xe98) = 0;
    }
    FUN_18004ca44(param_1,param_2,*(longlong **)(lVar4 + 0xe90));
    *(undefined8 *)(lVar4 + 0xe90) = 0;
  }
  return;
}

