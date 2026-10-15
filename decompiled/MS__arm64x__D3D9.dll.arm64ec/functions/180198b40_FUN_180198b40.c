/*
 * FUN_180198b40 at 180198b40
 * undefined FUN_180198b40(void)
 * Address ranges: 180198b40-180198d93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180198b40(longlong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if ((param_1[6] != 0) && (uVar5 = 0, param_3 != 0)) {
    do {
      uVar9 = 0;
      if (param_2 != 0) {
        do {
          uVar3 = (ulonglong)(uVar9 + uVar5 * param_2);
          lVar6 = *(longlong *)(param_1[6] + uVar3 * 0x28);
          if (lVar6 != 0) {
            lVar8 = *param_1;
            uVar1 = *(uint *)(param_1 + 1);
            thunk_FUN_1802236f8(lVar8 + 0x620);
            lVar7 = lVar8 + (ulonglong)uVar1 * 0x18c0 + 0xbc0;
            lVar4 = 0;
            do {
              if (lVar6 == *(longlong *)(lVar7 + lVar4 * 8)) {
                *(undefined8 *)(lVar7 + lVar4 * 8) = 0;
              }
              lVar4 = lVar4 + 1;
            } while (lVar4 != 4);
            (*(code *)puVar2)(0x180224000);
            (*extraout_x11)(lVar6);
            thunk_FUN_18022370c(lVar8 + 0x620);
          }
          lVar6 = *(longlong *)(param_1[6] + uVar3 * 0x28 + 8);
          if (lVar6 != 0) {
            lVar7 = *param_1;
            lVar4 = lVar7 + (ulonglong)*(uint *)(param_1 + 1) * 0x18c0;
            thunk_FUN_1802236f8(lVar7 + 0x620);
            if (lVar6 == *(longlong *)(lVar4 + 0xbe0)) {
              *(undefined8 *)(lVar4 + 0xbe0) = 0;
            }
            (*(code *)puVar2)(0x180224000);
            (*extraout_x11_00)(lVar6);
            thunk_FUN_18022370c(lVar7 + 0x620);
          }
          lVar6 = *(longlong *)(param_1[6] + uVar3 * 0x28 + 0x10);
          if (lVar6 != 0) {
            lVar8 = *param_1;
            uVar1 = *(uint *)(param_1 + 1);
            thunk_FUN_1802236f8(lVar8 + 0x620);
            lVar7 = lVar8 + (ulonglong)uVar1 * 0x18c0 + 0xbc0;
            lVar4 = 0;
            do {
              if (lVar6 == *(longlong *)(lVar7 + lVar4 * 8)) {
                *(undefined8 *)(lVar7 + lVar4 * 8) = 0;
              }
              lVar4 = lVar4 + 1;
            } while (lVar4 != 4);
            (*(code *)puVar2)(0x180224000);
            (*extraout_x11_01)(lVar6);
            thunk_FUN_18022370c(lVar8 + 0x620);
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < param_2);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_3);
  }
  FUN_1802229d8(param_1[6]);
  param_1[6] = 0;
  if (param_1[7] != 0) {
    FUN_1801feb08(*param_1,(int)param_1[1]);
    param_1[7] = 0;
  }
  if (param_1[5] != 0) {
    FUN_1801feb08(*param_1,(int)param_1[1]);
    param_1[5] = 0;
  }
  if (param_1[3] != 0) {
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_02)();
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_03)();
    param_1[4] = 0;
  }
  return;
}

