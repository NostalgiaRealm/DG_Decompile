/*
 * FUN_10046bb5 at 10046bb5
 * uint __thiscall FUN_10046bb5(void * this, int * param_1, char param_2, undefined1 * param_3)
 * Address ranges: 10046bb5-10047437
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10046bb5(void *this,int *param_1,char param_2,undefined1 *param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  byte *pbVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float *pfVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  undefined4 extraout_ECX;
  uint uVar19;
  undefined4 *puVar20;
  uint *puVar21;
  int *piVar22;
  undefined4 *puVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  int local_1c0 [16];
  float *local_180;
  undefined4 local_17c;
  undefined4 local_174;
  undefined4 local_170;
  undefined2 local_164;
  undefined2 local_161;
  undefined1 local_15f;
  undefined4 *local_154;
  undefined4 local_150;
  undefined4 *local_14c;
  undefined4 local_144;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int *local_34;
  uint local_30;
  uint *local_2c;
  byte *local_28;
  uint local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  char local_15;
  float *local_14;
  
  local_28 = (byte *)*param_1;
  uVar14 = (uint)*local_28;
  puVar21 = (uint *)(local_28 + 4);
  local_1c = this;
  if (uVar14 == 4) {
    local_24 = 0;
    if (*(short *)(local_28 + 2) != 0) {
      do {
        puVar4 = (undefined4 *)*puVar21;
        puVar20 = (undefined4 *)puVar21[1];
        puVar23 = puVar4;
        for (iVar17 = 0x10; iVar17 != 0; iVar17 = iVar17 + -1) {
          *puVar23 = *puVar20;
          puVar20 = puVar20 + 1;
          puVar23 = puVar23 + 1;
        }
        local_14 = (float *)puVar21;
        FUN_10045e36(local_1c,*puVar21,puVar4);
        puVar21 = puVar21 + 2;
        local_24 = local_24 + 1;
      } while (local_24 < *(ushort *)(local_28 + 2));
    }
  }
  else if (uVar14 == 5) {
    local_24 = 0;
    if (*(short *)(local_28 + 2) != 0) {
      do {
        piVar22 = (int *)*puVar21;
        local_34 = piVar22;
        local_14 = (float *)puVar21;
        piVar18 = FUN_10013790((void *)puVar21[1],local_1c0,puVar21[2]);
        pfVar13 = local_14;
        for (iVar17 = 0x10; iVar17 != 0; iVar17 = iVar17 + -1) {
          *piVar22 = *piVar18;
          piVar18 = piVar18 + 1;
          piVar22 = piVar22 + 1;
        }
        FUN_10045e36(local_1c,(int)*local_14,local_34);
        puVar21 = (uint *)(pfVar13 + 3);
        local_24 = local_24 + 1;
      } while (local_24 < *(ushort *)(local_28 + 2));
    }
  }
  else if (uVar14 == 6) {
    local_14 = (float *)0x0;
    if (*(short *)(local_28 + 2) != 0) {
      do {
        local_1c = (undefined4 *)(*puVar21 - (-(uint)(0x100 < *puVar21) & 0x100));
        if (((local_1c == (undefined4 *)0x1) || (local_1c == (undefined4 *)0x2)) ||
           (local_1c == (undefined4 *)0x3)) {
          uVar14 = (int)local_1c + 0x120;
          uVar19 = uVar14 >> 5;
          iVar17 = (int)(uVar14 & 0x1f) >> 3;
          if (*puVar21 < 0x101) {
            if (((*(byte *)((int)this + iVar17 + uVar19 * 4 + 0x1540) >> (uVar14 & 7) & 1) == 0) &&
               (puVar21[1] != 0)) {
              FUN_10047461(this,'\0');
              FUN_10007a92(this,*(uint *)(&DAT_1005f420 + *puVar21 * 4),(undefined4 *)puVar21[1]);
              *(uint *)(*(int *)((int)this + 0x9cc) + 0x940 + *puVar21 * 4) = puVar21[1];
            }
          }
          else if (puVar21[1] == 0) {
            pbVar9 = (byte *)((int)this + iVar17 + uVar19 * 4 + 0x1540);
            *pbVar9 = *pbVar9 & ~('\x01' << (uVar14 & 7));
          }
          else {
            pbVar9 = (byte *)((int)this + iVar17 + uVar19 * 4 + 0x1540);
            *pbVar9 = *pbVar9 | '\x01' << (uVar14 & 7);
          }
        }
        puVar21 = puVar21 + 2;
        local_14 = (float *)((int)local_14 + 1);
      } while (local_14 < (uint)*(ushort *)(local_28 + 2));
    }
  }
  else if (uVar14 == 9) {
    local_14 = (float *)puVar21;
    FUN_10047461(this,'\0');
    local_24 = 0;
    if (*(short *)(local_28 + 2) != 0) {
      do {
        local_14 = (float *)((uint)(ushort)puVar21[1] * 0x20 + *(int *)((int)this + 0x1584));
        local_20 = (undefined4 *)
                   ((uint)*(ushort *)((int)puVar21 + 6) * 0x20 + *(int *)((int)this + 0x1588));
        FUN_1005c9cc((int *)&local_180,0,0x40);
        uVar14 = *puVar21 & 7;
        if (uVar14 == 0) {
          FUN_1003dd9f(this);
          FUN_10008def(this,puVar21[2]);
          local_180 = local_14;
          local_174 = 0x20;
          local_164 = 0x202;
          local_17c = 0;
          local_170 = 0;
          local_14c = local_20;
          local_144 = 0x20;
          if (param_2 == '\0') {
            local_150 = *(undefined4 *)((int)this + 0x9a4);
          }
          else {
            local_150 = 0;
          }
          local_154 = (undefined4 *)((int)this + 0x1640);
          local_161 = CONCAT11(*(undefined1 *)((int)this + 0x1670),1);
          local_15f = 1;
          FUN_10011755(this,(int *)&local_180,0,puVar21[2]);
          if (*(char *)((int)this + 0x1670) == '\0') {
            *(undefined4 *)((int)this + 0x1644) = 0;
          }
          *(undefined1 *)((int)this + 0x1671) = 1;
          if (param_2 == '\0') {
            local_38 = *(uint *)((int)this + 0x9d4) | 0xff000000;
            local_30 = 0;
            local_2c = &local_38;
            local_15 = '\0';
            if ((*(int *)((int)this + 0x4c0) != 0) && (*(int *)((int)this + 0x300) != 0)) {
              local_2c = local_20 + 5;
              FUN_1000afbb(this,local_14,local_14,(uint *)(local_14 + 5),extraout_ECX,puVar21[2],
                           local_2c);
              local_30 = 0x20;
              local_15 = '\x01';
            }
            bVar24 = FUN_1003e15a((int)this);
            if (bVar24) {
              fStack_68 = *(float *)((int)this + 0x104);
              fStack_64 = *(float *)((int)this + 0x110);
              local_70 = *(float *)((int)this + 0x10c);
              fStack_6c = *(float *)((int)this + 0x108);
              local_60 = *(float *)((int)this + 300);
              fStack_58 = *(float *)((int)this + 0x124);
              fStack_54 = *(float *)((int)this + 0x130);
              fStack_5c = *(float *)((int)this + 0x128);
              auVar25._4_4_ = (int)(*(float *)((int)this + 0x118) * 255.0);
              auVar25._0_4_ = (int)(*(float *)((int)this + 0x11c) * 255.0);
              auVar25._8_4_ = (int)(*(float *)((int)this + 0x114) * 255.0);
              auVar25._12_4_ = (int)(*(float *)((int)this + 0x120) * 255.0);
              auVar26._4_4_ = (int)(*(float *)((int)this + 0x118) * 255.0);
              auVar26._0_4_ = (int)(*(float *)((int)this + 0x11c) * 255.0);
              auVar26._8_4_ = (int)(*(float *)((int)this + 0x114) * 255.0);
              auVar26._12_4_ = (int)(*(float *)((int)this + 0x120) * 255.0);
              auVar26 = packssdw(auVar25,auVar26);
              sVar5 = auVar26._0_2_;
              sVar6 = auVar26._2_2_;
              sVar7 = auVar26._4_2_;
              sVar8 = auVar26._6_2_;
              local_34 = (int *)CONCAT13((0 < sVar8) * (sVar8 < 0x100) * auVar26[6] - (0xff < sVar8)
                                         ,CONCAT12((0 < sVar7) * (sVar7 < 0x100) * auVar26[4] -
                                                   (0xff < sVar7),
                                                   CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                                            auVar26[2] - (0xff < sVar6),
                                                            (0 < sVar5) * (sVar5 < 0x100) *
                                                            auVar26[0] - (0xff < sVar5))));
              auVar27._4_4_ = (int)(*(float *)((int)this + 0x138) * 255.0);
              auVar27._0_4_ = (int)(*(float *)((int)this + 0x13c) * 255.0);
              auVar27._8_4_ = (int)(*(float *)((int)this + 0x134) * 255.0);
              auVar27._12_4_ = (int)(*(float *)((int)this + 0x140) * 255.0);
              auVar10._4_4_ = (int)(*(float *)((int)this + 0x138) * 255.0);
              auVar10._0_4_ = (int)(*(float *)((int)this + 0x13c) * 255.0);
              auVar10._8_4_ = (int)(*(float *)((int)this + 0x134) * 255.0);
              auVar10._12_4_ = (int)(*(float *)((int)this + 0x140) * 255.0);
              auVar26 = packssdw(auVar27,auVar10);
              sVar5 = auVar26._0_2_;
              sVar6 = auVar26._2_2_;
              sVar7 = auVar26._4_2_;
              sVar8 = auVar26._6_2_;
              local_44 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * auVar26[6] - (0xff < sVar8),
                                  CONCAT12((0 < sVar7) * (sVar7 < 0x100) * auVar26[4] -
                                           (0xff < sVar7),
                                           CONCAT11((0 < sVar6) * (sVar6 < 0x100) * auVar26[2] -
                                                    (0xff < sVar6),
                                                    (0 < sVar5) * (sVar5 < 0x100) * auVar26[0] -
                                                    (0xff < sVar5))));
              auVar28._4_4_ = (int)(fStack_6c * 255.0);
              auVar28._0_4_ = (int)(local_70 * 255.0);
              auVar28._8_4_ = (int)(fStack_68 * 255.0);
              auVar28._12_4_ = (int)(fStack_64 * 255.0);
              auVar11._4_4_ = (int)(fStack_6c * 255.0);
              auVar11._0_4_ = (int)(local_70 * 255.0);
              auVar11._8_4_ = (int)(fStack_68 * 255.0);
              auVar11._12_4_ = (int)(fStack_64 * 255.0);
              auVar26 = packssdw(auVar28,auVar11);
              sVar5 = auVar26._0_2_;
              sVar6 = auVar26._2_2_;
              sVar7 = auVar26._4_2_;
              sVar8 = auVar26._6_2_;
              local_40 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * auVar26[6] - (0xff < sVar8),
                                  CONCAT12((0 < sVar7) * (sVar7 < 0x100) * auVar26[4] -
                                           (0xff < sVar7),
                                           CONCAT11((0 < sVar6) * (sVar6 < 0x100) * auVar26[2] -
                                                    (0xff < sVar6),
                                                    (0 < sVar5) * (sVar5 < 0x100) * auVar26[0] -
                                                    (0xff < sVar5))));
              auVar29._4_4_ = (int)(fStack_5c * 255.0);
              auVar29._0_4_ = (int)(local_60 * 255.0);
              auVar29._8_4_ = (int)(fStack_58 * 255.0);
              auVar29._12_4_ = (int)(fStack_54 * 255.0);
              auVar12._4_4_ = (int)(fStack_5c * 255.0);
              auVar12._0_4_ = (int)(local_60 * 255.0);
              auVar12._8_4_ = (int)(fStack_58 * 255.0);
              auVar12._12_4_ = (int)(fStack_54 * 255.0);
              auVar26 = packssdw(auVar29,auVar12);
              sVar5 = auVar26._0_2_;
              sVar6 = auVar26._2_2_;
              sVar7 = auVar26._4_2_;
              sVar8 = auVar26._6_2_;
              local_3c = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * auVar26[6] - (0xff < sVar8),
                                  CONCAT12((0 < sVar7) * (sVar7 < 0x100) * auVar26[4] -
                                           (0xff < sVar7),
                                           CONCAT11((0 < sVar6) * (sVar6 < 0x100) * auVar26[2] -
                                                    (0xff < sVar6),
                                                    (0 < sVar5) * (sVar5 < 0x100) * auVar26[0] -
                                                    (0xff < sVar5))));
              FUN_10008d64(this,'\0');
              FUN_1000b1f9(this,*(int *)((int)this + 0x9a4),local_14 + 3,0x20,&local_34,&local_44,
                           &local_40,&local_3c,local_2c,0,0,0,0,local_30,local_20 + 4,local_20 + 5,
                           0x20,0x20,puVar21[2]);
            }
            else {
              local_2c = (uint *)0x0;
              if (puVar21[2] != 0) {
                do {
                  local_20[(int)local_2c * 8 + 4] = *(undefined4 *)((int)this + 0x9d0);
                  uVar14 = *(uint *)((int)this + 0x9d4);
                  if (local_15 != '\0') {
                    uVar14 = (uVar14 ^ local_20[(int)local_2c * 8 + 5]) & 0xffffff ^
                             local_20[(int)local_2c * 8 + 5];
                  }
                  local_20[(int)local_2c * 8 + 5] = uVar14;
                  local_2c = (uint *)((int)local_2c + 1);
                } while (local_2c < puVar21[2]);
              }
            }
            local_2c = (uint *)0x0;
            if (puVar21[2] != 0) {
              do {
                local_20[(int)local_2c * 8 + 6] = local_14[(int)local_2c * 8 + 6];
                local_20[(int)local_2c * 8 + 7] = local_14[(int)local_2c * 8 + 7];
                local_2c = (uint *)((int)local_2c + 1);
                this = local_1c;
              } while (local_2c < puVar21[2]);
            }
          }
        }
        else if (uVar14 == 1) {
          FUN_1003dd9f(this);
          local_180 = local_14;
          local_14c = local_20;
          local_154 = (undefined4 *)((int)this + 0x1640);
          local_174 = 0x20;
          local_144 = 0x20;
          local_161 = CONCAT11(*(undefined1 *)((int)this + 0x1670),1);
          local_15f = 1;
          local_164 = CONCAT11(local_164._1_1_,2);
          FUN_10011755(this,(int *)&local_180,0,puVar21[2]);
          if (*(char *)((int)this + 0x1670) == '\0') {
            *(undefined4 *)((int)this + 0x1644) = 0;
          }
          *(undefined1 *)((int)this + 0x1671) = 1;
          if (param_2 == '\0') {
            local_30 = 0;
            uVar14 = 0;
            if (puVar21[2] != 0) {
              do {
                local_20[local_30 * 8 + 4] = local_14[local_30 * 8 + 4];
                local_20[local_30 * 8 + 5] = local_14[local_30 * 8 + 5];
                local_20[local_30 * 8 + 6] = local_14[local_30 * 8 + 6];
                local_20[local_30 * 8 + 7] = local_14[local_30 * 8 + 7];
                uVar14 = puVar21[2];
                local_30 = local_30 + 1;
                this = local_1c;
              } while (local_30 < uVar14);
            }
            if ((*(int *)((int)this + 0x4c0) != 0) && (*(int *)((int)this + 0x300) != 0)) {
              FUN_1000afbb(this,local_14,local_14,(uint *)(local_14 + 5),uVar14,uVar14,local_20 + 5)
              ;
            }
          }
        }
        else if (uVar14 == 2) {
          FUN_1005ca00(local_20,local_14,puVar21[2] << 5);
          local_180 = local_14;
          local_154 = (undefined4 *)((int)this + 0x1640);
          local_174 = 0x20;
          local_161 = 0;
          local_15f = 1;
          FUN_10011755(this,(int *)&local_180,0,puVar21[2]);
          *(undefined4 *)((int)this + 0x1644) = 0;
          *(undefined1 *)((int)this + 0x1671) = 1;
        }
        puVar21 = puVar21 + 4;
        local_24 = local_24 + 1;
      } while (local_24 < *(ushort *)(local_28 + 2));
    }
  }
  else if (uVar14 == 0xc) {
    uVar14 = (*(int *)((int)this + 0x1644) << 0xc | *(uint *)((int)this + 0x1640)) & *puVar21;
    bVar24 = uVar14 == *(uint *)(local_28 + 8);
    if (*(int *)(local_28 + 0xc) != 0) {
      bVar24 = uVar14 != *(uint *)(local_28 + 8);
    }
    if (bVar24) {
      if (*(int *)(local_28 + 0x10) == 0) {
        *param_3 = 0;
      }
      else {
        *param_1 = (int)(local_28 +
                        (*(int *)(local_28 + 0x10) -
                        (uint)*(ushort *)(local_28 + 2) * (uint)local_28[1]) + -4);
      }
    }
  }
  else if (uVar14 != 0xd) {
    if (uVar14 - 0xe != 0) {
      return uVar14 - 0xe & 0xffffff00;
    }
    if ((*puVar21 & 1) != 0) {
      *(uint *)((int)this + 0x1640) = *(uint *)(local_28 + 8) & 0xfff;
      *(uint *)((int)this + 0x1644) = *(uint *)(local_28 + 8) >> 0xc & 0xfff;
    }
    if ((*puVar21 & 2) != 0) {
      iVar17 = *(int *)(local_28 + 0x14);
      iVar2 = *(int *)(local_28 + 0x10);
      iVar3 = *(int *)(local_28 + 0x18);
      iVar15 = *(int *)((int)this + 0x2c);
      iVar16 = iVar15;
      if (iVar15 <= *(int *)(local_28 + 0xc)) {
        iVar16 = *(int *)(local_28 + 0xc);
      }
      *(float *)((int)this + 0x1648) =
           (float)((double)iVar16 + (double)(&DAT_100601f0)[-(iVar16 >> 0x1f)]);
      iVar15 = *(int *)((int)this + 0x34) + iVar15;
      if (iVar17 <= iVar15) {
        iVar15 = iVar17;
      }
      iVar17 = *(int *)((int)this + 0x30);
      iVar16 = iVar17;
      if (iVar17 <= iVar2) {
        iVar16 = iVar2;
      }
      *(float *)((int)this + 0x164c) =
           (float)((double)iVar15 + (double)(&DAT_100601f0)[-(iVar15 >> 0x1f)]);
      iVar17 = *(int *)((int)this + 0x38) + iVar17;
      if (iVar3 <= iVar17) {
        iVar17 = iVar3;
      }
      *(float *)((int)this + 0x1650) =
           (float)((double)iVar16 + (double)(&DAT_100601f0)[-(iVar16 >> 0x1f)]);
      dVar1 = (double)(&DAT_100601f0)[-(iVar17 >> 0x1f)];
      *(undefined1 *)((int)this + 0x1671) = 1;
      *(float *)((int)this + 0x1654) = (float)((double)iVar17 + dVar1);
    }
  }
  *param_1 = *param_1 + (uint)*(ushort *)(local_28 + 2) * (uint)local_28[1] + 4;
  return 1;
}

