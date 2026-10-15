/*
 * FUN_1801a5b58 at 1801a5b58
 * undefined FUN_1801a5b58(void)
 * Address ranges: 1801a5b58-1801a63bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801a5b58(longlong param_1,longlong param_2,undefined4 param_3,longlong *param_4)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  ulonglong uVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  int iVar24;
  undefined8 uVar25;
  longlong local_208;
  longlong local_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  ulonglong local_1f0;
  undefined8 *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b4;
  longlong local_1a0;
  longlong lStack_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  longlong local_184;
  longlong lStack_17c;
  undefined4 local_174;
  undefined **local_170;
  longlong lStack_168;
  longlong *local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  undefined8 uStack_128;
  undefined8 local_110;
  float local_108;
  float fStack_104;
  undefined8 local_100;
  float local_f8;
  float fStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined1 auStack_78 [32];
  uint local_58;
  
  puVar9 = __hybrid_os_arm64x_dispatch_icall;
  bVar11 = param_2 != 0;
  lVar21 = 0;
  if (bVar11) {
    lVar21 = param_2 + -0x100;
  }
  piVar1 = (int *)&DAT_00000158;
  if (bVar11) {
    piVar1 = (int *)(param_2 + 0x58);
  }
  uVar25 = 0;
  iVar24 = *(int *)(&DAT_1802389d0 + (longlong)*piVar1 * 4);
  lVar6 = 0x60;
  if (bVar11) {
    lVar6 = param_2 + -0xa0;
  }
  plVar7 = (longlong *)&DAT_00000074;
  if (bVar11) {
    plVar7 = (longlong *)(param_2 + -0x8c);
  }
  lVar23 = *plVar7;
  piVar2 = (int *)&DAT_0000008c;
  if (bVar11) {
    piVar2 = (int *)(param_2 + -0x74);
  }
  iVar22 = *piVar2;
  plVar3 = (longlong *)&DAT_00000140;
  if (bVar11) {
    plVar3 = (longlong *)(param_2 + 0x40);
  }
  if (*plVar3 == 0) goto LAB_1801a5e88;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  cVar12 = (*extraout_x11)();
  if (cVar12 != '\0') {
    lVar20 = *plVar3;
    if (*(longlong *)(lVar20 + 0x74) == 0) goto LAB_1801a5e88;
    uVar14 = (*(code *)puVar9)(0x180224000);
    (*extraout_x11_00)(uVar14,auStack_78);
    if ((0x1c < local_58) || ((0x19800a00U >> (ulonglong)(local_58 & 0x1f) & 1) == 0))
    goto LAB_1801a5e88;
    uVar25 = *(undefined8 *)(lVar20 + 0x7c);
    lVar23 = 0x40;
    if (*(int *)(lVar20 + 0x2c) == 0x15) {
      lVar23 = 0x50;
    }
    iVar24 = *(int *)(param_1 + lVar23);
    FUN_1801adfc0(lVar20,0,0,0);
    if (*(longlong *)(lVar20 + 0x7c) == 0) {
      if (*(longlong *)(lVar20 + 0x154) == 0) {
        FUN_1801ad678(lVar20);
      }
      iVar22 = *(int *)(lVar20 + 0x16c);
      if (iVar22 != -1) {
        lVar23 = *(longlong *)(lVar20 + 0x74);
        goto LAB_1801a5e88;
      }
    }
    plVar4 = (longlong *)&DAT_00000138;
    if (param_2 != 0) {
      plVar4 = (longlong *)(param_2 + 0x38);
    }
    FUN_180203380(*(undefined8 *)(param_1 + 0x1cf10),*plVar4,1);
    if (((int)param_4[3] == 0) && (iVar24 == *(int *)(&DAT_1802389d0 + (longlong)*piVar1 * 4))) {
      iVar22 = *(int *)(*plVar4 + 0xdb0);
      lVar23 = *(longlong *)(*plVar4 + 0xda0);
      goto LAB_1801a5e88;
    }
  }
  plVar4 = (longlong *)&DAT_00000138;
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_2 + 0x38);
  }
  uVar25 = 0;
  if (*(longlong *)(*plVar4 + 0xda0) == 0) {
    FUN_180203380(*(undefined8 *)(param_1 + 0x1cf10),*plVar4,1);
  }
  if (*(longlong *)(*plVar4 + 0xda0) != 0) {
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b4 = 1;
    uStack_1d8 = 0;
    local_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    thunk_FUN_180223c20(&uStack_1d0,0,0,*(undefined4 *)(*plVar3 + 0x24),
                        *(undefined4 *)(*plVar3 + 0x28));
    puVar8 = (undefined4 *)&DAT_00000028;
    if (param_2 != 0) {
      puVar8 = (undefined4 *)(param_2 + -0xd8);
    }
    puVar5 = (undefined4 *)&DAT_00000024;
    if (param_2 != 0) {
      puVar5 = (undefined4 *)(param_2 + -0xdc);
    }
    thunk_FUN_180223c20(&local_1e0,0,0,*puVar5,*puVar8);
    if (*plVar7 != *(longlong *)(*plVar4 + 0xda0)) {
      FUN_1801a7d98(lVar6,1,1);
      lVar23 = *plVar4;
      FUN_1801a74a8(lVar6,*(undefined8 *)(lVar23 + 0xda0),*(undefined4 *)(lVar23 + 0xdb0),
                    *(undefined4 *)(lVar23 + 0xdb4),
                    *(undefined4 *)(&DAT_1802389d0 + (longlong)*(int *)(lVar23 + 0x34) * 4));
    }
    lVar6 = 0;
    if (*plVar3 != 0) {
      lVar6 = *plVar3 + 0x100;
    }
    lVar23 = 0x100;
    if (param_2 != 0) {
      lVar23 = param_2;
    }
    lVar20 = 0;
    if (lVar21 != 0) {
      lVar20 = lVar23;
    }
    FUN_1801a5768(param_1,0,0,0,0,lVar20,lVar6,&local_1e0);
  }
  lVar23 = *(longlong *)(*plVar4 + 0xda0);
  iVar22 = *(int *)(*plVar4 + 0xdb0);
  iVar24 = *(int *)(&DAT_1802389d0 + (longlong)*piVar1 * 4);
LAB_1801a5e88:
  local_1e8 = (undefined8 *)(param_2 + 0x38);
  uStack_148 = 0;
  local_150 = 0;
  local_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  if (lVar23 != 0) {
    (*(code *)puVar9)(0x180224000);
    puVar15 = (undefined8 *)(*extraout_x11_01)(lVar23,&local_1e0);
    uStack_148 = puVar15[1];
    local_150 = *puVar15;
    local_138 = puVar15[3];
    local_140 = puVar15[2];
    uStack_128 = puVar15[5];
    local_130 = puVar15[4];
  }
  uVar10 = local_138;
  local_200 = 0;
  local_1f0 = local_140;
  uStack_1f8 = (undefined4)local_140;
  uStack_1f4 = (undefined4)local_138;
  iVar13 = thunk_FUN_180223d24(param_4 + 1);
  if (iVar13 == 0) {
    lStack_198 = param_4[2];
    local_1a0 = param_4[1];
  }
  else {
    lStack_198 = CONCAT44(uStack_1f4,uStack_1f8);
    local_1a0 = local_200;
  }
  if ((int)param_4[3] != 0) {
    plVar7 = (longlong *)&DAT_00000138;
    if (param_2 != 0) {
      plVar7 = (longlong *)(param_2 + 0x38);
    }
    lVar21 = *(longlong *)(*plVar7 + 0xda0);
    uVar18 = 1;
    if (lVar23 == lVar21) {
      uVar18 = 2;
    }
    uVar17 = (uint)(lVar23 == lVar21);
    FUN_180203380(*(undefined8 *)(param_1 + 0x1cf10),*plVar7,uVar18);
    uVar19 = (ulonglong)(lVar23 == lVar21);
    if (*(longlong *)(*plVar7 + uVar19 * 8 + 0xda0) != 0) {
      *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 0xb88) = param_1;
      lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508);
      *(int *)(lVar21 + 0x684) = *(int *)(lVar21 + 0x684) + 1;
      puVar8 = (undefined4 *)&DAT_0000002c;
      if (*param_4 != 0) {
        puVar8 = (undefined4 *)(*param_4 + -0xd4);
      }
      FUN_1801b8940(param_1,*puVar8,local_130 & 0xffffffff,*(undefined4 *)((longlong)param_4 + 0x1c)
                   );
      local_208 = param_1 + 0x1c000;
      FUN_180207a10(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                    *(undefined8 *)(param_1 + 0x1cf28));
      FUN_180208ae8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                    *(undefined8 *)(local_208 + 0xf28));
      FUN_180207cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),lVar23,0,0,0x80);
      FUN_180207cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                    *(undefined8 *)(*plVar7 + uVar19 * 8 + 0xda0),0,0,4);
      uVar14 = FUN_1801a4da0(*(longlong *)(param_1 + 0x1cf18) + 0x1978,&DAT_180239730);
      *(undefined8 *)(param_1 + 0x1cf60) = uVar14;
      uVar14 = FUN_180150ee0(*(longlong *)(param_1 + 0x1cf18) + 0x1960,&DAT_1802396c8);
      *(undefined8 *)(param_1 + 0x1cf78) = uVar14;
      uVar14 = FUN_180150c00(*(longlong *)(param_1 + 0x1cf18) + 0x19a8,&DAT_180239700);
      *(undefined8 *)(param_1 + 0x1cf70) = uVar14;
      *(undefined8 *)(param_1 + 0x1cf80) = *(undefined8 *)(param_1 + 0x1d120);
      *(undefined4 *)(param_1 + 0x1cf90) = 1;
      *(undefined4 *)(param_1 + 0x1cf94) =
           *(undefined4 *)(&DAT_1802389d0 + (longlong)*(int *)(*plVar7 + 0x34) * 4);
      *(undefined4 *)(param_1 + 0x1cf98) = 0;
      lVar21 = *(longlong *)(param_1 + 0x1cf18);
      *(undefined4 *)(param_1 + 0x1cfb4) = 0;
      uVar16 = FUN_1802116e0(*(undefined8 *)(lVar21 + 0x1950),1,
                             *(undefined8 *)(*(longlong *)(lVar21 + 0x1500) + 0x18),
                             *(undefined8 *)(*(longlong *)(lVar21 + 0x1508) + 0xb78),&local_1e0);
      if ((uVar16 & 1) != 0) {
        FUN_180208a18(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),1,&uStack_1d0);
        FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1930),&local_208,iVar22,0
                     );
        uVar14 = (*(code *)puVar9)(0x180225000);
        (*extraout_x11_02)(uVar14,1,uStack_1d8,local_208,0);
        FUN_180208a18(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),1,&uStack_1d0);
        FUN_180208f00(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),6,local_1e0);
        FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1938),&local_200,
                      *(undefined4 *)(*plVar7 + 0xdb4),uVar17);
        FUN_1802094f8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),1,&local_200,0,0);
        local_110 = 0;
        local_100 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        local_80 = 0;
        fStack_104 = (float)(uVar10 & 0xffffffff);
        local_d0 = 0;
        uStack_c8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_108 = (float)(local_1f0 & 0xffffffff);
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = 0;
        uStack_88 = 0;
        uStack_d8 = *(undefined8 *)(*plVar7 + uVar19 * 8 + 0xda0);
        local_e0 = 0;
        lVar21 = 0x1f;
        if ((int)param_4[3] == 4) {
          lVar21 = 0x20;
        }
        local_f8 = local_108;
        fStack_f4 = fStack_104;
        FUN_1801a0580(param_1,&local_110,*(undefined8 *)(param_1 + lVar21 * 8 + 0x1cfd8));
        iVar22 = *(int *)(*plVar7 + 0xdb0) + uVar17;
        lVar23 = *(longlong *)(*plVar7 + uVar19 * 8 + 0xda0);
        iVar24 = *(int *)(&DAT_1802389d0 + (longlong)*piVar1 * 4);
      }
      lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508);
      iVar13 = *(int *)(lVar21 + 0x684) + -1;
      *(int *)(lVar21 + 0x684) = iVar13;
      if ((iVar13 == 0) && (*(int *)(lVar21 + 0x680) <= *(int *)(lVar21 + 0x678))) {
        FUN_180207560(lVar21 + 8,0);
      }
    }
  }
  lVar21 = *(longlong *)(param_1 + 8);
  local_170 = &PTR_FUN_18022cfe0;
  local_190 = *(undefined4 *)(lVar21 + 0xc);
  local_18c = *(undefined4 *)(lVar21 + 0x10);
  local_188 = *(undefined4 *)(lVar21 + 0x14);
  lStack_17c = lStack_198;
  local_184 = local_1a0;
  local_174 = *(undefined4 *)(&DAT_18022aa28 + (longlong)*(int *)(lVar21 + 0xca) * 4);
  puVar15 = (undefined8 *)&DAT_00000138;
  if (param_2 != 0) {
    puVar15 = local_1e8;
  }
  lStack_168 = param_1;
  local_160 = param_4;
  FUN_1802187d0(*(undefined8 *)(param_1 + 0x1cf10),*puVar15,lVar23,iVar22,uVar25,iVar24,param_3,
                &local_190,&local_170);
  FUN_1801042d0(param_1 + 0x1d16c);
  thunk_FUN_180223874(*(undefined8 *)(param_1 + 0x1d170));
  if (param_2 != 0) {
    (*(code *)puVar9)(0x180224000);
    (*extraout_x11_03)(param_2,1);
  }
  return;
}

