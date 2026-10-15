/*
 * FUN_10063eb0 at 10063eb0
 * undefined FUN_10063eb0(void)
 * Address ranges: 10063eb0-10064347
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10063eb0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,int *param_5,
                 int param_6,uint param_7,int param_8,undefined4 param_9,undefined4 param_10,
                 int param_11)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  uint uVar15;
  code *extraout_w11;
  int extraout_w11_00;
  code *extraout_w11_01;
  ulonglong extraout_x11;
  int extraout_w12;
  int extraout_w13;
  int extraout_w14;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int local_118;
  undefined8 local_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  int local_c0 [2];
  longlong local_b8;
  int local_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  ulonglong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = (int *)(param_1 + 0x8e0);
  lStack_e8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  lStack_e0 = 0;
  local_d0 = 0;
  if (*piVar1 != 0) {
    if (param_11 == 0) {
      uVar13 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar12 = (*extraout_w11)(uVar13,&local_80);
      param_11 = *(int *)(iVar12 + 0x20);
    }
    FUN_1005d938(param_11);
    iVar12 = FUN_1005d9f0(extraout_x11 & 0xffffffff);
    if (extraout_w11_00 - 0x44U < 2) {
      uVar15 = 2;
LAB_10063fa4:
      uVar17 = 1;
    }
    else {
      if (0xe < extraout_w11_00 - 0x46U) {
        uVar15 = 1;
        goto LAB_10063fa4;
      }
      uVar17 = 4;
      uVar15 = 4;
    }
    if (uVar17 == 0) {
                    /* WARNING: Does not return */
      uVar11 = SoftwareBreakpoint(0xf004,0x10063fcc);
      (*(code *)uVar11)();
    }
    uVar5 = 0;
    if (uVar17 != 0) {
      uVar5 = (uint)(param_5[4] - param_5[1]) / uVar17;
    }
    if (iVar12 == 0) {
      iVar12 = extraout_w12;
    }
    if (uVar15 == 0) {
                    /* WARNING: Does not return */
      uVar11 = SoftwareBreakpoint(0xf004,0x10063ff8);
      (*(code *)uVar11)();
    }
    uVar6 = 0;
    if (uVar15 != 0) {
      uVar6 = (uint)(iVar12 * (param_5[3] - *param_5)) / uVar15;
    }
    puVar2 = (uint *)(param_5 + 5);
    puVar3 = (uint *)(param_5 + 2);
    if (extraout_w11_00 - 0x2cU < 2) {
      iVar12 = FUN_1005d938(0x2a);
      uVar15 = iVar12 * extraout_w14 + 0xffU & 0xffffff00;
      iVar12 = uVar15 * extraout_w13;
      local_118 = 0x2a;
    }
    else {
      uVar15 = uVar6 + 0xff & 0xffffff00;
      iVar12 = (*puVar2 - *puVar3) * uVar15 * uVar5;
      local_118 = extraout_w11_00;
    }
    uVar14 = FUN_10072128(param_4,iVar12,&local_f0);
    if ((uVar14 & 1) != 0) {
      if (param_7 == uVar15 && uVar6 == param_7) {
        uVar16 = *puVar3;
        iVar18 = (int)local_f0;
        if (uVar16 < *puVar2) {
          do {
            uVar7 = 0;
            if (uVar17 != 0) {
              uVar7 = ((param_5[4] - param_5[1]) * uVar6) / uVar17;
            }
            FUN_1007ac00(iVar18,param_6,uVar7);
            uVar16 = uVar16 + 1;
            param_6 = param_6 + param_8;
            iVar18 = iVar18 + uVar5 * uVar15;
          } while (uVar16 < *puVar2);
        }
      }
      else {
        uVar17 = *puVar3;
        iVar18 = (int)local_f0;
        if (uVar17 < *puVar2) {
          do {
            uVar16 = 0;
            iVar19 = param_6;
            if (uVar5 != 0) {
              do {
                FUN_1007ac00(iVar18,iVar19,uVar6);
                uVar16 = uVar16 + 1;
                iVar18 = iVar18 + uVar15;
                iVar19 = iVar19 + param_7;
              } while (uVar16 < uVar5);
            }
            uVar17 = uVar17 + 1;
            param_6 = param_6 + param_8;
          } while (uVar17 < *puVar2);
        }
      }
      goto LAB_100641a0;
    }
  }
  local_118 = (int)local_d0;
  uVar15 = local_d8._4_4_;
  iVar12 = (int)local_d8;
LAB_100641a0:
  iVar18 = local_f0._4_4_;
  bVar4 = local_f0._4_4_ != 0;
  if (bVar4) {
    FUN_10059d60(*(undefined4 *)(param_1 + 0x8e4),local_f0._4_4_,0,1,*piVar1,param_1,0x800,
                 *(undefined8 *)(param_1 + 0x938));
    FUN_10060618(param_1,param_2,param_3,0,0x400);
    lVar10 = lStack_e0;
    lVar9 = lStack_e8;
    FUN_10072920(param_4,iVar12,lStack_e8,lStack_e0,*(undefined4 *)(*piVar1 + 0xc),
                 *(undefined8 *)(param_1 + 0x938));
    local_98 = 0;
    local_c0[0] = iVar18;
    local_c0[1] = 1;
    local_78 = (ulonglong)param_3;
    local_b8 = lVar9 - lVar10;
    local_a0 = (ulonglong)uVar15;
    uStack_7c = 0;
    uStack_68 = 0;
    local_70 = 0;
    local_60 = 0;
    iStack_8c = param_5[3] - *param_5;
    _local_b0 = CONCAT44(iStack_8c,local_118);
    local_90 = 0;
    local_88 = param_5[4] - param_5[1];
    iStack_84 = param_5[5] - param_5[2];
    _local_a8 = CONCAT44(iStack_84,local_88);
    local_80 = param_2;
    FUN_1005f8a8(param_1);
    FUN_1005fa58(param_1);
    uVar13 = (*pcVar8)();
    (*extraout_w11_01)(uVar13,&local_80,*param_5,param_5[1],param_5[2],local_c0,&local_98);
    FUN_1005f9f0(param_1);
  }
  return bVar4;
}

