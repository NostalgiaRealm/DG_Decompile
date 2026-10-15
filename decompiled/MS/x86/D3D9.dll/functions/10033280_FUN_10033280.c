/*
 * FUN_10033280 at 10033280
 * undefined __thiscall FUN_10033280(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, uint param_7, uint param_8, byte param_9)
 * Address ranges: 10033280-100340a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10033280(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            uint param_7,uint param_8,byte param_9)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  undefined *puVar19;
  float *pfVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  longlong lVar30;
  char local_9f;
  uint local_98;
  undefined4 *local_94;
  uint local_90;
  int local_84;
  uint local_7c;
  uint local_78;
  uint local_74;
  undefined8 local_70;
  undefined1 local_68;
  int local_5c;
  uint local_58;
  uint local_54;
  float local_50 [8];
  undefined8 local_30;
  
  if (*(char *)(param_2 + 0x1c) == -1) {
    uVar16 = 0;
  }
  else {
    uVar16 = (uint)*(byte *)(param_2 + 0x1d);
  }
  uVar24 = *(uint *)((int)this + 0x762c);
  local_98 = 0;
  uVar21 = uVar24;
  if (uVar16 <= uVar24) {
    uVar21 = uVar16;
  }
  local_78 = 0;
  if (*(char *)(param_2 + 0x19) == '\0') {
    local_78 = (uint)*(byte *)(param_2 + 0x1a);
  }
  bVar25 = *(char *)(param_2 + 0x41) == -0x60;
  if (bVar25) {
    local_78 = (uint)*(byte *)(param_2 + 0x42) << 0x14 | local_78;
  }
  local_54 = (uint)bVar25;
  if (*(char *)(param_2 + 0x49) == -0x5f) {
    local_78 = (uint)*(byte *)(param_2 + 0x4a) << 0x18 | local_78;
    local_54 = local_54 | 2;
  }
  local_94 = (undefined4 *)local_78;
  if (*(char *)(param_2 + 0x31) == '0') {
    local_94 = (undefined4 *)((uint)*(byte *)(param_2 + 0x32) << 0xc | local_78);
    local_54 = local_54 | 4;
  }
  if (*(char *)(param_2 + 0x51) == 'P') {
    local_94 = (undefined4 *)((uint)*(byte *)(param_2 + 0x52) << 0x1c | (uint)local_94);
    local_54 = local_54 | 8;
  }
  if (*(char *)(param_2 + 0x59) == 'Q') {
    local_98 = (uint)*(byte *)(param_2 + 0x5a);
    local_54 = local_54 | 0x10;
  }
  if (*(char *)(param_2 + 0x61) == 'R') {
    local_98 = local_98 | (uint)*(byte *)(param_2 + 0x62) << 4;
    local_54 = local_54 | 0x20;
  }
  if (*(char *)(param_2 + 0x69) == 'S') {
    local_98 = local_98 | (uint)*(byte *)(param_2 + 0x6a) << 8;
    local_54 = local_54 | 0x40;
  }
  if (*(char *)(param_2 + 0x71) == 'T') {
    local_98 = local_98 | (uint)*(byte *)(param_2 + 0x72) << 0xc;
    local_54 = local_54 | 0x80;
  }
  if (*(char *)(param_2 + 0x79) == 'U') {
    local_98 = local_98 | (uint)*(byte *)(param_2 + 0x7a) << 0x10;
    local_54 = local_54 | 0x100;
  }
  if (*(char *)(param_2 + 0x81) == 'V') {
    local_98 = local_98 | (uint)*(byte *)(param_2 + 0x82) << 0x14;
    local_54 = local_54 | 0x200;
  }
  if (*(char *)(param_2 + 0x89) == 'W') {
    local_98 = local_98 | (uint)*(byte *)(param_2 + 0x8a) << 0x18;
    local_54 = local_54 | 0x400;
  }
  if (*(char *)(param_2 + 0x21) == '\x10') {
    local_94 = (undefined4 *)((uint)local_94 | (uint)*(byte *)(param_2 + 0x22) << 4);
    local_54 = local_54 | *(uint *)(&DAT_100d53dc + uVar21 * 4);
  }
  if (*(char *)(param_2 + 0x91) == '\x01') {
    local_98 = local_98 | (uint)*(byte *)(param_2 + 0x92) << 0x1c;
    local_54 = local_54 | 0x10000;
  }
  if (*(char *)(param_2 + 0x99) == '1') {
    local_94 = (undefined4 *)((uint)local_94 | (uint)*(byte *)(param_2 + 0x9a) << 4);
    local_54 = local_54 | 0x20000;
  }
  if ((*(int *)((int)this + 0x6f00) == 0) || (local_78 = 0x8000, uVar24 == 0)) {
    local_78 = 0;
  }
  if (*(char *)(param_2 + 0x29) == ' ') {
    local_94 = (undefined4 *)((uint)local_94 | (uint)*(byte *)(param_2 + 0x2a) << 8);
    local_54 = local_54 | local_78;
  }
  if (*(char *)(param_2 + 0x39) == '@') {
    local_94 = (undefined4 *)((uint)local_94 | (uint)*(byte *)(param_2 + 0x3a) << 0x10);
    local_54 = local_54 | 0x80000;
  }
  local_54 = -(uint)(*(int *)(param_2 + 4) != 0) & 0x40000 | local_54;
  if (((*(int *)((int)this + 0xf748) < 0xb000) ||
      (((param_1 != 4 && (param_1 != 5)) && (param_1 != 6)))) ||
     (bVar25 = true, *(float *)((int)this + 0xe88) < 2.0)) {
    bVar25 = false;
  }
  if (((*(byte *)((int)this + 0x694c) & 1) == 0) || (*(char *)((int)this + 0xe8c) != '\0')) {
    uVar16 = *(uint *)((int)this + 0x6948);
  }
  else {
    lVar30 = FUN_100d0ba0();
    uVar16 = (uint)lVar30;
  }
  uVar21 = 0;
  bVar13 = false;
  do {
    if (*(uint *)((int)this + uVar21 * 0x10 + 0x6e84) !=
        (uint)*(byte *)(param_2 + 0x4d + uVar21 * 8)) {
      bVar13 = true;
      break;
    }
    uVar21 = uVar21 + 1;
  } while (uVar21 < 8);
  pbVar1 = (byte *)((int)this + 0x7634);
  if (*(int *)(param_2 + 4) == 0) {
    local_7c = 8;
    if (*(char *)((int)this + 0x7644) == '\0') {
      local_7c = 0;
    }
  }
  else {
    if (((*pbVar1 & 4) == 0) || (*(int *)((int)this + 0x7630) == 0)) {
      uVar21 = 0;
    }
    else {
      uVar21 = 2;
    }
    uVar22 = uVar21 + 2;
    uVar21 = uVar21 | 1;
    if (((*(int *)((int)this + 0xf72c) == 0) && (*(char *)((int)this + 0x80) != '\0')) &&
       (*(char *)((int)this + 0x7640) == '\0')) {
      uVar9 = 0;
      if (*(uint *)((int)this + 0xf50) != 0) {
        for (; (*(uint *)((int)this + 0xf50) >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
        }
      }
      local_70 = local_70 & 0xffffffff00000000;
      if (uVar9 < 5) {
        uVar22 = 5;
      }
    }
    if (bVar25) {
      uVar22 = 7;
      uVar21 = 6;
    }
    if (*(char *)((int)this + 0xc) == '\0') {
      if (param_9 != 0) {
        uVar21 = uVar22;
      }
LAB_100335c1:
      uVar22 = uVar21;
    }
    else if ((*(char *)(param_2 + 0x2c) == -1) || (param_9 == 0)) goto LAB_100335c1;
    if (((local_54 & 0xf800) != 0) ||
       (bVar14 = uVar24 == 0xff, *(char *)((int)this + 0x7644) != '\0')) {
      bVar14 = true;
    }
    local_7c = uVar22 + 8;
    if (!bVar14) {
      local_7c = uVar22;
    }
  }
  *(uint *)((int)this + 0xfc4) = *(uint *)((int)this + 0xfc4) & 0xfff7ffff;
  *(undefined4 *)((int)this + 0xfc0) = *(undefined4 *)((int)this + 0xfc0);
  if (*(char *)((int)this + 0xf6a5) != '\0') {
    FUN_1004f1b0((int)this);
  }
  local_70 = 0;
  local_5c = 0;
  local_84 = 0;
  if (bVar13) {
    *(uint *)((int)this + 0xf5c) =
         ((((((uint)(*(byte *)(param_2 + 0x85) | *(byte *)(param_2 + 0x7d)) << 3 |
             (uint)*(byte *)(param_2 + 0x75)) << 3 | (uint)*(byte *)(param_2 + 0x6d)) << 3 |
           (uint)*(byte *)(param_2 + 0x65)) << 3 | (uint)*(byte *)(param_2 + 0x5d)) << 3 |
         (uint)*(byte *)(param_2 + 0x55)) << 3 | (uint)*(byte *)(param_2 + 0x4d);
  }
  if (*(int *)(*(int *)((int)this + 0xf6b8) + 0xd4 + local_7c * 4) == 0) {
    uVar21 = *(uint *)((int)this + 0x694c);
    if (((uVar21 & 1) == 0) || (bVar14 = true, *(char *)((int)this + 0xe8c) != '\0')) {
      bVar14 = false;
    }
    local_90 = 0;
    local_74 = 0;
    if ((*(byte *)((int)this + 0x7634) & 4) != 0) {
      local_74 = *(uint *)((int)this + 0x7630);
    }
    if (bVar25) {
      uVar22 = local_74 | 0x100;
      if ((uVar21 & 2) != 0) {
        uVar22 = local_74 | 0x300;
      }
      if ((uVar21 & 4) != 0) {
        uVar22 = uVar22 | 0x400;
      }
      if (bVar14) {
        uVar22 = uVar22 | 0x800;
      }
      local_90 = uVar16 >> 0x14;
      local_74 = uVar22 | uVar16 << 0xc;
    }
    if (*(int *)((int)this + 0xf72c) == 0) {
      bVar15 = FUN_1004f000((int)this);
    }
    else {
      bVar15 = *(byte *)(*(int *)(*(int *)((int)this + 0xf72c) + 4) + 0x126c);
    }
    local_58 = 0x200000;
    local_70 = CONCAT44(local_70._4_4_,(void *)((int)this + 0xf58));
    uVar16 = 0;
    if (uVar24 == 0xff) {
      uVar16 = 0x200000;
    }
    *(undefined4 **)((int)this + 4000) = local_94;
    *(uint *)((int)this + 0xf9c) =
         *(uint *)((int)this + 0xf9c) & 0x7fd00000 | uVar16 | (uint)param_9 << 0x1f |
         local_54 & 0xfffff;
    *(uint *)((int)this + 0xfa4) = local_98;
    FUN_10038796((void *)((int)this + 0xf58),bVar15,(uint *)local_50);
    local_58 = FUN_10038b2a((void *)((int)this + 0xf71c),(int)local_50);
    if (local_58 == *(uint *)((int)this + 0xf724)) {
LAB_1003383b:
      local_94 = (undefined4 *)FUN_100cfd55(0x2d0);
      if (local_94 == (undefined4 *)0x0) goto LAB_10033a94;
      uVar4 = *(undefined1 *)((int)this + 0xf718);
      uVar6 = *(undefined4 *)((int)this + 0xf714);
      uVar7 = *(undefined4 *)((int)this + 0xf710);
      *local_94 = &PTR_D3DPERF_GetStatus_100d56e0;
      local_94[3] = 0;
      local_94[1] = 0;
      local_94[2] = 0;
      local_94[4] = &PTR_FUN_100d5e80;
      uVar10 = ((undefined4 *)local_70)[1];
      uVar11 = ((undefined4 *)local_70)[2];
      uVar12 = ((undefined4 *)local_70)[3];
      local_94[6] = *(undefined4 *)local_70;
      local_94[7] = uVar10;
      local_94[8] = uVar11;
      local_94[9] = uVar12;
      uVar10 = ((undefined4 *)local_70)[5];
      uVar11 = ((undefined4 *)local_70)[6];
      uVar12 = ((undefined4 *)local_70)[7];
      local_94[10] = ((undefined4 *)local_70)[4];
      local_94[0xb] = uVar10;
      local_94[0xc] = uVar11;
      local_94[0xd] = uVar12;
      uVar10 = ((undefined4 *)local_70)[9];
      uVar11 = ((undefined4 *)local_70)[10];
      uVar12 = ((undefined4 *)local_70)[0xb];
      local_94[0xe] = ((undefined4 *)local_70)[8];
      local_94[0xf] = uVar10;
      local_94[0x10] = uVar11;
      local_94[0x11] = uVar12;
      uVar10 = ((undefined4 *)local_70)[0xd];
      uVar11 = ((undefined4 *)local_70)[0xe];
      uVar12 = ((undefined4 *)local_70)[0xf];
      local_94[0x12] = ((undefined4 *)local_70)[0xc];
      local_94[0x13] = uVar10;
      local_94[0x14] = uVar11;
      local_94[0x15] = uVar12;
      uVar10 = ((undefined4 *)local_70)[0x11];
      uVar11 = ((undefined4 *)local_70)[0x12];
      uVar12 = ((undefined4 *)local_70)[0x13];
      local_94[0x16] = ((undefined4 *)local_70)[0x10];
      local_94[0x17] = uVar10;
      local_94[0x18] = uVar11;
      local_94[0x19] = uVar12;
      *local_94 = &PTR_FUN_100d56e8;
      *(undefined1 *)(local_94 + 0xb3) = uVar4;
      local_94[0x1a] = 0;
      local_94[0x1b] = 0;
      local_94[0x1c] = 0;
      local_94[0x1d] = 0;
      local_94[1] = uVar7;
      local_94[2] = uVar6;
      local_94[3] = local_94 + 0x1a;
      uVar21 = FUN_10038b2a((void *)((int)this + 0xf71c),(int)local_50);
      uVar16 = *(uint *)((int)this + 0xf724);
      if (uVar21 == uVar16) {
LAB_10033956:
        uVar22 = *(uint *)((int)this + 0xf728);
        if (uVar22 == uVar16) {
          if (uVar22 == 0) {
            iVar23 = 0x10;
          }
          else {
            iVar23 = uVar22 * 2;
          }
          iVar17 = FUN_100cfd89(iVar23 * 0x30);
          if (iVar17 != 0) {
            uVar16 = 0;
            if (*(int *)((int)this + 0xf724) != 0) {
              do {
                iVar8 = *(int *)((int)this + 0xf720);
                uVar22 = uVar16 + 1;
                puVar2 = (undefined4 *)(iVar8 + uVar16 * 0x30);
                uVar6 = puVar2[1];
                uVar7 = puVar2[2];
                uVar10 = puVar2[3];
                puVar3 = (undefined4 *)(iVar17 + uVar16 * 0x30);
                *puVar3 = *puVar2;
                puVar3[1] = uVar6;
                puVar3[2] = uVar7;
                puVar3[3] = uVar10;
                puVar2 = (undefined4 *)(iVar8 + 0x10 + uVar16 * 0x30);
                uVar6 = puVar2[1];
                uVar7 = puVar2[2];
                uVar10 = puVar2[3];
                puVar3 = (undefined4 *)(iVar17 + 0x10 + uVar16 * 0x30);
                *puVar3 = *puVar2;
                puVar3[1] = uVar6;
                puVar3[2] = uVar7;
                puVar3[3] = uVar10;
                puVar2 = (undefined4 *)(iVar8 + 0x20 + uVar16 * 0x30);
                uVar6 = puVar2[1];
                uVar7 = puVar2[2];
                uVar10 = puVar2[3];
                puVar3 = (undefined4 *)(iVar17 + 0x20 + uVar16 * 0x30);
                *puVar3 = *puVar2;
                puVar3[1] = uVar6;
                puVar3[2] = uVar7;
                puVar3[3] = uVar10;
                uVar16 = uVar22;
              } while (uVar22 < *(uint *)((int)this + 0xf724));
            }
            thunk_FUN_100cfd6c(*(LPVOID *)((int)this + 0xf71c));
            *(int *)((int)this + 0xf71c) = iVar17;
            *(int *)((int)this + 0xf720) = iVar17;
            *(int *)((int)this + 0xf728) = iVar23;
          }
        }
        uVar16 = *(uint *)((int)this + 0xf724);
        if (*(uint *)((int)this + 0xf728) != uVar16) {
          for (; uVar21 < uVar16; uVar16 = uVar16 - 1) {
            iVar23 = *(int *)((int)this + 0xf720);
            puVar3 = (undefined4 *)(iVar23 + -0x30 + uVar16 * 0x30);
            uVar6 = puVar3[1];
            uVar7 = puVar3[2];
            uVar10 = puVar3[3];
            puVar2 = (undefined4 *)(iVar23 + uVar16 * 0x30);
            *puVar2 = *puVar3;
            puVar2[1] = uVar6;
            puVar2[2] = uVar7;
            puVar2[3] = uVar10;
            puVar2 = (undefined4 *)(iVar23 + -0x20 + uVar16 * 0x30);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar10 = puVar2[3];
            puVar3 = (undefined4 *)(iVar23 + 0x10 + uVar16 * 0x30);
            *puVar3 = *puVar2;
            puVar3[1] = uVar6;
            puVar3[2] = uVar7;
            puVar3[3] = uVar10;
            puVar2 = (undefined4 *)(iVar23 + -0x10 + uVar16 * 0x30);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar10 = puVar2[3];
            puVar3 = (undefined4 *)(iVar23 + 0x20 + uVar16 * 0x30);
            *puVar3 = *puVar2;
            puVar3[1] = uVar6;
            puVar3[2] = uVar7;
            puVar3[3] = uVar10;
          }
          *(int *)((int)this + 0xf724) = *(int *)((int)this + 0xf724) + 1;
          iVar23 = *(int *)((int)this + 0xf720);
          pfVar20 = (float *)(iVar23 + uVar21 * 0x30);
          *pfVar20 = local_50[0];
          pfVar20[1] = local_50[1];
          pfVar20[2] = local_50[2];
          pfVar20[3] = local_50[3];
          puVar2 = (undefined4 *)(iVar23 + 0x10 + uVar21 * 0x30);
          *puVar2 = local_50[4];
          puVar2[1] = local_50[5];
          puVar2[2] = local_50[6];
          puVar2[3] = local_50[7];
          *(undefined8 *)(iVar23 + 0x20 + uVar21 * 0x30) = local_30;
          *(undefined4 **)(*(int *)((int)this + 0xf720) + 0x28 + uVar21 * 0x30) = local_94;
        }
      }
      else {
        uVar16 = 0;
        iVar23 = uVar21 * 0x30 + *(int *)((int)this + 0xf720);
        do {
          if ((*(float *)(iVar23 + uVar16 * 8) != local_50[uVar16 * 2]) ||
             (*(float *)(iVar23 + 4 + uVar16 * 8) != local_50[uVar16 * 2 + 1])) {
            uVar16 = *(uint *)((int)this + 0xf724);
            goto LAB_10033956;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < 5);
        *(undefined4 **)(*(int *)((int)this + 0xf720) + 0x28 + uVar21 * 0x30) = local_94;
      }
    }
    else {
      uVar16 = 0;
      iVar23 = local_58 * 0x30 + *(int *)((int)this + 0xf720);
      do {
        if ((*(float *)(iVar23 + uVar16 * 8) != local_50[uVar16 * 2]) ||
           (*(float *)(iVar23 + 4 + uVar16 * 8) != local_50[uVar16 * 2 + 1])) goto LAB_1003383b;
        uVar16 = uVar16 + 1;
      } while (uVar16 < 5);
      local_94 = (undefined4 *)(local_58 * 0x30 + *(int *)((int)this + 0xf720) + 0x28);
      if (local_94 == (undefined4 *)0x0) goto LAB_1003383b;
      local_94 = (undefined4 *)*local_94;
    }
    piVar18 = (int *)FUN_10038543(local_94,local_74,local_90);
    if (piVar18 != (int *)0x0) {
      local_5c = *piVar18;
      local_84 = piVar18[1];
    }
  }
  else {
    local_74 = 0;
  }
LAB_10033a94:
  if (((*pbVar1 & 4) != 0) &&
     (((local_7c == 0 || (local_7c == 8)) && (*(char *)((int)this + 0xf673) != '\0')))) {
    FUN_10028b1f((int)this + 0x7584,(int)this + 0x75c4,(int)local_50);
    FUN_10028b85(local_50,(undefined4 *)((int)this + 0x6b80),'\0');
    *(undefined1 *)((int)this + 0xf673) = 0;
    *(undefined1 *)((int)this + 0xf671) = 1;
  }
  if (local_5c == 0) {
    local_5c = *(int *)(*(int *)((int)this + 0xf6b8) + 0xd4 + local_7c * 4);
    local_70._4_4_ = local_7c;
  }
  else {
    local_70._4_4_ = 0x10;
  }
  if ((local_7c == 5) || (local_7c == 0xd)) {
    bVar15 = 1;
  }
  else {
    bVar15 = 0;
  }
  bVar5 = *(byte *)((int)this + 0x764b);
  *(byte *)((int)this + 0x764b) = bVar15;
  *(byte *)((int)this + 0xf668) = *(byte *)((int)this + 0xf668) | bVar15 != bVar5;
  local_70._0_4_ = (undefined4 *)param_2;
  local_68 = uVar24 == 0xff;
  iVar23 = FUN_10034e50((void *)((int)this + 0xf6f4),(int *)&local_70);
  if ((param_1 == 1) &&
     (((*(char *)((int)this + 0x7646) != '\0' && (*(int *)(param_2 + 4) != 0)) ||
      (*(char *)((int)this + 0x7647) != '\0')))) {
    local_9f = '\x01';
    local_84 = *(int *)(*(int *)((int)this + 0xf6b8) + 0x118 + (uint)bVar15 * 4);
  }
  else {
    local_9f = '\0';
    if (local_84 != 0) goto switchD_10033bc8_caseD_8;
    local_84 = 0;
  }
  switch(local_7c) {
  case 6:
    local_84 = *(int *)(*(int *)((int)this + 0xf6b8) + 0x120);
    break;
  case 7:
    local_84 = *(int *)(*(int *)((int)this + 0xf6b8) + 0x124);
    break;
  case 0xe:
    local_84 = *(int *)(*(int *)((int)this + 0xf6b8) + 0x128);
    break;
  case 0xf:
    local_84 = *(int *)(*(int *)((int)this + 0xf6b8) + 300);
  }
switchD_10033bc8_caseD_8:
  uVar16 = (0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50);
  local_70 = CONCAT44(local_70._4_4_,uVar16);
  uVar24 = (0x1000 - *(int *)((int)this + 0x6c)) - *(int *)((int)this + 0x68);
  local_58 = CONCAT31(local_58._1_3_,uVar24 < param_8);
  puVar19 = &DAT_100dc190;
  if (*(char *)((int)this + 0x7641) == '\0') {
    puVar19 = &DAT_100dc1ac;
  }
  if (((((*(char *)((int)this + 0x7642) != '\0') || (*(uint *)((int)this + 0x6920) != local_54)) ||
       (bVar13)) ||
      ((*(int *)((int)this + 0x100c) != param_5 || (*(int *)((int)this + 0xfc8) != param_6)))) ||
     (((*(int *)((int)this + 0xfa18) != param_4 ||
       ((*(int *)((int)this + 0xf9d8) != param_3 || (*(int *)((int)this + 0xf9cc) != local_5c)))) ||
      ((*(int *)((int)this + 0xf9d4) != local_84 ||
       (((((*(char *)((int)this + 0x7648) != local_9f ||
           (*(int *)((int)this + 0x761c) != *(int *)(param_2 + 4))) ||
          (*(int *)((int)this + 0xfa2c) != *(int *)(puVar19 + param_1 * 4))) ||
         (((*(int *)((int)this + 0x6c) != 0) != (param_8 != 0) || (uVar16 < param_7)))) ||
        ((uVar24 < param_8 || (*(int *)((int)this + 0xf9c8) != iVar23)))))))))) {
    iVar17 = 0;
    if (param_3 == *(int *)((int)this + 0xf6d4)) {
      iVar17 = param_6;
    }
    FUN_10032e50(this,uVar16 < param_7,uVar24 < param_8,iVar17);
    if (param_3 == *(int *)((int)this + 0xf6d4)) {
      param_5 = *(int *)((int)this + 0x5c);
    }
    if (*(char *)((int)this + 0x7642) != '\0') {
      *(undefined1 *)((int)this + 0xf669) = 1;
      *(uint *)((int)this + 0xf664) = *(uint *)((int)this + 0xf664) | 1;
    }
    if (bVar13) {
      *(uint *)((int)this + 0x6e84) = (uint)*(byte *)(param_2 + 0x4d);
      *(uint *)((int)this + 0x6e94) = (uint)*(byte *)(param_2 + 0x55);
      *(uint *)((int)this + 0x6ea4) = (uint)*(byte *)(param_2 + 0x5d);
      *(uint *)((int)this + 0x6eb4) = (uint)*(byte *)(param_2 + 0x65);
      *(uint *)((int)this + 0x6ec4) = (uint)*(byte *)(param_2 + 0x6d);
      *(uint *)((int)this + 0x6ed4) = (uint)*(byte *)(param_2 + 0x75);
      *(uint *)((int)this + 0x6ee4) = (uint)*(byte *)(param_2 + 0x7d);
      *(uint *)((int)this + 0x6ef4) = (uint)*(byte *)(param_2 + 0x85);
      *(undefined1 *)((int)this + 0xf671) = 1;
    }
    if (*(uint *)((int)this + 0x6920) != local_54) {
      *(uint *)((int)this + 0x6920) = local_54;
      *(undefined1 *)((int)this + 0xf671) = 1;
    }
    if (*(int *)((int)this + 0xfc8) != param_6) {
      *(int *)((int)this + 0xfc8) = param_6;
      *(undefined1 *)((int)this + 0xf66f) = 1;
    }
    if (*(int *)((int)this + 0xf9d8) != param_3) {
      *(int *)((int)this + 0xf9d8) = param_3;
      *(undefined1 *)((int)this + 0xf66f) = 1;
    }
    if (*(int *)((int)this + 0x100c) != param_5) {
      *(int *)((int)this + 0x100c) = param_5;
      *(undefined1 *)((int)this + 0xf66f) = 1;
    }
    if (*(int *)((int)this + 0xfa18) != param_4) {
      *(int *)((int)this + 0xfa18) = param_4;
      *(undefined1 *)((int)this + 0xf670) = 1;
    }
    if (*(int *)((int)this + 0xf9c8) != iVar23) {
      *(int *)((int)this + 0xf9c8) = iVar23;
      *(undefined1 *)((int)this + 0x10230) = 1;
    }
    iVar23 = *(int *)((int)this + 0xf9d4);
    if (*(int *)((int)this + 0xf9d4) != local_84) {
      *(int *)((int)this + 0xf9d4) = local_84;
      *(undefined1 *)((int)this + 0x10230) = 1;
      iVar23 = local_84;
    }
    if (*(int *)((int)this + 0xf9cc) != local_5c) {
      *(int *)((int)this + 0xf9cc) = local_5c;
      if (((iVar23 == 0) || (iVar23 == *(int *)(*(int *)((int)this + 0xf6b8) + 0x118))) ||
         (iVar23 == *(int *)(*(int *)((int)this + 0xf6b8) + 0x11c))) {
        bVar25 = false;
      }
      else {
        bVar25 = true;
      }
      iVar23 = *(int *)((int)this + 0xf6b8);
      if ((((local_5c == *(int *)(iVar23 + 0xe4)) || (local_5c == *(int *)(iVar23 + 0xe0))) ||
          (local_5c == *(int *)(iVar23 + 0x104))) ||
         ((local_5c == *(int *)(iVar23 + 0x100) || (bVar25)))) {
        local_74 = local_74 | 0x3f;
      }
      *(undefined1 *)((int)this + 0x10230) = 1;
      iVar23 = *(int *)((int)this + 0xf740);
      *(uint *)((int)this + 0xfa30) = local_74 & 0x3f;
      *(undefined4 *)((int)this + 0xf740) = 0;
      *(byte *)((int)this + 0xf6a2) = *(byte *)((int)this + 0xf6a2) | iVar23 != 0;
    }
    if ((*(int *)((int)this + 0x761c) != *(int *)(param_2 + 4)) ||
       (*(char *)((int)this + 0x7642) != '\0')) {
      *(int *)((int)this + 0x761c) = *(int *)(param_2 + 4);
      *(undefined1 *)((int)this + 0xf66e) = 1;
    }
    if (*(int *)((int)this + 0xfa2c) != *(int *)(puVar19 + param_1 * 4)) {
      *(int *)((int)this + 0xfa2c) = *(int *)(puVar19 + param_1 * 4);
      *(undefined1 *)((int)this + 0x10230) = 1;
    }
    if (*(char *)((int)this + 0x7648) != local_9f) {
      *(undefined1 *)((int)this + 0xf66d) = 1;
      *(char *)((int)this + 0x7648) = local_9f;
    }
    bVar15 = *(byte *)((int)this + 0x7642);
    *(byte *)((int)this + 0xf66c) = *(byte *)((int)this + 0xf66c) | bVar15;
    *(byte *)((int)this + 0xf66b) = *(byte *)((int)this + 0xf66b) | bVar15;
    *(byte *)((int)this + 0xf66d) = *(byte *)((int)this + 0xf66d) | bVar15;
    *(byte *)((int)this + 0xf668) = *(byte *)((int)this + 0xf668) | bVar15;
    if (bVar15 != 0) {
      *(undefined1 *)((int)this + 0x7642) = 0;
      iVar23 = 0xe90;
      if ((*pbVar1 & 1) == 0) {
        iVar23 = 0xea8;
      }
      pfVar20 = (float *)(iVar23 + (int)this);
      fVar29 = 2.0 / pfVar20[2];
      fVar27 = (*pfVar20 * -2.0) / pfVar20[2] - 1.0;
      fVar28 = -2.0 / pfVar20[3];
      fVar26 = (pfVar20[1] + pfVar20[1]) / pfVar20[3] + 1.0;
      if ((((fVar29 != *(float *)((int)this + 0x6930)) || (fVar28 != *(float *)((int)this + 0x6934))
           ) || (fVar27 != *(float *)((int)this + 0x6938))) ||
         (fVar26 != *(float *)((int)this + 0x693c))) {
        *(float *)((int)this + 0x6930) = fVar29;
        *(float *)((int)this + 0x6934) = fVar28;
        *(float *)((int)this + 0x6938) = fVar27;
        *(float *)((int)this + 0x693c) = fVar26;
        *(undefined1 *)((int)this + 0xf671) = 1;
      }
    }
  }
  return;
}

