/*
 * FUN_1801407b0 at 1801407b0
 * undefined FUN_1801407b0(void)
 * Address ranges: 1801407b0-180140a5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801407b0(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  longlong lVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong *plVar5;
  code *extraout_x11_01;
  code *extraout_x11_02;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint local_70;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  uVar3 = *(uint *)(param_1 + 2);
  if (uVar3 != 0) {
    local_70 = 0;
    do {
      if (local_70 < uVar3) {
        lVar4 = param_1[1] + (ulonglong)local_70 * 0x2f0;
        lVar13 = lVar4 + 0x28;
        lVar12 = lVar4 + 0x30;
        puVar9 = (undefined8 *)(lVar4 + 0x18);
        plVar6 = (longlong *)(lVar4 + 0x10);
      }
      else {
        lVar13 = 0x20;
        lVar12 = 0x28;
        puVar9 = (undefined8 *)&DAT_00000010;
        plVar6 = (longlong *)&DAT_00000008;
      }
      lVar4 = 0;
      do {
        lVar7 = *(longlong *)(lVar13 + lVar4 * 0x50);
        if (lVar7 != 0) {
          lVar10 = param_1[3];
          lVar14 = lVar10 + (ulonglong)*(uint *)(param_1 + 4) * 0x18c0;
          thunk_FUN_1802236f8(lVar10 + 0x620);
          if (lVar7 == *(longlong *)(lVar14 + 0xba0)) {
            *(undefined8 *)(lVar14 + 0xba0) = 0;
          }
          (*(code *)puVar2)(0x180224000);
          (*extraout_x11)(lVar7);
          thunk_FUN_18022370c(lVar10 + 0x620);
          lVar10 = param_1[3];
          lVar7 = *(longlong *)(lVar12 + lVar4 * 0x50);
          lVar14 = lVar10 + (ulonglong)*(uint *)(param_1 + 4) * 0x18c0;
          thunk_FUN_1802236f8(lVar10 + 0x620);
          if (lVar7 == *(longlong *)(lVar14 + 0xba0)) {
            *(undefined8 *)(lVar14 + 0xba0) = 0;
          }
          (*(code *)puVar2)(0x180224000);
          (*extraout_x11_00)(lVar7);
          thunk_FUN_18022370c(lVar10 + 0x620);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 != 8);
      FUN_1802229d8(*puVar9);
      lVar13 = *plVar6;
      if (*(int *)(lVar13 + 0x10) != 0) {
        uVar11 = 0;
        uVar3 = *(uint *)(param_1 + 4);
        lVar12 = param_1[3];
        if (*(int *)(lVar13 + 0x10) == 0) {
          plVar5 = (longlong *)&DAT_00000008;
          plVar8 = (longlong *)&DAT_00000010;
          goto LAB_180140944;
        }
        do {
          plVar5 = (longlong *)((uVar11 << 5 | 0x10) + *(longlong *)(lVar13 + 8));
          plVar8 = (longlong *)((uVar11 << 5 | 0x18) + *(longlong *)(lVar13 + 8));
LAB_180140944:
          lVar4 = *plVar5;
          if (lVar4 != 0) {
            thunk_FUN_1802236f8(lVar12 + 0x620);
            lVar7 = lVar12 + (ulonglong)uVar3 * 0x18c0;
            if (lVar4 == *(longlong *)(lVar7 + 0xba8)) {
              *(undefined8 *)(lVar7 + 0xba8) = 0;
            }
            (*(code *)puVar2)(0x180224000);
            (*extraout_x11_01)(lVar4);
            thunk_FUN_18022370c(lVar12 + 0x620);
          }
          lVar4 = *plVar8;
          if (lVar4 != 0) {
            thunk_FUN_1802236f8(lVar12 + 0x620);
            lVar7 = lVar12 + (ulonglong)uVar3 * 0x18c0;
            if (lVar4 == *(longlong *)(lVar7 + 3000)) {
              *(undefined8 *)(lVar7 + 3000) = 0;
            }
            (*(code *)puVar2)(0x180224000);
            (*extraout_x11_02)(lVar4);
            thunk_FUN_18022370c(lVar12 + 0x620);
          }
          uVar1 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(lVar13 + 0x10));
      }
      puVar9 = (undefined8 *)*plVar6;
      if (puVar9 != (undefined8 *)0x0) {
        FUN_1802229d8(*puVar9);
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        FUN_1802229d8(puVar9,0x270);
      }
      uVar3 = *(uint *)(param_1 + 2);
      local_70 = local_70 + 1;
    } while (local_70 < uVar3);
  }
  thunk_FUN_180223860(param_1 + 5);
  FUN_1802229d8(*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  return;
}

