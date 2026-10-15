/*
 * FUN_18003b7a4 at 18003b7a4
 * ulonglong __fastcall FUN_18003b7a4(int * param_1, ushort param_2, undefined2 param_3, ushort param_4, ushort param_5, byte param_6, byte param_7, byte param_8, longlong * param_9, char param_10, byte param_11)
 * Address ranges: 18003b7a4-18003be61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18003b7a4(int *param_1,ushort param_2,undefined2 param_3,ushort param_4,ushort param_5
                       ,byte param_6,byte param_7,byte param_8,longlong *param_9,char param_10,
                       byte param_11)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort *puVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint local_res18;
  uint *puVar20;
  uint *puVar21;
  undefined4 local_a8;
  ushort local_a4;
  undefined8 local_a0;
  uint local_98;
  undefined4 local_94;
  ushort local_90 [44];
  
  fVar19 = 0.0;
  local_90[0] = param_2;
  local_90[3] = 0;
  fVar18 = 0.0;
  bVar16 = param_6 != 0;
  local_98 = (uint)param_6;
  local_90[1] = param_3;
  local_90[2] = param_4;
  uVar6 = 0;
  local_a0._0_4_ = 0;
  uVar10 = 0;
  local_a0._4_2_ = 0;
  local_a8 = 0;
  lVar8 = 0;
  lVar13 = 1;
  local_a4 = 0;
  local_94 = 0x2000;
  do {
    uVar9 = local_90[lVar8];
    if ((uVar9 & 0x2000) == 0) {
      if ((uVar9 & 0xf0) != 0) {
        *(ushort *)((longlong)&local_a8 + uVar10 * 2) = uVar9;
        uVar10 = (ulonglong)(uint)((int)uVar10 + (int)lVar13);
      }
      fVar17 = FUN_180037c50(uVar9);
      fVar18 = fVar18 + fVar17;
    }
    else {
      *(ushort *)((longlong)&local_a0 + uVar6 * 2) = uVar9;
      uVar6 = (ulonglong)(uint)((int)uVar6 + (int)lVar13);
      fVar17 = FUN_180037c50(uVar9);
      fVar19 = fVar19 + fVar17;
    }
    lVar8 = lVar8 + lVar13;
  } while (lVar8 != 3);
  uVar3 = (uint)param_5;
  if (((byte)((uint)(undefined4)local_a0 >> 0x10) & 0xf0) == 0xf0) {
    lVar8 = 0;
    if ((local_a0._2_2_ & 0x1000) == (uVar3 & 0x1000)) {
      local_a0._0_4_ = CONCAT22((short)(undefined4)local_a0,local_a0._2_2_);
      lVar8 = lVar13;
    }
  }
  else {
    lVar8 = 0;
  }
  if ((((byte)local_a0._4_2_ & 0xf0) == 0xf0) && ((local_a0._4_2_ & 0x1000) == (uVar3 & 0x1000))) {
    uVar9 = *(ushort *)((longlong)&local_a0 + lVar8 * 2);
    *(ushort *)((longlong)&local_a0 + lVar8 * 2) = local_a0._4_2_;
    local_a0._4_2_ = uVar9;
  }
  lVar8 = 0;
  if ((((byte)(local_a8 >> 0x10) & 0xf0) == 0xf0) && ((local_a8._2_2_ & 0x1000) == (uVar3 & 0x1000))
     ) {
    local_a8 = CONCAT22((short)local_a8,local_a8._2_2_);
    lVar8 = lVar13;
  }
  if ((((byte)local_a4 & 0xf0) == 0xf0) && ((local_a4 & 0x1000) == (uVar3 & 0x1000))) {
    uVar9 = *(ushort *)((longlong)&local_a8 + lVar8 * 2);
    *(ushort *)((longlong)&local_a8 + lVar8 * 2) = local_a4;
    local_a4 = uVar9;
  }
  fVar18 = fVar19 / 255.0 + fVar18;
  FUN_18005f1b0((undefined8 *)local_90,&local_a0,uVar6 * 2);
  FUN_18005f1b0((undefined8 *)(local_90 + uVar6),(undefined8 *)&local_a8,uVar10 * 2);
  uVar15 = (int)uVar6 + (int)uVar10;
  uVar10 = (ulonglong)uVar15;
  if (((local_90[uVar15 - 1] & 0x2000) != 0) || (fVar18 != 0.0)) {
    local_90[uVar10] = 0x90;
    uVar10 = (ulonglong)(uVar15 + 1);
    bVar16 = false;
  }
  uVar15 = (uint)uVar10;
  if (uVar15 < 4) {
    puVar11 = local_90 + uVar10;
    for (uVar6 = (ulonglong)(4 - uVar15); uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
  }
  uVar9 = local_90[0];
  uVar10 = (ulonglong)(uVar15 - 1);
  local_a0._0_4_ = 0;
  if (((local_90[uVar10] != 0x90) || (fVar18 != 0.0)) ||
     (uVar7 = uVar15 - 1, ((byte)param_5 & 0xf0) == 0x70)) {
    uVar7 = uVar15;
  }
  iVar14 = 2;
  uVar2 = param_5;
  if (((2 < uVar7) || (bVar16)) && (((uVar3 & 0xf0) - 0x70 & 0xffffff7f) == 0)) {
    uVar2 = FUN_18003af18((longlong)param_1,local_90[2],local_90[3],0,0,param_7,'\0');
    local_a0._0_4_ = CONCAT22(local_a0._2_2_,uVar2);
    uVar10 = (ulonglong)(uVar15 - 1);
  }
  uVar2 = uVar2 ^ (uVar2 ^ uVar9) & 0x2000;
  fVar19 = (float)(1 << ((byte)local_98 & 0x1f));
  if (1 < uVar15) {
    local_res18 = 1;
    local_a8 = (uint)(param_8 == 0xff);
    if (param_8 != 0xff) {
      iVar14 = 5;
    }
    do {
      if ((local_res18 == (uint)uVar10) && (!bVar16)) {
        uVar2 = (uVar2 ^ param_5) & 0x2000 ^ param_5;
      }
      uVar4 = FUN_18003b064((longlong)param_1,(uint)uVar2,param_8);
      FUN_18003a8dc((longlong)param_1,uVar2,param_7);
      FUN_18003aa00(param_1,0,uVar9,(byte)uVar4,0,'\0');
      uVar1 = local_90[local_res18];
      if ((uVar1 & 0xf0) == 0x90) {
        param_1[0x5f] = iVar14;
        uVar3 = local_a8;
        if (param_8 != 0xff) {
          uVar3 = 6;
        }
        param_1[0x60] = uVar3 | 0x4000;
        param_1[0x61] = (int)fVar18;
        param_1[0x62] = (int)fVar18;
        param_1[99] = (int)fVar18;
        param_1[100] = (int)fVar18;
      }
      else {
        FUN_18003aa00(param_1,1,uVar1,(byte)uVar4,0,'\0');
      }
      puVar21 = (uint *)(param_1 + 0x5f);
      if ((local_res18 == uVar15 - 1) && (param_11 != 0)) {
        uVar3 = 0x2000;
        uVar7 = 0x2038;
        uVar12 = 0x2032;
      }
      else {
        uVar3 = 0;
        uVar7 = 0x38;
        uVar12 = 0x32;
      }
      puVar20 = (uint *)(param_1 + 0x57);
      if ((uVar9 & (ushort)local_94) == (uVar1 & 0x2000)) {
        FUN_180055834(param_9,(*puVar21 + *puVar20 + param_1[0x4f]) * 0x1000000 + 0x1000000 &
                              0x7f000000 | uVar3,(uint *)(param_1 + 0x4f),puVar20,puVar21,
                      (uint *)0x0);
        uVar9 = uVar2 ^ (uVar2 ^ uVar9) & 0x2000;
      }
      else {
        param_1[0x67] = iVar14;
        uVar3 = local_a8;
        if (param_8 != 0xff) {
          uVar3 = 6;
        }
        param_1[0x68] = uVar3 | 0x4000;
        param_1[0x69] = 0x3b808081;
        param_1[0x6a] = 0x3b808081;
        param_1[0x6b] = 0x3b808081;
        param_1[0x6c] = 0x3b808081;
        iVar5 = *puVar20 + iVar14 + param_1[0x4f];
        if (((uVar1 & 0xf0) == 0x90) && (fVar18 == 0.0)) {
          uVar9 = uVar2;
          if (param_10 == '\0') goto LAB_18003bcf6;
          fVar17 = fVar19 / 255.0;
          puVar21 = (uint *)0x0;
          uVar7 = uVar7 | iVar5 * 0x1000000 + 0x1000000U & 0x7f000000;
          param_1[0x69] = (int)fVar17;
          param_1[0x6a] = (int)fVar17;
          param_1[0x6b] = (int)fVar17;
          param_1[0x6c] = (int)fVar17;
        }
        else {
          uVar7 = (*puVar21 + iVar5) * 0x1000000 + 0x1000000 & 0x7f000000 | uVar12;
        }
        FUN_180055834(param_9,uVar7,(uint *)(param_1 + 0x4f),puVar20,(uint *)(param_1 + 0x67),
                      puVar21);
        uVar9 = uVar2 & 0xdfff;
      }
LAB_18003bcf6:
      uVar10 = (ulonglong)(uVar15 - 1);
      local_res18 = local_res18 + 1;
      uVar2 = uVar9;
    } while (local_res18 < uVar15);
  }
  uVar4 = FUN_18003b028((longlong)param_1,(ushort)local_a0);
  if (bVar16) {
    puVar21 = (uint *)(param_1 + 0x57);
    FUN_18003a8dc((longlong)param_1,param_5,param_7);
    uVar4 = FUN_18003aa00(param_1,0,uVar9,param_8,0,'\0');
    uVar3 = param_1[0x4f];
    uVar15 = (param_11 ^ 1) << 0xd;
    if (local_98 == 1) {
      uVar15 = (uVar3 + *puVar21 * 2) * 0x1000000 + 0x1000000 & 0x7f000000 | uVar15;
      puVar20 = puVar21;
    }
    else {
      if (local_98 != 2) goto LAB_18003be23;
      param_1[0x61] = (int)fVar19;
      param_1[0x62] = (int)fVar19;
      param_1[99] = (int)fVar19;
      param_1[100] = (int)fVar19;
      uVar7 = 2;
      if (param_8 != 0xff) {
        uVar7 = 5;
      }
      param_1[0x5f] = uVar7;
      iVar14 = 0x4001 - (uint)(param_8 != 0xff);
      if (param_8 != 0xff) {
        iVar14 = 0x4006;
      }
      param_1[0x60] = iVar14;
      uVar15 = (*puVar21 + uVar3 + uVar7) * 0x1000000 + 0x1000000 & 0x7f000000 | uVar15 | 0x38;
      puVar20 = (uint *)(param_1 + 0x5f);
    }
    uVar4 = FUN_180055834(param_9,uVar15,(uint *)(param_1 + 0x4f),puVar21,puVar20,(uint *)0x0);
  }
LAB_18003be23:
  return CONCAT71((int7)((ulonglong)uVar4 >> 8),~(byte)(uVar2 >> 0xd)) & 0xffffffffffffff01;
}

