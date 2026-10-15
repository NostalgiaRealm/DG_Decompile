/*
 * FUN_1801a0908 at 1801a0908
 * undefined FUN_1801a0908(void)
 * Address ranges: 1801a0908-1801a1357
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801a0908(longlong param_1,float *param_2,int param_3,uint param_4,uint param_5,
                  uint param_6,char param_7,char param_8)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint local_110;
  longlong *local_108;
  uint local_100;
  int local_fc;
  longlong local_f8;
  longlong local_f0;
  code *local_e8;
  longlong local_e0;
  longlong lStack_d8;
  uint local_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  uint local_98;
  undefined8 local_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  local_d0 = param_6 & 0xff;
  uVar18 = (ulonglong)param_5;
  local_e8 = (code *)__hybrid_os_arm64x_dispatch_icall;
  local_100 = param_4;
  local_fc = param_3;
  if (param_8 == '\0') {
    fVar21 = param_2[4];
    fVar22 = param_2[5];
    fVar23 = param_2[6];
    fVar24 = param_2[7];
    fVar26 = ((fVar23 - fVar21) / (param_2[2] - *param_2)) * 0.495;
    fVar25 = ((fVar24 - fVar22) / (param_2[3] - param_2[1])) * 0.495;
    if ((int)param_5 < 0) {
      param_8 = FUN_1801b7978(uVar18);
    }
    else {
      param_8 = param_5 - 4 < 2;
    }
    if (param_8 != '\0') {
      uVar6 = (*local_e8)();
      (*extraout_x11)(uVar6,&local_b0);
      uVar14 = (uint)local_a0 >> (ulonglong)((uint)param_2[0xb] & 0x1f);
      uVar11 = local_98 >> (ulonglong)((uint)param_2[0xb] & 0x1f);
      if (uVar14 == 0) {
        uVar14 = 1;
      }
      fVar23 = (float)uVar14;
      if (uVar11 == 0) {
        uVar11 = 1;
      }
      fVar24 = (float)uVar11;
      fVar20 = 1.0;
      if (param_7 == '\0') {
        fVar20 = 0.5;
      }
      fVar26 = fVar26 / fVar23;
      fVar21 = (param_2[4] + fVar20) / fVar23;
      fVar25 = fVar25 / fVar24;
      fVar22 = (param_2[5] + fVar20) / fVar24;
      fVar23 = (param_2[6] + fVar20) / fVar23;
      fVar24 = (param_2[7] + fVar20) / fVar24;
    }
    param_2[4] = fVar21 - fVar26;
    param_2[5] = fVar22 - fVar25;
    param_2[6] = fVar23 - fVar26;
    param_2[7] = fVar24 - fVar25;
  }
  if (((int)param_5 < 0) && ((param_5 & 0xf) == 2)) {
    uVar18 = (ulonglong)local_100;
    if (*(int *)(&DAT_18022e050 + uVar18 * 4) == 0x20) {
      lVar12 = uVar18 * 0x2c;
      uVar14 = 4;
      if (((&DAT_180248450)[lVar12] & 7) == 0) {
        uVar14 = 0;
      }
      uVar14 = ((((int)(char)(&DAT_180248450)[lVar12] << 0x15) >> 0x18 |
                ((int)(char)(&DAT_180248452)[lVar12] >> 3) << 2) & 0xffU |
               ((uint)(int)(char)(&DAT_180248454)[lVar12] >> 3 & 0xf |
               (uVar14 | (uint)(((int)(char)(&DAT_180248456)[lVar12] & 7U) != 0) << 5 |
                (uint)(((int)(char)(&DAT_180248454)[lVar12] & 7U) != 0) << 4 |
                (uint)(((int)(char)(&DAT_180248452)[lVar12] & 7U) != 0) << 3 |
               (uint)(int)(char)(&DAT_180248456)[lVar12] >> 3 & 3) << 2) << 4) << 8;
    }
    else {
      uVar14 = 0;
    }
    uVar18 = (ulonglong)
             (~((uint)((&DAT_18022da48)[uVar18] != '\0') << 0x1e) & 0x40000000 |
              ((uVar14 & 0xff00) >> 8 | (uVar14 >> 0x10) << 8) << 0x12 | param_5 & 0x8003ffff);
  }
  iVar17 = (int)uVar18;
  if (iVar17 < 0) {
    local_f8 = param_1 + 0x1d000;
    uVar14 = *(uint *)(param_1 + 0x1d138);
    if (uVar14 != 0) {
      uVar11 = 0;
      uVar9 = uVar14;
      do {
        uVar4 = uVar9 + uVar11 >> 1;
        uVar13 = (ulonglong)uVar4;
        uVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0x1d130) + uVar13 * 0x18);
        if (uVar15 <= uVar18) {
          if (uVar18 <= uVar15) break;
          uVar11 = uVar4 + 1;
          uVar13 = (ulonglong)(uVar4 + 1);
          uVar4 = uVar9;
        }
        uVar9 = uVar4;
      } while (uVar9 != uVar11);
      if ((((uint)uVar13 != uVar14) &&
          (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x1d130) + uVar13 * 0x18),
          *puVar1 == uVar18)) && (puVar1 = puVar1 + 2, puVar1 != (ulonglong *)0x0)) {
        uVar13 = *puVar1;
        goto LAB_1801a0e80;
      }
    }
    plVar19 = (longlong *)(param_1 + 0x1d130);
    local_108 = (longlong *)(param_1 + 0x1d130);
    local_c8 = param_1 + 0x1d000;
    uVar13 = 0;
    local_e0 = *(longlong *)(param_1 + 0x1d140) + (ulonglong)*(uint *)(param_1 + 0x1d148) * 0x1ac0;
    local_a0 = 0x100;
    local_98 = CONCAT31(local_98._1_3_,1);
    local_b0 = FUN_1802229a8(0x100);
    uVar10 = 0x50;
    if (0xbfff < *(int *)(local_e0 + 0x900)) {
      uVar10 = 0x51;
    }
    local_a8 = local_b0;
    uVar15 = FUN_1801b7a20(uVar18,uVar10,1,&local_b0);
    local_e0 = local_b0;
    local_b8 = local_b0;
    if ((uVar15 & 1) != 0) {
      lVar12 = local_a8 - local_b0;
      FUN_180212df8(*(undefined8 *)(local_c8 + 0x140),local_b0,lVar12);
      uVar13 = FUN_180216d50(lVar12,local_e0);
      local_110 = 0;
      uVar14 = *(uint *)(local_f8 + 0x138);
      if (uVar14 != 0) {
        uVar11 = 0;
        uVar9 = uVar14;
        do {
          uVar4 = uVar9 + uVar11 >> 1;
          uVar16 = (ulonglong)uVar4;
          uVar15 = *(ulonglong *)(*local_108 + uVar16 * 0x18);
          if (uVar15 <= uVar18) {
            if (uVar18 <= uVar15) break;
            uVar11 = uVar4 + 1;
            uVar16 = (ulonglong)(uVar4 + 1);
            uVar4 = uVar9;
          }
          uVar9 = uVar4;
        } while (uVar9 != uVar11);
        local_110 = (uint)uVar16;
        if ((local_110 != uVar14) &&
           (puVar1 = (ulonglong *)(*plVar19 + uVar16 * 0x18), *puVar1 == uVar18)) {
          puVar1[2] = uVar13;
          goto LAB_1801a0e68;
        }
      }
      local_e0 = param_1 + 0x1d000;
      uVar11 = *(uint *)(param_1 + 0x1d13c);
      if (uVar11 == uVar14) {
        uVar14 = 0x10;
        if (uVar11 != 0) {
          uVar14 = uVar11 << 1;
        }
        local_108 = (longlong *)CONCAT44(local_108._4_4_,uVar14);
        local_c8 = FUN_1802229a8((ulonglong)uVar14 * 0x18);
        if (local_c8 != 0) {
          local_f0 = param_1 + 0x1d000;
          uVar15 = 0;
          if (*(int *)(local_f8 + 0x138) != 0) {
            do {
              uVar14 = (int)uVar15 + 1;
              puVar2 = (undefined8 *)(*plVar19 + uVar15 * 0x18);
              puVar3 = (undefined8 *)(local_c8 + uVar15 * 0x18);
              uVar6 = *puVar2;
              puVar3[1] = puVar2[1];
              *puVar3 = uVar6;
              puVar3[2] = puVar2[2];
              uVar15 = (ulonglong)uVar14;
            } while (uVar14 < *(uint *)(local_f8 + 0x138));
          }
          FUN_1802229d8(*(undefined8 *)(param_1 + 0x1d128));
          *plVar19 = local_c8;
          *(longlong *)(local_f0 + 0x128) = local_c8;
          *(undefined4 *)(local_e0 + 0x13c) = local_108._0_4_;
        }
      }
      uVar14 = *(uint *)(local_f8 + 0x138);
      uVar15 = (ulonglong)uVar14;
      if (*(uint *)(local_e0 + 0x13c) != uVar14) {
        while (local_110 < uVar14) {
          uVar14 = (int)uVar15 - 1;
          puVar2 = (undefined8 *)(*plVar19 + uVar15 * 0x18);
          puVar3 = (undefined8 *)(*plVar19 + (ulonglong)uVar14 * 0x18);
          uVar6 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar6;
          puVar2[2] = puVar3[2];
          uVar15 = (ulonglong)uVar14;
        }
        *(int *)(local_f8 + 0x138) = *(int *)(local_f8 + 0x138) + 1;
        uVar15 = (ulonglong)local_110;
        *(int *)(*plVar19 + uVar15 * 0x18 + 8) = iVar17;
        *(ulonglong *)(*plVar19 + uVar15 * 0x18 + 0x10) = uVar13;
        *(ulonglong *)(*plVar19 + uVar15 * 0x18) = uVar18;
      }
    }
LAB_1801a0e68:
    FUN_1802229d8(local_b8);
  }
  else {
    uVar13 = *(ulonglong *)(param_1 + uVar18 * 8 + 0x1cfd8);
  }
LAB_1801a0e80:
  *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 0xb88) = param_1;
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508);
  *(int *)(lVar12 + 0x684) = *(int *)(lVar12 + 0x684) + 1;
  FUN_180207a10(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                *(undefined8 *)(param_1 + 0x1cf28));
  FUN_180208ae8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                *(undefined8 *)(param_1 + 0x1cf28));
  FUN_1801b8940(param_1,local_fc,0,0);
  FUN_180207cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                *(undefined8 *)(param_1 + 0x1cf20));
  FUN_180207cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                *(undefined8 *)(param_2 + 0x16),param_2[0xd],0,0x80);
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_180207cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                  *(longlong *)(param_2 + 0x18),param_2[0xd],0,0x80);
  }
  if (*(longlong *)(param_2 + 0xe) != 0) {
    FUN_180207cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                  *(longlong *)(param_2 + 0xe),param_2[10],0,4);
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_180207cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                  *(longlong *)(param_2 + 0x10),param_2[10],0,4);
  }
  if (*(longlong *)(param_2 + 0x1e) != 0) {
    FUN_180207cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                  *(longlong *)(param_2 + 0x1e),param_2[10],0,0x10);
  }
  uVar14 = local_100;
  if ((iVar17 - 4U & 0xfffffffd) != 0) {
    if ((iVar17 - 5U & 0xfffffffd) != 0) {
      if (param_8 == '\0') {
        if (local_100 < 0xe) {
          (*local_e8)();
          lVar7 = (*extraout_x11_01)();
          lVar12 = param_1 + (ulonglong)uVar14 * 4;
          FUN_180208f80(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),1,
                        lVar7 + (longlong)((int)*(char *)(lVar12 + 0x58) << 10) * 4);
          FUN_180208f80(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),2,
                        lVar7 + (longlong)((int)*(char *)(lVar12 + 0x59) << 10) * 4);
          FUN_180208f80(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),3,
                        lVar7 + (longlong)((int)*(char *)(lVar12 + 0x5a) << 10) * 4);
          FUN_180208f80(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),4,
                        lVar7 + (longlong)((int)*(char *)(lVar12 + 0x5b) << 10) * 4);
        }
        if (local_fc == 0) {
          (*local_e8)();
          lVar12 = (*extraout_x11_02)();
          FUN_180208f80(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),5,lVar12 + 0x2000
                       );
        }
      }
      goto LAB_1801a0ff8;
    }
    FUN_180208cc8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),7,
                  (float)(uint)param_2[0xc],1);
  }
  FUN_180208cc8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),7,
                (float)(uint)param_2[0xb],0);
LAB_1801a0ff8:
  lVar12 = *(longlong *)(param_1 + 0x1cf18);
  uVar18 = FUN_1802116e0(*(undefined8 *)(lVar12 + 0x1950),2,
                         *(undefined8 *)(*(longlong *)(lVar12 + 0x1500) + 0x18),
                         *(undefined8 *)(*(longlong *)(lVar12 + 0x1508) + 0xb78),&local_78);
  if ((uVar18 & 1) != 0) {
    FUN_180208a18(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),1,auStack_68);
    local_e0 = *(longlong *)(param_2 + 0x1a);
    lStack_d8 = *(longlong *)(param_2 + 0x1c);
    local_b8 = 0x100000001;
    uVar10 = 1;
    if (lStack_d8 != 0) {
      uVar10 = 2;
    }
    local_108 = (longlong *)CONCAT44(local_108._4_4_,uVar10);
    uVar6 = (*local_e8)();
    (*extraout_x11_00)(uVar6,1,auStack_70,&local_108);
    FUN_180208f00(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),6,local_78);
    local_c8 = *(longlong *)(param_2 + 0x12);
    lStack_c0 = *(longlong *)(param_2 + 0x14);
    local_f0 = *(longlong *)(param_2 + 0x20);
    uVar5 = local_c8 != 0;
    if (lStack_c0 != 0) {
      uVar5 = 2;
    }
    plVar19 = &local_f0;
    if (local_f0 == 0) {
      plVar19 = (longlong *)0x0;
    }
    FUN_1802094f8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),uVar5,&local_c8,0,
                  plVar19);
    uVar6 = FUN_1801a4da0(*(longlong *)(param_1 + 0x1cf18) + 0x1978,&DAT_180239730);
    *(undefined8 *)(param_1 + 0x1cf60) = uVar6;
    if (local_d0 == 0) {
      puVar8 = &DAT_1802396c8;
      if (*(longlong *)(param_2 + 0xe) == 0) {
        puVar8 = &DAT_1802398b0;
      }
    }
    else {
      puVar8 = &DAT_180239878;
    }
    uVar6 = FUN_180150ee0(*(longlong *)(param_1 + 0x1cf18) + 0x1960,puVar8);
    *(undefined8 *)(param_1 + 0x1cf78) = uVar6;
    uVar6 = FUN_180150c00(*(longlong *)(param_1 + 0x1cf18) + 0x19a8,&DAT_180239700);
    *(undefined8 *)(param_1 + 0x1cf70) = uVar6;
    *(undefined8 *)(param_1 + 0x1cf80) = *(undefined8 *)(param_1 + 0x1d120);
    *(float *)(param_1 + 0x1cf94) = param_2[0x22];
    *(float *)(param_1 + 0x1cf98) = param_2[0x23];
    *(float *)(param_1 + 0x1cfb4) = param_2[0x24];
    if (*(longlong *)(param_2 + 0xe) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
      if (*(longlong *)(param_2 + 0x10) != 0) {
        uVar10 = 2;
      }
    }
    *(undefined4 *)(param_1 + 0x1cf90) = uVar10;
    FUN_1801a0580(param_1,param_2,uVar13);
  }
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508);
  iVar17 = *(int *)(lVar12 + 0x684) + -1;
  *(int *)(lVar12 + 0x684) = iVar17;
  if ((iVar17 == 0) && (*(int *)(lVar12 + 0x680) <= *(int *)(lVar12 + 0x678))) {
    FUN_180207560(lVar12 + 8,0);
  }
  return;
}

