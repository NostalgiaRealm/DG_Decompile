/*
 * FUN_180096cd8 at 180096cd8
 * undefined FUN_180096cd8(void)
 * Address ranges: 180096cd8-18009774b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180096cd8(longlong param_1,uint param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  ulonglong *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined *puVar21;
  undefined8 uVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulonglong local_d8;
  int local_d0;
  uint local_c8;
  undefined *local_c0;
  ulonglong local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  
  uVar10 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
  uVar20 = (ulonglong)uVar10;
  local_d0 = param_4;
  if ((*(longlong *)(param_1 + 0x1c8) == 0) ||
     (iVar12 = (*__imp_USER32_dll_IsRectEmpty)
                         (*(longlong *)(param_1 + 0x1c8) + uVar20 * 0x20 + 0x10), iVar12 != 0)) {
    uVar22 = 0;
    if ((*(int *)(param_1 + 0x2c) == 0) &&
       (((*(byte *)(param_1 + ((ulonglong)(uVar10 >> 6) + 0x4e) * 8 + ((ulonglong)(uVar10 >> 3) & 7)
                   ) >> (uVar20 & 7) & 1) != 0 && (*(longlong *)(param_1 + 0x1c8) != 0)))) {
      uVar18 = *(uint *)(param_1 + 0x24) >> (ulonglong)(param_2 & 0x1f);
      uVar3 = *(uint *)(param_1 + 0x28) >> (ulonglong)(param_2 & 0x1f);
      if (uVar18 == 0) {
        uVar18 = 1;
      }
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      cVar7 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 8) + 0x84);
      uVar5 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
      uVar16 = (ulonglong)uVar5;
      puVar21 = (undefined *)(ulonglong)(uVar5 >> 6);
      bVar9 = *(byte *)(param_1 + (longlong)(puVar21 + 0x4c) * 8 + ((ulonglong)(uVar5 >> 3) & 7));
      local_c8 = uVar5;
      local_b8 = uVar16;
      local_b0 = puVar21;
      FUN_18008db78(*(longlong *)(param_1 + 0x130),1,*(undefined8 *)(param_1 + 0x10));
      uVar17 = *(uint *)(param_1 + 0x2c);
      uVar5 = (uint)((*(byte *)(param_1 + (longlong)(puVar21 + 0x4e) * 8 +
                               ((ulonglong)(uVar5 >> 3) & 7)) >> (uVar16 & 7) & 1) == 0 &&
                    (bVar9 >> (uVar16 & 7) & 1) != 0);
      if (*(char *)(param_1 + 0x24c) == '\0') {
        uVar19 = *(uint *)(&DAT_180231770 + (ulonglong)uVar17 * 4);
      }
      else {
        uVar19 = 1;
      }
      uVar6 = *(uint *)(&DAT_180231550 + (ulonglong)uVar17 * 4);
      local_c0 = &DAT_180231350;
      lVar23 = *(longlong *)(param_1 + 0x7c);
      uVar4 = 0xffe00040;
      cVar8 = (&DAT_180231518)[uVar17];
      if (cVar7 == '\0') {
        uVar4 = 0xffe00000;
      }
      uVar17 = 0x18;
      if (cVar7 == '\0') {
        uVar17 = 0;
      }
      if (lVar23 == 0) {
        lVar23 = *(longlong *)(param_1 + 0x74);
      }
      if (uVar5 == 0) {
        local_d8 = 0;
        puVar13 = &local_d8;
      }
      else {
        puVar13 = (ulonglong *)
                  FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_90,
                                *(undefined4 *)(param_1 + 0x220),0);
      }
      uVar2 = *(undefined4 *)(param_1 + 0xa8);
      local_a8 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_98,
                               *(undefined4 *)(param_1 + 0x1d0),0);
      uVar22 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1938),auStack_a0,
                             *(undefined4 *)(param_1 + 0x90),local_c8);
      FUN_18008e010(*(float *)(param_1 + 0x244) * 0.0,*(float *)(param_1 + 0x248) * 0.0,
                    *(float *)(param_1 + 0x244) * (float)(int)uVar18,
                    *(float *)(param_1 + 0x248) * (float)(int)uVar3,0,0,(float)(int)uVar18,
                    (float)(int)uVar3,*(undefined8 *)(param_1 + 0x130),
                    *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x2c),param_2,local_c8
                    ,param_2,param_3,local_c8,lVar23,0,*(undefined8 *)(param_1 + 0x1b8),
                    *(undefined8 *)(param_1 + 0x208),0,uVar22,local_c0,local_a8,puVar13,local_c0,
                    uVar2,0,0,cVar7,
                    uVar6 & 0xf |
                    (uVar17 | (uVar4 | (uint)(cVar8 == '\0') << 4 | uVar5) << 6 | uVar19 & 7) << 4,1
                   );
      lVar23 = param_1 + (longlong)local_b0 * 8;
      uVar16 = local_b8 >> 3 & 7;
      *(byte *)(lVar23 + 0x270 + uVar16) =
           *(byte *)(lVar23 + 0x270 + uVar16) & ((byte)(1 << (local_b8 & 7)) ^ 0xff);
      uVar16 = local_b8 >> 3 & 7;
      *(byte *)(lVar23 + 0x250 + uVar16) =
           *(byte *)(lVar23 + 0x250 + uVar16) & ((byte)(1 << (local_b8 & 7)) ^ 0xff);
      uVar16 = local_b8 >> 3 & 7;
      *(byte *)(lVar23 + 0x110 + uVar16) =
           *(byte *)(lVar23 + 0x110 + uVar16) | (byte)(1 << (local_b8 & 7));
      uVar16 = local_b8 >> 3 & 7;
      *(byte *)(lVar23 + 0x260 + uVar16) =
           *(byte *)(lVar23 + 0x260 + uVar16) & ((byte)(1 << (local_b8 & 7)) ^ 0xff);
      (*__imp_USER32_dll_SetRectEmpty)(*(longlong *)(param_1 + 0x1c8) + local_b8 * 0x20 + 0x10);
      uVar22 = 1;
    }
  }
  else {
    uVar22 = 1;
    lVar23 = *(longlong *)(param_1 + 0x1c8) + uVar20 * 0x20;
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
      local_d8 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1940),auStack_90,
                               *(undefined4 *)(param_1 + 0x94),uVar20);
      uVar14 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_98,
                             *(undefined4 *)(param_1 + 0x220),0);
      uVar15 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_a0,
                             *(undefined4 *)(param_1 + 0x1d0),0);
      FUN_18008e010(*(float *)(param_1 + 0x244) * fVar27,*(float *)(param_1 + 0x248) * fVar26,
                    *(float *)(param_1 + 0x244) * fVar25,*(float *)(param_1 + 0x248) * fVar24,fVar27
                    ,fVar26,fVar25,fVar24,*(undefined8 *)(param_1 + 0x130),
                    *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x2c),param_2,uVar20,
                    param_2,param_3,uVar20,0,0,*(undefined8 *)(param_1 + 0x1b8),
                    *(undefined8 *)(param_1 + 0x208),lVar23,&DAT_180231350,&DAT_180231350,uVar15,
                    uVar14,local_d8,0,0,uVar2,0,0x17,1);
      if ((((&DAT_180231818)[*(uint *)(param_1 + 0x2c)] != '\0') &&
          (uVar16 = FUN_180095d10(param_1), (&DAT_180231818)[uVar16 & 0xffffffff] != '\0')) &&
         (*(char *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x20 +
                   0x6e9) != '\0')) {
        lVar23 = *(longlong *)(param_1 + 0x7c);
        iVar12 = param_2 + (*(int *)(param_1 + 0x34) + param_3) * *(int *)(param_1 + 0x3c);
        if (lVar23 == 0) {
          lVar23 = *(longlong *)(param_1 + 0x74);
        }
        uVar2 = *(undefined4 *)(param_1 + 0xa8);
        local_d8 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1940),auStack_90,
                                 *(undefined4 *)(param_1 + 0x94),uVar20);
        local_c0 = (undefined *)
                   FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_98,
                                 *(undefined4 *)(param_1 + 0x220),1);
        uVar14 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_a0,
                               *(undefined4 *)(param_1 + 0x1d0),1);
        FUN_18008e010(*(float *)(param_1 + 0x244) * fVar27,*(float *)(param_1 + 0x248) * fVar26,
                      *(float *)(param_1 + 0x244) * fVar25,*(float *)(param_1 + 0x248) * fVar24,
                      fVar27,fVar26,fVar25,fVar24,*(undefined8 *)(param_1 + 0x130),
                      *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x2c),param_2,iVar12
                      ,param_2,param_3,iVar12,0,0,*(undefined8 *)(param_1 + 0x1b8),
                      *(undefined8 *)(param_1 + 0x208),lVar23,&DAT_180231350,&DAT_180231350,uVar14,
                      local_c0,local_d8,0,0,uVar2,0,0x27,1);
      }
      lVar1 = param_1 + (ulonglong)(uVar10 >> 6) * 8;
      lVar23 = lVar1 + 0x250;
      uVar16 = (ulonglong)(uVar10 >> 3) & 7;
      *(byte *)(lVar23 + uVar16) = *(byte *)(lVar23 + uVar16) & ((byte)(1 << (uVar20 & 7)) ^ 0xff);
      lVar1 = lVar1 + 0x280;
      uVar16 = (ulonglong)(uVar10 >> 3) & 7;
      *(byte *)(lVar1 + uVar16) = *(byte *)(lVar1 + uVar16) | (byte)(1 << (uVar20 & 7));
    }
    else {
      cVar7 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 8) + 0x84);
      uVar18 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
      uVar16 = (ulonglong)uVar18;
      puVar21 = (undefined *)(ulonglong)(uVar18 >> 6);
      bVar11 = (*(byte *)(param_1 + (longlong)(puVar21 + 0x4c) * 8 + ((ulonglong)(uVar18 >> 3) & 7))
                >> (uVar16 & 7) & 1) != 0;
      local_d8 = uVar16;
      local_c8 = uVar18;
      local_c0 = puVar21;
      if (*(int *)(param_1 + 0x2c) == 0) {
        FUN_18008db78(*(longlong *)(param_1 + 0x130),1,*(undefined8 *)(param_1 + 0x10));
        bVar11 = (*(byte *)(param_1 + (longlong)(puVar21 + 0x4e) * 8 +
                           ((ulonglong)(uVar18 >> 3) & 7)) >> (uVar16 & 7) & 1) == 0 && bVar11;
      }
      if (*(char *)(param_1 + 0x24c) == '\0') {
        uVar18 = *(uint *)(&DAT_180231770 + (ulonglong)*(uint *)(param_1 + 0x2c) * 4);
      }
      else {
        uVar18 = 1;
      }
      local_b0 = &DAT_180231350;
      lVar23 = *(longlong *)(param_1 + 0x7c);
      uVar3 = 0xffe00040;
      cVar8 = (&DAT_180231518)[*(uint *)(param_1 + 0x2c)];
      uVar5 = *(uint *)(&DAT_180231550 + (ulonglong)*(uint *)(param_1 + 0x2c) * 4);
      if (cVar7 == '\0') {
        uVar3 = 0xffe00000;
      }
      uVar17 = 0x18;
      if (cVar7 == '\0') {
        uVar17 = 0;
      }
      if (lVar23 == 0) {
        lVar23 = *(longlong *)(param_1 + 0x74);
      }
      if (bVar11 == 0) {
        local_b8 = 0;
        puVar13 = &local_b8;
      }
      else {
        puVar13 = (ulonglong *)
                  FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_a0,
                                *(undefined4 *)(param_1 + 0x220),0);
      }
      uVar2 = *(undefined4 *)(param_1 + 0xa8);
      local_a8 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_98,
                               *(undefined4 *)(param_1 + 0x1d0),0);
      uVar14 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1938),auStack_90,
                             *(undefined4 *)(param_1 + 0x90),local_c8);
      FUN_18008e010(*(float *)(param_1 + 0x244) * fVar27,*(float *)(param_1 + 0x248) * fVar26,
                    *(float *)(param_1 + 0x244) * fVar25,*(float *)(param_1 + 0x248) * fVar24,fVar27
                    ,fVar26,fVar25,fVar24,*(undefined8 *)(param_1 + 0x130),
                    *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x2c),param_2,local_c8
                    ,param_2,param_3,local_c8,lVar23,0,*(undefined8 *)(param_1 + 0x1b8),
                    *(undefined8 *)(param_1 + 0x208),0,uVar14,local_b0,local_a8,puVar13,local_b0,
                    uVar2,0,0,cVar7,
                    uVar5 & 0xf |
                    (uVar17 | (uVar3 | (uint)(cVar8 == '\0') << 4 | (uint)bVar11) << 6 | uVar18 & 7)
                    << 4,1);
      lVar23 = param_1 + (longlong)local_c0 * 8;
      uVar16 = local_d8 >> 3 & 7;
      *(byte *)(lVar23 + 0x270 + uVar16) =
           *(byte *)(lVar23 + 0x270 + uVar16) & ((byte)(1 << (local_d8 & 7)) ^ 0xff);
      uVar16 = local_d8 >> 3 & 7;
      *(byte *)(lVar23 + 0x250 + uVar16) =
           *(byte *)(lVar23 + 0x250 + uVar16) & ((byte)(1 << (local_d8 & 7)) ^ 0xff);
      uVar16 = local_d8 >> 3 & 7;
      *(byte *)(lVar23 + 0x110 + uVar16) =
           *(byte *)(lVar23 + 0x110 + uVar16) | (byte)(1 << (local_d8 & 7));
      uVar16 = local_d8 >> 3 & 7;
      *(byte *)(lVar23 + 0x260 + uVar16) =
           *(byte *)(lVar23 + 0x260 + uVar16) & ((byte)(1 << (local_d8 & 7)) ^ 0xff);
      (*__imp_USER32_dll_SetRectEmpty)(*(longlong *)(param_1 + 0x1c8) + local_d8 * 0x20 + 0x10);
    }
    (*__imp_USER32_dll_SetRectEmpty)(*(longlong *)(param_1 + 0x1c8) + uVar20 * 0x20 + 0x10);
  }
  if (*(int *)(param_1 + 0x44) - 3U < 3) {
    if (*(longlong *)(param_1 + 0x7c) != 0) {
      if (local_d0 == 2) {
        if (*(longlong *)(param_1 + 0x208) == 0) {
          return uVar22;
        }
        bVar9 = *(byte *)(param_1 + ((ulonglong)(uVar10 >> 6) + 0x50) * 8 +
                         ((ulonglong)(uVar10 >> 3) & 7)) >> (uVar20 & 7);
      }
      else {
        if (local_d0 != 1) {
          return uVar22;
        }
        if (*(longlong *)(param_1 + 0x154) == 0) {
          return uVar22;
        }
        bVar9 = *(byte *)(param_1 + ((ulonglong)(uVar10 >> 6) + 0x4a) * 8 +
                         ((ulonglong)(uVar10 >> 3) & 7)) >> (uVar20 & 7);
      }
      if ((bVar9 & 1) == 0) {
        FUN_180096440(param_1,param_2,param_3);
      }
    }
  }
  else if (((local_d0 == 1) && (*(longlong *)(param_1 + 0x7c) != 0)) &&
          (lVar23 = param_1 + ((ulonglong)(uVar10 >> 6) + 0x4a) * 8,
          (*(byte *)(lVar23 + ((ulonglong)(uVar10 >> 3) & 7)) >> (uVar20 & 7) & 1) == 0)) {
    if (*(char *)(param_1 + 0x24c) == '\0') {
      func_0x0001801bad48(auStack_88,*(undefined4 *)(param_1 + 0x2c));
    }
    FUN_18008e1b0(*(undefined8 *)(param_1 + 0x130),param_1 + 0x60,param_1 + 0x60);
    uVar16 = (ulonglong)(uVar10 >> 3) & 7;
    *(byte *)(lVar23 + uVar16) = *(byte *)(lVar23 + uVar16) | (byte)(1 << (uVar20 & 7));
  }
  return uVar22;
}

