/*
 * FUN_18008a4a0 at 18008a4a0
 * undefined FUN_18008a4a0(void)
 * Address ranges: 18008a4a0-18008ae73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008a4a0(longlong param_1,float *param_2,int param_3,uint param_4,uint param_5,
                  uint param_6,char param_7,char param_8)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined *puVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float extraout_s16;
  float fVar24;
  float extraout_s17;
  float fVar25;
  float extraout_s18;
  float fVar26;
  float extraout_s19;
  float fVar27;
  uint local_f0;
  uint local_ec;
  int local_e8;
  longlong local_e0;
  uint local_d8;
  longlong local_d0;
  longlong lStack_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  uVar20 = (ulonglong)param_5;
  local_d8 = param_6 & 0xff;
  local_ec = param_4;
  local_e8 = param_3;
  if (param_8 == '\0') {
    fVar26 = param_2[4];
    fVar25 = param_2[5];
    fVar24 = param_2[6];
    fVar23 = param_2[7];
    fVar22 = ((fVar24 - fVar26) / (param_2[2] - *param_2)) * 0.495;
    fVar21 = ((fVar23 - fVar25) / (param_2[3] - param_2[1])) * 0.495;
    if ((int)param_5 < 0) {
      param_8 = func_0x0001801b7978(uVar20);
      fVar24 = extraout_s17;
      fVar25 = extraout_s18;
      fVar26 = extraout_s19;
      fVar23 = extraout_s16;
    }
    else {
      param_8 = param_5 - 4 < 2;
    }
    if (param_8 != '\0') {
      (**(code **)(**(longlong **)(param_2 + 0x16) + 0x50))
                (*(longlong **)(param_2 + 0x16),&local_b8);
      uVar13 = (uint)local_a8 >> (ulonglong)((uint)param_2[0xb] & 0x1f);
      uVar14 = local_a0 >> (ulonglong)((uint)param_2[0xb] & 0x1f);
      if (uVar13 == 0) {
        uVar13 = 1;
      }
      fVar24 = (float)uVar13;
      if (uVar14 == 0) {
        uVar14 = 1;
      }
      fVar23 = (float)uVar14;
      fVar27 = 1.0;
      if (param_7 == '\0') {
        fVar27 = 0.5;
      }
      fVar22 = fVar22 / fVar24;
      fVar26 = (param_2[4] + fVar27) / fVar24;
      fVar21 = fVar21 / fVar23;
      fVar25 = (param_2[5] + fVar27) / fVar23;
      fVar24 = (param_2[6] + fVar27) / fVar24;
      fVar23 = (param_2[7] + fVar27) / fVar23;
    }
    param_2[4] = fVar26 - fVar22;
    param_2[5] = fVar25 - fVar21;
    param_2[6] = fVar24 - fVar22;
    param_2[7] = fVar23 - fVar21;
  }
  if (((int)param_5 < 0) && ((param_5 & 0xf) == 2)) {
    uVar20 = (ulonglong)local_ec;
    if (*(int *)(&DAT_180231470 + uVar20 * 4) == 0x20) {
      lVar15 = uVar20 * 0x2c;
      uVar13 = 4;
      if (((&DAT_18024a960)[lVar15] & 7) == 0) {
        uVar13 = 0;
      }
      uVar13 = ((((int)(char)(&DAT_18024a960)[lVar15] << 0x15) >> 0x18 |
                ((int)(char)(&DAT_18024a962)[lVar15] >> 3) << 2) & 0xffU |
               ((uint)(int)(char)(&DAT_18024a964)[lVar15] >> 3 & 0xf |
               (uVar13 | (uint)(((int)(char)(&DAT_18024a966)[lVar15] & 7U) != 0) << 5 |
                (uint)(((int)(char)(&DAT_18024a964)[lVar15] & 7U) != 0) << 4 |
                (uint)(((int)(char)(&DAT_18024a962)[lVar15] & 7U) != 0) << 3 |
               (uint)(int)(char)(&DAT_18024a966)[lVar15] >> 3 & 3) << 2) << 4) << 8;
    }
    else {
      uVar13 = 0;
    }
    uVar20 = (ulonglong)
             (~((uint)((&DAT_180231518)[uVar20] != '\0') << 0x1e) & 0x40000000 |
              ((uVar13 & 0xff00) >> 8 | (uVar13 >> 0x10) << 8) << 0x12 | param_5 & 0x8003ffff);
  }
  iVar19 = (int)uVar20;
  if (iVar19 < 0) {
    uVar13 = *(uint *)(param_1 + 0x1d138);
    if (uVar13 != 0) {
      uVar14 = 0;
      uVar11 = uVar13;
      do {
        uVar4 = uVar11 + uVar14 >> 1;
        uVar16 = (ulonglong)uVar4;
        uVar18 = *(ulonglong *)(*(longlong *)(param_1 + 0x1d130) + uVar16 * 0x18);
        if (uVar18 <= uVar20) {
          if (uVar20 <= uVar18) break;
          uVar14 = uVar4 + 1;
          uVar16 = (ulonglong)(uVar4 + 1);
          uVar4 = uVar11;
        }
        uVar11 = uVar4;
      } while (uVar11 != uVar14);
      if ((((uint)uVar16 != uVar13) &&
          (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x1d130) + uVar16 * 0x18),
          *puVar1 == uVar20)) && (puVar1 = puVar1 + 2, puVar1 != (ulonglong *)0x0)) {
        uVar16 = *puVar1;
        goto LAB_18008a9cc;
      }
    }
    plVar6 = (longlong *)(param_1 + 0x1d130);
    local_d0 = param_1 + 0x1d000;
    uVar13 = *(uint *)(param_1 + 0x1d148);
    uVar16 = 0;
    lVar15 = *(longlong *)(param_1 + 0x1d140);
    local_a8 = 0x100;
    local_a0 = CONCAT31(local_a0._1_3_,1);
    local_b8 = thunk_FUN_180102f80(0x100);
    uVar12 = 0x50;
    if (0xbfff < *(int *)(lVar15 + (ulonglong)uVar13 * 0x1ac0 + 0x900)) {
      uVar12 = 0x51;
    }
    local_b0 = local_b8;
    uVar18 = FUN_18009fb28(uVar20,uVar12,1,&local_b8);
    lVar15 = local_b8;
    local_c0 = local_b8;
    if ((uVar18 & 1) != 0) {
      lVar8 = local_b0 - local_b8;
      FUN_1800f4268(*(undefined8 *)(local_d0 + 0x140),local_b8,lVar8);
      uVar16 = FUN_1800f8098(lVar8,lVar15);
      uVar13 = *(uint *)(param_1 + 0x1d138);
      uVar18 = 0;
      if (uVar13 != 0) {
        uVar14 = 0;
        uVar11 = uVar13;
        do {
          uVar4 = uVar11 + uVar14 >> 1;
          uVar18 = (ulonglong)uVar4;
          uVar17 = *(ulonglong *)(*(longlong *)(param_1 + 0x1d130) + uVar18 * 0x18);
          if (uVar17 <= uVar20) {
            if (uVar20 <= uVar17) break;
            uVar14 = uVar4 + 1;
            uVar18 = (ulonglong)(uVar4 + 1);
            uVar4 = uVar11;
          }
          uVar11 = uVar4;
        } while (uVar11 != uVar14);
        if (((uint)uVar18 != uVar13) &&
           (puVar1 = (ulonglong *)(*plVar6 + uVar18 * 0x18), *puVar1 == uVar20)) {
          puVar1[2] = uVar16;
          goto LAB_18008a9b4;
        }
      }
      local_d0 = param_1 + 0x1d000;
      uVar14 = *(uint *)(param_1 + 0x1d13c);
      if (uVar14 == uVar13) {
        local_f0 = 0x10;
        if (uVar14 != 0) {
          local_f0 = uVar14 << 1;
        }
        lVar15 = thunk_FUN_180102f80((ulonglong)local_f0 * 0x18);
        if (lVar15 != 0) {
          local_e0 = param_1 + 0x1d000;
          uVar17 = 0;
          if (*(int *)(param_1 + 0x1d138) != 0) {
            do {
              uVar13 = (int)uVar17 + 1;
              puVar2 = (undefined8 *)(*plVar6 + uVar17 * 0x18);
              puVar3 = (undefined8 *)(lVar15 + uVar17 * 0x18);
              uVar7 = *puVar2;
              puVar3[1] = puVar2[1];
              *puVar3 = uVar7;
              puVar3[2] = puVar2[2];
              uVar17 = (ulonglong)uVar13;
            } while (uVar13 < *(uint *)(param_1 + 0x1d138));
          }
          thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x1d128));
          *plVar6 = lVar15;
          *(longlong *)(local_e0 + 0x128) = lVar15;
          *(uint *)(local_d0 + 0x13c) = local_f0;
        }
      }
      uVar17 = (ulonglong)*(uint *)(param_1 + 0x1d138);
      if (*(uint *)(local_d0 + 0x13c) != *(uint *)(param_1 + 0x1d138)) {
        while ((uint)uVar18 < (uint)uVar17) {
          uVar10 = (ulonglong)((uint)uVar17 - 1);
          puVar2 = (undefined8 *)(*plVar6 + uVar17 * 0x18);
          puVar3 = (undefined8 *)(*plVar6 + uVar10 * 0x18);
          uVar7 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar7;
          puVar2[2] = puVar3[2];
          uVar17 = uVar10;
        }
        *(int *)(param_1 + 0x1d138) = *(int *)(param_1 + 0x1d138) + 1;
        *(int *)(*plVar6 + uVar18 * 0x18 + 8) = iVar19;
        *(ulonglong *)(*plVar6 + uVar18 * 0x18 + 0x10) = uVar16;
        *(ulonglong *)(*plVar6 + uVar18 * 0x18) = uVar20;
      }
    }
LAB_18008a9b4:
    thunk_FUN_180102fc0(local_c0);
  }
  else {
    uVar16 = *(ulonglong *)(param_1 + uVar20 * 8 + 0x1cfd8);
  }
LAB_18008a9cc:
  *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 0xb88) = param_1;
  lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508);
  *(int *)(lVar15 + 0x684) = *(int *)(lVar15 + 0x684) + 1;
  FUN_1800e8910(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                *(undefined8 *)(param_1 + 0x1cf28));
  FUN_1800e9780(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                *(undefined8 *)(param_1 + 0x1cf28));
  FUN_1800a0830(param_1,local_e8,0,0);
  FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                *(undefined8 *)(param_1 + 0x1cf20));
  FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                *(undefined8 *)(param_2 + 0x16),param_2[0xd],0,0x80);
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                  *(longlong *)(param_2 + 0x18),param_2[0xd],0,0x80);
  }
  if (*(longlong *)(param_2 + 0xe) != 0) {
    FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                  *(longlong *)(param_2 + 0xe),param_2[10],0,4);
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                  *(longlong *)(param_2 + 0x10),param_2[10],0,4);
  }
  if (*(longlong *)(param_2 + 0x1e) != 0) {
    FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                  *(longlong *)(param_2 + 0x1e),param_2[10],0,0x10);
  }
  uVar13 = local_ec;
  if ((iVar19 - 4U & 0xfffffffd) != 0) {
    if ((iVar19 - 5U & 0xfffffffd) != 0) {
      if (param_8 == '\0') {
        if (local_ec < 0xe) {
          lVar8 = (**(code **)(**(longlong **)(param_1 + 0x1cf20) + 0x58))();
          lVar15 = param_1 + (ulonglong)uVar13 * 4;
          FUN_1800e9b28(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),1,
                        lVar8 + (longlong)((int)*(char *)(lVar15 + 0x58) << 10) * 4);
          FUN_1800e9b28(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),2,
                        lVar8 + (longlong)((int)*(char *)(lVar15 + 0x59) << 10) * 4);
          FUN_1800e9b28(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),3,
                        lVar8 + (longlong)((int)*(char *)(lVar15 + 0x5a) << 10) * 4);
          FUN_1800e9b28(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),4,
                        lVar8 + (longlong)((int)*(char *)(lVar15 + 0x5b) << 10) * 4);
        }
        if (local_e8 == 0) {
          lVar15 = (**(code **)(**(longlong **)(param_1 + 0x1cf20) + 0x58))();
          FUN_1800e9b28(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),5,lVar15 + 0x2000
                       );
        }
      }
      goto LAB_18008ab44;
    }
    FUN_1800e9900(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),7,
                  (float)(uint)param_2[0xc],1);
  }
  FUN_1800e9900(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),7,
                (float)(uint)param_2[0xb],0);
LAB_18008ab44:
  lVar15 = *(longlong *)(param_1 + 0x1cf18);
  uVar20 = FUN_1800f2c40(*(undefined8 *)(lVar15 + 0x1950),2,
                         *(undefined8 *)(*(longlong *)(lVar15 + 0x1500) + 0x18),
                         *(undefined8 *)(*(longlong *)(lVar15 + 0x1508) + 0xb78),&local_80);
  if ((uVar20 & 1) != 0) {
    FUN_1800e96c8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),1,auStack_70);
    local_d0 = *(longlong *)(param_2 + 0x1a);
    lStack_c8 = *(longlong *)(param_2 + 0x1c);
    local_c0 = 0x100000001;
    local_f0 = 1;
    if (lStack_c8 != 0) {
      local_f0 = 2;
    }
    plVar6 = *(longlong **)
              (*(longlong *)(param_1 + 0x1cf10) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x20 +
              0x6d0);
    (**(code **)(*plVar6 + 0xb8))(plVar6,1,auStack_78,&local_f0,local_f0,&local_d0,&local_c0,0);
    FUN_1800e9ac0(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),6,local_80);
    local_b8 = *(longlong *)(param_2 + 0x12);
    local_b0 = *(longlong *)(param_2 + 0x14);
    local_e0 = *(longlong *)(param_2 + 0x20);
    uVar5 = local_b8 != 0;
    if (local_b0 != 0) {
      uVar5 = 2;
    }
    plVar6 = &local_e0;
    if (local_e0 == 0) {
      plVar6 = (longlong *)0x0;
    }
    FUN_1800e9fc8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),uVar5,&local_b8,0,
                  plVar6);
    uVar7 = FUN_18008e550(*(longlong *)(param_1 + 0x1cf18) + 0x1978,&DAT_180232fa0);
    *(undefined8 *)(param_1 + 0x1cf60) = uVar7;
    if (local_d8 == 0) {
      puVar9 = &DAT_180232f30;
      if (*(longlong *)(param_2 + 0xe) == 0) {
        puVar9 = &DAT_180233120;
      }
    }
    else {
      puVar9 = &DAT_1802330e8;
    }
    uVar7 = FUN_180042050(*(longlong *)(param_1 + 0x1cf18) + 0x1960,puVar9);
    *(undefined8 *)(param_1 + 0x1cf78) = uVar7;
    uVar7 = FUN_180041d70(*(longlong *)(param_1 + 0x1cf18) + 0x19a8,&DAT_180232f68);
    *(undefined8 *)(param_1 + 0x1cf70) = uVar7;
    *(undefined8 *)(param_1 + 0x1cf80) = *(undefined8 *)(param_1 + 0x1d120);
    *(float *)(param_1 + 0x1cf94) = param_2[0x22];
    *(float *)(param_1 + 0x1cf98) = param_2[0x23];
    *(float *)(param_1 + 0x1cfb4) = param_2[0x24];
    if (*(longlong *)(param_2 + 0xe) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = 1;
      if (*(longlong *)(param_2 + 0x10) != 0) {
        uVar12 = 2;
      }
    }
    *(undefined4 *)(param_1 + 0x1cf90) = uVar12;
    FUN_18008a130(param_1,param_2,uVar16);
  }
  lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508);
  iVar19 = *(int *)(lVar15 + 0x684) + -1;
  *(int *)(lVar15 + 0x684) = iVar19;
  if ((iVar19 == 0) && (*(int *)(lVar15 + 0x680) <= *(int *)(lVar15 + 0x678))) {
    FUN_1800e8548(lVar15 + 8,0);
  }
  return;
}

