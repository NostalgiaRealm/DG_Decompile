/*
 * FUN_18003f058 at 18003f058
 * uint __cdecl FUN_18003f058(int * param_1, ushort param_2, undefined2 param_3, ushort param_4, uint param_5, byte param_6, undefined4 param_7, byte param_8, longlong * param_9, char param_10, byte param_11)
 * Address ranges: 18003f058-18003f673
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18003f058(int *param_1,ushort param_2,undefined2 param_3,ushort param_4,uint param_5,
                  byte param_6,undefined4 param_7,byte param_8,longlong *param_9,char param_10,
                  byte param_11)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint extraout_w1;
  longlong lVar7;
  longlong extraout_x1;
  longlong extraout_x1_00;
  ushort *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong extraout_x14;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  float fVar25;
  float fVar26;
  undefined4 local_b0;
  ushort local_ac;
  undefined4 local_a8;
  ushort local_a4;
  ushort local_a0 [4];
  uint local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  uint local_88;
  undefined4 local_84;
  uint local_80;
  uint local_7c;
  
  local_a0[0] = param_2;
  uVar24 = 0;
  uVar21 = (uint)(param_6 != 0);
  local_a0[1] = param_3;
  local_a0[2] = param_4;
  uVar23 = 0;
  local_a0[3] = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_b0 = 0;
  uVar16 = 0;
  local_ac = 0;
  uVar18 = 0;
  lVar7 = 0;
  puVar8 = local_a0;
  puVar9 = &local_a8;
  puVar10 = &local_b0;
  do {
    fVar22 = (float)uVar23;
    fVar25 = (float)uVar24;
    uVar2 = puVar8[lVar7];
    if ((uVar2 >> 0xd & 1) == 0) {
      if ((uVar2 & 0xf0) != 0) {
        *(ushort *)((longlong)puVar10 + uVar18 * 2) = uVar2;
        uVar18 = (ulonglong)((int)uVar18 + 1);
      }
      fVar25 = FUN_18003bff8((uint)uVar2);
      uVar23 = (ulonglong)(uint)(fVar25 + fVar22);
      lVar7 = extraout_x1_00;
    }
    else {
      *(ushort *)((longlong)puVar9 + uVar16 * 2) = uVar2;
      uVar16 = (ulonglong)((int)uVar16 + 1);
      fVar22 = FUN_18003bff8((uint)uVar2);
      uVar24 = (ulonglong)(uint)(fVar22 + fVar25);
      lVar7 = extraout_x1;
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  lVar7 = 0;
  if (((local_a8._2_2_ & 0xf0) == 0xf0) && ((local_a8._2_2_ & 0x1000) == (param_5 & 0x1000))) {
    local_a8 = CONCAT22((undefined2)local_a8,local_a8._2_2_);
    lVar7 = 1;
  }
  if (((local_a4 & 0xf0) == 0xf0) && ((local_a4 & 0x1000) == (param_5 & 0x1000))) {
    uVar2 = *(ushort *)((longlong)&local_a8 + lVar7 * 2);
    *(ushort *)((longlong)&local_a8 + lVar7 * 2) = local_a4;
    local_a4 = uVar2;
  }
  lVar7 = 0;
  if (((local_b0._2_2_ & 0xf0) == 0xf0) && ((local_b0._2_2_ & 0x1000) == (param_5 & 0x1000))) {
    local_b0 = CONCAT22((undefined2)local_b0,local_b0._2_2_);
    lVar7 = 1;
  }
  if (((local_ac & 0xf0) == 0xf0) && ((local_ac & 0x1000) == (param_5 & 0x1000))) {
    uVar2 = *(ushort *)((longlong)&local_b0 + lVar7 * 2);
    *(ushort *)((longlong)&local_b0 + lVar7 * 2) = local_ac;
    local_ac = uVar2;
  }
  fVar22 = (float)uVar24 / 255.0 + (float)uVar23;
  thunk_FUN_180001218((undefined8 *)local_a0,(undefined8 *)&local_a8,uVar16 << 1);
  thunk_FUN_180001218((undefined8 *)(local_a0 + uVar16),(undefined8 *)&local_b0,uVar18 << 1);
  uVar5 = (int)uVar18 + (int)uVar16;
  if (((local_a0[uVar5 - 1] >> 0xd & 1) != 0) || (fVar22 != 0.0)) {
    local_a0[uVar5] = 0x90;
    uVar21 = 0;
    uVar5 = uVar5 + 1;
  }
  if (uVar5 < 4) {
    FUN_1800611b0((undefined1 *)(local_a0 + uVar5),0,(ulonglong)(uVar5 * -2 + 8));
  }
  uVar2 = local_a0[0];
  local_94 = uVar5 - 1;
  uVar20 = (uint)local_a0[0];
  if (((local_a0[local_94] != 0x90) || (fVar22 != 0.0)) ||
     (uVar12 = local_94, (param_5 & 0xf0) == 0x70)) {
    uVar12 = uVar5;
  }
  uVar4 = param_5;
  uVar15 = 0;
  if ((2 < uVar12 || uVar21 != 0) && (((param_5 & 0xf0) - 0x70 & 0xffffff7f) == 0)) {
    uVar4 = FUN_18003e8e0((longlong)param_1,(uint)local_a0[2],(uint)local_a0[3],0,0,(byte)param_7,0)
    ;
    uVar15 = uVar4;
  }
  uVar12 = uVar4 & 0xffffc000 | uVar4 & 0x1fff | (uVar2 >> 0xd & 1) << 0xd;
  fVar25 = (float)(1 << (ulonglong)(param_6 & 0x1f));
  uVar4 = (uint)param_6;
  uVar19 = (uint)param_8;
  if (1 < uVar5) {
    local_98 = (uint)param_8;
    local_8c = 5;
    if (local_98 == 0xff) {
      local_8c = 2;
    }
    local_b0 = (uint)param_6;
    local_90 = (uint)(local_98 == 0xff);
    uVar17 = 1;
    local_a8 = uVar15;
    local_88 = param_5;
    local_84 = param_7;
    local_80 = uVar21;
    local_7c = uVar5;
    do {
      if ((uVar17 == local_94) && (local_80 == 0)) {
        uVar12 = local_88 & 0xdfff | uVar12 & 0x2000;
      }
      uVar5 = FUN_18003e9f8((longlong)param_1,uVar12,local_98);
      piVar6 = (int *)FUN_18003e308((longlong)param_1,extraout_w1,(byte)local_84);
      FUN_18003e3e8(piVar6,0,uVar20,(byte)uVar5,0,0);
      uVar2 = local_a0[uVar17];
      uVar21 = uVar2 & 0xf0;
      if (uVar21 == 0x90) {
        uVar5 = 6;
        if (local_98 == 0xff) {
          uVar5 = local_90;
        }
        param_1[99] = (int)fVar22;
        param_1[100] = (int)fVar22;
        param_1[0x61] = (int)fVar22;
        param_1[0x62] = (int)fVar22;
        param_1[0x5f] = local_8c;
        param_1[0x60] = uVar5 | 0x4000;
      }
      else {
        FUN_18003e3e8(param_1,1,(uint)uVar2,(byte)uVar5,0,0);
      }
      if (uVar17 == local_94 && param_11 != 0) {
        uVar15 = 0x2000;
        uVar5 = 0x2038;
        uVar4 = 0x2032;
      }
      else {
        uVar15 = 0;
        uVar5 = 0x38;
        uVar4 = 0x32;
      }
      if ((uVar20 & 0x2000) == (uVar2 & 0x2000)) {
        FUN_180057c58(param_9,(param_1[0x5f] + param_1[0x57] + param_1[0x4f]) * 0x1000000 +
                              0x1000000U & 0x7f000000 | uVar15,(uint *)(param_1 + 0x4f),
                      (uint *)(param_1 + 0x57),(uint *)(param_1 + 0x5f),(uint *)0x0);
        uVar12 = uVar12 & 0xdfff | uVar20 & 0x2000;
      }
      else {
        uVar20 = 6;
        if (local_98 == 0xff) {
          uVar20 = local_90;
        }
        param_1[0x6b] = 0x3b808081;
        param_1[0x6c] = 0x3b808081;
        param_1[0x67] = local_8c;
        param_1[0x68] = uVar20 | 0x4000;
        param_1[0x69] = 0x3b808081;
        param_1[0x6a] = 0x3b808081;
        iVar13 = local_8c + param_1[0x57] + param_1[0x4f];
        if ((uVar21 == 0x90) && (fVar22 == 0.0)) {
          if (param_10 == '\0') goto LAB_18003f52c;
          fVar26 = fVar25 / 255.0;
          puVar11 = (uint *)0x0;
          param_1[0x6b] = (int)fVar26;
          param_1[0x6c] = (int)fVar26;
          param_1[0x69] = (int)fVar26;
          param_1[0x6a] = (int)fVar26;
          uVar5 = iVar13 * 0x1000000 + 0x1000000U & 0x7f000000 | uVar5;
        }
        else {
          puVar11 = (uint *)(param_1 + 0x5f);
          uVar5 = (param_1[0x5f] + iVar13) * 0x1000000 + 0x1000000U & 0x7f000000 | uVar4;
        }
        FUN_180057c58(param_9,uVar5,(uint *)(param_1 + 0x4f),(uint *)(param_1 + 0x57),
                      (uint *)(param_1 + 0x67),puVar11);
        uVar12 = uVar12 & 0xdfff;
      }
LAB_18003f52c:
      uVar17 = uVar17 + 1;
      uVar21 = local_80;
      uVar20 = uVar12;
      uVar4 = local_b0;
      uVar19 = local_98;
      uVar15 = local_a8;
      param_5 = local_88;
      param_7 = local_84;
    } while (uVar17 < local_7c);
  }
  if ((uVar15 & 0xf0) == 0x80) {
    FUN_180056c30((longlong)param_1,param_1[(ulonglong)(uVar15 & 0xf) + 0x26]);
    *(undefined4 *)(extraout_x14 + 0x98) = 0;
  }
  if (uVar21 != 0) {
    piVar6 = (int *)FUN_18003e308((longlong)param_1,param_5,(byte)param_7);
    FUN_18003e3e8(piVar6,0,uVar20,(byte)uVar19,0,0);
    if (uVar4 == 1) {
      puVar11 = (uint *)(param_1 + 0x57);
      uVar21 = (param_1[0x4f] + param_1[0x57] * 2) * 0x1000000 + 0x1000000U & 0x7f000000 |
               (param_11 ^ 1) << 0xd;
    }
    else {
      if (uVar4 != 2) goto LAB_18003f644;
      bVar3 = uVar19 == 0xff;
      iVar13 = 5;
      if (bVar3) {
        iVar13 = 2;
      }
      iVar14 = 0x4000;
      if (bVar3) {
        iVar14 = 0x4001;
      }
      iVar1 = 0x4006;
      if (bVar3) {
        iVar1 = iVar14;
      }
      puVar11 = (uint *)(param_1 + 0x5f);
      param_1[0x5f] = iVar13;
      param_1[0x60] = iVar1;
      param_1[99] = (int)fVar25;
      param_1[100] = (int)fVar25;
      param_1[0x61] = (int)fVar25;
      param_1[0x62] = (int)fVar25;
      uVar21 = (iVar13 + param_1[0x57] + param_1[0x4f]) * 0x1000000 + 0x1000000U & 0x7f000000 |
               (param_11 ^ 1) << 0xd | 0x38;
    }
    FUN_180057c58(param_9,uVar21,(uint *)(param_1 + 0x4f),(uint *)(param_1 + 0x57),puVar11,
                  (uint *)0x0);
  }
LAB_18003f644:
  return ~(uVar12 >> 0xd & 0xffff) & 1;
}

