/*
 * FUN_180196fa0 at 180196fa0
 * undefined FUN_180196fa0(void)
 * Address ranges: 180196fa0-1801978a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_180196fa0(longlong param_1,uint param_2,int param_3,uint param_4,ulonglong param_5,
             longlong param_6,longlong param_7,int *param_8)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  undefined *puVar12;
  undefined8 uVar13;
  char cVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 uVar22;
  uint uVar23;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  code *extraout_x11_09;
  code *extraout_x11_10;
  code *extraout_x11_11;
  code *extraout_x11_12;
  code *extraout_x11_13;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_158;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  float local_120;
  float local_11c;
  undefined8 local_118;
  uint uStack_110;
  uint local_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  float local_fc;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  char local_ec;
  char cStack_eb;
  undefined2 uStack_ea;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  int *local_c8;
  longlong local_c0;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  float local_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined1 uStack_8f;
  undefined2 uStack_8e;
  uint local_80;
  uint local_7c;
  int local_78;
  int local_74;
  float local_70;
  uint uStack_6c;
  
  puVar12 = __hybrid_os_arm64x_dispatch_icall;
  iVar17 = *(int *)(param_6 + 8);
  uVar20 = (uint)param_5;
  lVar2 = 0;
  if (param_7 != 0) {
    lVar2 = param_7 + -0xe0;
  }
  lVar3 = 0;
  if (param_6 != 0) {
    lVar3 = param_6 + -0xe0;
  }
  lVar4 = param_6 + -0xe0;
  if (iVar17 == 0) {
    lVar4 = lVar3;
  }
  uVar21 = param_5;
  local_c0 = param_6;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(lVar2,param_4,uVar21 & 0xffffffff);
  (*(code *)puVar12)(0x180224000);
  (*extraout_x11_00)(lVar4,param_2,param_3);
  if ((((char)param_8[0xb] != '\0') && ((char)param_8[10] == '\0')) &&
     (*(char *)((longlong)param_8 + 0x2b) == '\0')) {
    piVar7 = (int *)&DAT_0000003c;
    if (param_7 != 0) {
      piVar7 = (int *)(param_7 + -0xa4);
    }
    uVar24 = param_4 + *piVar7 * uVar20;
    local_c8 = (int *)CONCAT44(local_c8._4_4_,uVar24);
    uVar8 = param_2 + *(int *)(lVar4 + 0x3c) * param_3;
    plVar5 = (longlong *)&DAT_000000d0;
    if (param_7 != 0) {
      plVar5 = (longlong *)(param_7 + -0x10);
    }
    if ((*plVar5 == 0) ||
       (iVar16 = thunk_FUN_180223d24(*plVar5 + (ulonglong)uVar24 * 0x28 + 0x18), iVar16 != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((*(longlong *)(lVar4 + 0xd0) == 0) ||
       (iVar16 = thunk_FUN_180223d24(*(longlong *)(lVar4 + 0xd0) + (ulonglong)uVar8 * 0x28 + 0x18),
       iVar16 != 0)) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if ((iVar17 == 0) || (bVar9)) {
LAB_180197140:
      uVar24 = 2;
    }
    else {
      (*(code *)puVar12)(0x180224000);
      cVar14 = (*extraout_x11_01)(lVar4);
      if (cVar14 != '\0') goto LAB_180197140;
      uVar24 = 0;
    }
    if (bVar1) {
LAB_180197170:
      uVar23 = 1;
    }
    else {
      (*(code *)puVar12)(0x180224000);
      bVar15 = (*extraout_x11_02)(lVar2);
      uVar23 = (uint)bVar15;
      if (bVar15 != 0) goto LAB_180197170;
    }
    fVar27 = (float)(uVar23 | uVar24);
    fVar25 = fVar27;
    if (iVar17 != 0) {
      (*(code *)puVar12)(0x180224000);
      cVar14 = (*extraout_x11_03)(lVar4);
      if ((cVar14 != '\0') && (*(longlong *)(lVar4 + 0xb8) != 0)) {
        plVar5 = (longlong *)&DAT_000000b8;
        if (param_7 != 0) {
          plVar5 = (longlong *)(param_7 + -0x28);
        }
        if (*plVar5 != 0) {
          plVar5 = (longlong *)&DAT_00000090;
          if (param_7 != 0) {
            plVar5 = (longlong *)(param_7 + -0x50);
          }
          iVar17 = thunk_FUN_180223d24(*plVar5 + ((ulonglong)local_c8 & 0xffffffff) * 0x28 + 0x18);
          if (iVar17 != 0) {
            iVar17 = thunk_FUN_180223d24(*(longlong *)(lVar4 + 0x90) +
                                         ((ulonglong)uVar8 * 5 + 3) * 8);
            fVar25 = 0.0;
            if (iVar17 == 0) {
              fVar25 = fVar27;
            }
          }
        }
      }
    }
    plVar5 = (longlong *)&DAT_00000080;
    if (param_7 != 0) {
      plVar5 = (longlong *)(param_7 + -0x60);
    }
    local_130 = *plVar5;
    if (local_130 == 0) {
      plVar5 = (longlong *)&DAT_00000078;
      if (param_7 != 0) {
        plVar5 = (longlong *)(param_7 + -0x68);
      }
      local_130 = *plVar5;
    }
    local_128 = *(longlong *)(lVar4 + 0x80);
    if (local_128 == 0) {
      local_128 = *(longlong *)(lVar4 + 0x78);
    }
    puVar6 = (undefined8 *)&DAT_00000088;
    if (param_7 != 0) {
      puVar6 = (undefined8 *)(param_7 + -0x58);
    }
    local_138 = *puVar6;
    if (((int)fVar25 - 1U & 0xfffffffd) != 0) {
      if (fVar25 == 0.0) {
        plVar5 = (longlong *)&DAT_000000b8;
        if (param_7 != 0) {
          plVar5 = (longlong *)(param_7 + -0x28);
        }
        local_130 = *plVar5;
        local_128 = *(longlong *)(lVar4 + 0xb8);
      }
      else {
        if (fVar25 != 2.8026e-45) goto LAB_1801972ac;
        plVar5 = (longlong *)&DAT_000000b8;
        if (param_7 != 0) {
          plVar5 = (longlong *)(param_7 + -0x28);
        }
        local_130 = *plVar5;
      }
      puVar6 = (undefined8 *)&DAT_000000c8;
      if (param_7 != 0) {
        puVar6 = (undefined8 *)(param_7 + -0x18);
      }
      local_138 = *puVar6;
    }
LAB_1801972ac:
    local_c8 = (int *)&DAT_0000002c;
    if (param_7 != 0) {
      local_c8 = (int *)(param_7 + -0xb4);
    }
    local_120 = fVar25;
    if ((*local_c8 == 0) && (*(int *)(lVar4 + 0x2c) == 0)) {
      (*(code *)puVar12)(0x180224000);
      cVar14 = (*extraout_x11_04)(lVar2);
      if (cVar14 == '\0') {
        (*(code *)puVar12)(0x180224000);
        cVar14 = (*extraout_x11_05)(lVar4);
        if (cVar14 == '\0') goto LAB_18019732c;
      }
      uVar22 = 1;
    }
    else {
LAB_18019732c:
      uVar22 = 0;
    }
    uVar13 = local_e8;
    local_e8 = CONCAT71(local_e8._1_7_,uVar22);
    uVar19 = local_e8;
    piVar7 = (int *)&DAT_00000044;
    if (param_7 != 0) {
      piVar7 = (int *)(param_7 + -0x9c);
    }
    local_e8._4_4_ = SUB84(uVar13,4);
    local_e8._0_3_ = (uint3)uVar19;
    local_e8._0_4_ = CONCAT13(*piVar7 - 3U < 3,(uint3)local_e8);
    (*(code *)puVar12)(0x180224000);
    fVar26 = (float)(*extraout_x11_06)(lVar2);
    (*(code *)puVar12)(0x180224000);
    fVar27 = (float)(*extraout_x11_07)(lVar2);
    if ((fVar26 != 1.0) || (uVar22 = 0, fVar27 != 1.0)) {
      uVar22 = 1;
    }
    _local_90 = CONCAT31(_uStack_8f,uVar22);
    if (((uint)fVar25 & 1) == 0) {
      fVar26 = 1.0;
      fVar27 = 1.0;
    }
    thunk_FUN_180223c20(&local_a0,(int)((float)param_8[4] * fVar26),
                        (int)((float)param_8[5] * fVar27),(int)((float)param_8[6] * fVar26),
                        (int)((float)param_8[7] * fVar27));
    (*(code *)puVar12)(0x180224000);
    fVar26 = (float)(*extraout_x11_08)(lVar4);
    (*(code *)puVar12)(0x180224000);
    fVar27 = (float)(*extraout_x11_09)(lVar4);
    if ((fVar26 != 1.0) || (uVar22 = 0, fVar27 != 1.0)) {
      uVar22 = 1;
    }
    _local_90 = CONCAT11(uVar22,local_90);
    if (((uint)fVar25 & 2) == 0) {
      fVar26 = 1.0;
      fVar27 = 1.0;
    }
    thunk_FUN_180223c20(&local_b0,(int)((float)*param_8 * fVar26),(int)((float)param_8[1] * fVar27),
                        (int)((float)param_8[2] * fVar26),(int)((float)param_8[3] * fVar27));
    uStack_104 = uStack_a8;
    uStack_100 = uStack_a4;
    local_10c = local_b0;
    uStack_108 = uStack_ac;
    uStack_f4 = (uint)uStack_98;
    uStack_f0 = (uint)((ulonglong)uStack_98 >> 0x20);
    local_fc = local_a0;
    local_f8 = uStack_9c;
    local_ec = (char)_local_90;
    cStack_eb = (char)((uint)_local_90 >> 8);
    uStack_ea = (undefined2)((uint)_local_90 >> 0x10);
    uVar19 = (*(code *)puVar12)(0x180224000);
    (*extraout_x11_10)(uVar19,&local_80);
    uVar19 = (*(code *)puVar12)(0x180224000);
    (*extraout_x11_11)(uVar19,&local_b0);
    if ((((local_10c != 0) || (uStack_108 != 0)) ||
        (uStack_104 != local_80 >> (ulonglong)(param_2 & 0x1f))) ||
       (bVar1 = true, uStack_100 != local_7c >> (ulonglong)(param_2 & 0x1f))) {
      bVar1 = false;
    }
    if (((local_fc != 0.0) || (local_f8 != 0)) ||
       ((uStack_f4 != local_b0 >> (ulonglong)(param_4 & 0x1f) ||
        (bVar9 = true, uStack_f0 != uStack_ac >> (ulonglong)(param_4 & 0x1f))))) {
      bVar9 = false;
    }
    local_11c = local_a0;
    local_118 = CONCAT44(uStack_9c,local_70);
    uStack_110 = uStack_6c;
    if ((bVar9) && (bVar1)) {
      local_e8._0_3_ = CONCAT12(1,(ushort)local_e8);
      bVar10 = true;
LAB_1801975c0:
      if ((((uStack_a8 != 1) || (local_78 != 1)) || (uStack_a4 != 1)) ||
         (bVar1 = true, local_74 != 1)) goto LAB_1801975f4;
    }
    else {
      local_e8._0_3_ = (uint3)(ushort)local_e8;
      bVar10 = false;
      if ((bVar9) && (bVar1)) goto LAB_1801975c0;
LAB_1801975f4:
      bVar1 = false;
    }
    uVar13 = local_e8;
    local_e8._0_2_ = CONCAT11(bVar1,(char)local_e8);
    uVar19 = local_e8;
    if (((local_a0 == local_70) && (*local_c8 == *(int *)(lVar4 + 0x2c))) &&
       ((uStack_f4 - (int)local_fc == uStack_104 - local_10c &&
        (uStack_f0 - local_f8 == uStack_100 - uStack_108)))) {
      local_e8._3_1_ = SUB81(uVar13,3);
      if (local_e8._3_1_ == '\0') {
        if (uStack_9c == uStack_6c) {
          if (((uStack_6c == 1) && (cStack_eb == local_ec)) || (bVar10)) {
            bVar15 = 1;
          }
          else {
            bVar15 = 0;
          }
          if ((uStack_6c == 1) ||
             (bVar11 = 0,
             0xa000 < *(int *)(*(longlong *)(param_1 + 0x1cf10) +
                               (ulonglong)*(uint *)(param_1 + 0x28) * 0x18c0 + 0x6cc))) {
            bVar11 = 1;
          }
          bVar1 = (bool)(bVar11 & bVar15);
        }
        else {
          bVar1 = uStack_6c == 1 && bVar1;
        }
        if ((char)local_e8 != '\0') {
          bVar1 = false;
        }
      }
      else {
        bVar1 = uStack_9c == uStack_6c && bVar10;
      }
      if (bVar1) {
        local_e8 = uVar19;
        uVar18 = FUN_180193bd8(param_1,param_2,param_3,param_4,param_5 & 0xffffffff,lVar4,lVar2,
                               &local_138,param_8,param_8 + 4);
        goto LAB_180197834;
      }
    }
  }
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  local_fc = 0.0;
  local_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  local_ec = '\0';
  cStack_eb = '\0';
  uStack_ea = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_158 = CONCAT44(param_3,param_2);
  uStack_110 = param_4;
  local_10c = uVar20;
  if ((char)param_8[0xb] == '\0') {
    local_138 = *(undefined8 *)param_8;
    local_118 = local_158;
    local_130 = *(longlong *)(param_8 + 2);
    local_128 = *(longlong *)(param_8 + 4);
    local_120 = (float)param_8[6];
    local_11c = (float)param_8[7];
    uVar18 = FUN_180194540(param_1,&local_138,lVar4,lVar2,*(int *)(local_c0 + 8) == 0,0,param_8[8],
                           param_8[9],(char)param_8[10],*(undefined1 *)((longlong)param_8 + 0x29),
                           *(undefined1 *)((longlong)param_8 + 0x2a),
                           *(undefined1 *)((longlong)param_8 + 0x2b));
  }
  else {
    local_138 = CONCAT44((float)param_8[1],(float)*param_8);
    local_130 = CONCAT44((float)param_8[3],(float)param_8[2]);
    local_128 = CONCAT44((float)param_8[5],(float)param_8[4]);
    local_11c = (float)param_8[7];
    local_120 = (float)param_8[6];
    local_118 = local_158;
    uVar18 = FUN_180194540(param_1,&local_138,lVar4,lVar2,*(int *)(local_c0 + 8) == 0,param_8,
                           param_8[8],param_8[9],(char)param_8[10],
                           *(undefined1 *)((longlong)param_8 + 0x29),
                           *(undefined1 *)((longlong)param_8 + 0x2a),
                           *(undefined1 *)((longlong)param_8 + 0x2b));
  }
LAB_180197834:
  (*(code *)puVar12)(0x180224000);
  (*extraout_x11_12)(lVar2,param_4,param_5 & 0xffffffff);
  (*(code *)puVar12)(0x180224000);
  (*extraout_x11_13)(lVar4,param_2,param_3);
  return uVar18;
}

