/*
 * FUN_18002d924 at 18002d924
 * longlong __fastcall FUN_18002d924(longlong param_1, int param_2, undefined8 * param_3, int * param_4)
 * Address ranges: 18002d924-18002db99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18002d924(longlong param_1,int param_2,undefined8 *param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar5;
  
  *param_4 = 0;
  lVar5 = 0;
  lVar4 = 0;
  if (param_2 == *(int *)(param_1 + 0x20)) {
    uVar7 = 0;
    lVar4 = lVar5;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        if (*param_4 != 0) {
          return lVar4;
        }
        puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + uVar7 * 8);
        lVar4 = (**(code **)*puVar1)(puVar1,*param_3,param_4);
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(param_1 + 0x18));
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x24)) {
    uVar7 = 0;
    lVar4 = lVar5;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        if (*param_4 != 0) {
          return lVar4;
        }
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar7 * 8);
        lVar4 = (**(code **)(*plVar2 + 8))
                          (plVar2,*param_3,param_3[1],*(undefined4 *)(param_3 + 2),param_4);
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(param_1 + 0x18));
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x28)) {
    uVar7 = 0;
    lVar4 = lVar5;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        if (*param_4 != 0) {
          return lVar4;
        }
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar7 * 8);
        lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,*param_3,param_4);
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(param_1 + 0x18));
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x2c)) {
    uVar7 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        if (*param_4 != 0) {
          return lVar5;
        }
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar7 * 8);
        iVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,*param_3,param_3[1],param_4);
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        lVar4 = (longlong)iVar3;
        lVar5 = lVar4;
      } while (uVar6 < *(uint *)(param_1 + 0x18));
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x30)) {
    uVar7 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        if (*param_4 != 0) {
          return lVar5;
        }
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar7 * 8);
        lVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,*param_3,param_3[1],param_4);
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        lVar5 = lVar4;
      } while (uVar6 < *(uint *)(param_1 + 0x18));
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x34)) {
    uVar7 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        if (*param_4 != 0) {
          return lVar5;
        }
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar7 * 8);
        iVar3 = (**(code **)(*plVar2 + 0x28))(plVar2,*param_3,param_3[1],param_4);
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        lVar4 = (longlong)iVar3;
        lVar5 = lVar4;
      } while (uVar6 < *(uint *)(param_1 + 0x18));
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x38)) {
    uVar7 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        if (*param_4 != 0) {
          return lVar5;
        }
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar7 * 8);
        lVar4 = (**(code **)(*plVar2 + 0x30))(plVar2,*param_3,param_4);
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        lVar5 = lVar4;
      } while (uVar6 < *(uint *)(param_1 + 0x18));
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x3c)) {
    uVar7 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        if (*param_4 != 0) {
          return lVar5;
        }
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar7 * 8);
        lVar4 = (**(code **)(*plVar2 + 0x38))
                          (plVar2,*param_3,*(undefined4 *)(param_3 + 1),param_3[2],param_3[3],
                           param_4);
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        lVar5 = lVar4;
      } while (uVar6 < *(uint *)(param_1 + 0x18));
    }
  }
  else if ((param_2 == *(int *)(param_1 + 0x40)) && (uVar7 = 0, *(int *)(param_1 + 0x18) != 0)) {
    do {
      if (*param_4 != 0) {
        return lVar5;
      }
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar7 * 8);
      lVar4 = (**(code **)(*plVar2 + 0x40))
                        (plVar2,*param_3,*(undefined4 *)(param_3 + 1),param_3[2],param_3[3],param_4)
      ;
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      lVar5 = lVar4;
    } while (uVar6 < *(uint *)(param_1 + 0x18));
  }
  return lVar4;
}

