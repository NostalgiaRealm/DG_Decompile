/*
 * FUN_10015bc2 at 10015bc2
 * byte __fastcall FUN_10015bc2(int * param_1, undefined4 * param_2, int * param_3)
 * Address ranges: 10015bc2-10016b72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte __fastcall FUN_10015bc2(int *param_1,undefined4 *param_2,int *param_3)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  uint uVar6;
  uint *puVar7;
  byte bVar9;
  uint uVar8;
  byte bVar10;
  uint extraout_EDX;
  uint extraout_EDX_00;
  undefined3 uVar11;
  byte bVar12;
  uint3 uVar13;
  uint *puVar14;
  int *piVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  byte local_13b8 [10];
  byte local_13ae [32];
  byte abStack_138e [8];
  byte abStack_1386 [6];
  byte abStack_1380 [760];
  undefined1 local_1088;
  undefined1 auStack_1087 [227];
  uint auStack_fa4 [896];
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
  undefined4 *local_90;
  uint *local_8c;
  int *local_88;
  uint *local_84;
  uint local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  byte local_40 [4];
  uint local_3c;
  uint local_38;
  uint *local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  uint *local_20;
  char local_19;
  uint local_18;
  byte local_11;
  uint *local_10;
  uint local_c;
  undefined4 uStack_8;
  
  uStack_8 = 0x10015bcf;
  local_90 = param_2;
  FUN_100cfed0((int *)local_13b8,0,0x1328);
  iVar3 = *param_1;
  local_88 = param_1;
  puVar14 = (uint *)(param_1 + 1);
  local_84 = (uint *)0x0;
  local_10 = puVar14;
  if ((((iVar3 == -0xff00) || (iVar3 == -0xfeff)) || (iVar3 == -0xfefe)) ||
     ((iVar3 == -0xfefd || (iVar3 == -0xfefc)))) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  cVar2 = (char)uVar8;
  local_14a = (byte)iVar3;
  local_14b = (undefined1)((uint)iVar3 >> 8);
  piVar15 = local_19c;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar15 = -1;
    piVar15 = piVar15 + 1;
  }
  if (iVar3 == -0xfefc) {
    local_30 = FUN_10015b22(puVar14);
  }
  else {
    local_30 = 0;
  }
  local_19 = '\0';
  uVar1 = local_c1;
  do {
    bVar12 = 0;
    local_c1 = uVar1;
    if ((cVar2 == '\0') || (bVar12 = (byte)uVar8, local_19 != '\0')) {
      uVar16 = (uint)local_14c;
      uVar8 = 0;
      do {
        if (abStack_138e[uVar8] != 0) {
          uVar16 = uVar16 & 0xff | 1 << (uVar8 & 0x1f);
          local_14c = (byte)uVar16;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < 8);
      bVar12 = bVar12 & (local_13ae[0] & 0xf) == 0xf;
      if (bVar12 != 0) {
        FUN_100cff00(local_90,(undefined4 *)local_13b8,0x1270);
        *param_3 = (int)puVar14 - (int)local_88 >> 2;
      }
      return bVar12;
    }
    uVar16 = *puVar14;
    local_8c = puVar14;
    local_28 = uVar16 & 0xffff0000;
    local_78 = 0;
    uVar5 = uVar16 & 0xffff;
    local_4c = uVar5;
    uStack_74 = 0;
    uVar8 = (~(byte)(uVar16 >> 0x1f) & bVar12) & 0xffffff01;
    local_c = uVar8;
    uStack_70 = 0;
    if (uVar5 == 0) {
      if ((local_28 == 0) && (local_94 == '\0')) {
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
      }
      puVar14 = puVar14 + 1;
      local_20 = puVar14;
LAB_10016ab9:
      local_10 = puVar14;
      puVar7 = local_20;
      goto LAB_10016abf;
    }
    if (uVar5 == 0x51) {
      local_34 = puVar14 + 1;
      bVar12 = (byte)(*local_34 >> 0x1f) & (byte)uVar8;
      local_44 = (uint)bVar12;
      if (local_c2 == 0 && local_28 == 0) {
        puVar7 = local_34;
        uVar8 = (uint)bVar12;
        if (bVar12 != 0) {
          uVar16 = *local_34 & 0x7ff;
          bVar10 = local_c2;
          if ((*local_34 & 0x7f8) == 0) {
            bVar10 = bVar12;
          }
          if (((*local_34 & 0xf0000) == 0) || (local_11 = 0, (*local_34 & 0xf0000) == 0xf0000)) {
            local_11 = 1;
          }
          bVar12 = 0;
          if ((*local_34 & 0xf00000) == 0) {
            bVar12 = local_11;
          }
          local_20 = local_34;
          bVar10 = bVar10 & ((byte)(*local_34 >> 0x1c) & 7 | (byte)(*local_34 >> 8) & 0x18) == 2 &
                            bVar12;
          uVar8 = (uint)bVar10;
          puVar7 = local_20;
          if (bVar10 != 0) {
            uVar5 = puVar14[2];
            auStack_1087[uVar16] = 1;
            auStack_fa4[uVar16 * 4] = uVar5;
            auStack_fa4[uVar16 * 4 + 1] = puVar14[3];
            auStack_fa4[uVar16 * 4 + 2] = puVar14[4];
            puVar7 = puVar14 + 5;
            puVar14 = puVar14 + 6;
            auStack_fa4[uVar16 * 4 + 3] = *puVar7;
            goto LAB_10016ab9;
          }
        }
      }
      else {
        local_20 = local_34;
        puVar7 = local_20;
        uVar8 = 0;
      }
      goto LAB_10016abf;
    }
    if (uVar5 == 0xfffd) {
      if ((local_14a != 4) || (local_30 != 0 || local_28 != 0)) {
        uVar8 = 0;
      }
      local_c = uVar8;
      uVar16 = 0;
      do {
        local_13ae[uVar16] = local_13ae[uVar16] & 7;
        uVar16 = uVar16 + 1;
      } while (uVar16 < 6);
      puVar14 = puVar14 + 1;
      local_30 = local_30 + 1;
      local_c1 = 0;
      local_c2 = 0;
      local_10 = puVar14;
      puVar7 = puVar14;
      goto LAB_10016abf;
    }
    if (uVar5 == 0xfffe) {
      puVar14 = puVar14 + (uVar16 >> 0x10) + 1;
      local_10 = puVar14;
      goto LAB_10016b05;
    }
    if (uVar5 == 0xffff) {
      if ((local_28 == 0) && (local_94 == '\0')) {
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
      }
      puVar14 = puVar14 + 1;
      local_10 = puVar14;
      local_19 = '\x01';
      goto LAB_10016b05;
    }
    local_20 = puVar14 + 1;
    local_48 = puVar14[1];
    iVar3 = (int)(char)(&DAT_100d4db0)[uVar5];
    local_c = (uint)(iVar3 != -1);
    if (iVar3 == -1) goto LAB_10016415;
    local_2c = (uint)local_14a;
    local_24 = iVar3 * 0x1c;
    local_5c = 0x8040201;
    local_58 = 0x10;
    bVar18 = (*(byte *)((int)&local_5c + local_2c) & (&DAT_100d17ac)[local_24]) != 0;
    if (local_28 == 0) {
      local_c1._0_1_ = (byte)uVar1;
      local_c1._1_1_ = (byte)((ushort)uVar1 >> 8);
      if ((&DAT_100d17a8)[local_24] == '\0') {
        cVar2 = (&DAT_100d17a9)[local_24];
        if (cVar2 != '\0') {
          bVar17 = local_c1._1_1_ < (byte)(&DAT_100d1b0d)[local_2c * 3];
          goto LAB_10015d7b;
        }
      }
      else {
        cVar2 = (&DAT_100d17a9)[local_24];
        bVar17 = (byte)local_c1 < (byte)(&DAT_100d1b0c)[local_2c * 3];
LAB_10015d7b:
        bVar18 = (bool)(-bVar17 & bVar18);
      }
      bVar18 = (bool)(-(local_c2 < (byte)(&DAT_100d1b0e)[local_2c * 3]) & bVar18);
      if ((&DAT_100d17a8)[local_24] == '\0') {
        if (cVar2 != '\0') {
          local_c1 = CONCAT11(local_c1._1_1_ + 1,(byte)local_c1);
          local_1a0 = local_1a0 + 1;
          bVar18 = (bool)(bVar18 & (byte)local_c1 == 0);
          uVar1 = local_c1;
        }
      }
      else {
        local_c1 = CONCAT11(local_c1._1_1_,(byte)local_c1 + 1);
        uVar1 = local_c1;
      }
      local_c1 = uVar1;
      local_c2 = local_c2 + 1;
    }
    if (((local_48 & 0xf00000) == 0) || ((local_48 & 0xf00000) == 0x100000)) {
      bVar12 = 1;
    }
    else {
      bVar12 = 0;
    }
    local_38 = 0;
    local_54 = 0x18020104;
    local_50 = 0;
    local_18 = local_48 & 0x7ff;
    uVar16 = (local_48 >> 0x14 & 0x700 | local_48 & 0x1800) >> 8;
    uVar8 = local_48 >> 0x18 & 0xf;
    bVar12 = -(local_18 < (byte)(&DAT_100d1b1c)[local_2c + uVar16 * 5]) & bVar12 & bVar18;
    local_c = (uint)bVar12;
    if ((((uVar8 == 0) || (uVar8 == 1)) || (uVar8 == 2)) ||
       (((uVar8 == 3 || (uVar8 == 0xd)) || ((uVar8 == 0xe || (uVar8 == 0xf)))))) {
      if (bVar12 != 0) {
        bVar10 = *(byte *)((int)&local_54 + uVar16);
        local_38 = (uint)bVar10;
        local_78._0_2_ = CONCAT11((char)local_18,bVar10);
        local_78 = (uint)(ushort)local_78;
        if ((bVar10 == 0x18) &&
           ((abStack_1386[local_18] != 0 || (local_38 = 0x10, (&DAT_100d17a8)[local_24] != '\0'))))
        {
          local_38 = 8;
        }
        local_c = (uint)(bVar12 & -(((&DAT_100d17ad)[local_24 + local_2c] & (byte)local_38) != 0));
      }
    }
    else {
      local_c = 0;
      local_c = 0;
    }
    local_3c = local_2c + local_24;
    uVar8 = local_48 & 0xf0000;
    if (local_14a != 4) {
      if ((((uVar8 == 0x80000) || (uVar8 == 0x70000)) || (uVar8 == 0xf0000)) || (uVar8 == 0)) {
        bVar12 = 1;
      }
      else {
        bVar12 = 0;
      }
      local_c = (uint)((byte)local_c & bVar12);
    }
    if ((&DAT_100d17a9)[local_24] != '\0') {
      if (local_38 == 0x10) {
        bVar12 = 0;
        if (uVar8 == 0xf0000) {
          bVar12 = (byte)local_c;
        }
        local_c = (uint)bVar12;
      }
    }
    uVar16 = local_c;
    local_80 = 0xf0000;
    if (uVar8 != 0) {
      local_80 = uVar8;
    }
    local_34 = (uint *)(local_80 >> 0x10);
    local_78 = (uint)CONCAT12((char)(local_80 >> 0x10),(ushort)local_78);
    local_40[0] = (&DAT_100d17b2)[local_30 + local_3c];
    local_40[1] = (&DAT_100d17b8)[local_30 + local_3c];
    local_40[2] = (&DAT_100d17be)[local_30 + local_3c];
    local_3c = 0;
    uVar8 = local_80;
    if ((char)local_c != '\0') {
      do {
        if ((2 < local_3c) || (bVar12 = local_40[local_3c], bVar12 == 0)) break;
        local_2c = puVar14[local_3c + 2];
        uVar8 = (local_2c >> 0x14 & 0x700 | local_2c & 0x1800) >> 8;
        local_c = local_2c & 0x7ff;
        local_11 = 0;
        bVar9 = -((local_2c & 0x7ff) < (uint)(byte)(&DAT_100d1b1c)[(uint)local_14a + uVar8 * 5]) &
                (byte)(local_2c >> 0x1f) & (byte)uVar16;
        bVar10 = 0;
        if (bVar9 != 0) {
          uVar16 = local_3c * 3;
          bVar10 = *(byte *)((int)&local_54 + uVar8);
          local_7c = (uint)bVar10;
          local_44 = uVar16;
          *(byte *)((int)&local_78 + uVar16 + 3) = bVar10;
          uVar8 = local_c;
          *(char *)((int)&uStack_74 + uVar16) = (char)local_c;
          if (local_7c == 0x18) {
            local_7c = 0x10;
            if (abStack_1386[uVar8] != 0) {
              local_7c = 8;
            }
          }
          uVar8 = local_2c & 0xff0000;
          bVar9 = -((bVar12 & (byte)local_7c) != 0) & bVar9;
          iVar3 = (uint)bVar9 << 8;
          if (local_4c == 0x42) {
            if (local_14a == 4) {
              if ((uVar8 == 0xe40000) || (uVar8 == 0xa40000)) {
                if (((local_2c & 0xf000000) == 0) || ((local_2c & 0xf000000) == 0x9000000))
                goto LAB_100160a1;
              }
              else {
LAB_10016076:
                if ((uVar8 == 0xf40000) &&
                   (((local_2c & 0xf000000) == 0 || ((local_2c & 0xf000000) == 0xa000000))))
                goto LAB_100160a1;
              }
              iVar3 = 0;
              goto LAB_100160a1;
            }
LAB_100160a6:
            if (((((uVar8 != 0xff0000) && (uVar8 != 0xe40000)) &&
                 ((uVar8 != 0xaa0000 || (local_14a == 0)))) &&
                ((uVar8 != 0x550000 || (local_14a != 4)))) && ((uVar8 != 0 || (local_14a != 4)))) {
              iVar3 = 0;
            }
          }
          else {
            if ((local_4c != 0x40) || (local_14a != 4)) goto LAB_100160a6;
            if ((uVar8 != 0xe40000) && (uVar8 != 0xa40000)) goto LAB_10016076;
            iVar3 = (uint)(bVar9 & 1U - ((local_2c & 0xf000000) != 0)) << 8;
LAB_100160a1:
            local_11 = (byte)((uint)iVar3 >> 8);
          }
          bVar12 = (&DAT_100d17ab)[local_24];
          if ((&DAT_100d17aa)[local_24] != '\0') {
            bVar12 = bVar12 & (byte)local_34;
          }
          uVar6 = CONCAT31(0xff00,bVar12) & 0xffffff08;
          uVar16 = CONCAT31((int3)((uint)iVar3 >> 8),bVar12) & 0xffffff04;
          uVar5 = CONCAT31((int3)(uVar16 >> 8),bVar12) & 0xffffff02;
          bVar10 = (byte)(uVar5 >> 8);
          bVar9 = 0;
          bVar12 = -((char)uVar6 != '\0') & '\x01' << (sbyte)(uVar8 >> 0x16) |
                   -((char)uVar16 != '\0') & '\x01' << ((byte)(uVar8 >> 0x14) & 3) |
                   -((char)uVar5 != '\0') & '\x01' << ((byte)(uVar8 >> 0x12) & 3) |
                   -((bVar12 & 1) != 0) & '\x01' << ((byte)(uVar8 >> 0x10) & 3);
          uVar16 = CONCAT31((int3)(uVar6 >> 8),bVar12);
          if (local_7c == 1) {
            local_13b8[local_c] = local_13b8[local_c] | bVar12;
LAB_100161ac:
            bVar9 = 0xf;
          }
          else {
            if (local_7c == 2) {
              abStack_1380[local_c] = abStack_1380[local_c] | bVar12;
              goto LAB_100161ac;
            }
            if (local_7c == 4) {
              bVar9 = local_13ae[local_c];
            }
            else if (local_7c == 8) {
              bVar9 = abStack_1386[local_c];
              bVar10 = bVar10 & acStack_148[local_c] == '\0';
            }
            else if (local_7c == 0x10) {
              abStack_138e[local_c] = abStack_138e[local_c] | bVar12;
              goto LAB_100161ac;
            }
          }
          bVar10 = bVar10 & (bVar9 & bVar12) == bVar12;
          *(byte *)((int)&uStack_74 + local_44 + 1) = bVar12;
        }
        local_61 = 0;
        uVar8 = local_2c & 0xf000000;
        local_60 = 0;
        local_5f = 0;
        local_5e = 0;
        local_5d = 0;
        local_6c = 0x1010101;
        local_68 = 0x1010101;
        local_64 = 0x101;
        local_62 = 1;
        uVar13 = (uint3)(uVar16 >> 8);
        uVar16 = CONCAT31(uVar13,*(byte *)((int)&local_6c + (uVar8 >> 0x18)) & bVar10);
        if ((((uVar8 != 0) && (uVar8 != 0x4000000)) && (local_11 == 0)) &&
           ((&DAT_100d17a8)[local_24] == '\0')) {
          uVar16 = (uint)uVar13 << 8;
        }
        local_3c = local_3c + 1;
      } while ((char)uVar16 != '\0');
      local_c = uVar16;
      uVar8 = local_80;
    }
    uVar5 = local_c;
    uVar16 = local_18;
    if (local_38 == 4) {
      local_13ae[local_18] = local_13ae[local_18] | (byte)local_34;
    }
    else if (local_38 == 8) {
      if (((&DAT_100d17a8)[local_24] != '\0') && (acStack_148[local_18] != '\0')) {
        acStack_148[local_18] = '\0';
        abStack_1386[uVar16] = 0;
      }
      abStack_1386[uVar16] = abStack_1386[uVar16] | (byte)local_34;
    }
    if (local_28 == 0x40000000) {
      local_19c[local_bf] = (int)local_84 - (int)local_88 >> 2;
      uVar16 = local_b4 & 0xf0000;
      if (uVar16 == 0) {
        uVar16 = 0xf0000;
LAB_100162ca:
        if (((uVar8 & 0x80000) == 0) && (uVar16 == 0x80000)) goto LAB_100162d2;
        bVar12 = 0;
      }
      else {
        if (((local_b4 & 0x80000) != 0) || (uVar8 != 0x80000)) goto LAB_100162ca;
LAB_100162d2:
        bVar12 = 1;
      }
      uVar5 = CONCAT31((int3)(uVar5 >> 8),(byte)uVar5 & bVar12);
      local_c = uVar5;
      cVar2 = FUN_10015aea((int)&local_78,(char *)&local_a4);
      local_44 = CONCAT31((int3)((uint)extraout_ECX >> 8),cVar2);
      uVar6 = local_44;
      uVar16 = extraout_EDX;
      if (cVar2 != '\0') {
        cVar2 = FUN_10015aea((int)&local_a4,(char *)&local_78);
        uVar6 = local_44 & 0xff;
        uVar16 = extraout_EDX_00;
        if (cVar2 != '\0') {
          uVar6 = 2;
        }
      }
      abStack_15c[local_bf] = (char)uVar6 << 4 | (byte)local_98;
      local_bf = local_bf + 1;
    }
    bVar12 = (byte)uVar5;
    uVar13 = (uint3)(uVar5 >> 8);
    local_84 = local_10;
    if (local_4c < 0x48) {
      if (local_4c != 0x47) {
        if (local_4c < 0x13) {
          if ((((local_4c == 0x12) || (local_4c == 1)) || (local_4c == 2)) ||
             (((local_4c == 3 || (local_4c == 4)) || ((local_4c == 5 || (local_4c == 8))))))
          goto switchD_10016650_caseD_58;
          if (local_4c != 9) goto switchD_10016650_caseD_4b;
          bVar12 = local_28 == 0 & bVar12;
          if ((local_14a == 2) || (local_14a == 3)) {
            local_c1 = CONCAT11(local_c1._1_1_,(byte)local_c1 + '\x01');
            if (((local_48 & 0x70001800) == (puVar14[2] & 0x70001800)) ||
               ((local_48 & 0x70001800) == (puVar14[3] & 0x70001800))) {
              bVar12 = 0;
            }
          }
          local_c = 0;
          if (local_94 == '\0') {
            local_c = (uint)bVar12;
          }
          local_84 = puVar14;
          goto LAB_100163ce;
        }
        if (local_4c != 0x40) {
          if (local_4c == 0x41) {
            abStack_1386[local_18] = 0xf;
            abStack_138e[local_18] = 0xf;
            acStack_148[local_18] = '\x01';
          }
          else {
            if (local_4c != 0x42) {
              if ((local_4c != 0x43) && (local_4c != 0x44)) {
                if ((local_4c == 0x45) || (local_4c == 0x46)) goto switchD_10016650_caseD_53;
                goto switchD_10016650_caseD_4b;
              }
              bVar12 = (puVar14[2] & 0x7ff) < local_18 & bVar12;
              if (((local_14a == 0) || (bVar10 = bVar12, local_14a == 1)) &&
                 (bVar10 = 0, (puVar14[2] & 0xf000000) == 0)) {
                bVar10 = bVar12;
              }
              abStack_1386[local_18] = 0xf;
              abStack_138e[local_18] = 0xf;
              local_1a4 = local_1a4 | 1 << (local_18 & 0x1f);
              bVar12 = 0;
              if (local_94 == '\0') {
                bVar12 = bVar10;
              }
              local_c = CONCAT31((int3)(uVar16 >> 8),bVar12);
              goto LAB_100165f4;
            }
            if ((local_14a != 4) && (abStack_1386[local_18] = 0xf, local_14a == 0)) {
              local_c2 = local_c2 - 1;
            }
            abStack_138e[local_18] = 0xf;
            local_1a4 = local_1a4 | 1 << (local_18 & 0x1f);
          }
          local_c = CONCAT31(uVar13,bVar12 & local_94 == '\0');
          goto LAB_100164a8;
        }
        if (local_14a == 4) {
          uVar16 = puVar14[2] & 0xf000000;
          if (((uVar8 == 0x70000) && (uVar16 == 0)) || ((uVar8 == 0x30000 && (uVar16 == 0xa000000)))
             ) {
            local_c = CONCAT31(uVar13,1);
          }
          else {
            local_c = (uint)uVar13 << 8;
          }
          local_13ae[local_18] = local_13ae[local_18] & (uVar16 != 0xa000000) * '\x04' + 3U;
        }
        else {
          abStack_1386[local_18] = 0xf;
        }
        abStack_138e[local_18] = 0xf;
        local_c = CONCAT31((int3)(local_c >> 8),(byte)local_c & local_94 == '\0');
        goto LAB_100165f4;
      }
      if ((local_bc == 0x47) || (local_bc == 0x49)) {
        bVar10 = 0;
      }
      else {
        bVar10 = 1;
      }
      uVar8 = puVar14[2];
      abStack_1386[local_18] = 0xf;
      abStack_138e[local_18] = 0xf;
      local_c = CONCAT31(uVar13,bVar12 & -((uVar8 & 0x7ff) < local_18) & bVar10);
      local_94 = '\x01';
      goto LAB_100164a8;
    }
    uVar11 = (undefined3)(local_c >> 8);
    switch(local_4c) {
    case 0x48:
      uVar8 = puVar14[2];
      abStack_1386[local_18] = 0xf;
      bVar18 = local_bc == 0x47 &&
               ((uVar8 & 0x7ff) == (local_ac & 0x7ff) && local_18 - 1 == (local_b4 & 0x7ff));
      abStack_138e[local_18] = 0xf;
      local_1a4 = local_1a4 | 1 << (local_18 & 0x1f);
      goto LAB_100166b3;
    case 0x49:
      if (local_bc == 0x47) {
LAB_1001672a:
        local_c = local_bc & 0xffffff00;
      }
      else {
        if (local_bc == 0x49) {
          if ((local_b8 == 0x47) || (local_b8 == 0x49)) goto LAB_1001672a;
          bVar18 = (puVar14[2] & 0x7ff) == (local_ac & 0x7ff) && local_18 - 1 == (local_b4 & 0x7ff);
        }
        else {
          bVar18 = (puVar14[2] & 0x7ff) < local_18;
        }
        local_c = CONCAT31(uVar13,bVar12 & bVar18);
      }
      abStack_1386[local_18] = 0xf;
      abStack_138e[local_18] = 0xf;
      local_94 = '\x01';
      break;
    case 0x4a:
    case 0x4c:
    case 0x4d:
      if ((local_bc == 0x49) && (local_b8 == 0x49)) {
        bVar12 = 1;
      }
      else {
        bVar12 = 0;
      }
      bVar10 = 0;
      if (local_18 - 1 == (local_b4 & 0x7ff)) {
        bVar10 = bVar12;
      }
      abStack_1386[local_18] = 0xf;
      uVar8 = local_10[2];
      abStack_138e[local_18] = 0xf;
      bVar10 = bVar10 & (uVar8 & 0x7ff) == (local_ac & 0x7ff);
      local_1a4 = local_1a4 | 1 << (local_18 & 0x1f);
      goto LAB_100167be;
    default:
      goto switchD_10016650_caseD_4b;
    case 0x50:
      if (local_14a != 4) {
        if (((puVar14[2] & 0x7ff) == 0) && ((puVar14[2] & 0xff0000) == 0xff0000)) {
          bVar10 = 1;
        }
        else {
          bVar10 = 0;
        }
        uVar5 = CONCAT31(uVar13,bVar12 & bVar10);
      }
    case 0x58:
switchD_10016650_caseD_58:
      local_c = CONCAT31((int3)(uVar5 >> 8),(byte)uVar5 & local_94 == '\0');
      goto switchD_10016650_caseD_4b;
    case 0x52:
      abStack_1386[local_18] = abStack_1386[local_18] | 7;
      goto LAB_10016473;
    case 0x53:
switchD_10016650_caseD_53:
      abStack_1386[local_18] = 0xf;
LAB_10016473:
      abStack_138e[local_18] = 0xf;
      local_1a4 = local_1a4 | 1 << (local_18 & 0x1f);
LAB_1001648a:
      bVar18 = (local_10[2] & 0x7ff) < local_18;
LAB_1001649a:
      local_c = CONCAT31(uVar13,bVar12 & bVar18 & local_94 == '\0');
      goto LAB_100164a8;
    case 0x54:
      uVar8 = puVar14[2];
      abStack_138e[local_18] = 0xf;
      bVar18 = local_bc == 0x47 &&
               ((uVar8 & 0x7ff) == (local_ac & 0x7ff) && local_18 - 1 == (local_b4 & 0x7ff));
      acStack_148[local_18] = '\x01';
      local_1088 = 1;
LAB_100166b3:
      local_c = CONCAT31(uVar13,bVar12 & bVar18);
      local_94 = '\0';
LAB_100164a8:
      puVar14 = local_10;
switchD_10016650_caseD_4b:
      local_84 = puVar14;
      break;
    case 0x55:
      abStack_1386[local_18] = 0xf;
      abStack_138e[local_18] = 0xf;
      goto LAB_1001648a;
    case 0x56:
      if ((local_bc == 0x49) && (local_b8 == 0x49)) {
        bVar12 = 1;
      }
      else {
        bVar12 = 0;
      }
      bVar10 = 0;
      if (local_18 - 1 == (local_b4 & 0x7ff)) {
        bVar10 = bVar12;
      }
      abStack_1386[local_18] = 0xf;
      uVar8 = local_10[2];
      abStack_138e[local_18] = 0xf;
      bVar10 = bVar10 & (uVar8 & 0x7ff) == (local_ac & 0x7ff);
LAB_100167be:
      local_c = CONCAT31(uVar11,(byte)local_c & bVar10);
      local_94 = '\0';
LAB_100165f4:
      break;
    case 0x57:
      bVar18 = local_18 == 5;
      local_1088 = 1;
      goto LAB_1001649a;
    case 0x59:
      local_c1 = CONCAT11(local_c1._1_1_,(byte)local_c1 + '\x01');
      local_c2 = local_c2 + 1;
      local_c = CONCAT31(uVar11,(byte)local_c &
                                (local_94 == '\0' && (local_e9 == '\0' && uVar8 == 0x30000)));
      local_e9 = local_e9 + '\x01';
      local_84 = puVar14;
    }
LAB_100163ce:
    uVar5 = local_4c;
    uVar8 = 0;
    puVar14 = local_84;
    do {
      if (local_40[uVar8] == 0) break;
      puVar14 = puVar14 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < 3);
    puVar14 = puVar14 + 2;
    local_10 = puVar14;
    local_98 = (int)puVar14 - (int)local_84 >> 2;
    local_a4 = local_78;
    uStack_a0 = uStack_74;
    uStack_9c = uStack_70;
    if ((char)local_c != '\0') {
      acStack_142[local_4c] = acStack_142[local_4c] + '\x01';
    }
LAB_10016415:
    uVar8 = local_c;
    if ((uVar5 != 0xfffe) && (puVar7 = local_20, uVar5 != 0xffff)) {
LAB_10016abf:
      local_b8 = local_bc;
      local_b0 = local_b4;
      local_a8 = local_ac;
      local_bc = *local_8c;
      local_b4 = *puVar7;
      local_ac = local_8c[2];
    }
LAB_10016b05:
    cVar2 = (char)uVar8;
    uVar1 = local_c1;
  } while( true );
}

