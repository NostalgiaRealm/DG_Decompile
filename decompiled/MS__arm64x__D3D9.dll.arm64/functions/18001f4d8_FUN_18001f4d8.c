/*
 * FUN_18001f4d8 at 18001f4d8
 * undefined FUN_18001f4d8(void)
 * Address ranges: 18001f4d8-18001f7eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18001f4d8(longlong param_1,int param_2,undefined8 *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  *param_4 = 0;
  lVar3 = 0;
  if (param_2 == *(int *)(param_1 + 0x20)) {
    uVar6 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        if (*param_4 != 0) {
          return lVar3;
        }
        puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + uVar6 * 8);
        lVar3 = (**(code **)*puVar4)(puVar4,*param_3,param_4);
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0x18));
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x24)) {
    uVar6 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        if (*param_4 != 0) {
          return lVar3;
        }
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar6 * 8);
        lVar3 = (**(code **)(*plVar5 + 8))(plVar5,*param_3,param_3[1],param_3[2],param_4);
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0x18));
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x28)) {
    uVar6 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        if (*param_4 != 0) {
          return lVar3;
        }
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar6 * 8);
        lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,*param_3,param_4);
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0x18));
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x2c)) {
    uVar6 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        if (*param_4 != 0) {
          return lVar3;
        }
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar6 * 8);
        iVar2 = (**(code **)(*plVar5 + 0x18))(plVar5,*param_3,param_3[1],param_4);
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar1;
        lVar3 = (longlong)iVar2;
      } while (uVar1 < *(uint *)(param_1 + 0x18));
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x30)) {
    uVar6 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        if (*param_4 != 0) {
          return lVar3;
        }
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar6 * 8);
        lVar3 = (**(code **)(*plVar5 + 0x20))(plVar5,*param_3,param_3[1],param_4);
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0x18));
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x34)) {
    uVar6 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        if (*param_4 != 0) {
          return lVar3;
        }
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar6 * 8);
        iVar2 = (**(code **)(*plVar5 + 0x28))(plVar5,*param_3,param_3[1],param_4);
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar1;
        lVar3 = (longlong)iVar2;
      } while (uVar1 < *(uint *)(param_1 + 0x18));
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x38)) {
    uVar6 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        if (*param_4 != 0) {
          return lVar3;
        }
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar6 * 8);
        lVar3 = (**(code **)(*plVar5 + 0x30))(plVar5,*param_3,param_4);
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0x18));
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x3c)) {
    uVar6 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        if (*param_4 != 0) {
          return lVar3;
        }
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar6 * 8);
        lVar3 = (**(code **)(*plVar5 + 0x38))
                          (plVar5,*param_3,param_3[1],param_3[2],param_3[3],param_4);
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0x18));
    }
  }
  else if ((param_2 == *(int *)(param_1 + 0x40)) && (uVar6 = 0, *(int *)(param_1 + 0x18) != 0)) {
    do {
      if (*param_4 != 0) {
        return lVar3;
      }
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar6 * 8);
      lVar3 = (**(code **)(*plVar5 + 0x40))
                        (plVar5,*param_3,param_3[1],param_3[2],param_3[3],param_4);
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x18));
  }
  return lVar3;
}

