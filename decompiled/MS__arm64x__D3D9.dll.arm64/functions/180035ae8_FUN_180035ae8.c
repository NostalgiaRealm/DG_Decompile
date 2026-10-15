/*
 * FUN_180035ae8 at 180035ae8
 * undefined FUN_180035ae8(void)
 * Address ranges: 180035ae8-180035db3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180035ae8(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [32];
  
  lVar8 = *(longlong *)(param_1 + 8);
  lVar6 = *(longlong *)(lVar8 + 0x188) + (ulonglong)*(uint *)(lVar8 + 400) * 0x1ac0;
  if (*(char *)(param_1 + 0x31) == '\0') {
    FUN_180101df0(lVar6 + 0x1bc0);
    FUN_1800e8548(*(longlong *)(lVar6 + 0x1e08) + 8,0);
    FUN_1800eee40(*(undefined8 *)(lVar6 + 0x1e00),
                  *(undefined8 *)(*(longlong *)(lVar6 + 0x1e08) + 0xb80));
    uVar7 = 0;
    if (*(int *)(lVar8 + 0x1b0) != 0) {
      do {
        lVar6 = *(longlong *)(*(longlong *)(lVar8 + 0x1a8) + uVar7 * 8);
        uVar1 = *(uint *)(lVar6 + 0x40);
        while (uVar1 = uVar1 - 1, uVar1 != 0) {
          lVar3 = *(longlong *)(*(longlong *)(lVar6 + 0x38) + (ulonglong)uVar1 * 0x10);
          if (lVar3 != 0) {
            FUN_1800f1380(*(undefined8 *)(*(longlong *)(lVar6 + 0x10) + 0x1b500),lVar3,0,0);
          }
          puVar2 = *(undefined8 **)(*(longlong *)(lVar6 + 0x38) + (ulonglong)uVar1 * 0x10);
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          if (*(int *)(lVar6 + 0x40) != 0) {
            *(int *)(lVar6 + 0x40) = *(int *)(lVar6 + 0x40) + -1;
          }
        }
        *(undefined8 *)(lVar6 + 0x48) = 0;
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar1;
        *(undefined4 *)(lVar6 + 0x2c) = 0xffffffff;
      } while (uVar1 < *(uint *)(lVar8 + 0x1b0));
    }
  }
  else {
    FUN_180101df0(lVar6 + 0x1bc0);
    FUN_1800e8548(*(longlong *)(lVar6 + 0x1e08) + 8,0);
    FUN_1800eee40(*(undefined8 *)(lVar6 + 0x1e00),
                  *(undefined8 *)(*(longlong *)(lVar6 + 0x1e08) + 0xb80));
    uVar7 = 0;
    if (*(int *)(lVar8 + 0x1c0) != 0) {
      do {
        lVar6 = *(longlong *)(*(longlong *)(lVar8 + 0x1b8) + uVar7 * 8);
        uVar1 = *(uint *)(lVar6 + 0x40);
        while (uVar1 = uVar1 - 1, uVar1 != 0) {
          lVar3 = *(longlong *)(*(longlong *)(lVar6 + 0x38) + (ulonglong)uVar1 * 0x10);
          if (lVar3 != 0) {
            FUN_1800f1380(*(undefined8 *)(*(longlong *)(lVar6 + 0x10) + 0x1b500),lVar3,0,0);
          }
          puVar2 = *(undefined8 **)(*(longlong *)(lVar6 + 0x38) + (ulonglong)uVar1 * 0x10);
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          if (*(int *)(lVar6 + 0x40) != 0) {
            *(int *)(lVar6 + 0x40) = *(int *)(lVar6 + 0x40) + -1;
          }
        }
        *(undefined8 *)(lVar6 + 0x48) = 0;
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar1;
        *(undefined4 *)(lVar6 + 0x2c) = 0xffffffff;
      } while (uVar1 < *(uint *)(lVar8 + 0x1c0));
    }
  }
  (**(code **)(*(longlong *)(**(longlong **)(param_1 + 0x38) + 0x40) + 0x20))
            (**(longlong **)(param_1 + 0x38) + 0x40,param_2,param_3,0,0);
  if (param_2[2] == 0) {
    lVar6 = *(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x1ac0;
    uVar1 = *(uint *)(**(longlong **)(param_1 + 0x38) + 0x30);
    if (*(char *)(param_1 + 0x31) == '\0') {
      uVar5 = *(uint *)(lVar6 + 0x1ef4);
      if (uVar5 < uVar1 << 1) {
        iVar4 = 2;
        if (uVar1 <= uVar5 * 3) {
          iVar4 = 3;
        }
        uVar5 = iVar4 * uVar1;
      }
      *(uint *)(lVar6 + 0x1ef8) = *(int *)(lVar6 + 0x1ef8) + uVar5;
    }
    else {
      uVar5 = *(uint *)(lVar6 + 0x1f84);
      if (uVar5 < uVar1 << 1) {
        iVar4 = 2;
        if (uVar1 <= uVar5 * 3) {
          iVar4 = 3;
        }
        uVar5 = iVar4 * uVar1;
      }
      *(uint *)(lVar6 + 0x1f88) = *(int *)(lVar6 + 0x1f88) + uVar5;
    }
    puVar2 = (undefined8 *)
             (**(code **)(*(longlong *)(**(longlong **)(param_1 + 0x38) + 0x40) + 0x20))
                       (**(longlong **)(param_1 + 0x38) + 0x40,auStack_70,param_3,0,0);
    uVar9 = *puVar2;
    param_2[1] = puVar2[1];
    *param_2 = uVar9;
    param_2[2] = puVar2[2];
  }
  return param_2;
}

