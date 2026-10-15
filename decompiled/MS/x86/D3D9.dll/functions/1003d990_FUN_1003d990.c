/*
 * FUN_1003d990 at 1003d990
 * bool __thiscall FUN_1003d990(int param_1, uint param_2, undefined4 param_3, undefined3 param_4)
 * Address ranges: 1003d990-1003e1c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1003d990(int param_1,uint param_2,undefined4 param_3,undefined3 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  byte *pbVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  byte bVar20;
  int extraout_ECX;
  undefined4 *puVar17;
  int extraout_ECX_00;
  undefined4 *puVar18;
  int iVar19;
  uint uVar21;
  uint *this;
  uint uVar22;
  uint uVar23;
  undefined8 uVar24;
  longlong lVar25;
  undefined1 uStack0000000f;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined4 local_30;
  int iStack_2c;
  undefined8 local_28;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  undefined4 *local_10;
  bool bVar26;
  
  bVar26 = true;
  if ((*(char *)(param_1 + 0xf668) == '\0') && ((char)param_4 == '\0')) {
    return true;
  }
  param_1 = param_1;
  if (*(char *)(param_1 + 0x7642) == '\0') {
    local_1c = param_1;
    if (*(int *)(param_1 + 0xf750) != 0) {
      iVar12 = *(int *)(*(int *)(param_1 + 0xf750) + 4);
      cVar2 = *(char *)(iVar12 + 0x126d);
      _param_4 = CONCAT13(cVar2,param_4);
      if ((*(int *)(param_1 + 0x7630) == 0) || (*(int *)(param_1 + 0xfd3c) != 0)) {
        bVar26 = false;
      }
      else {
        bVar26 = true;
      }
      uVar15 = *(uint *)(param_1 + 0xfc4);
      if ((*(uint *)(param_1 + 0x7574) & *(uint *)(iVar12 + 0x1214)) == 0) {
        local_28 = 0;
        local_28._4_4_ = (uint *)0x0;
        uVar22 = (uint)local_28._4_4_;
      }
      else {
        uVar22 = uVar15 & 0x40000000;
      }
      if (*(char *)(param_1 + 0x763e) == '\0') {
        uVar9 = 0x700000;
      }
      else {
        uVar9 = uVar15 & 0x700000;
      }
      if (bVar26) {
        uVar13 = uVar15 & 0x1000000;
      }
      else {
        local_28 = 0;
        local_28._4_4_ = (uint *)0x0;
        uVar13 = (uint)local_28._4_4_;
      }
      if (cVar2 == '\x03') {
        local_28 = 0;
        local_28._4_4_ = (uint *)0x0;
        uVar14 = (uint)local_28._4_4_;
      }
      else {
        uVar14 = uVar15 & 0x2000000;
      }
      if (*(char *)(param_1 + 0x764e) == '\0') {
        local_28 = 0;
        local_28._4_4_ = (uint *)0x0;
        uVar10 = (uint)local_28._4_4_;
      }
      else {
        uVar10 = uVar15 & 0x10000000;
      }
      uVar23 = uVar15 & 0x8c8fffff;
      if (uVar14 == 0) {
        uVar23 = uVar15 & 0x808fffff;
      }
      piVar11 = FUN_1004c576((void *)(*(int *)(param_1 + 0xf750) + 8),(int *)&uStack_54,
                             *(uint *)(param_1 + 0xfc0),
                             uVar23 | uVar22 | uVar9 | uVar13 | uVar14 | uVar10,
                             *(uint *)(param_1 + 0xe80),*(uint *)(param_1 + 0xe84));
      local_10 = (undefined4 *)piVar11[1];
      local_18 = piVar11[8];
      iVar12 = *piVar11;
      bVar26 = iVar12 != 0;
      uVar15 = piVar11[3];
      uVar22 = piVar11[5];
      uVar24 = *(undefined8 *)(piVar11 + 6);
      local_14 = piVar11[2];
      _param_4 = piVar11[9];
      uVar9 = piVar11[4];
      iStack_2c = piVar11[10];
      goto LAB_1003e0f8;
    }
    if (*(int *)(param_1 + 0x7630) == 0) {
LAB_1003db71:
      bVar8 = false;
    }
    else {
      iVar12 = 0xfd64;
      if (*(int *)(param_1 + 0xf81c) == 0) {
        iVar12 = 0xfd3c;
      }
      if (*(int *)(iVar12 + param_1) != 0) goto LAB_1003db71;
      bVar8 = true;
    }
    uVar15 = *(uint *)(param_1 + 0xfc4);
    local_18 = *(uint *)(param_1 + 0xfc0);
    if ((*(uint *)(param_1 + 0x7574) & (1 << ((byte)param_2 & 0x1f)) - 1U) == 0) {
      local_28 = 0;
      local_28._4_4_ = (uint *)0x0;
      uVar22 = (uint)local_28._4_4_;
    }
    else {
      uVar22 = uVar15 & 0x40000000;
    }
    if (*(char *)(param_1 + 0x763e) == '\0') {
      uVar9 = 0x700000;
    }
    else {
      uVar9 = uVar15 & 0x700000;
    }
    if (bVar8) {
      uVar13 = uVar15 & 0x1000000;
    }
    else {
      local_28 = 0;
      local_28._4_4_ = (uint *)0x0;
      uVar13 = (uint)local_28._4_4_;
    }
    if (*(char *)(param_1 + 0x764e) == '\0') {
      local_28 = 0;
      local_28._4_4_ = (uint *)0x0;
      uVar14 = (uint)local_28._4_4_;
    }
    else {
      uVar14 = uVar15 & 0x10000000;
    }
    uVar10 = uVar15 & 0x8e8fffff;
    if ((uVar15 & 0x2000000) == 0) {
      uVar10 = uVar15 & 0x828fffff;
    }
    if ((*(int *)(param_1 + 0xf80c) == *(int *)(*(int *)(param_1 + 0xf6c4) + 0x60)) ||
       (*(int *)(param_1 + 0xf80c) == *(int *)(*(int *)(param_1 + 0xf6c4) + 0x80))) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    _param_4 = CONCAT13(*(undefined1 *)(param_1 + 0x83),param_4);
    iVar12 = 0;
    if (bVar8) {
      uVar24 = CONCAT44(uStack_38,uStack_3c);
      local_18 = uStack_34;
      local_14 = uStack_4c;
      local_10 = (undefined4 *)local_50;
      uVar9 = _param_4;
      uVar22 = _param_4;
      uVar15 = _param_4;
LAB_1003dfd2:
      param_1 = local_1c;
      if (iVar12 != 0) goto LAB_1003e0f8;
    }
    else {
      FUN_1003757c((void *)(param_1 + 0xef8),param_2,&local_60);
      local_28 = CONCAT44((void *)(param_1 + 0xf6f8),(undefined4)local_28);
      uVar15 = FUN_10037972((void *)(param_1 + 0xf6f8),(int)&local_60);
      if ((uVar15 == *(uint *)(param_1 + 0xf700)) ||
         (uVar15 = FUN_1003747e((void *)(*(int *)(param_1 + 0xf6fc) + uVar15 * 0x40),&local_60),
         (char)uVar15 == '\0')) {
        puVar17 = (undefined4 *)0x0;
      }
      else {
        puVar17 = (undefined4 *)(extraout_ECX + 0x38);
      }
      if (puVar17 != (undefined4 *)0x0) {
        puVar17 = (undefined4 *)*puVar17;
LAB_1003dcca:
        piVar11 = FUN_1004c576(puVar17,(int *)&uStack_54,local_18,
                               uVar10 | uVar22 | uVar9 | uVar13 | uVar14,0,0);
        local_10 = (undefined4 *)piVar11[1];
        local_18 = piVar11[8];
        iVar12 = *piVar11;
        uVar24 = *(undefined8 *)(piVar11 + 6);
        local_14 = piVar11[2];
        _param_4 = piVar11[9];
        iStack_2c = piVar11[10];
        uVar9 = piVar11[4];
        uVar22 = piVar11[5];
        uVar15 = piVar11[3];
        goto LAB_1003dfd2;
      }
      local_10 = (undefined4 *)FUN_100cfd55(0x80);
      if (local_10 != (undefined4 *)0x0) {
        iVar12 = *(int *)(param_1 + 0xf6f0);
        iVar19 = *(int *)(param_1 + 0xf6ec);
        local_10[2] = 0;
        local_10[3] = 0;
        *local_10 = &PTR_D3DPERF_GetStatus_100d59dc;
        local_10[4] = 0;
        local_10[5] = 0;
        local_10[6] = 0;
        local_10[7] = 0;
        local_14 = 0;
        local_20 = 0xffff0000;
        local_10[8] = iVar12 * 0x16c0 + 0x1d00 + iVar19;
        local_10[9] = iVar19;
        local_10[10] = iVar12;
        local_10[0xc] = 0;
        *(undefined1 *)(local_10 + 0xe) = 0;
        local_10[0xd] = *(undefined4 *)(iVar19 + 0x38 + iVar12 * 0x28);
        uVar5 = *(undefined4 *)(param_1 + 0xefc);
        uVar6 = *(undefined4 *)(param_1 + 0xf00);
        uVar7 = *(undefined4 *)(param_1 + 0xf04);
        local_10[0x10] = *(undefined4 *)(param_1 + 0xef8);
        local_10[0x11] = uVar5;
        local_10[0x12] = uVar6;
        local_10[0x13] = uVar7;
        uVar5 = *(undefined4 *)(param_1 + 0xf0c);
        uVar6 = *(undefined4 *)(param_1 + 0xf10);
        uVar7 = *(undefined4 *)(param_1 + 0xf14);
        local_10[0x14] = *(undefined4 *)(param_1 + 0xf08);
        local_10[0x15] = uVar5;
        local_10[0x16] = uVar6;
        local_10[0x17] = uVar7;
        uVar5 = *(undefined4 *)(param_1 + 0xf1c);
        uVar6 = *(undefined4 *)(param_1 + 0xf20);
        uVar7 = *(undefined4 *)(param_1 + 0xf24);
        local_10[0x18] = *(undefined4 *)(param_1 + 0xf18);
        local_10[0x19] = uVar5;
        local_10[0x1a] = uVar6;
        local_10[0x1b] = uVar7;
        uVar5 = *(undefined4 *)(param_1 + 0xf2c);
        local_10[0x1c] = *(undefined4 *)(param_1 + 0xf28);
        local_10[0x1d] = uVar5;
        *(undefined1 *)(local_10 + 0x1e) = uStack0000000f;
        *local_10 = &PTR_FUN_100d59e4;
        _param_4 = FUN_10058008((int)(local_10 + 0x10));
        _param_4 = _param_4 & 0xffff;
        uVar15 = 0;
        if (_param_4 != 0) {
          for (; (_param_4 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
          }
        }
        this = (uint *)(param_1 + 0xf6f8);
        if (_param_4 != 0) {
          uVar21 = 0xffff0000;
          pbVar3 = (byte *)((int)&param_4 + ((int)uVar15 >> 3));
          *pbVar3 = *pbVar3 & ~('\x01' << (uVar15 & 7));
          uVar23 = 0;
          while( true ) {
            lVar25 = __allshl((char)uVar15 * '\x03',0);
            uVar15 = (uint)((ulonglong)lVar25 >> 0x20) | uVar21;
            uVar23 = (uint)lVar25 | uVar23;
            uVar21 = (uVar21 ^ uVar15) & 0xffff0000 ^ uVar15;
            uVar15 = 0;
            if (_param_4 != 0) {
              for (; (_param_4 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
              }
            }
            if (_param_4 == 0) break;
            pbVar3 = (byte *)((int)&param_4 + ((int)uVar15 >> 3));
            *pbVar3 = *pbVar3 & ~('\x01' << (uVar15 & 7));
          }
          this = local_28._4_4_;
          param_1 = local_1c;
          local_20 = uVar21;
          local_14 = uVar23;
        }
        local_10[2] = local_14;
        local_10[3] = local_20;
        local_14 = FUN_10037972(this,(int)&local_60);
        uVar15 = this[2];
        local_28 = CONCAT44(local_14 * 0x40,(undefined4)local_28);
        if (local_14 != uVar15) {
          uVar15 = FUN_1003747e((void *)(this[1] + local_14 * 0x40),&local_60);
          if ((char)uVar15 != '\0') {
            *(undefined4 **)(extraout_ECX_00 + 0x38) = local_10;
            puVar17 = local_10;
            goto LAB_1003dcca;
          }
          uVar15 = this[2];
        }
        uVar23 = this[3];
        if (uVar23 == uVar15) {
          if (uVar23 == 0) {
            local_20 = 0x10;
          }
          else {
            local_20 = uVar23 * 2;
          }
          _param_4 = FUN_100cfd89(local_20 << 6);
          if (_param_4 != 0) {
            uVar15 = 0;
            if (this[2] != 0) {
              do {
                iVar12 = uVar15 * 0x40;
                uVar15 = uVar15 + 1;
                puVar18 = (undefined4 *)(*(int *)(param_1 + 0xf6fc) + iVar12);
                uVar5 = puVar18[1];
                uVar6 = puVar18[2];
                uVar7 = puVar18[3];
                puVar17 = (undefined4 *)(iVar12 + _param_4);
                *puVar17 = *puVar18;
                puVar17[1] = uVar5;
                puVar17[2] = uVar6;
                puVar17[3] = uVar7;
                uVar5 = puVar18[5];
                uVar6 = puVar18[6];
                uVar7 = puVar18[7];
                puVar17 = (undefined4 *)(iVar12 + 0x10 + _param_4);
                *puVar17 = puVar18[4];
                puVar17[1] = uVar5;
                puVar17[2] = uVar6;
                puVar17[3] = uVar7;
                uVar5 = puVar18[9];
                uVar6 = puVar18[10];
                uVar7 = puVar18[0xb];
                puVar17 = (undefined4 *)(iVar12 + 0x20 + _param_4);
                *puVar17 = puVar18[8];
                puVar17[1] = uVar5;
                puVar17[2] = uVar6;
                puVar17[3] = uVar7;
                uVar5 = puVar18[0xd];
                uVar6 = puVar18[0xe];
                uVar7 = puVar18[0xf];
                puVar17 = (undefined4 *)(iVar12 + 0x30 + _param_4);
                *puVar17 = puVar18[0xc];
                puVar17[1] = uVar5;
                puVar17[2] = uVar6;
                puVar17[3] = uVar7;
              } while (uVar15 < *(uint *)(param_1 + 0xf700));
              this = (uint *)(param_1 + 0xf6f8);
            }
            thunk_FUN_100cfd6c((LPVOID)*this);
            *this = _param_4;
            this[1] = _param_4;
            this[3] = local_20;
          }
        }
        uVar15 = this[2];
        puVar17 = local_10;
        if (this[3] != uVar15) {
          if (local_14 < uVar15) {
            do {
              iVar12 = *(int *)(param_1 + 0xf6fc);
              iVar19 = uVar15 * 0x40;
              uVar15 = uVar15 - 1;
              puVar1 = (undefined4 *)(iVar12 + -0x40 + iVar19);
              uVar5 = puVar1[1];
              uVar6 = puVar1[2];
              uVar7 = puVar1[3];
              puVar18 = (undefined4 *)(iVar12 + iVar19);
              *puVar18 = *puVar1;
              puVar18[1] = uVar5;
              puVar18[2] = uVar6;
              puVar18[3] = uVar7;
              puVar18 = (undefined4 *)(iVar12 + -0x30 + iVar19);
              uVar5 = puVar18[1];
              uVar6 = puVar18[2];
              uVar7 = puVar18[3];
              puVar1 = (undefined4 *)(iVar12 + 0x10 + iVar19);
              *puVar1 = *puVar18;
              puVar1[1] = uVar5;
              puVar1[2] = uVar6;
              puVar1[3] = uVar7;
              puVar18 = (undefined4 *)(iVar12 + -0x20 + iVar19);
              uVar5 = puVar18[1];
              uVar6 = puVar18[2];
              uVar7 = puVar18[3];
              puVar1 = (undefined4 *)(iVar12 + 0x20 + iVar19);
              *puVar1 = *puVar18;
              puVar1[1] = uVar5;
              puVar1[2] = uVar6;
              puVar1[3] = uVar7;
              puVar18 = (undefined4 *)(iVar12 + -0x10 + iVar19);
              uVar5 = puVar18[1];
              uVar6 = puVar18[2];
              uVar7 = puVar18[3];
              puVar1 = (undefined4 *)(iVar12 + 0x30 + iVar19);
              *puVar1 = *puVar18;
              puVar1[1] = uVar5;
              puVar1[2] = uVar6;
              puVar1[3] = uVar7;
            } while (local_14 < uVar15);
            this = (uint *)(param_1 + 0xf6f8);
          }
          this[2] = this[2] + 1;
          puVar16 = (uint *)(this[1] + (int)local_28._4_4_);
          *puVar16 = local_60;
          puVar16[1] = uStack_5c;
          puVar16[2] = uStack_58;
          puVar16[3] = uStack_54;
          puVar16[4] = local_50;
          puVar16[5] = uStack_4c;
          puVar16[6] = uStack_48;
          puVar16[7] = uStack_44;
          puVar16[8] = local_40;
          puVar16[9] = uStack_3c;
          puVar16[10] = uStack_38;
          puVar16[0xb] = uStack_34;
          *(ulonglong *)(puVar16 + 0xc) = CONCAT44(iStack_2c,local_30);
          *(undefined4 **)(this[1] + 0x38 + (int)local_28._4_4_) = local_10;
        }
        goto LAB_1003dcca;
      }
    }
    if (*(char *)(param_1 + 0x7642) == '\0') {
      iVar12 = *(int *)(param_1 + 0xf6c4);
      uVar15 = 4;
      if (param_2 < 5) {
        uVar15 = param_2;
      }
      if ((*(int *)(param_1 + 0xf80c) == *(int *)(iVar12 + 0x60)) ||
         (*(int *)(param_1 + 0xf80c) == *(int *)(iVar12 + 0x80))) {
        bVar8 = true;
      }
      else {
        bVar8 = false;
      }
      if (*(char *)(param_1 + 0x7640) == '\0') {
        iVar19 = 0;
        if (bVar8) {
          iVar19 = 10;
        }
      }
      else {
        iVar19 = 5;
      }
      iVar19 = *(int *)(&DAT_100d52d0 + uVar15 * 4) + iVar19;
      iVar12 = *(int *)(iVar12 + 4 + iVar19 * 4);
      local_10 = *(undefined4 **)(&DAT_100d1ff0 + iVar19 * 0x28);
      local_18 = *(uint *)(&DAT_100d200c + iVar19 * 0x28);
      uVar15 = *(uint *)(&DAT_100d1ff8 + iVar19 * 0x28);
      uVar22 = *(uint *)(&DAT_100d2000 + iVar19 * 0x28);
      uVar24 = *(undefined8 *)(&DAT_100d2004 + iVar19 * 0x28);
      local_14 = *(uint *)(&DAT_100d1ff4 + iVar19 * 0x28);
      _param_4 = *(uint *)(&DAT_100d2010 + iVar19 * 0x28);
      uVar9 = *(uint *)(&DAT_100d1ffc + iVar19 * 0x28);
      iStack_2c = *(int *)(&DAT_100d2014 + iVar19 * 0x28);
      goto LAB_1003e0f8;
    }
  }
  local_1c = param_1;
  if (((*(int *)(local_1c + 0xfa84) == 0) && (*(int *)(local_1c + 0xfa88) == 0)) &&
     (*(int *)(local_1c + 0xfa8c) == 0)) {
    iVar12 = *(int *)(*(int *)(local_1c + 0xf6c4) + 0x40);
  }
  else {
    iVar12 = *(int *)(*(int *)(local_1c + 0xf6c4) + 0x48);
  }
  uVar24 = 0;
  uVar9 = 0;
  local_18 = 0;
  uVar15 = 0;
  _param_4 = 0;
  uVar22 = 0;
  local_10 = (undefined4 *)0x1;
  iStack_2c = 0;
  local_14 = 0;
LAB_1003e0f8:
  *(undefined1 *)(local_1c + 0xf668) = 0;
  if (*(int *)(local_1c + 0xf810) != iVar12) {
    *(int *)(local_1c + 0xf810) = iVar12;
    *(byte *)(local_1c + 0xfd9c) =
         *(byte *)(local_1c + 0xfd9c) | *(uint *)(local_1c + 0xfd88) < _param_4;
    *(byte *)(local_1c + 0xfda0) =
         *(uint *)(local_1c + 0xfd78) < uVar22 | *(byte *)(local_1c + 0xfda0);
    if ((uVar15 == 0) || (*(int *)(local_1c + 0xfd70) != 0)) {
      bVar4 = 0;
    }
    else {
      bVar4 = 1;
    }
    if ((uVar9 == 0) || (*(int *)(local_1c + 0xfd74) != 0)) {
      bVar20 = 0;
    }
    else {
      bVar20 = 1;
    }
    *(undefined8 *)(local_1c + 0xfd7c) = uVar24;
    *(byte *)(local_1c + 0xfda2) = *(byte *)(local_1c + 0xfda2) | bVar4 | bVar20;
    *(undefined4 **)(local_1c + 0xfd68) = local_10;
    *(uint *)(local_1c + 0xfd6c) = local_14;
    *(uint *)(local_1c + 0xfd84) = local_18;
    *(uint *)(local_1c + 0xfd70) = uVar15;
    *(uint *)(local_1c + 0xfd74) = uVar9;
    *(uint *)(local_1c + 0xfd78) = uVar22;
    *(uint *)(local_1c + 0xfd88) = _param_4;
    *(int *)(local_1c + 0xfd8c) = iStack_2c;
    *(undefined1 *)(local_1c + 0xfd99) = 1;
  }
  return bVar26;
}

