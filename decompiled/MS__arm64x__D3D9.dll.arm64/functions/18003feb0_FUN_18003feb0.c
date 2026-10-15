/*
 * FUN_18003feb0 at 18003feb0
 * undefined FUN_18003feb0(void)
 * Address ranges: 18003feb0-18003ffb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18003feb0(longlong param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    if (*(int *)(param_1 + 0x74) == 0) {
      if ((((param_2 | param_3) & 0xff) != 0) ||
         ((param_4 != 0 && (param_4 != *(int *)(param_1 + 0x80))))) {
        if (*(int *)(*(longlong *)(param_1 + 0xf710) + 0x34) != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0xf710) + 0x34) = 0;
        }
        if (*(int *)(*(longlong *)(param_1 + 0xf718) + 0x34) != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0xf718) + 0x34) = 0;
        }
        FUN_18003fd40(param_1,param_2,param_3,param_4);
      }
    }
    else {
      if (*(int *)(*(longlong *)(param_1 + 0xf710) + 0x34) != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0xf710) + 0x34) = 0;
      }
      if (*(int *)(*(longlong *)(param_1 + 0xf718) + 0x34) != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0xf718) + 0x34) = 0;
      }
      FUN_1800015a0(*(longlong *)(param_1 + 0xf718) + 0x38);
      *(byte *)(param_1 + 0xf68f) =
           *(int *)(*(longlong *)(param_1 + 0xf718) + 0x6c) != 0 | *(byte *)(param_1 + 0xf68f);
      *(undefined4 *)(*(longlong *)(param_1 + 0xf718) + 0x6c) = 0;
      uVar7 = FUN_18003ab70(param_1);
      if ((uVar7 & 1) != 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x74);
        lVar10 = 0x98;
        if (*(longlong *)(param_1 + 0xff38) == *(longlong *)(param_1 + 0xf718)) {
          lVar10 = 0x70;
        }
        uVar3 = *(undefined4 *)(param_1 + lVar10);
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
        iVar9 = *(int *)(lVar10 + 0xb28);
        if (iVar9 != 0) {
          iVar4 = *(int *)(lVar10 + 0x67c);
          uVar8 = *(undefined8 *)(lVar10 + 0xb20);
          *(int *)(lVar10 + 0x67c) = iVar4 + 1;
          if (((iVar4 == 0) && (*(longlong *)(lVar10 + 0xb10) != 0)) &&
             (*(int *)(lVar10 + 0xba8) != 0)) {
            uVar7 = 0;
            do {
              (**(code **)**(undefined8 **)(*(longlong *)(lVar10 + 0xba0) + uVar7 * 8))();
              uVar1 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar1;
            } while (uVar1 < *(uint *)(lVar10 + 0xba8));
          }
          (**(code **)(**(longlong **)(lVar10 + 0x688) + 0xd0))
                    (*(longlong **)(lVar10 + 0x688),iVar9,uVar8);
          *(undefined4 *)(lVar10 + 0xb28) = 0;
        }
        iVar9 = *(int *)(lVar10 + 0x67c);
        *(int *)(lVar10 + 0x67c) = iVar9 + 1;
        if (((iVar9 == 0) && (*(longlong *)(lVar10 + 0xb10) != 0)) &&
           (*(int *)(lVar10 + 0xba8) != 0)) {
          uVar7 = 0;
          do {
            (**(code **)**(undefined8 **)(*(longlong *)(lVar10 + 0xba0) + uVar7 * 8))();
            uVar1 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar1;
          } while (uVar1 < *(uint *)(lVar10 + 0xba8));
        }
        (**(code **)(**(longlong **)(lVar10 + 0x688) + 0x60))
                  (*(longlong **)(lVar10 + 0x688),uVar2,1,uVar3,0);
        cVar6 = *(char *)(lVar10 + 0x674);
        *(undefined1 *)(lVar10 + 0x674) = 0;
        iVar9 = 8;
        if (cVar6 == '\0') {
          iVar9 = 1;
        }
        iVar9 = iVar9 + *(int *)(lVar10 + 0x678);
        *(int *)(lVar10 + 0x678) = iVar9;
        if (((*(int *)(lVar10 + 0x680) <= iVar9) && (*(longlong *)(lVar10 + 0xb10) != 0)) &&
           (*(int *)(lVar10 + 0x684) == 0)) {
          FUN_1800e8548(lVar10 + 8,0);
        }
      }
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
      iVar9 = *(int *)(lVar10 + 0x684) + -1;
      *(int *)(lVar10 + 0x684) = iVar9;
      if ((iVar9 == 0) && (*(int *)(lVar10 + 0x680) <= *(int *)(lVar10 + 0x678))) {
        FUN_1800e8548(lVar10 + 8,0);
      }
      FUN_18003fd40(param_1,param_2,param_3,param_4);
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
  }
  else {
    if (*(int *)(*(longlong *)(param_1 + 0xf710) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xf710) + 0x34) = 0;
    }
    if (*(int *)(*(longlong *)(param_1 + 0xf718) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xf718) + 0x34) = 0;
    }
    if (*(int *)(param_1 + 0x74) != 0) {
      FUN_1800015a0(*(longlong *)(param_1 + 0xf718) + 0x38);
      *(byte *)(param_1 + 0xf68f) =
           *(int *)(*(longlong *)(param_1 + 0xf718) + 0x6c) != 0 | *(byte *)(param_1 + 0xf68f);
      *(undefined4 *)(*(longlong *)(param_1 + 0xf718) + 0x6c) = 0;
    }
    FUN_1800015a0(*(longlong *)(param_1 + 0xf710) + 0x38);
    uVar7 = FUN_18003ab70(param_1);
    if ((uVar7 & 1) != 0) {
      lVar10 = 0x98;
      if (*(longlong *)(param_1 + 0xff38) == *(longlong *)(param_1 + 0xf718)) {
        lVar10 = 0x70;
      }
      uVar5 = *(undefined4 *)(param_1 + lVar10);
      uVar2 = *(undefined4 *)(param_1 + 0x90);
      uVar3 = *(undefined4 *)(param_1 + 0x94);
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
      iVar9 = *(int *)(lVar10 + 0xb28);
      if (iVar9 != 0) {
        iVar4 = *(int *)(lVar10 + 0x67c);
        uVar8 = *(undefined8 *)(lVar10 + 0xb20);
        *(int *)(lVar10 + 0x67c) = iVar4 + 1;
        if (((iVar4 == 0) && (*(longlong *)(lVar10 + 0xb10) != 0)) &&
           (*(int *)(lVar10 + 0xba8) != 0)) {
          uVar7 = 0;
          do {
            (**(code **)**(undefined8 **)(*(longlong *)(lVar10 + 0xba0) + uVar7 * 8))();
            uVar1 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar1;
          } while (uVar1 < *(uint *)(lVar10 + 0xba8));
        }
        (**(code **)(**(longlong **)(lVar10 + 0x688) + 0xd0))
                  (*(longlong **)(lVar10 + 0x688),iVar9,uVar8);
        *(undefined4 *)(lVar10 + 0xb28) = 0;
      }
      iVar9 = *(int *)(lVar10 + 0x67c);
      *(int *)(lVar10 + 0x67c) = iVar9 + 1;
      if (((iVar9 == 0) && (*(longlong *)(lVar10 + 0xb10) != 0)) && (*(int *)(lVar10 + 0xba8) != 0))
      {
        uVar7 = 0;
        do {
          (**(code **)**(undefined8 **)(*(longlong *)(lVar10 + 0xba0) + uVar7 * 8))();
          uVar1 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(lVar10 + 0xba8));
      }
      (**(code **)(**(longlong **)(lVar10 + 0x688) + 0x68))
                (*(longlong **)(lVar10 + 0x688),uVar3,1,uVar2,uVar5,0);
      cVar6 = *(char *)(lVar10 + 0x674);
      *(undefined1 *)(lVar10 + 0x674) = 0;
      iVar9 = 8;
      if (cVar6 == '\0') {
        iVar9 = 1;
      }
      iVar9 = iVar9 + *(int *)(lVar10 + 0x678);
      *(int *)(lVar10 + 0x678) = iVar9;
      if (((*(int *)(lVar10 + 0x680) <= iVar9) && (*(longlong *)(lVar10 + 0xb10) != 0)) &&
         (*(int *)(lVar10 + 0x684) == 0)) {
        FUN_1800e8548(lVar10 + 8,0);
      }
    }
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
    iVar9 = *(int *)(lVar10 + 0x684) + -1;
    *(int *)(lVar10 + 0x684) = iVar9;
    if ((iVar9 == 0) && (*(int *)(lVar10 + 0x680) <= *(int *)(lVar10 + 0x678))) {
      FUN_1800e8548(lVar10 + 8,0);
    }
    FUN_18003fd40(param_1,param_2,param_3,param_4);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return 0;
}

