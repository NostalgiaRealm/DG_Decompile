/*
 * FUN_180143b18 at 180143b18
 * undefined FUN_180143b18(void)
 * Address ranges: 180143b18-180143e2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180143b18(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_58 [24];
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  lVar10 = *(longlong *)(param_1 + 8);
  lVar8 = *(longlong *)(lVar10 + 0x188) + (ulonglong)*(uint *)(lVar10 + 400) * 0x1ac0;
  if (*(char *)(param_1 + 0x31) == '\0') {
    FUN_180221ec0(lVar8 + 0x1bc0);
    FUN_180207560(*(longlong *)(lVar8 + 0x1e08) + 8,0);
    FUN_18020c3b0(*(undefined8 *)(lVar8 + 0x1e00),
                  *(undefined8 *)(*(longlong *)(lVar8 + 0x1e08) + 0xb80));
    uVar9 = 0;
    if (*(int *)(lVar10 + 0x1b0) != 0) {
      do {
        lVar8 = *(longlong *)(*(longlong *)(lVar10 + 0x1a8) + uVar9 * 8);
        uVar1 = *(uint *)(lVar8 + 0x40);
        while (uVar1 = uVar1 - 1, uVar1 != 0) {
          lVar5 = *(longlong *)(*(longlong *)(lVar8 + 0x38) + (ulonglong)uVar1 * 0x10);
          if (lVar5 != 0) {
            FUN_18020d9f8(*(undefined8 *)(*(longlong *)(lVar8 + 0x10) + 0x1b500),lVar5,0,0);
          }
          if (*(longlong *)(*(longlong *)(lVar8 + 0x38) + (ulonglong)uVar1 * 0x10) != 0) {
            uVar3 = (*(code *)puVar2)();
            (*extraout_x11_00)(uVar3,1);
          }
          if (*(int *)(lVar8 + 0x40) != 0) {
            *(int *)(lVar8 + 0x40) = *(int *)(lVar8 + 0x40) + -1;
          }
        }
        *(undefined8 *)(lVar8 + 0x48) = 0;
        *(undefined4 *)(lVar8 + 0x2c) = 0xffffffff;
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(lVar10 + 0x1b0));
    }
  }
  else {
    FUN_180221ec0(lVar8 + 0x1bc0);
    FUN_180207560(*(longlong *)(lVar8 + 0x1e08) + 8,0);
    FUN_18020c3b0(*(undefined8 *)(lVar8 + 0x1e00),
                  *(undefined8 *)(*(longlong *)(lVar8 + 0x1e08) + 0xb80));
    uVar9 = 0;
    if (*(int *)(lVar10 + 0x1c0) != 0) {
      do {
        lVar8 = *(longlong *)(*(longlong *)(lVar10 + 0x1b8) + uVar9 * 8);
        uVar1 = *(uint *)(lVar8 + 0x40);
        while (uVar1 = uVar1 - 1, uVar1 != 0) {
          lVar5 = *(longlong *)(*(longlong *)(lVar8 + 0x38) + (ulonglong)uVar1 * 0x10);
          if (lVar5 != 0) {
            FUN_18020d9f8(*(undefined8 *)(*(longlong *)(lVar8 + 0x10) + 0x1b500),lVar5,0,0);
          }
          if (*(longlong *)(*(longlong *)(lVar8 + 0x38) + (ulonglong)uVar1 * 0x10) != 0) {
            uVar3 = (*(code *)puVar2)();
            (*extraout_x11)(uVar3,1);
          }
          if (*(int *)(lVar8 + 0x40) != 0) {
            *(int *)(lVar8 + 0x40) = *(int *)(lVar8 + 0x40) + -1;
          }
        }
        *(undefined8 *)(lVar8 + 0x48) = 0;
        *(undefined4 *)(lVar8 + 0x2c) = 0xffffffff;
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(lVar10 + 0x1c0));
    }
  }
  lVar8 = **(longlong **)(param_1 + 0x38);
  (*(code *)puVar2)(0x180224000);
  (*extraout_x11_01)(lVar8 + 0x40,param_2,param_3,0,0);
  if (param_2[2] == 0) {
    lVar8 = *(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x1ac0;
    uVar1 = *(uint *)(**(longlong **)(param_1 + 0x38) + 0x30);
    if (*(char *)(param_1 + 0x31) == '\0') {
      uVar7 = *(uint *)(lVar8 + 0x1ef4);
      if (uVar7 < uVar1 << 1) {
        iVar6 = 2;
        if (uVar1 <= uVar7 * 3) {
          iVar6 = 3;
        }
        uVar7 = iVar6 * uVar1;
      }
      *(uint *)(lVar8 + 0x1ef8) = *(int *)(lVar8 + 0x1ef8) + uVar7;
    }
    else {
      uVar7 = *(uint *)(lVar8 + 0x1f84);
      if (uVar7 < uVar1 << 1) {
        iVar6 = 2;
        if (uVar1 <= uVar7 * 3) {
          iVar6 = 3;
        }
        uVar7 = iVar6 * uVar1;
      }
      *(uint *)(lVar8 + 0x1f88) = *(int *)(lVar8 + 0x1f88) + uVar7;
    }
    lVar8 = **(longlong **)(param_1 + 0x38);
    (*(code *)puVar2)(0x180224000);
    puVar4 = (undefined8 *)(*extraout_x11_02)(lVar8 + 0x40,auStack_58,param_3,0,0);
    uVar3 = *puVar4;
    param_2[1] = puVar4[1];
    *param_2 = uVar3;
    param_2[2] = puVar4[2];
  }
  return param_2;
}

