/*
 * FUN_1800630b0 at 1800630b0
 * undefined FUN_1800630b0(void)
 * Address ranges: 1800630b0-180063557
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800630b0(ulonglong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  uint param_5,ulonglong param_6,uint param_7,int param_8,char param_9)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong extraout_x9;
  longlong extraout_x9_00;
  longlong extraout_x9_01;
  longlong extraout_x9_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  longlong lVar11;
  ulonglong extraout_x11;
  int extraout_w12;
  longlong extraout_x14;
  int iVar12;
  ulonglong uVar13;
  byte bVar16;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  int local_100;
  byte local_fc;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  uint local_e0;
  undefined1 auStack_d0 [32];
  longlong local_b0;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  local_e0 = param_5 & 0xf000000;
  uVar10 = 0;
  if ((((local_e0 == 0x1000000 || local_e0 == 0x3000000) || local_e0 == 0x5000000) ||
      local_e0 == 0x6000000) || local_e0 == 0x8000000) {
    uVar10 = 0x80000000;
  }
  param_4 = param_4 & 0xffffffff;
  uVar9 = (ulonglong)(param_5 & 0x7ff);
  iVar12 = (int)param_6;
  if ((iVar12 == 0) || (param_9 != '\0')) {
    uVar13 = (ulonglong)(param_5 >> 0x10 & 0xff);
  }
  else {
    param_1 = FUN_1800f5ea8(0xe4,param_6 >> 0x20 & 0xff);
    uVar13 = param_1 & 0xffffffff;
  }
  uVar4 = param_5 & 0x1800 | param_5 >> 0x14 & 0x700;
  iVar8 = (int)uVar9;
  uVar3 = (undefined1)uVar13;
  if (uVar4 < 0x100) {
    lVar11 = param_2 + (uVar9 & 0xffffffff) * 4;
    uVar4 = *(uint *)(lVar11 + 0x218);
    if (uVar4 == 0) {
      uVar4 = FUN_1800f42d0(param_2,4,1);
      *(uint *)(lVar11 + 0x218) = uVar4;
    }
LAB_180063304:
    lVar11 = param_2 + param_4 * 0x20;
    *(uint *)(lVar11 + 0x360) = uVar4 | uVar10;
    *(undefined1 *)(lVar11 + 0x364) = uVar3;
LAB_180063314:
    *(undefined8 *)(lVar11 + 0x370) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x378) = 0xffffffffffffffff;
  }
  else {
    uVar4 = uVar4 >> 8;
    if (uVar4 == 1) {
      lVar11 = param_2 + (uVar9 & 0xffffffff) * 4;
      local_b0 = lVar11;
      if (*(int *)(lVar11 + 0x248) == 0) {
        uVar5 = FUN_1800f42d0(param_2,4,1);
        *(undefined4 *)(lVar11 + 0x248) = uVar5;
        FUN_1800f5730(param_2,param_3,0x2036,uVar5,0xf,iVar8 + 2U | 0x410100,0xe4,0);
      }
      uVar4 = *(uint *)(local_b0 + 0x248);
      goto LAB_180063304;
    }
    if (uVar4 != 2) {
      if (uVar4 != 3) goto LAB_180063318;
      lVar11 = param_2 + param_4 * 0x20;
      uVar4 = FUN_180062f68(param_1,param_2,uVar9 & 0xffffffff);
      *(undefined1 *)(lVar11 + 0x364) = uVar3;
      *(uint *)(lVar11 + 0x360) = uVar4 | uVar10;
      goto LAB_180063314;
    }
    if ((*(char *)(param_2 + 0xf8) == '\0') ||
       (lVar11 = *(longlong *)(param_2 + 0x100),
       *(char *)(lVar11 + (uVar9 & 0xffffffff) + 0x331) == '\0')) {
      uVar4 = *(uint *)(param_2 + 0x78);
      lVar11 = param_2 + param_4 * 0x20;
      *(undefined1 *)(lVar11 + 0x364) = uVar3;
      *(uint *)(lVar11 + 0x360) = uVar4 | uVar10;
      *(int *)(lVar11 + 0x370) = iVar8 << 4;
      *(undefined4 *)(lVar11 + 0x37c) = 0xffffffff;
      *(undefined8 *)(lVar11 + 0x374) = 0xffffffffffffffff;
    }
    else {
      uVar4 = iVar8 << 2;
      auVar17 = NEON_fmov(0x3f800000,4);
      auVar19 = NEON_fmov(0xbf800000,4);
      uVar5 = *(undefined4 *)(lVar11 + ((uVar13 >> 4 & 3) + (ulonglong)uVar4) * 4 + 0x414);
      lVar1 = param_2 + param_4 * 0x20;
      uVar2 = *(undefined4 *)((uVar13 >> 6 & 3) * 4 + (ulonglong)uVar4 * 4 + lVar11 + 0x414);
      auVar15._4_4_ = *(undefined4 *)(lVar11 + ((uVar13 >> 2 & 3) + (ulonglong)uVar4) * 4 + 0x414);
      auVar15._0_4_ = *(undefined4 *)(lVar11 + ((uVar13 & 3) + (ulonglong)uVar4) * 4 + 0x414);
      *(undefined4 *)(lVar1 + 0x360) = *(undefined4 *)(param_2 + 0xac);
      *(undefined1 *)(lVar1 + 0x364) = 0xe4;
      auVar15._8_4_ = uVar5;
      auVar15._12_4_ = uVar2;
      auVar15 = NEON_fmin(auVar15,auVar17,4);
      auVar15 = NEON_fmax(auVar15,auVar19,4);
      bVar16 = (byte)(uVar10 >> 0x18);
      auVar17._0_8_ =
           CONCAT17(auVar15[7] ^ bVar16,
                    CONCAT16(auVar15[6],
                             CONCAT15(auVar15[5],
                                      CONCAT14(auVar15[4],
                                               CONCAT13(auVar15[3] ^ bVar16,auVar15._0_3_)))));
      auVar17[8] = auVar15[8];
      auVar17[9] = auVar15[9];
      auVar17[10] = auVar15[10];
      auVar17[0xb] = auVar15[0xb] ^ bVar16;
      auVar17[0xc] = auVar15[0xc];
      auVar17[0xd] = auVar15[0xd];
      auVar17[0xe] = auVar15[0xe];
      auVar17[0xf] = auVar15[0xf] ^ bVar16;
      *(longlong *)(lVar1 + 0x378) = auVar17._8_8_;
      *(undefined8 *)(lVar1 + 0x370) = auVar17._0_8_;
    }
  }
LAB_180063318:
  if (iVar12 == 0) {
    return;
  }
  fVar18 = *(float *)(&DAT_18022c3e4 + (longlong)((param_8 << 0x1c) >> 0x1c) * 4);
  uVar9 = func_0x0001802132c8(param_6 >> 0x20 & 0xff);
  local_fc = (byte)(param_6 >> 0x20);
  uStack_e8 = 0xffffffff;
  uStack_e4 = 0xffffffff;
  local_f0 = 0xffffffffffffffff;
  local_100 = iVar12;
  uVar6 = FUN_18005dd50(fVar18,uVar9,auStack_a0,param_2,uVar9 & 0xffffffff);
  if ((param_5 & 0xe000000) == 0) {
    lVar11 = param_2 + param_4 * 0x20;
    if (extraout_w10 != 0) {
      if (extraout_w10 == 1) {
LAB_1800634c8:
        puVar7 = (undefined1 *)(lVar11 + 0x360);
      }
      else {
        param_7 = param_7 | 0x38;
        puVar7 = auStack_a0;
      }
      goto LAB_1800634d0;
    }
LAB_1800634ec:
    FUN_1800f58b8(param_2,param_3,param_7 | 0x36,&local_100,lVar11 + 0x360,0);
  }
  else {
    if ((local_e0 + 0xfe000000 & 0xfeffffff) == 0) {
      fVar14 = -0.5;
      if (local_e0 != 0x2000000) {
        fVar14 = 0.5;
      }
      FUN_18005dd50(fVar14 * fVar18,uVar6,auStack_d0,param_2);
      lVar11 = param_2 + param_4 * 0x20 + 0x360;
      if (extraout_w10_01 != 0) {
        puVar7 = auStack_a0;
LAB_1800633e0:
        FUN_1800f58b8(param_2,param_3,param_7 | 0x32,&local_100,lVar11,puVar7,auStack_d0,0);
        goto LAB_18006350c;
      }
      puVar7 = auStack_d0;
    }
    else {
      if ((local_e0 + 0xfc000000 & 0xfeffffff) == 0) {
        fVar14 = -1.0;
        if (local_e0 != 0x4000000) {
          fVar14 = 1.0;
        }
        uVar6 = FUN_18005dd50(fVar14 * fVar18,uVar6,auStack_d0,param_2);
        lVar11 = param_2 + param_4 * 0x20;
        if (extraout_w10_00 != -1) {
          FUN_18005dd50(fVar18 + fVar18,uVar6,auStack_80);
          puVar7 = auStack_80;
          lVar11 = extraout_x9_02;
LAB_1800633d0:
          lVar11 = lVar11 + 0x360;
          goto LAB_1800633e0;
        }
      }
      else {
        if ((local_e0 + 0xf9000000 & 0xfeffffff) == 0) {
          lVar11 = param_2 + param_4 * 0x20;
          if (extraout_w10 == -1) goto LAB_1800634ec;
          if (extraout_w10 == 0) goto LAB_1800634c8;
          FUN_18005dd50(fVar18 + fVar18,uVar6,auStack_d0,param_2);
          param_7 = param_7 | 0x38;
          puVar7 = auStack_d0;
          lVar11 = extraout_x9_01;
          goto LAB_1800634d0;
        }
        uVar9 = extraout_x11;
        iVar12 = extraout_w12;
        if (local_e0 != 0x6000000) goto LAB_180063514;
        if (extraout_w10 != 0) {
          FUN_18005dd50(fVar18,uVar6,auStack_d0);
          puVar7 = auStack_d0;
          lVar11 = extraout_x9_00;
          goto LAB_1800633d0;
        }
        FUN_18005dd50(0x3f800000,uVar6,auStack_d0);
        lVar11 = extraout_x9;
      }
      puVar7 = auStack_d0;
LAB_1800634d0:
      lVar11 = lVar11 + 0x360;
    }
    FUN_1800f58b8(param_2,param_3,param_7,&local_100,lVar11,puVar7,0);
  }
LAB_18006350c:
  uVar9 = (ulonglong)local_fc;
  iVar12 = local_100;
LAB_180063514:
  *(int *)(param_4 * 0x20 + param_2 + 0x360) = iVar12;
  uVar3 = FUN_1800f5ea8(0xe4,uVar9 & 0xffffffff);
  *(undefined1 *)(extraout_x14 + 0x364) = uVar3;
  *(undefined8 *)(extraout_x14 + 0x370) = 0xffffffffffffffff;
  *(undefined8 *)(extraout_x14 + 0x378) = 0xffffffffffffffff;
  return;
}

