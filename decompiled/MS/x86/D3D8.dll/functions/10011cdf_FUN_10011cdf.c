/*
 * FUN_10011cdf at 10011cdf
 * undefined4 __fastcall FUN_10011cdf(int * param_1, undefined4 * param_2, int * param_3)
 * Address ranges: 10011cdf-10012c65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10011cdf(int *param_1,undefined4 *param_2,int *param_3)

{
  uint *puVar1;
  undefined2 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 extraout_ECX;
  uint uVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  uint extraout_EDX;
  uint extraout_EDX_00;
  byte bVar11;
  uint3 uVar12;
  uint *puVar13;
  byte *pbVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  byte local_270 [10];
  byte local_266 [32];
  byte abStack_246 [8];
  byte abStack_23e [6];
  byte abStack_238 [8];
  undefined1 local_230;
  undefined1 auStack_22f [11];
  uint auStack_224 [32];
  uint local_1a4;
  int local_1a0;
  int local_19c [16];
  byte abStack_15c [16];
  byte local_14c;
  undefined1 local_14b;
  byte local_14a;
  char acStack_148 [6];
  char acStack_142 [89];
  char local_e9;
  byte local_c2;
  undefined2 local_c1;
  byte local_bf;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  char local_94;
  undefined4 *local_8c;
  uint *local_88;
  int *local_84;
  uint *local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  byte local_5c [8];
  byte local_54 [8];
  uint local_4c;
  uint *local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  byte local_34 [4];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  uint *local_1c;
  uint *local_18;
  char local_12;
  char local_11;
  uint local_10;
  uint local_c;
  
  local_8c = param_2;
  FUN_100ada8e((int *)local_270,0,0x1e0);
  iVar8 = *param_1;
  local_84 = param_1;
  puVar13 = (uint *)(param_1 + 1);
  local_80 = (uint *)0x0;
  local_18 = puVar13;
  if ((((iVar8 == -0xff00) || (iVar8 == -0xfeff)) || (iVar8 == -0xfefe)) ||
     ((iVar8 == -0xfefd || (iVar8 == -0xfefc)))) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  cVar3 = (char)uVar4;
  local_14a = (byte)iVar8;
  local_14b = (char)((uint)iVar8 >> 8);
  piVar15 = local_19c;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar15 = -1;
    piVar15 = piVar15 + 1;
  }
  if (iVar8 == -0xfefc) {
    local_38 = FUN_10011c3f(puVar13);
  }
  else {
    local_38 = 0;
  }
  local_11 = '\0';
  local_c = uVar4;
  uVar2 = local_c1;
  do {
    bVar11 = 0;
    if ((cVar3 == '\0') || (bVar11 = (byte)local_c, local_11 != '\0')) {
      uVar16 = (uint)local_14c;
      uVar4 = 0;
      do {
        if (abStack_246[uVar4] != 0) {
          uVar16 = uVar16 & 0xff | 1 << (uVar4 & 0x1f);
          local_14c = (char)uVar16;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 8);
      uVar4 = CONCAT31((int3)(uVar4 >> 8),local_266[0]) & 0xffffff0f;
      bVar19 = (char)uVar4 == '\x0f';
      iVar8 = CONCAT31((int3)(uVar4 >> 8),bVar19);
      bVar11 = bVar11 & bVar19;
      if (bVar11 != 0) {
        pbVar14 = local_270;
        for (iVar8 = 0x4a; iVar8 != 0; iVar8 = iVar8 + -1) {
          *local_8c = *(undefined4 *)pbVar14;
          pbVar14 = pbVar14 + 4;
          local_8c = local_8c + 1;
        }
        iVar8 = (int)local_18 - (int)local_84 >> 2;
        *param_3 = iVar8;
      }
      return CONCAT31((int3)((uint)iVar8 >> 8),bVar11);
    }
    uVar4 = *puVar13;
    local_88 = puVar13;
    local_24 = uVar4 & 0xffff0000;
    local_7c = 0;
    local_44 = uVar4 & 0xffff;
    uStack_78 = 0;
    local_c = (~(byte)(uVar4 >> 0x1f) & bVar11) & 0xffffff01;
    uStack_74 = 0;
    local_c1 = uVar2;
    if (local_44 == 0) {
      if ((local_24 == 0) && (local_94 == '\0')) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      puVar6 = puVar13 + 1;
      local_1c = puVar6;
LAB_10012bb5:
      local_18 = puVar6;
      local_c = uVar4;
      goto LAB_10012bbb;
    }
    puVar6 = puVar13;
    if (local_44 == 0x51) {
      puVar1 = puVar13 + 1;
      local_3c = *puVar1;
      bVar11 = (byte)(local_3c >> 0x1f) & (byte)local_c;
      local_48 = puVar1;
      local_4c = (uint)bVar11;
      if (local_c2 == 0 && local_24 == 0) {
        local_c = (uint)bVar11;
        local_1c = puVar1;
        if (bVar11 != 0) {
          uVar16 = local_3c & 0x1fff;
          bVar10 = local_c2;
          if ((local_3c & 0x1ff8) == 0) {
            bVar10 = bVar11;
          }
          if (((local_3c & 0xf0000) == 0) || ((local_3c & 0xf0000) == 0xf0000)) {
            bVar11 = 1;
          }
          else {
            bVar11 = 0;
          }
          bVar9 = 0;
          if ((local_3c & 0xf00000) == 0) {
            bVar9 = bVar11;
          }
          bVar10 = bVar10 & bVar9 & (local_3c & 0x70000000) == 0x20000000;
          uVar4 = (uint)bVar10;
          local_c = uVar4;
          if (bVar10 != 0) {
            uVar17 = puVar13[2];
            auStack_22f[uVar16] = 1;
            auStack_224[uVar16 * 4] = uVar17;
            auStack_224[uVar16 * 4 + 1] = puVar13[3];
            auStack_224[uVar16 * 4 + 2] = puVar13[4];
            puVar6 = puVar13 + 6;
            auStack_224[uVar16 * 4 + 3] = puVar13[5];
            goto LAB_10012bb5;
          }
        }
      }
      else {
        local_1c = puVar1;
        local_c = 0;
      }
      goto LAB_10012bbb;
    }
    if (local_44 == 0xfffd) {
      if ((local_14a != 4) || (local_38 != 0 || local_24 != 0)) {
        local_c = 0;
      }
      uVar4 = 0;
      do {
        local_266[uVar4] = local_266[uVar4] & 7;
        uVar4 = uVar4 + 1;
      } while (uVar4 < 6);
      local_18 = puVar13 + 1;
      local_c1 = 0;
      local_c2 = 0;
      local_38 = local_38 + 1;
      puVar6 = local_18;
      local_1c = local_18;
      goto LAB_10012bbb;
    }
    if (local_44 == 0xfffe) {
      puVar6 = puVar13 + (uVar4 >> 0x10) + 1;
      local_18 = puVar6;
      goto LAB_10012c01;
    }
    if (local_44 == 0xffff) {
      if ((local_24 == 0) && (local_94 == '\0')) {
        local_c = 1;
      }
      else {
        local_c = 0;
      }
      puVar6 = puVar13 + 1;
      local_18 = puVar6;
      local_11 = '\x01';
      goto LAB_10012c01;
    }
    local_1c = puVar13 + 1;
    local_40 = puVar13[1];
    local_20 = (int)(char)(&DAT_100b1908)[local_44];
    local_c = (uint)(local_20 != -1);
    if (local_20 == -1) goto LAB_10012515;
    local_28 = (uint)local_14a;
    local_20 = local_20 * 0x1c;
    local_5c[0] = 1;
    local_5c[1] = 2;
    local_5c[2] = 4;
    local_5c[3] = 8;
    local_5c[4] = 0x10;
    bVar19 = (local_5c[local_28] & (&DAT_100af66c)[local_20]) != 0;
    if (local_24 == 0) {
      local_c1._0_1_ = (byte)uVar2;
      local_c1._1_1_ = (byte)((ushort)uVar2 >> 8);
      if ((&DAT_100af668)[local_20] == '\0') {
        cVar3 = (&DAT_100af669)[local_20];
        if (cVar3 != '\0') {
          bVar18 = local_c1._1_1_ < (byte)(&DAT_100af9cd)[local_28 * 3];
          goto LAB_10011e91;
        }
      }
      else {
        cVar3 = (&DAT_100af669)[local_20];
        bVar18 = (byte)local_c1 < (byte)(&DAT_100af9cc)[local_28 * 3];
LAB_10011e91:
        bVar19 = (bool)(-bVar18 & bVar19);
      }
      bVar19 = (bool)(-(local_c2 < (byte)(&DAT_100af9ce)[local_28 * 3]) & bVar19);
      if ((&DAT_100af668)[local_20] == '\0') {
        if (cVar3 != '\0') {
          local_c1 = CONCAT11(local_c1._1_1_ + 1,(byte)local_c1);
          local_1a0 = local_1a0 + 1;
          bVar19 = (bool)(bVar19 & (byte)local_c1 == 0);
          uVar2 = local_c1;
        }
      }
      else {
        local_c1 = CONCAT11(local_c1._1_1_,(byte)local_c1 + 1);
        uVar2 = local_c1;
      }
      local_c1 = uVar2;
      local_c2 = local_c2 + 1;
    }
    if (((local_40 & 0xf00000) == 0) || ((local_40 & 0xf00000) == 0x100000)) {
      bVar11 = 1;
    }
    else {
      bVar11 = 0;
    }
    local_2c = 0;
    local_10 = local_40 & 0x1fff;
    uVar16 = local_40 >> 0x1c & 7;
    local_54[0] = 4;
    local_54[1] = 1;
    local_54[2] = 2;
    local_54[3] = 0x18;
    local_54[4] = 0;
    local_54[5] = 0;
    local_54[6] = 0;
    local_54[7] = 0;
    uVar4 = local_40 >> 0x18 & 0xf;
    bVar11 = -(local_10 < (byte)(&DAT_100af9dc)[local_28 + uVar16 * 5]) & bVar11 & bVar19;
    local_c = (uint)bVar11;
    if ((((uVar4 == 0) || (uVar4 == 1)) || (uVar4 == 2)) ||
       (((uVar4 == 3 || (uVar4 == 0xd)) || ((uVar4 == 0xe || (uVar4 == 0xf)))))) {
      if (bVar11 != 0) {
        bVar10 = local_54[uVar16];
        local_2c = (uint)bVar10;
        local_7c._0_2_ = CONCAT11((char)local_10,bVar10);
        local_7c = (uint)(ushort)local_7c;
        if ((bVar10 == 0x18) &&
           ((abStack_23e[local_10] != 0 || (local_2c = 0x10, (&DAT_100af668)[local_20] != '\0')))) {
          local_2c = 8;
        }
        local_c = (uint)(bVar11 & -(((&DAT_100af66d)[local_28 + local_20] & (byte)local_2c) != 0));
      }
    }
    else {
      local_c = 0;
      local_c = 0;
    }
    local_30 = local_28 + local_20;
    iVar8 = (uint)local_14a << 8;
    uVar4 = local_40 & 0xf0000;
    if (local_14a != 4) {
      if ((((uVar4 == 0x80000) || (uVar4 == 0x70000)) || (uVar4 == 0xf0000)) || (uVar4 == 0)) {
        iVar8 = CONCAT31((uint3)local_14a,1);
      }
      else {
        iVar8 = (uint)(uint3)local_14a << 8;
      }
      local_c = (uint)(byte)((byte)local_c & (byte)iVar8);
    }
    if ((&DAT_100af669)[local_20] != '\0') {
      if (local_2c == 0x10) {
        bVar11 = 0;
        if (uVar4 == 0xf0000) {
          bVar11 = (byte)local_c;
        }
        iVar8 = (uint)local_14a << 8;
        local_c = (uint)bVar11;
      }
    }
    uVar16 = local_c;
    local_4c = 0xf0000;
    if (uVar4 != 0) {
      local_4c = uVar4;
    }
    local_70 = local_4c >> 0x10;
    local_7c = (uint)CONCAT12((char)(local_4c >> 0x10),(ushort)local_7c);
    local_34[0] = (&DAT_100af672)[local_38 + local_30];
    local_34[1] = (&DAT_100af678)[local_38 + local_30];
    uVar4 = CONCAT31((int3)((uint)iVar8 >> 8),(&DAT_100af67e)[local_38 + local_30]);
    local_34[2] = (&DAT_100af67e)[local_38 + local_30];
    local_30 = 0;
    if ((char)local_c != '\0') {
      do {
        if ((2 < local_30) || (bVar11 = local_34[local_30], bVar11 == 0)) break;
        local_28 = puVar13[local_30 + 2];
        uVar17 = local_28 >> 0x1c & 7;
        local_c = local_28 & 0x1fff;
        local_12 = '\0';
        bVar9 = -((local_28 & 0x1fff) < (uint)(byte)(&DAT_100af9dc)[(uVar4 >> 8) + uVar17 * 5]) &
                (byte)(local_28 >> 0x1f) & (byte)uVar16;
        bVar10 = 0;
        if (bVar9 != 0) {
          uVar16 = local_30 * 3;
          puVar6 = (uint *)(uint)local_54[uVar17];
          local_48 = puVar6;
          local_3c = uVar16;
          *(byte *)((int)&local_7c + uVar16 + 3) = local_54[uVar17];
          uVar4 = local_c;
          *(char *)((int)&uStack_78 + uVar16) = (char)local_c;
          if (puVar6 == (uint *)0x18) {
            puVar6 = (uint *)&DAT_00000010;
            if (abStack_23e[uVar4] != 0) {
              puVar6 = (uint *)&DAT_00000008;
            }
            local_48 = puVar6;
          }
          uVar4 = local_28 & 0xff0000;
          bVar9 = -((bVar11 & (byte)puVar6) != 0) & bVar9;
          iVar8 = (uint)bVar9 << 8;
          if (local_44 == 0x42) {
            if (local_14a == 4) {
              if ((uVar4 == 0xe40000) || (uVar4 == 0xa40000)) {
                if (((local_28 & 0xf000000) == 0) || ((local_28 & 0xf000000) == 0x9000000))
                goto LAB_1001219e;
              }
              else {
LAB_10012173:
                if ((uVar4 == 0xf40000) &&
                   (((local_28 & 0xf000000) == 0 || ((local_28 & 0xf000000) == 0xa000000))))
                goto LAB_1001219e;
              }
              iVar8 = 0;
              goto LAB_1001219e;
            }
LAB_100121a3:
            if (((((uVar4 != 0xff0000) && (uVar4 != 0xe40000)) &&
                 ((uVar4 != 0xaa0000 || (local_14a == 0)))) &&
                ((uVar4 != 0x550000 || (local_14a != 4)))) && ((uVar4 != 0 || (local_14a != 4)))) {
              iVar8 = 0;
            }
          }
          else {
            if ((local_44 != 0x40) || (local_14a != 4)) goto LAB_100121a3;
            if ((uVar4 != 0xe40000) && (uVar4 != 0xa40000)) goto LAB_10012173;
            iVar8 = (uint)(bVar9 & 1U - ((local_28 & 0xf000000) != 0)) << 8;
LAB_1001219e:
            local_12 = (char)((uint)iVar8 >> 8);
          }
          bVar11 = (&DAT_100af66b)[local_20];
          if ((&DAT_100af66a)[local_20] != '\0') {
            bVar11 = bVar11 & (byte)local_70;
          }
          uVar7 = CONCAT31(0xff00,bVar11) & 0xffffff08;
          uVar16 = CONCAT31((int3)((uint)iVar8 >> 8),bVar11) & 0xffffff04;
          uVar17 = CONCAT31((int3)(uVar16 >> 8),bVar11) & 0xffffff02;
          bVar10 = (byte)(uVar17 >> 8);
          bVar9 = 0;
          bVar11 = -((char)uVar7 != '\0') & '\x01' << (sbyte)(uVar4 >> 0x16) |
                   -((char)uVar16 != '\0') & '\x01' << ((byte)(uVar4 >> 0x14) & 3) |
                   -((char)uVar17 != '\0') & '\x01' << ((byte)(uVar4 >> 0x12) & 3) |
                   -((bVar11 & 1) != 0) & '\x01' << ((byte)(uVar4 >> 0x10) & 3);
          uVar16 = CONCAT31((int3)(uVar7 >> 8),bVar11);
          if (local_48 == (uint *)0x1) {
            local_270[local_c] = local_270[local_c] | bVar11;
LAB_100122a9:
            bVar9 = 0xf;
          }
          else {
            if (local_48 == (uint *)0x2) {
              abStack_238[local_c] = abStack_238[local_c] | bVar11;
              goto LAB_100122a9;
            }
            if (local_48 == (uint *)&DAT_00000004) {
              bVar9 = local_266[local_c];
            }
            else if (local_48 == (uint *)&DAT_00000008) {
              bVar9 = abStack_23e[local_c];
              bVar10 = bVar10 & acStack_148[local_c] == '\0';
            }
            else if (local_48 == (uint *)&DAT_00000010) {
              abStack_246[local_c] = abStack_246[local_c] | bVar11;
              goto LAB_100122a9;
            }
          }
          bVar10 = bVar10 & (bVar9 & bVar11) == bVar11;
          *(byte *)((int)&uStack_78 + local_3c + 1) = bVar11;
        }
        local_61 = 0;
        uVar4 = local_28 & 0xf000000;
        local_60 = 0;
        local_5f = 0;
        local_5e = 0;
        local_5d = 0;
        local_6c = 0x1010101;
        local_68 = 0x1010101;
        local_64 = 0x101;
        local_62 = 1;
        uVar12 = (uint3)(uVar16 >> 8);
        uVar16 = CONCAT31(uVar12,*(byte *)((int)&local_6c + (uVar4 >> 0x18)) & bVar10);
        if ((((uVar4 != 0) && (uVar4 != 0x4000000)) && (local_12 == '\0')) &&
           ((&DAT_100af668)[local_20] == '\0')) {
          uVar16 = (uint)uVar12 << 8;
        }
        uVar4 = (uint)local_14a << 8;
        local_30 = local_30 + 1;
      } while ((char)uVar16 != '\0');
      local_c = uVar16;
    }
    uVar17 = local_c;
    uVar16 = local_10;
    uVar4 = local_4c;
    if (local_2c == 4) {
      local_266[local_10] = local_266[local_10] | (byte)local_70;
    }
    else if (local_2c == 8) {
      if (((&DAT_100af668)[local_20] != '\0') && (acStack_148[local_10] != '\0')) {
        acStack_148[local_10] = '\0';
        abStack_23e[uVar16] = 0;
      }
      abStack_23e[uVar16] = abStack_23e[uVar16] | (byte)local_70;
    }
    if (local_24 == 0x40000000) {
      local_19c[local_bf] = (int)local_80 - (int)local_84 >> 2;
      uVar16 = local_b4 & 0xf0000;
      if (uVar16 == 0) {
        uVar16 = 0xf0000;
LAB_100123ca:
        if (((uVar4 & 0x80000) == 0) && (uVar16 == 0x80000)) goto LAB_100123d2;
        bVar11 = 0;
      }
      else {
        if (((local_b4 & 0x80000) != 0) || (uVar4 != 0x80000)) goto LAB_100123ca;
LAB_100123d2:
        bVar11 = 1;
      }
      uVar17 = CONCAT31((int3)(uVar17 >> 8),(byte)uVar17 & bVar11);
      local_c = uVar17;
      cVar3 = FUN_10011c07((int)&local_7c,(char *)&local_a4);
      local_3c = CONCAT31((int3)((uint)extraout_ECX >> 8),cVar3);
      uVar7 = local_3c;
      uVar16 = extraout_EDX;
      if (cVar3 != '\0') {
        cVar3 = FUN_10011c07((int)&local_a4,(char *)&local_7c);
        uVar7 = local_3c & 0xff;
        uVar16 = extraout_EDX_00;
        if (cVar3 != '\0') {
          uVar7 = 2;
        }
      }
      abStack_15c[local_bf] = (char)uVar7 << 4 | (byte)local_98;
      local_bf = local_bf + 1;
    }
    bVar11 = (byte)uVar17;
    uVar12 = (uint3)(uVar17 >> 8);
    if (local_44 < 0x48) {
      if (local_44 == 0x47) {
        if ((local_bc == 0x47) || (local_bc == 0x49)) {
          bVar10 = 0;
        }
        else {
          bVar10 = 1;
        }
        uVar4 = puVar13[2];
        abStack_23e[local_10] = 0xf;
        abStack_246[local_10] = 0xf;
        local_c = CONCAT31(uVar12,bVar11 & -((uVar4 & 0x1fff) < local_10) & bVar10);
        local_94 = '\x01';
      }
      else {
        if (0x12 < local_44) {
          if (local_44 != 0x40) {
            if (local_44 == 0x41) {
              abStack_23e[local_10] = 0xf;
              abStack_246[local_10] = 0xf;
              acStack_148[local_10] = '\x01';
            }
            else {
              if (local_44 != 0x42) {
                if ((local_44 != 0x43) && (local_44 != 0x44)) {
                  if ((local_44 == 0x45) || (local_44 == 0x46)) goto switchD_1001273a_caseD_53;
                  goto switchD_1001273a_caseD_4b;
                }
                bVar11 = (puVar13[2] & 0x1fff) < local_10 & bVar11;
                if (((local_14a == 0) || (bVar10 = bVar11, local_14a == 1)) &&
                   (bVar10 = 0, (puVar13[2] & 0xf000000) == 0)) {
                  bVar10 = bVar11;
                }
                abStack_23e[local_10] = 0xf;
                abStack_246[local_10] = 0xf;
                local_1a4 = local_1a4 | 1 << (local_10 & 0x1f);
                bVar11 = 0;
                if (local_94 == '\0') {
                  bVar11 = bVar10;
                }
                local_c = CONCAT31((int3)(uVar16 >> 8),bVar11);
                goto LAB_100124b7;
              }
              if ((local_14a != 4) && (abStack_23e[local_10] = 0xf, local_14a == 0)) {
                local_c2 = local_c2 - 1;
              }
              abStack_246[local_10] = 0xf;
              local_1a4 = local_1a4 | 1 << (local_10 & 0x1f);
            }
            goto switchD_1001273a_caseD_58;
          }
          if (local_14a == 4) {
            uVar16 = puVar13[2] & 0xf000000;
            if (((uVar4 == 0x70000) && (uVar16 == 0)) ||
               ((uVar4 == 0x30000 && (uVar16 == 0xa000000)))) {
              local_c = CONCAT31(uVar12,1);
            }
            else {
              local_c = (uint)uVar12 << 8;
            }
            local_266[local_10] = local_266[local_10] & (uVar16 != 0xa000000) * '\x04' + 3U;
          }
          else {
            abStack_23e[local_10] = 0xf;
          }
          abStack_246[local_10] = 0xf;
          local_c = CONCAT31((int3)(local_c >> 8),(byte)local_c & local_94 == '\0');
LAB_100124b7:
          uVar4 = local_c;
          goto LAB_100124ce;
        }
        if (((((local_44 == 0x12) || (local_44 == 1)) || (local_44 == 2)) ||
            ((local_44 == 3 || (local_44 == 4)))) || ((local_44 == 5 || (local_44 == 8))))
        goto switchD_1001273a_caseD_58;
        if (local_44 == 9) {
          bVar11 = local_24 == 0 & bVar11;
          if ((local_14a == 2) || (local_14a == 3)) {
            local_c1 = CONCAT11(local_c1._1_1_,(byte)local_c1 + '\x01');
            if (((local_40 & 0x70000000) == (puVar13[2] & 0x70000000)) ||
               ((local_40 & 0x70000000) == (puVar13[3] & 0x70000000))) {
              bVar11 = 0;
            }
          }
          local_c = 0;
          if (local_94 == '\0') {
            local_c = (uint)bVar11;
          }
          goto LAB_100124b7;
        }
      }
      goto switchD_1001273a_caseD_4b;
    }
    switch(local_44) {
    case 0x48:
      uVar4 = puVar13[2];
      uVar16 = local_ac & 0x1fff;
      uVar17 = local_b4 & 0x1fff;
      bVar19 = local_bc == 0x47;
      abStack_23e[local_10] = 0xf;
      bVar19 = bVar19 && ((uVar4 & 0x1fff) == uVar16 && local_10 - 1 == uVar17);
      abStack_246[local_10] = 0xf;
      local_1a4 = local_1a4 | 1 << (local_10 & 0x1f);
      goto LAB_100127a0;
    case 0x49:
      if (local_bc == 0x47) {
LAB_1001281d:
        uVar4 = local_bc & 0xffffff00;
        local_c = uVar4;
      }
      else {
        if (local_bc == 0x49) {
          if ((local_b8 == 0x47) || (local_b8 == 0x49)) goto LAB_1001281d;
          bVar19 = (puVar13[2] & 0x1fff) == (local_ac & 0x1fff) &&
                   local_10 - 1 == (local_b4 & 0x1fff);
        }
        else {
          bVar19 = (puVar13[2] & 0x1fff) < local_10;
        }
        uVar4 = CONCAT31(uVar12,bVar11 & bVar19);
        local_c = uVar4;
      }
      local_c = uVar4;
      abStack_23e[local_10] = 0xf;
      abStack_246[local_10] = 0xf;
      local_94 = '\x01';
      goto LAB_100124ce;
    case 0x4a:
    case 0x4c:
    case 0x4d:
      if ((local_bc == 0x49) && (local_b8 == 0x49)) {
        bVar11 = 1;
      }
      else {
        bVar11 = 0;
      }
      uVar4 = puVar13[2];
      uVar16 = local_ac & 0x1fff;
      uVar17 = local_b4 & 0x1fff;
      abStack_23e[local_10] = 0xf;
      abStack_246[local_10] = 0xf;
      bVar10 = 0;
      if (local_10 - 1 == uVar17) {
        bVar10 = bVar11;
      }
      uVar4 = CONCAT31((int3)(local_c >> 8),(byte)local_c & (uVar4 & 0x1fff) == uVar16 & bVar10);
      local_1a4 = local_1a4 | 1 << (local_10 & 0x1f);
      goto LAB_100128ae;
    case 0x50:
      if (local_14a != 4) {
        if (((puVar13[2] & 0x1fff) == 0) && ((puVar13[2] & 0xff0000) == 0xff0000)) {
          bVar10 = 1;
        }
        else {
          bVar10 = 0;
        }
        uVar17 = CONCAT31(uVar12,bVar11 & bVar10);
      }
    case 0x58:
switchD_1001273a_caseD_58:
      local_c = CONCAT31((int3)(uVar17 >> 8),(byte)uVar17 & local_94 == '\0');
LAB_100124c8:
      break;
    case 0x52:
      abStack_23e[local_10] = abStack_23e[local_10] | 7;
      goto LAB_10012573;
    case 0x53:
switchD_1001273a_caseD_53:
      abStack_23e[local_10] = 0xf;
LAB_10012573:
      abStack_246[local_10] = 0xf;
      local_1a4 = local_1a4 | 1 << (local_10 & 0x1f);
LAB_1001258a:
      local_c = CONCAT31(uVar12,bVar11 & ((puVar13[2] & 0x1fff) < local_10 && local_94 == '\0'));
      goto LAB_100124c8;
    case 0x54:
      uVar4 = puVar13[2];
      uVar16 = local_ac & 0x1fff;
      uVar17 = local_b4 & 0x1fff;
      bVar19 = local_bc == 0x47;
      abStack_246[local_10] = 0xf;
      bVar19 = bVar19 && ((uVar4 & 0x1fff) == uVar16 && local_10 - 1 == uVar17);
      acStack_148[local_10] = '\x01';
      local_230 = 1;
LAB_100127a0:
      local_c = CONCAT31(uVar12,bVar11 & bVar19);
      local_94 = '\0';
      break;
    case 0x55:
      abStack_23e[local_10] = 0xf;
      abStack_246[local_10] = 0xf;
      goto LAB_1001258a;
    case 0x56:
      if ((local_bc == 0x49) && (local_b8 == 0x49)) {
        bVar11 = 1;
      }
      else {
        bVar11 = 0;
      }
      uVar4 = puVar13[2];
      uVar16 = local_ac & 0x1fff;
      uVar17 = local_b4 & 0x1fff;
      abStack_23e[local_10] = 0xf;
      abStack_246[local_10] = 0xf;
      bVar10 = 0;
      if (local_10 - 1 == uVar17) {
        bVar10 = bVar11;
      }
      uVar4 = CONCAT31((int3)(local_c >> 8),(byte)local_c & (uVar4 & 0x1fff) == uVar16 & bVar10);
LAB_100128ae:
      local_c = uVar4;
      local_94 = '\0';
      puVar13 = local_18;
      goto LAB_100124ce;
    case 0x57:
      local_230 = 1;
      local_c = CONCAT31(uVar12,bVar11 & (local_10 == 5 && local_94 == '\0'));
      break;
    case 0x59:
      local_c1 = CONCAT11(local_c1._1_1_,(byte)local_c1 + '\x01');
      local_c2 = local_c2 + 1;
      uVar4 = CONCAT31((int3)(local_c >> 8),
                       (byte)local_c & (local_94 == '\0' && (local_e9 == '\0' && uVar4 == 0x30000)))
      ;
      local_c = uVar4;
      local_e9 = local_e9 + '\x01';
      goto LAB_100124ce;
    }
switchD_1001273a_caseD_4b:
    uVar4 = local_c;
LAB_100124ce:
    uVar16 = 0;
    local_80 = puVar13;
    puVar6 = puVar13;
    do {
      if (local_34[uVar16] == 0) break;
      puVar6 = puVar6 + 1;
      uVar16 = uVar16 + 1;
    } while (uVar16 < 3);
    puVar6 = puVar6 + 2;
    local_18 = puVar6;
    local_98 = (int)puVar6 - (int)puVar13 >> 2;
    local_a4 = local_7c;
    uStack_a0 = uStack_78;
    uStack_9c = uStack_74;
    if ((char)uVar4 != '\0') {
      acStack_142[local_44] = acStack_142[local_44] + '\x01';
    }
LAB_10012515:
    if ((local_44 != 0xfffe) && (local_44 != 0xffff)) {
LAB_10012bbb:
      local_b8 = local_bc;
      local_b0 = local_b4;
      local_a8 = local_ac;
      local_bc = *local_88;
      local_b4 = *local_1c;
      local_ac = local_88[2];
    }
LAB_10012c01:
    cVar3 = (char)local_c;
    puVar13 = puVar6;
    uVar2 = local_c1;
  } while( true );
}

