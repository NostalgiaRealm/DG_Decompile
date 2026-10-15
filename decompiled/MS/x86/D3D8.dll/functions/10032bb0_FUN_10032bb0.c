/*
 * FUN_10032bb0 at 10032bb0
 * bool __thiscall FUN_10032bb0(int param_1, uint param_2, undefined4 param_3, undefined3 param_4)
 * Address ranges: 10032bb0-10033354
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10032bb0(int param_1,uint param_2,undefined4 param_3,undefined3 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  byte bVar20;
  int extraout_ECX;
  undefined4 *puVar18;
  undefined4 *puVar19;
  uint uVar21;
  uint uVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  longlong lVar27;
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
  int local_20;
  undefined4 *local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  bool bVar28;
  
  bVar28 = true;
  if ((*(char *)(param_1 + 0xd978) == '\0') && ((char)param_4 == '\0')) {
    return true;
  }
  local_10 = param_1;
  if (*(char *)(param_1 + 0x5955) == '\0') {
    if (*(int *)(param_1 + 0xda50) != 0) {
      if ((*(int *)(param_1 + 0x5944) == 0) || (*(int *)(param_1 + 0xddfc) != 0)) {
        bVar28 = false;
      }
      else {
        bVar28 = true;
      }
      uVar21 = *(uint *)(param_1 + 0x6a4);
      uVar15 = *(uint *)(param_1 + 0x6a0);
      _param_4 = (undefined1 *)CONCAT13(*(char *)(param_1 + 0x5961),param_4);
      if ((*(uint *)(param_1 + 0x5884) & *(uint *)(*(int *)(*(int *)(param_1 + 0xda50) + 4) + 0xcc))
          == 0) {
        local_28 = 0;
        local_28._4_4_ = 0;
        uVar22 = local_28._4_4_;
      }
      else {
        uVar22 = uVar21 & 0x20;
      }
      if (*(char *)(param_1 + 0x5951) == '\0') {
        uVar10 = 0x38000000;
      }
      else {
        uVar10 = uVar15 & 0x38000000;
      }
      if (bVar28) {
        uVar14 = uVar15 & 0x80000000;
      }
      else {
        local_28 = 0;
        local_28._0_4_ = 0;
        uVar14 = (uint)local_28;
      }
      if (*(char *)(param_1 + 0x5961) == '\0') {
        local_28 = 0;
        local_28._4_4_ = 0;
        uVar11 = local_28._4_4_;
      }
      else {
        uVar11 = uVar21 & 8;
      }
      uVar8 = uVar21 & 0xffffffc7;
      if ((uVar21 & 1) == 0) {
        uVar8 = uVar21 & 0xffffffc1;
      }
      piVar12 = FUN_1003faf2((void *)(*(int *)(param_1 + 0xda50) + 8),(int *)&uStack_54,
                             uVar15 & 0x43ffffff | uVar10 | uVar14,uVar8 | uVar22 | uVar11,
                             *(uint *)(param_1 + 0x568),*(uint *)(param_1 + 0x56c));
      local_14 = piVar12[1];
      iVar13 = *piVar12;
      bVar28 = iVar13 != 0;
      local_1c = (undefined4 *)piVar12[8];
      puVar25 = (undefined1 *)piVar12[3];
      puVar24 = (undefined1 *)piVar12[5];
      uVar2 = *(undefined8 *)(piVar12 + 6);
      local_18 = piVar12[2];
      puVar23 = (undefined1 *)piVar12[4];
      _param_4 = (undefined1 *)piVar12[9];
      iStack_2c = piVar12[10];
      goto LAB_10033288;
    }
    if (*(int *)(param_1 + 0x5944) == 0) {
LAB_10032d48:
      bVar9 = false;
    }
    else {
      iVar13 = 0xde24;
      if (*(int *)(param_1 + 0xda84) == 0) {
        iVar13 = 0xddfc;
      }
      if (*(int *)(iVar13 + param_1) != 0) goto LAB_10032d48;
      bVar9 = true;
    }
    uVar21 = *(uint *)(param_1 + 0x6a4);
    uVar15 = *(uint *)(param_1 + 0x6a0);
    if ((*(uint *)(param_1 + 0x5884) & (1 << ((byte)param_2 & 0x1f)) - 1U) == 0) {
      local_28 = 0;
      local_28._4_4_ = 0;
      uVar22 = local_28._4_4_;
    }
    else {
      uVar22 = uVar21 & 0x20;
    }
    if (*(char *)(param_1 + 0x5951) == '\0') {
      uVar10 = 0x38000000;
    }
    else {
      uVar10 = uVar15 & 0x38000000;
    }
    if (bVar9) {
      uVar14 = uVar15 & 0x80000000;
    }
    else {
      local_28._0_4_ = 0;
      uVar5 = (uint)local_28;
      local_28._0_4_ = 0;
      uVar14 = (uint)local_28;
      local_28._0_4_ = uVar5;
    }
    if (*(char *)(param_1 + 0x5961) == '\0') {
      local_28._0_4_ = 0;
      local_28._4_4_ = 0;
    }
    else {
      local_28._4_4_ = uVar21 & 8;
    }
    uVar11 = uVar21 & 0xffffffc7;
    if ((uVar21 & 1) == 0) {
      uVar11 = uVar21 & 0xffffffc1;
    }
    uVar21 = uVar11 | uVar22 | local_28._4_4_;
    local_14 = uVar15 & 0x44000000 | uVar10 | uVar14;
    local_14 = (local_14 ^ (uVar15 & 0x47ffffff | uVar10 | uVar14)) & 0xfbffffff ^ local_14;
    local_28 = CONCAT44(uVar21,(uint)local_28);
    if ((*(int *)(param_1 + 0xda74) == *(int *)(*(int *)(param_1 + 0xd9c4) + 0x60)) ||
       (*(int *)(param_1 + 0xda74) == *(int *)(*(int *)(param_1 + 0xd9c4) + 0x80))) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    _param_4 = (undefined1 *)CONCAT13(*(undefined1 *)(param_1 + 0x83),param_4);
    iVar13 = 0;
    if (bVar9) {
      uVar2 = CONCAT44(uStack_38,uStack_3c);
      local_1c = (undefined4 *)uStack_34;
      local_18 = uStack_4c;
      local_14 = local_50;
      puVar24 = _param_4;
      puVar25 = _param_4;
      puVar26 = _param_4;
    }
    else {
      FUN_1002de0b((void *)(param_1 + 0x5e0),param_2,&local_60);
      piVar12 = (int *)(param_1 + 0xd9f8);
      uVar15 = FUN_1002e1f9(piVar12,(int)&local_60);
      if ((uVar15 == *(uint *)(param_1 + 0xda00)) ||
         (uVar15 = FUN_1002dd0d((void *)(*(int *)(param_1 + 0xd9fc) + uVar15 * 0x40),&local_60),
         (char)uVar15 == '\0')) {
        puVar18 = (undefined4 *)0x0;
      }
      else {
        puVar18 = (undefined4 *)(extraout_ECX + 0x38);
      }
      if (puVar18 == (undefined4 *)0x0) {
        local_1c = (undefined4 *)FUN_100ad475(0x80);
        if (local_1c == (undefined4 *)0x0) goto LAB_100331c1;
        iVar13 = *(int *)(param_1 + 0xd9f0);
        iVar17 = *(int *)(param_1 + 0xd9ec);
        local_1c[2] = 0;
        local_1c[3] = 0;
        *local_1c = &PTR_LAB_100b2404;
        local_1c[4] = 0;
        local_1c[5] = 0;
        local_1c[6] = 0;
        local_1c[7] = 0;
        local_1c[10] = iVar13;
        local_1c[0xc] = 0;
        local_1c[8] = iVar13 * 0x16c0 + 0x1d00 + iVar17;
        local_1c[9] = iVar17;
        *(undefined1 *)(local_1c + 0xe) = 0;
        local_1c[0xd] = *(undefined4 *)(iVar17 + 0x38 + iVar13 * 0x28);
        uVar5 = *(undefined4 *)(param_1 + 0x5e4);
        uVar6 = *(undefined4 *)(param_1 + 0x5e8);
        uVar7 = *(undefined4 *)(param_1 + 0x5ec);
        local_18 = 0xff000000;
        local_1c[0x10] = *(undefined4 *)(param_1 + 0x5e0);
        local_1c[0x11] = uVar5;
        local_1c[0x12] = uVar6;
        local_1c[0x13] = uVar7;
        uVar5 = *(undefined4 *)(param_1 + 0x5f4);
        uVar6 = *(undefined4 *)(param_1 + 0x5f8);
        uVar7 = *(undefined4 *)(param_1 + 0x5fc);
        local_1c[0x14] = *(undefined4 *)(param_1 + 0x5f0);
        local_1c[0x15] = uVar5;
        local_1c[0x16] = uVar6;
        local_1c[0x17] = uVar7;
        uVar5 = *(undefined4 *)(param_1 + 0x604);
        uVar6 = *(undefined4 *)(param_1 + 0x608);
        uVar7 = *(undefined4 *)(param_1 + 0x60c);
        local_1c[0x18] = *(undefined4 *)(param_1 + 0x600);
        local_1c[0x19] = uVar5;
        local_1c[0x1a] = uVar6;
        local_1c[0x1b] = uVar7;
        uVar5 = *(undefined4 *)(param_1 + 0x614);
        local_1c[0x1c] = *(undefined4 *)(param_1 + 0x610);
        local_1c[0x1d] = uVar5;
        *(undefined1 *)(local_1c + 0x1e) = uStack0000000f;
        *local_1c = &PTR_FUN_100b240c;
        uVar21 = FUN_10049181((int)(local_1c + 0x10));
        _param_4 = (undefined1 *)(uVar21 & 0xff);
        uVar21 = 0;
        if (_param_4 != (undefined1 *)0x0) {
          for (; ((uint)_param_4 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
          }
        }
        if (_param_4 != (undefined1 *)0x0) {
          uVar15 = 0xff000000;
          pbVar3 = (byte *)((int)&param_4 + ((int)uVar21 >> 3));
          *pbVar3 = *pbVar3 & ~('\x01' << (uVar21 & 7));
          while( true ) {
            lVar27 = __allshl((char)uVar21 * '\x03',0);
            uVar21 = (uint)lVar27 | uVar15;
            uVar15 = (uVar15 ^ uVar21) & 0xff000000 ^ uVar21;
            uVar21 = 0;
            if (_param_4 != (undefined1 *)0x0) {
              for (; ((uint)_param_4 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
              }
            }
            if (_param_4 == (undefined1 *)0x0) break;
            pbVar3 = (byte *)((int)&param_4 + ((int)uVar21 >> 3));
            *pbVar3 = *pbVar3 & ~('\x01' << (uVar21 & 7));
          }
          _param_4 = (undefined1 *)0xffffffff;
          piVar12 = (int *)(local_10 + 0xd9f8);
          param_1 = local_10;
          local_18 = uVar15;
        }
        local_1c[2] = local_18;
        local_1c[3] = 0xffffffff;
        uVar15 = FUN_1002e1f9(piVar12,(int)&local_60);
        local_20 = uVar15 * 0x40;
        local_18 = uVar15;
        if (uVar15 != piVar12[2]) {
          _param_4 = (undefined1 *)(local_20 + piVar12[1]);
          uVar21 = FUN_1002dd0d(_param_4,&local_60);
          if ((char)uVar21 != '\0') {
            *(undefined4 **)(_param_4 + 0x38) = local_1c;
            puVar18 = local_1c;
            uVar21 = local_28._4_4_;
            goto LAB_10032eb4;
          }
        }
        iVar13 = piVar12[3];
        if (iVar13 == piVar12[2]) {
          if (iVar13 == 0) {
            _param_4 = &DAT_00000010;
          }
          else {
            _param_4 = (undefined1 *)(iVar13 * 2);
          }
          iVar13 = FUN_100ad4a9((int)_param_4 << 6);
          uVar15 = local_18;
          if (iVar13 != 0) {
            uVar21 = 0;
            if (piVar12[2] != 0) {
              do {
                iVar17 = uVar21 * 0x40;
                uVar21 = uVar21 + 1;
                puVar19 = (undefined4 *)(*(int *)(param_1 + 0xd9fc) + iVar17);
                uVar5 = puVar19[1];
                uVar6 = puVar19[2];
                uVar7 = puVar19[3];
                puVar18 = (undefined4 *)(iVar17 + iVar13);
                *puVar18 = *puVar19;
                puVar18[1] = uVar5;
                puVar18[2] = uVar6;
                puVar18[3] = uVar7;
                uVar5 = puVar19[5];
                uVar6 = puVar19[6];
                uVar7 = puVar19[7];
                puVar18 = (undefined4 *)(iVar17 + 0x10 + iVar13);
                *puVar18 = puVar19[4];
                puVar18[1] = uVar5;
                puVar18[2] = uVar6;
                puVar18[3] = uVar7;
                uVar5 = puVar19[9];
                uVar6 = puVar19[10];
                uVar7 = puVar19[0xb];
                puVar18 = (undefined4 *)(iVar17 + 0x20 + iVar13);
                *puVar18 = puVar19[8];
                puVar18[1] = uVar5;
                puVar18[2] = uVar6;
                puVar18[3] = uVar7;
                uVar5 = puVar19[0xd];
                uVar6 = puVar19[0xe];
                uVar7 = puVar19[0xf];
                puVar18 = (undefined4 *)(iVar17 + 0x30 + iVar13);
                *puVar18 = puVar19[0xc];
                puVar18[1] = uVar5;
                puVar18[2] = uVar6;
                puVar18[3] = uVar7;
              } while (uVar21 < *(uint *)(param_1 + 0xda00));
            }
            thunk_FUN_100ad48c((LPVOID)*piVar12);
            *piVar12 = iVar13;
            piVar12[1] = iVar13;
            piVar12[3] = (int)_param_4;
            uVar15 = local_18;
          }
        }
        uVar22 = piVar12[2];
        puVar18 = local_1c;
        uVar21 = local_28._4_4_;
        if (piVar12[3] != uVar22) {
          for (; uVar15 < uVar22; uVar22 = uVar22 - 1) {
            iVar13 = *(int *)(param_1 + 0xd9fc);
            iVar17 = uVar22 * 0x40;
            puVar1 = (undefined4 *)(iVar13 + -0x40 + iVar17);
            uVar5 = puVar1[1];
            uVar6 = puVar1[2];
            uVar7 = puVar1[3];
            puVar19 = (undefined4 *)(iVar13 + iVar17);
            *puVar19 = *puVar1;
            puVar19[1] = uVar5;
            puVar19[2] = uVar6;
            puVar19[3] = uVar7;
            puVar19 = (undefined4 *)(iVar13 + -0x30 + iVar17);
            uVar5 = puVar19[1];
            uVar6 = puVar19[2];
            uVar7 = puVar19[3];
            puVar1 = (undefined4 *)(iVar13 + 0x10 + iVar17);
            *puVar1 = *puVar19;
            puVar1[1] = uVar5;
            puVar1[2] = uVar6;
            puVar1[3] = uVar7;
            puVar19 = (undefined4 *)(iVar13 + -0x20 + iVar17);
            uVar5 = puVar19[1];
            uVar6 = puVar19[2];
            uVar7 = puVar19[3];
            puVar1 = (undefined4 *)(iVar13 + 0x20 + iVar17);
            *puVar1 = *puVar19;
            puVar1[1] = uVar5;
            puVar1[2] = uVar6;
            puVar1[3] = uVar7;
            puVar19 = (undefined4 *)(iVar13 + -0x10 + iVar17);
            uVar5 = puVar19[1];
            uVar6 = puVar19[2];
            uVar7 = puVar19[3];
            puVar1 = (undefined4 *)(iVar13 + 0x30 + iVar17);
            *puVar1 = *puVar19;
            puVar1[1] = uVar5;
            puVar1[2] = uVar6;
            puVar1[3] = uVar7;
          }
          piVar12[2] = piVar12[2] + 1;
          puVar16 = (uint *)(piVar12[1] + local_20);
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
          *(undefined4 **)(piVar12[1] + 0x38 + local_20) = local_1c;
        }
      }
      else {
        puVar18 = (undefined4 *)*puVar18;
      }
LAB_10032eb4:
      piVar12 = FUN_1003faf2(puVar18,(int *)&uStack_54,local_14,uVar21,0,0);
      local_14 = piVar12[1];
      local_1c = (undefined4 *)piVar12[8];
      iVar13 = *piVar12;
      uVar2 = *(undefined8 *)(piVar12 + 6);
      local_18 = piVar12[2];
      _param_4 = (undefined1 *)piVar12[4];
      iStack_2c = piVar12[10];
      puVar24 = (undefined1 *)piVar12[5];
      puVar25 = (undefined1 *)piVar12[3];
      puVar26 = (undefined1 *)piVar12[9];
    }
    puVar23 = _param_4;
    param_1 = local_10;
    _param_4 = puVar26;
    if (iVar13 != 0) goto LAB_10033288;
  }
LAB_100331c1:
  iVar13 = *(int *)(param_1 + 0xd9c4);
  if (*(char *)(param_1 + 0x5955) == '\0') {
    uVar21 = 4;
    if (param_2 < 5) {
      uVar21 = param_2;
    }
    if ((*(int *)(param_1 + 0xda74) == *(int *)(iVar13 + 0x60)) ||
       (*(int *)(param_1 + 0xda74) == *(int *)(iVar13 + 0x80))) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if (*(char *)(param_1 + 0x5953) == '\0') {
      iVar17 = 0;
      if (bVar9) {
        iVar17 = 10;
      }
      iVar17 = *(int *)(&DAT_100b1e1c + uVar21 * 4) + iVar17;
    }
    else {
      iVar17 = *(int *)(&DAT_100b1e1c + uVar21 * 4) + 5;
    }
  }
  else {
    iVar17 = (*(int *)(param_1 + 0xdbe0) != 0) + 0xf;
  }
  iVar13 = *(int *)(iVar13 + 4 + iVar17 * 4);
  local_14 = *(uint *)(&DAT_100afea8 + iVar17 * 0x28);
  local_1c = *(undefined4 **)(&DAT_100afec4 + iVar17 * 0x28);
  puVar25 = *(undefined1 **)(&DAT_100afeb0 + iVar17 * 0x28);
  puVar24 = *(undefined1 **)(&DAT_100afeb8 + iVar17 * 0x28);
  uVar2 = *(undefined8 *)(&DAT_100afebc + iVar17 * 0x28);
  local_18 = *(uint *)(&DAT_100afeac + iVar17 * 0x28);
  puVar23 = *(undefined1 **)(&DAT_100afeb4 + iVar17 * 0x28);
  _param_4 = *(undefined1 **)(&DAT_100afec8 + iVar17 * 0x28);
  iStack_2c = *(int *)(&DAT_100afecc + iVar17 * 0x28);
LAB_10033288:
  *(undefined1 *)(local_10 + 0xd978) = 0;
  if (*(int *)(local_10 + 0xda78) != iVar13) {
    *(int *)(local_10 + 0xda78) = iVar13;
    *(byte *)(local_10 + 0xde5c) =
         *(byte *)(local_10 + 0xde5c) | *(undefined1 **)(local_10 + 0xde48) < _param_4;
    *(byte *)(local_10 + 0xde60) =
         *(undefined1 **)(local_10 + 0xde38) < puVar24 | *(byte *)(local_10 + 0xde60);
    if ((puVar25 == (undefined1 *)0x0) || (*(int *)(local_10 + 0xde30) != 0)) {
      bVar4 = 0;
    }
    else {
      bVar4 = 1;
    }
    if ((puVar23 == (undefined1 *)0x0) || (*(int *)(local_10 + 0xde34) != 0)) {
      bVar20 = 0;
    }
    else {
      bVar20 = 1;
    }
    *(undefined8 *)(local_10 + 0xde3c) = uVar2;
    *(byte *)(local_10 + 0xde62) = *(byte *)(local_10 + 0xde62) | bVar4 | bVar20;
    *(uint *)(local_10 + 0xde28) = local_14;
    *(uint *)(local_10 + 0xde2c) = local_18;
    *(undefined4 **)(local_10 + 0xde44) = local_1c;
    *(undefined1 **)(local_10 + 0xde30) = puVar25;
    *(undefined1 **)(local_10 + 0xde34) = puVar23;
    *(undefined1 **)(local_10 + 0xde38) = puVar24;
    *(undefined1 **)(local_10 + 0xde48) = _param_4;
    *(int *)(local_10 + 0xde4c) = iStack_2c;
    *(undefined1 *)(local_10 + 0xde59) = 1;
  }
  return bVar28;
}

