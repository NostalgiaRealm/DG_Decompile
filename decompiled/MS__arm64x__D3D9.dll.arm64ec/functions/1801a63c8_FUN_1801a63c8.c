/*
 * FUN_1801a63c8 at 1801a63c8
 * undefined FUN_1801a63c8(void)
 * Address ranges: 1801a63c8-1801a6d9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801a63c8(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  int *piVar11;
  longlong lVar12;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  float *pfVar13;
  undefined4 *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  longlong local_200;
  ulonglong local_1f8;
  ulonglong local_1f0;
  longlong local_1e8 [2];
  undefined4 local_1d8;
  int iStack_1d4;
  float local_1d0;
  undefined4 uStack_1cc;
  undefined1 auStack_1c8 [8];
  undefined8 local_1c0;
  float local_1b0;
  float fStack_1ac;
  undefined8 uStack_1a8;
  float local_1a0;
  float local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  float local_190;
  float fStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  float fStack_180;
  float local_17c;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  float local_120;
  float fStack_11c;
  undefined8 local_118;
  code *local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  uint uStack_f4;
  undefined8 local_f0;
  float local_e8;
  ulonglong uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined1 auStack_c0 [16];
  ulonglong local_b0;
  uint local_a8;
  undefined4 local_9c;
  undefined4 uStack_98;
  
  puVar4 = __hybrid_os_arm64x_dispatch_icall;
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x20);
  local_110 = (code *)__hybrid_os_arm64x_dispatch_icall;
  local_108 = param_2;
  if (uVar2 != 0) {
    fVar25 = *(float *)(param_2 + 7);
    fVar24 = *(float *)((longlong)param_2 + 0x3c);
    fVar23 = *(float *)(param_2 + 6);
    fVar22 = *(float *)((longlong)param_2 + 0x34);
    local_1f8 = CONCAT44(local_1f8._4_4_,*(undefined4 *)(param_2 + 3));
    local_1f0 = CONCAT44(local_1f0._4_4_,*(undefined4 *)((longlong)param_2 + 0x14));
    local_1e8[0] = CONCAT44(local_1e8[0]._4_4_,*(undefined4 *)(param_2 + 2));
    uVar8 = *param_2;
    local_200 = param_2[1];
    lVar16 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf10);
    lVar15 = lVar16 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x28) * 0x1ac0;
    *(int *)(*(longlong *)(lVar15 + 0x1e08) + 0x684) =
         *(int *)(*(longlong *)(lVar15 + 0x1e08) + 0x684) + 1;
    *(undefined8 *)(lVar15 + 0x9d0) = *(undefined8 *)(*(longlong *)(lVar15 + 0x1e08) + 0xb78);
    FUN_180210af8(*(longlong *)(lVar15 + 0x908) + 0x40,&local_1d8,2,
                  *(undefined8 *)(*(longlong *)(lVar15 + 0x1e00) + 0x18));
    puVar10 = (undefined8 *)CONCAT44(uStack_1cc,local_1d0);
    if (puVar10 != (undefined8 *)0x0) {
      *(longlong *)(*(longlong *)(lVar15 + 0x1e08) + 0xb88) = lVar16;
      local_1f0 = CONCAT44(local_1f0._4_4_,(float)(local_1f0 & 0xffffffff) * fVar23 + fVar25);
      fVar21 = (float)(local_1f8 & 0xffffffff) * fVar22 + fVar24;
      fVar19 = (float)uVar2;
      fVar20 = fVar23 * fVar19;
      fVar19 = fVar22 * fVar19;
      (*(code *)puVar4)(0x180224000);
      (*extraout_x11)(uVar8,auStack_c0);
      *(undefined4 *)(lVar15 + 0x980) = 1;
      *(undefined4 *)(lVar15 + 0x984) = (undefined4)local_1e8[0];
      *(undefined4 *)(lVar15 + 0x9a8) = local_9c;
      *(undefined4 *)(lVar15 + 0x9ac) = uStack_98;
      uVar7 = FUN_1801a4da0(lVar15 + 0x2278,&DAT_180239730);
      *(undefined8 *)(lVar15 + 0x950) = uVar7;
      uVar7 = FUN_180150ee0(lVar15 + 0x2260,&DAT_1802396c8);
      *(undefined8 *)(lVar15 + 0x968) = uVar7;
      uVar7 = FUN_180150c00(lVar15 + 0x22a8,&DAT_180239700);
      *(undefined8 *)(lVar15 + 0x960) = uVar7;
      if (*(int *)(*(longlong *)(lVar15 + 0x908) + 0x34) != 0) {
        *(undefined4 *)(*(longlong *)(lVar15 + 0x908) + 0x34) = 0;
      }
      FUN_180207cd0(*(undefined8 *)(lVar15 + 0x1e08),uVar8,0,0,4);
      FUN_180207a10(*(undefined8 *)(lVar15 + 0x1e08),*(undefined8 *)(lVar15 + 0x918));
      FUN_180208ae8(*(undefined8 *)(lVar15 + 0x1e08),*(undefined8 *)(lVar15 + 0x918));
      FUN_180208c68(*(undefined8 *)(lVar15 + 0x1e08),5);
      local_1e8[0] = CONCAT44(iStack_1d4,local_1d8);
      local_1e8[1] = 0x1000000200;
      FUN_180209250(*(undefined8 *)(lVar15 + 0x1e08),0,1,local_1e8);
      *(undefined8 *)(lVar15 + 0x920) = *(undefined8 *)(lVar15 + 0x1ba0);
      *(undefined8 *)(lVar15 + 0x928) = *(undefined8 *)(lVar15 + 0x1b88);
      *(undefined8 *)(lVar15 + 0x970) = *(undefined8 *)(lVar15 + 0x1bb0);
      uVar8 = FUN_180205088(lVar15 + 0x22d8,lVar15 + 0x918);
      FUN_180208c00(*(undefined8 *)(lVar15 + 0x1e08),uVar8);
      FUN_180207a10(*(undefined8 *)(lVar15 + 0x1e08),uVar8);
      FUN_1802094f8(*(undefined8 *)(lVar15 + 0x1e08),1,&local_200,0,0);
      local_dc = CONCAT44(local_dc._4_4_,0x3f800000);
      local_f0 = 0;
      local_e8 = (float)(local_b0 & 0xffffffff);
      local_100 = 0;
      local_f8 = (undefined4)local_b0;
      uStack_f4 = local_a8;
      uStack_e4 = (ulonglong)(uint)(float)local_a8;
      FUN_180209840(*(undefined8 *)(lVar15 + 0x1e08),1,&local_f0);
      FUN_180209758(*(undefined8 *)(lVar15 + 0x1e08),1,&local_100);
      fStack_180 = (float)(local_b0 & 0xffffffff);
      fVar18 = (float)local_a8;
      local_190 = (fVar20 + fVar20) / fStack_180;
      fVar19 = (fVar19 + fVar19) / fVar18;
      fVar25 = fVar23 * 0.0 + fVar25;
      local_1a0 = ((fVar25 + fVar25) - fStack_180) / fStack_180;
      uStack_1a8 = 0;
      fStack_180 = (((float)local_1f0 + (float)local_1f0) - fStack_180) / fStack_180;
      local_198 = 0;
      uStack_194 = 0;
      local_1b0 = local_190 + local_1a0;
      uStack_188 = 0;
      uStack_184 = 0;
      local_178 = 0;
      uStack_168 = 0;
      fVar24 = fVar22 * 0.0 + fVar24;
      local_158 = 0;
      uStack_148 = 0;
      local_138 = 0;
      uStack_128 = 0;
      local_118 = 0;
      local_19c = (fVar18 - (fVar24 + fVar24)) / fVar18;
      fVar18 = (fVar18 - (fVar21 + fVar21)) / fVar18;
      local_190 = fStack_180 - local_190;
      fStack_1ac = local_19c - fVar19;
      local_130 = CONCAT44(fStack_1ac,local_1b0);
      local_160 = CONCAT44(fVar18,fStack_180);
      fVar19 = fVar19 + fVar18;
      local_140 = CONCAT44(fVar18,local_1a0);
      puVar10[1] = 0;
      *puVar10 = CONCAT44(fStack_1ac,local_1b0);
      puVar10[3] = 0;
      puVar10[2] = CONCAT44(local_19c,local_1a0);
      local_170 = CONCAT44(fVar19,local_190);
      local_150 = CONCAT44(fVar19,local_1b0);
      puVar10[5] = 0;
      puVar10[4] = CONCAT44(fStack_1ac,local_190);
      puVar10[7] = 0;
      puVar10[6] = CONCAT44(local_19c,fStack_180);
      puVar10[9] = 0;
      puVar10[8] = local_170;
      puVar10[0xb] = 0;
      puVar10[10] = local_160;
      puVar10[0xd] = 0;
      puVar10[0xc] = local_150;
      puVar10[0xf] = 0;
      puVar10[0xe] = local_140;
      puVar10[0x11] = 0;
      puVar10[0x10] = local_130;
      puVar10[0x13] = 0;
      puVar10[0x12] = CONCAT44(local_19c,local_1a0);
      fStack_18c = fStack_1ac;
      local_17c = local_19c;
      local_120 = local_1a0;
      fStack_11c = local_19c;
      FUN_180209ca8(*(undefined8 *)(lVar15 + 0x1e08),10,1,0,0);
      lVar15 = *(longlong *)(lVar15 + 0x1e08);
      iVar6 = *(int *)(lVar15 + 0x684) + -1;
      *(int *)(lVar15 + 0x684) = iVar6;
      if ((iVar6 == 0) && (*(int *)(lVar15 + 0x680) <= *(int *)(lVar15 + 0x678))) {
        FUN_180207560(lVar15 + 8,0);
      }
    }
  }
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x24) != '\0') {
    lVar15 = *(longlong *)(param_1 + 8);
    piVar11 = (int *)local_108[5];
    uVar2 = piVar11[2] - *piVar11;
    uVar3 = piVar11[3] - piVar11[1];
    if ((uVar2 != *(uint *)(lVar15 + 0xa8)) || (uVar3 != *(uint *)(lVar15 + 0xac))) {
      *(uint *)(lVar15 + 0xa8) = uVar2;
      *(uint *)(lVar15 + 0xac) = uVar3;
      if (uVar2 < 0x321 && uVar3 < 0x259) {
        plVar17 = &DAT_18024d9a0;
        puVar10 = &DAT_18024d9a8;
        puVar14 = &DAT_18024d9b0;
        piVar11 = &DAT_18024d9b4;
        pfVar13 = (float *)&DAT_18024d9b8;
        uVar8 = 0x1f5;
        lVar16 = DAT_18024d9a0;
      }
      else {
        plVar17 = &DAT_18024d9c0;
        puVar10 = (undefined8 *)0x18024d9c8;
        puVar14 = (undefined4 *)0x18024d9d0;
        piVar11 = (int *)0x18024d9d4;
        pfVar13 = (float *)0x18024d9d8;
        uVar8 = 500;
        lVar16 = DAT_18024d9c0;
      }
      if (((lVar16 == 0) &&
          (local_200 = thunk_FUN_180223fa4(DAT_180258908,uVar8,0,0,0,0x2000), local_200 != 0)) &&
         (iVar6 = thunk_FUN_18022424c(local_200,0x20,&local_1d8), iVar6 != 0)) {
        local_1f8 = thunk_FUN_180224238(0);
        if (local_1f8 != 0) {
          local_1e8[0] = thunk_FUN_180224238(0);
          if (local_1e8[0] != 0) {
            local_dc = 0;
            uStack_d4 = 0;
            uStack_cc = 0;
            local_e8 = local_1d0;
            uStack_e4 = 0x200001;
            local_f0 = CONCAT44(iStack_1d4,0x28);
            lVar16 = thunk_FUN_180224224(0,&local_f0,0,&local_100,0,0);
            *plVar17 = lVar16;
            if (lVar16 != 0) {
              local_1f0 = thunk_FUN_180224260(local_1f8,lVar16);
              local_200 = thunk_FUN_180224260(local_1e8[0],local_200);
              thunk_FUN_180224274(local_1f8,0,0,iStack_1d4,local_1d0,local_1e8[0],0,0,0xcc0020);
              thunk_FUN_180224260(local_1f8,local_1f0);
              thunk_FUN_180224260(local_1e8[0],local_200);
            }
            thunk_FUN_1802242c4(local_1e8[0]);
          }
          thunk_FUN_1802242c4(local_1f8);
        }
        if (*plVar17 != 0) {
          iVar6 = thunk_FUN_18022424c(*plVar17,0x20,&local_1d8);
          if (iVar6 == 0) {
            thunk_FUN_180224288(*plVar17);
            *plVar17 = 0;
          }
          else {
            *puVar10 = local_1c0;
            *puVar14 = uStack_1cc;
            *piVar11 = iStack_1d4;
            *pfVar13 = local_1d0;
          }
        }
      }
      if (*plVar17 != 0) {
        iVar6 = *piVar11;
        fVar24 = *pfVar13;
        if ((*(int *)(lVar15 + 0xa0) != iVar6) || (*(float *)(lVar15 + 0xa4) != fVar24)) {
          (*local_110)(0x180224000);
          cVar5 = (*extraout_x11_00)(lVar15,iVar6,fVar24,*puVar10,*puVar14);
          if (cVar5 == '\0') {
            *(undefined4 *)(lVar15 + 0xa0) = 0;
            *(undefined4 *)(lVar15 + 0xa4) = 0;
          }
          else {
            *(int *)(lVar15 + 0xa0) = iVar6;
            *(float *)(lVar15 + 0xa4) = fVar24;
          }
        }
      }
    }
    lVar15 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(lVar15 + 0x1d150) != 0) {
      *(undefined4 *)(lVar15 + 0x1cedc) = 0x3f800000;
      if (*(int *)(*(longlong *)(lVar15 + 8) + 0xd6) != 0) {
        thunk_FUN_18022375c(&local_200);
        lVar16 = *(longlong *)(lVar15 + 0x98);
        if (*(longlong *)(lVar15 + 0x98) == 0) {
          *(longlong *)(lVar15 + 0x98) = local_200;
          lVar16 = local_200;
        }
        lVar16 = (local_200 -
                 (ulonglong)*(uint *)(*(longlong *)(lVar15 + 8) + 0xd6) *
                 *(longlong *)(lVar15 + 0x90)) - lVar16;
        if (0 < lVar16) {
          lVar12 = *(longlong *)(lVar15 + 0x90) / 2;
          if (lVar16 < lVar12) {
            fVar24 = 1.0 - (float)((double)lVar16 / (double)lVar12);
          }
          else {
            fVar24 = 0.0;
          }
          *(float *)(lVar15 + 0x1cedc) = fVar24;
        }
      }
      if (*(float *)(lVar15 + 0x1cedc) != 0.0) {
        lVar15 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18);
        uVar9 = FUN_1802116e0(*(undefined8 *)(lVar15 + 0x1950),1,
                              *(undefined8 *)(*(longlong *)(lVar15 + 0x1500) + 0x18),
                              *(undefined8 *)(*(longlong *)(lVar15 + 0x1508) + 0xb78),&local_1d8);
        if ((uVar9 & 1) != 0) {
          lVar15 = *(longlong *)(param_1 + 8);
          uVar8 = *(undefined8 *)
                   (*(longlong *)(lVar15 + 0x1cf10) + (ulonglong)*(uint *)(lVar15 + 0x28) * 0x20 +
                   0x6d0);
          FUN_18020d168(*(undefined8 *)(*(longlong *)(lVar15 + 0x1cf18) + 0x1930),&local_100,
                        *(undefined4 *)(lVar15 + 0x1d158),0);
          puVar10 = (undefined8 *)(*local_110)(0x180225000);
          (*extraout_x11_01)(uVar8,1,CONCAT44(uStack_1cc,local_1d0),*puVar10,0);
          FUN_180207a10(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1508),
                        *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1cf28));
          FUN_180208ae8(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1508),
                        *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1cf28));
          puVar10 = local_108;
          FUN_180207cd0(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1508),*local_108,0
                        ,0,4);
          FUN_180207cd0(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1508),
                        *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1d150),0,0,0x80);
          *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1cf90) = 1;
          uVar8 = FUN_1801a4da0(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1978,
                                &DAT_180248270);
          *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1cf60) = uVar8;
          uVar8 = FUN_180150ee0(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1960,
                                &DAT_1802396c8);
          *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1cf78) = uVar8;
          uVar8 = FUN_180150c00(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x19a8,
                                &DAT_180239700);
          *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1cf70) = uVar8;
          *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1cf80) =
               *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1d120);
          *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1cf94) = *(undefined4 *)(puVar10 + 2);
          *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1cf98) = 0;
          FUN_180208a18(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1508),1,
                        auStack_1c8);
          FUN_180208f00(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1508),6,
                        CONCAT44(iStack_1d4,local_1d8));
          FUN_1802094f8(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1508),1,
                        puVar10 + 1,0,0);
          local_19c = 1.0;
          local_198 = 0x3f800000;
          lVar15 = *(longlong *)(param_1 + 8);
          local_1a0 = 0.0;
          uStack_194 = 0;
          local_190 = 0.0;
          fStack_18c = 0.0;
          uStack_188 = 0;
          iVar6 = *(int *)(puVar10[5] + 8);
          iVar1 = *(int *)(puVar10[5] + 0xc);
          uStack_184 = 0;
          fStack_180 = 0.0;
          local_17c = 0.0;
          local_158 = 0;
          local_150 = 0;
          uStack_128 = 0;
          local_120 = 0.0;
          uStack_168 = 0;
          local_160 = 0;
          uStack_148 = 0;
          local_140 = 0;
          local_1b0 = (float)((iVar6 - *(int *)(lVar15 + 0xa0)) + -10);
          fStack_1ac = (float)((iVar1 - *(int *)(lVar15 + 0xa4)) + -10);
          local_178 = *puVar10;
          local_170 = 0;
          uStack_1a8 = CONCAT44((float)(iVar1 + -10),(float)(iVar6 + -10));
          local_138 = 0;
          local_130 = 0;
          FUN_1801a0580(lVar15,&local_1b0,*(undefined8 *)(lVar15 + 0x1d0c8));
        }
      }
    }
  }
  return;
}

