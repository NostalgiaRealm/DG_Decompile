/*
 * FUN_1801adfc0 at 1801adfc0
 * undefined FUN_1801adfc0(void)
 * Address ranges: 1801adfc0-1801aea5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801adfc0(longlong param_1,uint param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  longlong extraout_x10;
  uint uVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulonglong local_c8;
  int local_c0;
  ulonglong local_b8;
  undefined *local_b0;
  uint local_a8;
  ulonglong local_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined **local_80;
  undefined1 auStack_78 [24];
  
  uVar9 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
  uVar16 = (ulonglong)uVar9;
  local_c0 = param_4;
  local_a8 = uVar9;
  if ((*(longlong *)(param_1 + 0x1c8) == 0) ||
     (iVar11 = thunk_FUN_180223d24(*(longlong *)(param_1 + 0x1c8) + uVar16 * 0x20 + 0x10),
     iVar11 != 0)) {
    uVar21 = 0;
    if ((*(int *)(param_1 + 0x2c) == 0) &&
       (((*(byte *)(param_1 + ((ulonglong)(uVar9 >> 6) + 0x4e) * 8 + ((ulonglong)(uVar9 >> 3) & 7))
          >> (uVar16 & 7) & 1) != 0 && (*(longlong *)(param_1 + 0x1c8) != 0)))) {
      uVar18 = *(uint *)(param_1 + 0x24) >> (ulonglong)(param_2 & 0x1f);
      uVar3 = *(uint *)(param_1 + 0x28) >> (ulonglong)(param_2 & 0x1f);
      if (uVar18 == 0) {
        uVar18 = 1;
      }
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      cVar6 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 8) + 0x84);
      uVar19 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
      uVar15 = (ulonglong)uVar19;
      local_b8 = CONCAT44(local_b8._4_4_,uVar19);
      puVar22 = (undefined *)(ulonglong)(uVar19 >> 6);
      bVar8 = *(byte *)(param_1 + (longlong)(puVar22 + 0x4c) * 8 + ((ulonglong)(uVar19 >> 3) & 7));
      local_b0 = puVar22;
      local_a0 = uVar15;
      FUN_1801a4380(*(longlong *)(param_1 + 0x130),1,*(undefined8 *)(param_1 + 0x10));
      uVar5 = *(uint *)(param_1 + 0x2c);
      uVar19 = (uint)((*(byte *)(param_1 + (longlong)(puVar22 + 0x4e) * 8 +
                                ((ulonglong)(uVar19 >> 3) & 7)) >> (uVar15 & 7) & 1) == 0 &&
                     (bVar8 >> (uVar15 & 7) & 1) != 0);
      if (*(char *)(param_1 + 0x24c) == '\0') {
        uVar17 = *(uint *)(&DAT_18022dca0 + (ulonglong)uVar5 * 4);
      }
      else {
        uVar17 = 1;
      }
      lVar23 = *(longlong *)(param_1 + 0x7c);
      cVar7 = (&DAT_18022da48)[uVar5];
      uVar4 = 0xffe00040;
      if (cVar6 == '\0') {
        uVar4 = 0xffe00000;
      }
      uVar20 = 0x18;
      if (cVar6 == '\0') {
        uVar20 = 0;
      }
      uVar5 = *(uint *)(&DAT_18022da80 + (ulonglong)uVar5 * 4);
      if (lVar23 == 0) {
        lVar23 = *(longlong *)(param_1 + 0x74);
      }
      if (uVar19 == 0) {
        local_c8 = 0;
        puVar14 = &local_c8;
      }
      else {
        puVar14 = (ulonglong *)
                  FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_88,
                                *(undefined4 *)(param_1 + 0x220),0);
      }
      uVar2 = *(undefined4 *)(param_1 + 0xa8);
      uVar21 = FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_90,
                             *(undefined4 *)(param_1 + 0x1d0),0);
      uVar12 = FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1938),auStack_98,
                             *(undefined4 *)(param_1 + 0x90),local_b8 & 0xffffffff);
      FUN_1801a4848(*(float *)(param_1 + 0x244) * 0.0,*(float *)(param_1 + 0x248) * 0.0,
                    *(float *)(param_1 + 0x244) * (float)(int)uVar18,
                    *(float *)(param_1 + 0x248) * (float)(int)uVar3,0,0,(float)(int)uVar18,
                    (float)(int)uVar3,*(undefined8 *)(param_1 + 0x130),
                    *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x2c),param_2,
                    local_b8 & 0xffffffff,param_2,param_3,local_b8 & 0xffffffff,lVar23,0,
                    *(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(param_1 + 0x208),0,uVar12,
                    &DAT_18022cfd8,uVar21,puVar14,&DAT_18022cfd8,uVar2,0,0,cVar6,
                    uVar5 & 0xf |
                    (uVar20 | (uVar4 | (uint)(cVar7 == '\0') << 4 | uVar19) << 6 | uVar17 & 7) << 4,
                    1);
      lVar23 = param_1 + (longlong)local_b0 * 8;
      uVar15 = local_a0 >> 3 & 7;
      *(byte *)(lVar23 + 0x270 + uVar15) =
           *(byte *)(lVar23 + 0x270 + uVar15) & ((byte)(1 << (local_a0 & 7)) ^ 0xff);
      uVar15 = local_a0 >> 3 & 7;
      *(byte *)(lVar23 + 0x250 + uVar15) =
           *(byte *)(lVar23 + 0x250 + uVar15) & ((byte)(1 << (local_a0 & 7)) ^ 0xff);
      uVar15 = local_a0 >> 3 & 7;
      *(byte *)(lVar23 + 0x110 + uVar15) =
           *(byte *)(lVar23 + 0x110 + uVar15) | (byte)(1 << (local_a0 & 7));
      uVar15 = local_a0 >> 3 & 7;
      *(byte *)(lVar23 + 0x260 + uVar15) =
           *(byte *)(lVar23 + 0x260 + uVar15) & ((byte)(1 << (local_a0 & 7)) ^ 0xff);
      thunk_FUN_180223bf8(*(longlong *)(param_1 + 0x1c8) + local_a0 * 0x20 + 0x10);
      uVar21 = 1;
    }
  }
  else {
    uVar21 = 1;
    lVar23 = *(longlong *)(param_1 + 0x1c8) + uVar16 * 0x20;
    fVar26 = (float)*(int *)(lVar23 + 0x14);
    fVar27 = (float)*(int *)(lVar23 + 0x10);
    fVar24 = (float)*(int *)(lVar23 + 0x1c);
    fVar25 = (float)*(int *)(lVar23 + 0x18);
    if (*(int *)(param_1 + 0x44) - 3U < 3) {
      lVar23 = *(longlong *)(param_1 + 0x7c);
      if (lVar23 == 0) {
        lVar23 = *(longlong *)(param_1 + 0x74);
      }
      uVar2 = *(undefined4 *)(param_1 + 0xa8);
      local_c8 = FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1940),auStack_88,
                               *(undefined4 *)(param_1 + 0x94),local_a8);
      uVar12 = FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_90,
                             *(undefined4 *)(param_1 + 0x220),0);
      uVar13 = FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_98,
                             *(undefined4 *)(param_1 + 0x1d0),0);
      local_b0 = &DAT_18022cfd8;
      FUN_1801a4848(*(float *)(param_1 + 0x244) * fVar27,*(float *)(param_1 + 0x248) * fVar26,
                    *(float *)(param_1 + 0x244) * fVar25,*(float *)(param_1 + 0x248) * fVar24,fVar27
                    ,fVar26,fVar25,fVar24,*(undefined8 *)(param_1 + 0x130),
                    *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x2c),param_2,local_a8
                    ,param_2,param_3,local_a8,0,0,*(undefined8 *)(param_1 + 0x1b8),
                    *(undefined8 *)(param_1 + 0x208),lVar23,&DAT_18022cfd8,&DAT_18022cfd8,uVar13,
                    uVar12,local_c8,0,0,uVar2,0,0x17,1);
      if ((((&DAT_18022dd48)[*(uint *)(param_1 + 0x2c)] != '\0') &&
          (uVar15 = FUN_1801acfa8(param_1), *(char *)(extraout_x10 + (uVar15 & 0xffffffff)) != '\0')
          ) && (*(char *)(*(longlong *)(param_1 + 0x50) +
                          (ulonglong)*(uint *)(param_1 + 0x20) * 0x20 + 0x6e9) != '\0')) {
        lVar23 = *(longlong *)(param_1 + 0x7c);
        iVar11 = param_2 + (*(int *)(param_1 + 0x34) + param_3) * *(int *)(param_1 + 0x3c);
        if (lVar23 == 0) {
          lVar23 = *(longlong *)(param_1 + 0x74);
        }
        uVar2 = *(undefined4 *)(param_1 + 0xa8);
        local_c8 = FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1940),auStack_88,
                                 *(undefined4 *)(param_1 + 0x94),local_a8);
        uVar12 = FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_90,
                               *(undefined4 *)(param_1 + 0x220),1);
        uVar13 = FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_98,
                               *(undefined4 *)(param_1 + 0x1d0),1);
        FUN_1801a4848(*(float *)(param_1 + 0x244) * fVar27,*(float *)(param_1 + 0x248) * fVar26,
                      *(float *)(param_1 + 0x244) * fVar25,*(float *)(param_1 + 0x248) * fVar24,
                      fVar27,fVar26,fVar25,fVar24,*(undefined8 *)(param_1 + 0x130),
                      *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x2c),param_2,iVar11
                      ,param_2,param_3,iVar11,0,0,*(undefined8 *)(param_1 + 0x1b8),
                      *(undefined8 *)(param_1 + 0x208),lVar23,local_b0,local_b0,uVar13,uVar12,
                      local_c8,0,0,uVar2,0,0x27,1);
      }
      lVar1 = param_1 + (ulonglong)(uVar9 >> 6) * 8;
      lVar23 = lVar1 + 0x250;
      uVar15 = (ulonglong)(uVar9 >> 3) & 7;
      *(byte *)(lVar23 + uVar15) = *(byte *)(lVar23 + uVar15) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
      lVar1 = lVar1 + 0x280;
      uVar15 = (ulonglong)(uVar9 >> 3) & 7;
      *(byte *)(lVar1 + uVar15) = *(byte *)(lVar1 + uVar15) | (byte)(1 << (uVar16 & 7));
    }
    else {
      cVar6 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 8) + 0x84);
      uVar18 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
      uVar15 = (ulonglong)uVar18;
      local_a0 = CONCAT44(local_a0._4_4_,uVar18);
      local_b8 = (ulonglong)(uVar18 >> 6);
      bVar10 = (*(byte *)(param_1 + (local_b8 + 0x4c) * 8 + ((ulonglong)(uVar18 >> 3) & 7)) >>
                (uVar15 & 7) & 1) != 0;
      local_c8 = uVar15;
      if (*(int *)(param_1 + 0x2c) == 0) {
        FUN_1801a4380(*(longlong *)(param_1 + 0x130),1,*(undefined8 *)(param_1 + 0x10));
        bVar10 = (*(byte *)(param_1 + (local_b8 + 0x4e) * 8 + ((ulonglong)(uVar18 >> 3) & 7)) >>
                  (uVar15 & 7) & 1) == 0 && bVar10;
      }
      if (*(char *)(param_1 + 0x24c) == '\0') {
        uVar18 = *(uint *)(&DAT_18022dca0 + (ulonglong)*(uint *)(param_1 + 0x2c) * 4);
      }
      else {
        uVar18 = 1;
      }
      uVar3 = 0xffe00040;
      lVar23 = *(longlong *)(param_1 + 0x7c);
      cVar7 = (&DAT_18022da48)[*(uint *)(param_1 + 0x2c)];
      if (cVar6 == '\0') {
        uVar3 = 0xffe00000;
      }
      uVar19 = 0x18;
      if (cVar6 == '\0') {
        uVar19 = 0;
      }
      uVar5 = *(uint *)(&DAT_18022da80 + (ulonglong)*(uint *)(param_1 + 0x2c) * 4);
      if (lVar23 == 0) {
        lVar23 = *(longlong *)(param_1 + 0x74);
      }
      if (bVar10 == 0) {
        local_80 = &local_b0;
        local_b0 = (undefined *)0x0;
      }
      else {
        local_80 = (undefined **)
                   FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_98,
                                 *(undefined4 *)(param_1 + 0x220),0);
      }
      uVar2 = *(undefined4 *)(param_1 + 0xa8);
      uVar12 = FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_90,
                             *(undefined4 *)(param_1 + 0x1d0),0);
      uVar13 = FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1938),auStack_88,
                             *(undefined4 *)(param_1 + 0x90),local_a0 & 0xffffffff);
      FUN_1801a4848(*(float *)(param_1 + 0x244) * fVar27,*(float *)(param_1 + 0x248) * fVar26,
                    *(float *)(param_1 + 0x244) * fVar25,*(float *)(param_1 + 0x248) * fVar24,fVar27
                    ,fVar26,fVar25,fVar24,*(undefined8 *)(param_1 + 0x130),
                    *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x2c),param_2,
                    local_a0 & 0xffffffff,param_2,param_3,local_a0 & 0xffffffff,lVar23,0,
                    *(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(param_1 + 0x208),0,uVar13,
                    &DAT_18022cfd8,uVar12,local_80,&DAT_18022cfd8,uVar2,0,0,cVar6,
                    uVar5 & 0xf |
                    (uVar19 | (uVar3 | (uint)(cVar7 == '\0') << 4 | (uint)bVar10) << 6 | uVar18 & 7)
                    << 4,1);
      lVar23 = param_1 + local_b8 * 8;
      uVar15 = local_c8 >> 3 & 7;
      *(byte *)(lVar23 + 0x270 + uVar15) =
           *(byte *)(lVar23 + 0x270 + uVar15) & ((byte)(1 << (local_c8 & 7)) ^ 0xff);
      uVar15 = local_c8 >> 3 & 7;
      *(byte *)(lVar23 + 0x250 + uVar15) =
           *(byte *)(lVar23 + 0x250 + uVar15) & ((byte)(1 << (local_c8 & 7)) ^ 0xff);
      uVar15 = local_c8 >> 3 & 7;
      *(byte *)(lVar23 + 0x110 + uVar15) =
           *(byte *)(lVar23 + 0x110 + uVar15) | (byte)(1 << (local_c8 & 7));
      uVar15 = local_c8 >> 3 & 7;
      *(byte *)(lVar23 + 0x260 + uVar15) =
           *(byte *)(lVar23 + 0x260 + uVar15) & ((byte)(1 << (local_c8 & 7)) ^ 0xff);
      thunk_FUN_180223bf8(*(longlong *)(param_1 + 0x1c8) + local_c8 * 0x20 + 0x10);
    }
    thunk_FUN_180223bf8(*(longlong *)(param_1 + 0x1c8) + uVar16 * 0x20 + 0x10);
  }
  if (*(int *)(param_1 + 0x44) - 3U < 3) {
    if (*(longlong *)(param_1 + 0x7c) != 0) {
      if (local_c0 == 2) {
        if (*(longlong *)(param_1 + 0x208) == 0) {
          return uVar21;
        }
        bVar8 = *(byte *)(param_1 + ((ulonglong)(uVar9 >> 6) + 0x50) * 8 +
                         ((ulonglong)(uVar9 >> 3) & 7)) >> (uVar16 & 7);
      }
      else {
        if (local_c0 != 1) {
          return uVar21;
        }
        if (*(longlong *)(param_1 + 0x154) == 0) {
          return uVar21;
        }
        bVar8 = *(byte *)(param_1 + ((ulonglong)(uVar9 >> 6) + 0x4a) * 8 +
                         ((ulonglong)(uVar9 >> 3) & 7)) >> (uVar16 & 7);
      }
      if ((bVar8 & 1) == 0) {
        FUN_1801ad708(param_1,param_2,param_3);
      }
    }
  }
  else if (((local_c0 == 1) && (*(longlong *)(param_1 + 0x7c) != 0)) &&
          (lVar23 = param_1 + ((ulonglong)(uVar9 >> 6) + 0x4a) * 8,
          (*(byte *)(lVar23 + ((ulonglong)(uVar9 >> 3) & 7)) >> (uVar16 & 7) & 1) == 0)) {
    if (*(char *)(param_1 + 0x24c) == '\0') {
      FUN_1801bad48(auStack_78,*(undefined4 *)(param_1 + 0x2c));
    }
    FUN_1801a49f8(*(undefined8 *)(param_1 + 0x130),param_1 + 0x60,param_1 + 0x60);
    uVar15 = (ulonglong)(uVar9 >> 3) & 7;
    *(byte *)(lVar23 + uVar15) = *(byte *)(lVar23 + uVar15) | (byte)(1 << (uVar16 & 7));
  }
  return uVar21;
}

