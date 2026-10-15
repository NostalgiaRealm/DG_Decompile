/*
 * FUN_1801c92e8 at 1801c92e8
 * undefined FUN_1801c92e8(void)
 * Address ranges: 1801c92e8-1801c9687
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801c92e8(longlong param_1,ulonglong param_2,float param_3)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *pcVar7;
  code *extraout_x11_05;
  code *extraout_x11_06;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  
  uVar9 = param_2 & 0xffffffff;
  uVar8 = (uint)param_2;
  if (0xd1 < uVar8 || uVar8 == 0) {
    return 0x8876086c;
  }
  if (*(char *)(*(longlong *)(param_1 + -0x6830) +
               (-(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar9 << 3)) == '\0') {
    return 0x8876086c;
  }
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar1 = true;
    iVar3 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar3 == 0) {
      FUN_1801085c8();
    }
  }
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if (*(char *)(param_1 + -0x642c) != '\0') {
    lVar6 = *(longlong *)
             (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    *(float *)(lVar6 + (longlong)(int)uVar8 * 4 + 0x10) = param_3;
    lVar6 = lVar6 + ((uVar9 >> 6) + 0x158d) * 8;
    uVar9 = uVar9 >> 3 & 7;
    *(byte *)(lVar6 + uVar9) = *(byte *)(lVar6 + uVar9) | (byte)(1 << (param_2 & 7));
    goto LAB_1801c9454;
  }
  lVar6 = param_1 + (longlong)(int)uVar8 * 4;
  if (*(float *)(lVar6 + -0x63c0) == param_3) goto LAB_1801c9454;
  if (uVar8 == 0x9a) {
    if (*(int *)(param_1 + 0x58) == 0 || *(int *)(param_1 + 0x58) == 0x1002) {
      if (param_3 == (float)0x304d3241) {
        if ((*(char *)(param_1 + 0x5d) != '\0') || (*(char *)(param_1 + 0x5e) != '\0')) {
          uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          uVar5 = 0;
          pcVar7 = extraout_x11_06;
          goto LAB_1801c95e8;
        }
      }
      else if (param_3 == (float)0x314d3241) {
        if (*(char *)(param_1 + 0x5d) != '\0') {
          uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          pcVar7 = extraout_x11_05;
LAB_1801c961c:
          uVar5 = 1;
          goto LAB_1801c95e8;
        }
      }
      else if (((param_3 == (float)0x54534e49) && (*(char *)(param_1 + 0x5e) != '\0')) &&
              (*(char *)(param_1 + -0x6816) != '\0')) {
        uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        pcVar7 = extraout_x11_04;
LAB_1801c95e4:
        uVar5 = 2;
LAB_1801c95e8:
        (*pcVar7)(uVar4,uVar5);
        goto LAB_1801c9448;
      }
    }
LAB_1801c9418:
    uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    pcVar7 = extraout_x11;
LAB_1801c943c:
    (*pcVar7)(uVar4,param_2 & 0xffffffff,param_3);
  }
  else if (uVar8 == 0xa6) {
    fVar10 = *(float *)(*(longlong *)(param_1 + 0x60) + 0xb0);
    if (fVar10 < param_3) {
      param_3 = fVar10;
    }
LAB_1801c955c:
    FUN_18011c370(param_1 + -0x6838,param_2 & 0xffffffff,param_3);
  }
  else {
    if (uVar8 == 0xb5) {
      if (*(int *)(param_1 + 0x58) == 0 || *(int *)(param_1 + 0x58) == 0x10de) {
        if (param_3 == 0.0) {
          if ((*(char *)(param_1 + 0x5d) != '\0') || (*(char *)(param_1 + 0x5e) != '\0')) {
            uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
            (*extraout_x11_02)(uVar4,0);
          }
        }
        else if (param_3 == (float)0x41415353) {
          if ((*(char *)(param_1 + 0x5e) != '\0') && (*(char *)(param_1 + -0x6816) != '\0')) {
            uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
            pcVar7 = extraout_x11_01;
            goto LAB_1801c95e4;
          }
        }
        else if ((param_3 == (float)0x434f5441) && (*(char *)(param_1 + 0x5d) != '\0')) {
          uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          pcVar7 = extraout_x11_00;
          goto LAB_1801c961c;
        }
      }
      uVar4 = (*(code *)puVar2)(0x180224000);
      pcVar7 = extraout_x11_03;
      goto LAB_1801c943c;
    }
    if (uVar8 != 0xb8) goto LAB_1801c955c;
    if ((*(uint *)(*(longlong *)(param_1 + 0x60) + 0x1c) >> 0x18 & 1) != 0) goto LAB_1801c9418;
  }
LAB_1801c9448:
  *(float *)(lVar6 + -0x63c0) = param_3;
LAB_1801c9454:
  if (bVar1) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return 0;
}

