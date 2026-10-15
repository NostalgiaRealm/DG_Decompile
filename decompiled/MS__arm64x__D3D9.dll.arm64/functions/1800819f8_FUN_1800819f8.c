/*
 * FUN_1800819f8 at 1800819f8
 * undefined FUN_1800819f8(void)
 * Address ranges: 1800819f8-18008224b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1800819f8(longlong param_1,uint param_2,int param_3,uint param_4,uint param_5,longlong param_6,
             longlong param_7,int *param_8)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char cVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  undefined1 uVar19;
  uint uVar20;
  float fVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  undefined8 local_168;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  float local_138;
  float local_134;
  undefined8 local_130;
  uint uStack_128;
  uint local_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  float local_114;
  uint local_110;
  uint uStack_10c;
  uint uStack_108;
  char local_104;
  char cStack_103;
  undefined2 uStack_102;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  longlong local_e0;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  float local_c0;
  uint uStack_bc;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined1 uStack_af;
  undefined2 uStack_ae;
  uint local_a0;
  uint local_98;
  uint local_94;
  int local_90;
  int local_8c;
  float local_88;
  uint uStack_84;
  
  iVar17 = *(int *)(param_6 + 8);
  plVar2 = (longlong *)0x0;
  if (param_7 != 0) {
    plVar2 = (longlong *)(param_7 + -0xe0);
  }
  plVar4 = (longlong *)0x0;
  if (param_6 != 0) {
    plVar4 = (longlong *)(param_6 + -0xe0);
  }
  plVar3 = (longlong *)(param_6 + -0xe0);
  if (iVar17 == 0) {
    plVar3 = plVar4;
  }
  local_e0 = param_6;
  (**(code **)(*plVar2 + 0xb0))(plVar2,param_4,param_5);
  (**(code **)(*plVar3 + 0xb0))(plVar3,param_2,param_3);
  if ((((char)param_8[0xb] != '\0') && ((char)param_8[10] == '\0')) &&
     (*(char *)((longlong)param_8 + 0x2b) == '\0')) {
    piVar6 = (int *)&DAT_0000003c;
    if (param_7 != 0) {
      piVar6 = (int *)(param_7 + -0xa4);
    }
    local_a0 = param_4 + *piVar6 * param_5;
    uVar8 = param_2 + *(int *)((longlong)plVar3 + 0x3c) * param_3;
    plVar4 = (longlong *)&DAT_000000d0;
    if (param_7 != 0) {
      plVar4 = (longlong *)(param_7 + -0x10);
    }
    if ((*plVar4 == 0) ||
       (iVar16 = (*__imp_USER32_dll_IsRectEmpty)(*plVar4 + (ulonglong)local_a0 * 0x28 + 0x18),
       iVar16 != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((plVar3[0x1a] == 0) ||
       (iVar16 = (*__imp_USER32_dll_IsRectEmpty)(plVar3[0x1a] + (ulonglong)uVar8 * 0x28 + 0x18),
       iVar16 != 0)) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if (((iVar17 == 0) || (bVar9)) ||
       (cVar14 = (**(code **)(*plVar3 + 0xa8))(plVar3), cVar14 != '\0')) {
      uVar22 = 2;
    }
    else {
      uVar22 = 0;
    }
    if (bVar1) {
LAB_180081b9c:
      uVar20 = 1;
    }
    else {
      bVar15 = (**(code **)(*plVar2 + 0xa8))(plVar2);
      uVar20 = (uint)bVar15;
      if (bVar15 != 0) goto LAB_180081b9c;
    }
    fVar24 = (float)(uVar20 | uVar22);
    fVar21 = fVar24;
    if (((iVar17 != 0) && (cVar14 = (**(code **)(*plVar3 + 0x98))(plVar3), cVar14 != '\0')) &&
       (plVar3[0x17] != 0)) {
      plVar4 = (longlong *)&DAT_000000b8;
      if (param_7 != 0) {
        plVar4 = (longlong *)(param_7 + -0x28);
      }
      if (*plVar4 != 0) {
        plVar4 = (longlong *)&DAT_00000090;
        if (param_7 != 0) {
          plVar4 = (longlong *)(param_7 + -0x50);
        }
        iVar17 = (*__imp_USER32_dll_IsRectEmpty)(*plVar4 + (ulonglong)local_a0 * 0x28 + 0x18);
        if (iVar17 != 0) {
          iVar17 = (*__imp_USER32_dll_IsRectEmpty)(plVar3[0x12] + ((ulonglong)uVar8 * 5 + 3) * 8);
          fVar21 = 0.0;
          if (iVar17 == 0) {
            fVar21 = fVar24;
          }
        }
      }
    }
    puVar5 = (undefined8 *)&DAT_00000080;
    if (param_7 != 0) {
      puVar5 = (undefined8 *)(param_7 + -0x60);
    }
    local_148 = (longlong *)*puVar5;
    if (local_148 == (longlong *)0x0) {
      puVar5 = (undefined8 *)&DAT_00000078;
      if (param_7 != 0) {
        puVar5 = (undefined8 *)(param_7 + -0x68);
      }
      local_148 = (longlong *)*puVar5;
    }
    local_140 = (longlong *)plVar3[0x10];
    if (local_140 == (longlong *)0x0) {
      local_140 = (longlong *)plVar3[0xf];
    }
    puVar5 = (undefined8 *)&DAT_00000088;
    if (param_7 != 0) {
      puVar5 = (undefined8 *)(param_7 + -0x58);
    }
    local_150 = *puVar5;
    if (((int)fVar21 - 1U & 0xfffffffd) != 0) {
      if (fVar21 == 0.0) {
        puVar5 = (undefined8 *)&DAT_000000b8;
        if (param_7 != 0) {
          puVar5 = (undefined8 *)(param_7 + -0x28);
        }
        local_148 = (longlong *)*puVar5;
        local_140 = (longlong *)plVar3[0x17];
      }
      else {
        if (fVar21 != 2.8026e-45) goto LAB_180081cdc;
        puVar5 = (undefined8 *)&DAT_000000b8;
        if (param_7 != 0) {
          puVar5 = (undefined8 *)(param_7 + -0x28);
        }
        local_148 = (longlong *)*puVar5;
      }
      puVar5 = (undefined8 *)&DAT_000000c8;
      if (param_7 != 0) {
        puVar5 = (undefined8 *)(param_7 + -0x18);
      }
      local_150 = *puVar5;
    }
LAB_180081cdc:
    piVar6 = (int *)&DAT_0000002c;
    if (param_7 != 0) {
      piVar6 = (int *)(param_7 + -0xb4);
    }
    local_138 = fVar21;
    if (((*piVar6 == 0) && (*(int *)((longlong)plVar3 + 0x2c) == 0)) &&
       ((cVar14 = (**(code **)(*plVar2 + 0xa8))(plVar2), cVar14 != '\0' ||
        (cVar14 = (**(code **)(*plVar3 + 0xa8))(plVar3), cVar14 != '\0')))) {
      uVar19 = 1;
    }
    else {
      uVar19 = 0;
    }
    uVar13 = local_100;
    local_100 = CONCAT71(local_100._1_7_,uVar19);
    uVar12 = local_100;
    piVar7 = (int *)&DAT_00000044;
    if (param_7 != 0) {
      piVar7 = (int *)(param_7 + -0x9c);
    }
    local_100._4_4_ = SUB84(uVar13,4);
    local_100._0_3_ = (uint3)uVar12;
    local_100._0_4_ = CONCAT13(*piVar7 - 3U < 3,(uint3)local_100);
    fVar23 = (float)(**(code **)(*plVar2 + 0x58))(plVar2);
    fVar24 = (float)(**(code **)(*plVar2 + 0x60))(plVar2);
    if ((fVar23 != 1.0) || (uVar19 = 0, fVar24 != 1.0)) {
      uVar19 = 1;
    }
    _local_b0 = CONCAT31(_uStack_af,uVar19);
    if (((uint)fVar21 & 1) == 0) {
      fVar24 = 1.0;
      fVar23 = 1.0;
    }
    (*__imp_USER32_dll_SetRect)
              (&local_c0,(int)((float)param_8[4] * fVar23),(int)((float)param_8[5] * fVar24),
               (int)((float)param_8[6] * fVar23),(int)((float)param_8[7] * fVar24));
    fVar23 = (float)(**(code **)(*plVar3 + 0x58))(plVar3);
    fVar24 = (float)(**(code **)(*plVar3 + 0x60))(plVar3);
    if ((fVar23 != 1.0) || (uVar19 = 0, fVar24 != 1.0)) {
      uVar19 = 1;
    }
    _local_b0 = CONCAT11(uVar19,local_b0);
    if (((uint)fVar21 & 2) == 0) {
      fVar24 = 1.0;
      fVar23 = 1.0;
    }
    (*__imp_USER32_dll_SetRect)
              (&local_d0,(int)((float)*param_8 * fVar23),(int)((float)param_8[1] * fVar24),
               (int)((float)param_8[2] * fVar23),(int)((float)param_8[3] * fVar24));
    uStack_11c = uStack_c8;
    uStack_118 = uStack_c4;
    local_124 = local_d0;
    uStack_120 = uStack_cc;
    uStack_10c = (uint)uStack_b8;
    uStack_108 = (uint)((ulonglong)uStack_b8 >> 0x20);
    local_114 = local_c0;
    local_110 = uStack_bc;
    local_104 = (char)_local_b0;
    cStack_103 = (char)((uint)_local_b0 >> 8);
    uStack_102 = (undefined2)((uint)_local_b0 >> 0x10);
    (**(code **)(*local_140 + 0x50))(local_140,&local_98);
    (**(code **)(*local_148 + 0x50))(local_148,&local_d0);
    if ((((local_124 != 0) || (uStack_120 != 0)) ||
        (uStack_11c != local_98 >> (ulonglong)(param_2 & 0x1f))) ||
       (bVar1 = true, uStack_118 != local_94 >> (ulonglong)(param_2 & 0x1f))) {
      bVar1 = false;
    }
    if (((local_114 != 0.0) || (local_110 != 0)) ||
       ((uStack_10c != local_d0 >> (ulonglong)(param_4 & 0x1f) ||
        (bVar9 = true, uStack_108 != uStack_cc >> (ulonglong)(param_4 & 0x1f))))) {
      bVar9 = false;
    }
    local_134 = local_c0;
    local_130 = CONCAT44(uStack_bc,local_88);
    uStack_128 = uStack_84;
    if ((bVar9) && (bVar1)) {
      local_100._0_3_ = CONCAT12(1,(ushort)local_100);
      bVar10 = true;
LAB_180081f88:
      if ((((uStack_c8 != 1) || (local_90 != 1)) || (uStack_c4 != 1)) ||
         (bVar1 = true, local_8c != 1)) goto LAB_180081fbc;
    }
    else {
      local_100._0_3_ = (uint3)(ushort)local_100;
      bVar10 = false;
      if ((bVar9) && (bVar1)) goto LAB_180081f88;
LAB_180081fbc:
      bVar1 = false;
    }
    uVar13 = local_100;
    local_100._0_2_ = CONCAT11(bVar1,(char)local_100);
    uVar12 = local_100;
    if (((local_c0 == local_88) && (*piVar6 == *(int *)((longlong)plVar3 + 0x2c))) &&
       ((uStack_10c - (int)local_114 == uStack_11c - local_124 &&
        (uStack_108 - local_110 == uStack_118 - uStack_120)))) {
      local_100._3_1_ = SUB81(uVar13,3);
      if (local_100._3_1_ == '\0') {
        if (uStack_bc == uStack_84) {
          if (((uStack_84 == 1) && (cStack_103 == local_104)) || (bVar10)) {
            bVar15 = 1;
          }
          else {
            bVar15 = 0;
          }
          if ((uStack_84 == 1) ||
             (bVar11 = 0,
             0xa000 < *(int *)(*(longlong *)(param_1 + 0x1cf10) +
                               (ulonglong)*(uint *)(param_1 + 0x28) * 0x18c0 + 0x6cc))) {
            bVar11 = 1;
          }
          bVar1 = (bool)(bVar11 & bVar15);
        }
        else {
          bVar1 = uStack_84 == 1 && bVar1;
        }
        if ((char)local_100 != '\0') {
          bVar1 = false;
        }
      }
      else {
        bVar1 = uStack_bc == uStack_84 && bVar10;
      }
      if (bVar1) {
        local_100 = uVar12;
        uVar18 = FUN_18007ed80(param_1,param_2,param_3,param_4,param_5,plVar3,plVar2,&local_150,
                               param_8,param_8 + 4);
        goto LAB_1800821f0;
      }
    }
  }
  local_168 = CONCAT44(param_3,param_2);
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  local_114 = 0.0;
  local_110 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  local_104 = '\0';
  cStack_103 = '\0';
  uStack_102 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_128 = param_4;
  local_124 = param_5;
  if ((char)param_8[0xb] == '\0') {
    local_150 = *(undefined8 *)param_8;
    local_130 = local_168;
    local_148 = *(longlong **)(param_8 + 2);
    local_140 = *(longlong **)(param_8 + 4);
    local_138 = (float)param_8[6];
    local_134 = (float)param_8[7];
    uVar18 = FUN_18007f578(param_1,&local_150,plVar3,plVar2,*(int *)(local_e0 + 8) == 0,0,param_8[8]
                           ,param_8[9],(char)param_8[10],*(undefined1 *)((longlong)param_8 + 0x29),
                           *(undefined1 *)((longlong)param_8 + 0x2a),
                           *(undefined1 *)((longlong)param_8 + 0x2b));
  }
  else {
    local_150 = CONCAT44((float)param_8[1],(float)*param_8);
    local_148 = (longlong *)CONCAT44((float)param_8[3],(float)param_8[2]);
    local_140 = (longlong *)CONCAT44((float)param_8[5],(float)param_8[4]);
    local_134 = (float)param_8[7];
    local_138 = (float)param_8[6];
    local_130 = local_168;
    uVar18 = FUN_18007f578(param_1,&local_150,plVar3,plVar2,*(int *)(local_e0 + 8) == 0,param_8,
                           param_8[8],param_8[9],(char)param_8[10],
                           *(undefined1 *)((longlong)param_8 + 0x29),
                           *(undefined1 *)((longlong)param_8 + 0x2a),
                           *(undefined1 *)((longlong)param_8 + 0x2b));
  }
LAB_1800821f0:
  (**(code **)(*plVar2 + 0xb8))(plVar2,param_4,param_5);
  (**(code **)(*plVar3 + 0xb8))(plVar3,param_2,param_3);
  return uVar18;
}

