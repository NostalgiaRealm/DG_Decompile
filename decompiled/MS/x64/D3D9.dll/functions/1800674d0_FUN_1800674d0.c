/*
 * FUN_1800674d0 at 1800674d0
 * undefined __fastcall FUN_1800674d0(undefined8 param_1, uint * param_2, longlong * param_3, int param_4, uint param_5, uint param_6, byte param_7, ushort param_8, short param_9, uint param_10, ushort param_11, ushort param_12)
 * Address ranges: 1800674d0-18006b065
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800674d0(undefined8 param_1,uint *param_2,longlong *param_3,int param_4,uint param_5,
                  uint param_6,byte param_7,ushort param_8,short param_9,uint param_10,
                  ushort param_11,ushort param_12)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  byte bVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  byte local_185;
  uint local_158;
  undefined1 local_154;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  ushort local_138;
  uint local_134;
  ushort local_130;
  uint local_12c;
  uint local_128;
  uint local_118 [4];
  uint local_108;
  uint local_f8 [8];
  uint local_d8;
  ushort local_d4;
  uint local_c8;
  byte local_c4;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_98 [22];
  
  local_d4 = param_12 >> 9 & 0xff01;
  local_130 = param_11 >> 9 & 0xff01;
  local_185 = (char)local_d4 * '\x02' | (byte)local_130;
  bVar3 = FUN_1800ee208(0xe4,param_7);
  bVar8 = (&DAT_180102768)[param_5];
  local_138 = CONCAT11(local_138._1_1_,bVar8);
  FUN_180067160(param_1,&local_c8,param_2,param_3,param_8);
  if ((bVar8 & 1) == 0) {
    local_148 = 0xffffffff;
    uVar4 = 0;
    local_158 = 0;
    puVar6 = &local_158;
    local_154 = 0;
    local_144 = 0xffffffff;
    local_140 = 0xffffffff;
    local_13c = 0xffffffff;
  }
  else {
    puVar6 = FUN_18006724c(param_1,local_f8,param_2,param_3,param_4,param_6,param_11,0);
    uVar4 = *puVar6;
  }
  uVar5 = puVar6[4];
  uVar1 = puVar6[5];
  uVar2 = puVar6[6];
  local_a8 = uVar4;
  local_134 = 0;
  if ((local_138 & 2) == 0) {
    local_158 = 0;
    local_154 = 0;
    local_148 = 0xffffffff;
    local_144 = 0xffffffff;
    local_140 = 0xffffffff;
    local_13c = 0xffffffff;
  }
  else {
    puVar6 = FUN_18006724c(param_1,local_f8,param_2,param_3,param_4,param_6,param_12,0);
    local_134 = *puVar6;
  }
  if ((local_138 & 4) == 0) {
    local_158 = 0;
    local_148 = 0xffffffff;
    puVar6 = &local_158;
    local_144 = 0xffffffff;
    local_140 = 0xffffffff;
    local_13c = 0xffffffff;
    local_154 = 0;
    local_a0 = 0;
  }
  else {
    puVar6 = FUN_18006724c(param_1,local_f8,param_2,param_3,param_4,param_6,(ushort)param_10,0);
    local_a0 = *puVar6;
  }
  fVar11 = 1.0;
  uVar7 = (uint)param_7;
  if (param_5 < 0xe) {
    if (param_5 == 0xd) goto LAB_180067e5c;
    if (param_5 < 8) {
      if (param_5 != 7) {
        if (param_5 == 1) {
LAB_180069bca:
          uVar4 = 0x2036;
LAB_18006b030:
          FUN_1800edbe0(param_2,param_3,uVar4,(ulonglong)local_c8);
          return;
        }
        if (param_5 == 2) {
          if ((char)local_130 == '\0') {
            uVar4 = 0x2036;
            goto LAB_18006b030;
          }
          FUN_180067464(param_1,(undefined8 *)&local_158,(longlong)param_2,0x3f800000,param_7);
          goto LAB_18006afc9;
        }
        if (param_5 == 3) goto LAB_18006af3d;
        if (((param_5 != 4) && (param_5 != 5)) && (param_5 != 6)) goto LAB_180069bca;
        if (local_185 == 0) {
          uVar4 = 0x38;
          if (param_5 == 4) {
            uVar4 = 0x2038;
          }
          FUN_1800edbe0(param_2,param_3,uVar4,(ulonglong)local_c8);
          goto LAB_180067c4a;
        }
        if (local_185 == 1) {
          uVar4 = 0x32;
          if (param_5 == 4) {
            uVar4 = 0x2032;
          }
LAB_180067bae:
          FUN_1800edbe0(param_2,param_3,uVar4,(ulonglong)local_c8);
        }
        else {
          if (local_185 == 2) {
            uVar4 = 0x32;
            if (param_5 == 4) {
              uVar4 = 0x2032;
            }
            goto LAB_180067bae;
          }
          if (local_185 == 3) {
            uVar4 = FUN_1800ec8c0((longlong)param_2,4,'\0');
            FUN_1800edbe0(param_2,param_3,0x32,(ulonglong)uVar4);
            FUN_1800edbe0(param_2,param_3,0,(ulonglong)uVar4);
            if ((param_5 == 5) || (param_5 == 6)) {
              if (param_5 == 5) {
                uVar10 = 0x40000000;
              }
              else {
                uVar10 = 0x40800000;
              }
              FUN_180067464(param_1,(undefined8 *)&local_158,(longlong)param_2,uVar10,param_7);
              param_5 = 0xffffffff;
              uVar4 = 0x2032;
              goto LAB_180067bae;
            }
            FUN_180067464(param_1,(undefined8 *)&local_158,(longlong)param_2,0x3f800000,param_7);
            param_5 = 0xffffffff;
            FUN_1800edbe0(param_2,param_3,0x2000,(ulonglong)local_c8);
          }
        }
LAB_180067c4a:
        local_c4 = FUN_180067004(param_1,(longlong)param_2,param_8);
        if (param_5 != 5) {
          if (param_5 != 6) {
            return;
          }
          FUN_180067464(param_1,(undefined8 *)&local_158,(longlong)param_2,0x40800000,param_7);
          uVar4 = 0x2038;
          uVar9 = (ulonglong)local_c8;
          goto LAB_18006afd9;
        }
        goto LAB_180067d5e;
      }
LAB_1800684be:
      fVar12 = 0.0;
      if ((char)local_130 == '\0') {
        fVar11 = 0.0;
      }
      else {
        fVar11 = 1.0;
      }
      if ((byte)local_d4 != '\0') {
        fVar12 = 1.0;
      }
      fVar12 = fVar12 + fVar11;
      if (param_5 == 8) {
        fVar12 = fVar12 - 0.5;
LAB_18006851e:
        if ((ABS(fVar12) < 0.01 || ABS(fVar12) == 0.01) && (param_5 != 9)) goto LAB_18006853d;
LAB_180068534:
        param_10 = 0;
      }
      else {
        if (param_5 == 9) {
          fVar12 = (fVar12 + fVar12) - 1.0;
          goto LAB_180068534;
        }
        if (param_5 == 7) goto LAB_18006851e;
LAB_18006853d:
        param_10 = 0x2000;
      }
      local_c4 = FUN_180067004(param_1,(longlong)param_2,param_8);
      FUN_1800edbe0(param_2,param_3,param_10,(ulonglong)local_c8);
      if ((param_5 != 7) && (param_5 != 8)) {
        if (param_5 != 9) {
          return;
        }
        FUN_180067464(param_1,(undefined8 *)&local_158,(longlong)param_2,fVar12,param_7);
        FUN_180067464(param_1,(undefined8 *)local_118,(longlong)param_2,0x40000000,param_7);
LAB_18006a27d:
        FUN_1800edbe0(param_2,param_3,0x2032,(ulonglong)local_c8);
        return;
      }
      if (ABS(fVar12) < 0.01 || ABS(fVar12) == 0.01) {
        return;
      }
    }
    else {
      if ((param_5 == 8) || (param_5 == 9)) goto LAB_1800684be;
      if (param_5 != 10) {
        if (param_5 == 0xb) {
          if (local_185 == 0) {
            uVar4 = FUN_1800ec8c0((longlong)param_2,4,'\0');
            FUN_1800edbe0(param_2,param_3,0,(ulonglong)uVar4);
            goto LAB_18006a27d;
          }
          if ((local_185 != 1) && (local_185 != 2)) {
            if (local_185 != 3) {
              return;
            }
            FUN_180067464(param_1,(undefined8 *)&local_158,(longlong)param_2,0x3f800000,param_7);
            goto LAB_18006a27d;
          }
          FUN_180067464(param_1,(undefined8 *)&local_158,(longlong)param_2,0xbf800000,param_7);
          uVar4 = FUN_1800ec8c0((longlong)param_2,4,'\0');
          FUN_1800edbe0(param_2,param_3,0x32,(ulonglong)uVar4);
          goto LAB_18006afc9;
        }
        if (param_5 != 0xc) goto LAB_180069bca;
        goto LAB_180067e5c;
      }
      fVar12 = 0.0;
      if ((char)local_130 == '\0') {
        fVar11 = 0.0;
      }
      if ((byte)local_d4 != '\0') {
        fVar12 = -1.0;
      }
      fVar12 = fVar12 + fVar11;
      uVar4 = 0x2000;
      if (0.01 < ABS(fVar12)) {
        uVar4 = 0;
      }
      FUN_1800edbe0(param_2,param_3,uVar4,(ulonglong)local_c8);
      if (ABS(fVar12) < 0.01 || ABS(fVar12) == 0.01) {
        return;
      }
    }
    FUN_180067464(param_1,(undefined8 *)&local_158,(longlong)param_2,fVar12,param_7);
    uVar9 = (ulonglong)local_c8;
  }
  else {
    if (param_5 < 0x16) {
      if (param_5 == 0x15) {
        local_a8 = uVar4 ^ 0x80000000;
        local_185 = local_185 ^ 1;
LAB_18006962c:
        FUN_18006724c(param_1,local_118,param_2,param_3,param_4,param_6,(ushort)param_10,0);
        if (local_185 != 0) {
          if (local_185 == 1) {
            uVar4 = FUN_1800ec8c0((longlong)param_2,4,'\0');
            FUN_180067464(param_1,(undefined8 *)local_f8,(longlong)param_2,0x3f800000,param_7);
            FUN_1800edbe0(param_2,param_3,0,(ulonglong)uVar4);
            goto LAB_18006a27d;
          }
          if (local_185 == 2) {
            uVar4 = FUN_1800ec8c0((longlong)param_2,4,'\0');
            FUN_180067464(param_1,(undefined8 *)local_f8,(longlong)param_2,0x3f800000,param_7);
            FUN_1800edbe0(param_2,param_3,0,(ulonglong)uVar4);
            goto LAB_18006a27d;
          }
          if (local_185 != 3) {
            return;
          }
          uVar4 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
          FUN_180067464(param_1,(undefined8 *)&local_158,(longlong)param_2,0x3f800000,param_7);
          uVar5 = FUN_1800ec8c0((longlong)param_2,4,'\0');
          FUN_1800edbe0(param_2,param_3,0,(ulonglong)uVar4);
          FUN_1800edbe0(param_2,param_3,0,(ulonglong)uVar5);
          FUN_1800edbe0(param_2,param_3,0x2032,(ulonglong)local_c8);
          goto LAB_18006a08e;
        }
        goto LAB_18006a27d;
      }
      if (param_5 != 0xe) {
        if (param_5 == 0xf) {
          if ((local_185 == 0) || (local_185 == 1)) {
            uVar4 = FUN_1800ec8c0((longlong)param_2,4,'\0');
            FUN_180064378(&local_158,uVar4,bVar3,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
            FUN_18006724c(param_1,local_f8,param_2,param_3,param_4,param_6,(ushort)param_10,0);
            FUN_1800edbe0(param_2,param_3,0x32,(ulonglong)local_158);
            if (local_185 == 1) {
              FUN_180067464(param_1,(undefined8 *)local_118,(longlong)param_2,0x3f800000,param_7);
              FUN_1800edbe0(param_2,param_3,0,(ulonglong)local_158);
            }
          }
          else {
            if ((local_185 != 2) && (local_185 != 3)) {
              return;
            }
            uVar4 = FUN_1800ec8c0((longlong)param_2,4,'\0');
            FUN_180064378(local_118,uVar4,bVar3,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
            FUN_180067464(param_1,(undefined8 *)&local_158,(longlong)param_2,0x3f800000,param_7);
            FUN_18006724c(param_1,local_f8,param_2,param_3,param_4,param_6,(ushort)param_10,0);
            FUN_1800edbe0(param_2,param_3,0,(ulonglong)local_118[0]);
            FUN_1800edbe0(param_2,param_3,0x32,(ulonglong)local_118[0]);
            if (local_185 == 3) {
              FUN_1800edbe0(param_2,param_3,0,(ulonglong)local_118[0]);
            }
          }
          goto LAB_18006afc9;
        }
        if (param_5 != 0x10) {
          if (param_5 != 0x12) {
            if (param_5 == 0x13) goto LAB_18006962c;
            if (param_5 != 0x14) goto LAB_180069bca;
          }
          FUN_180067464(param_1,(undefined8 *)&local_158,(longlong)param_2,0x3f800000,param_7);
          FUN_18006724c(param_1,local_118,param_2,param_3,param_4,param_6,(ushort)param_10,
                        param_5 == 0x14);
          if (param_5 == 0x14) {
            local_12c = FUN_1800ec8c0((longlong)param_2,4,'\x01');
            FUN_1800edbe0(param_2,param_3,0,(ulonglong)local_12c);
            local_128 = 0xffffffff;
          }
          else {
            local_128 = local_108;
            local_12c = local_118[0];
          }
          local_a4 = uVar7;
          if (local_185 == 0) {
            FUN_1800edbe0(param_2,param_3,0x2032,(ulonglong)local_c8);
          }
          else {
            if (local_185 == 1) {
              FUN_1800edbe0(param_2,param_3,0x32,(ulonglong)local_c8);
            }
            else {
              if ((local_185 != 2) && (local_185 != 3)) goto LAB_180068ce5;
              local_d8 = FUN_1800ec8c0((longlong)param_2,4,'\0');
              FUN_1800edbe0(param_2,param_3,0x32,(ulonglong)local_d8);
              if (local_185 == 3) {
                FUN_1800edbe0(param_2,param_3,0,(ulonglong)local_d8);
              }
            }
            FUN_1800edbe0(param_2,param_3,0x2000,(ulonglong)local_c8);
          }
LAB_180068ce5:
          uVar4 = local_12c;
          if (param_5 != 0x14) {
            return;
          }
          goto LAB_18006a08e;
        }
      }
LAB_180067e5c:
      uVar4 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
      FUN_18006724c(param_1,local_118,param_2,param_3,param_4,param_6,(ushort)param_10,0);
      if (local_185 == 0) {
        FUN_1800edbe0(param_2,param_3,0,(ulonglong)uVar4);
      }
      else if (local_185 == 1) {
        FUN_180067464(param_1,(undefined8 *)local_f8,(longlong)param_2,0x3f800000,param_7);
        FUN_1800edbe0(param_2,param_3,0,(ulonglong)uVar4);
        FUN_1800edbe0(param_2,param_3,0,(ulonglong)uVar4);
      }
      else {
        if (local_185 != 2) {
          if (local_185 == 3) {
            FUN_180067464(param_1,(undefined8 *)local_f8,(longlong)param_2,0x3f800000,param_7);
            FUN_1800edbe0(param_2,param_3,0,(ulonglong)uVar4);
            FUN_1800edbe0(param_2,param_3,0x32,(ulonglong)uVar4);
            FUN_1800edbe0(param_2,param_3,0x2000,(ulonglong)local_c8);
          }
          goto LAB_18006a08e;
        }
        FUN_180067464(param_1,(undefined8 *)local_f8,(longlong)param_2,0x3f800000,param_7);
        uVar5 = FUN_1800ec8c0((longlong)param_2,4,'\0');
        FUN_1800edbe0(param_2,param_3,0,(ulonglong)uVar4);
        FUN_1800edbe0(param_2,param_3,0,(ulonglong)uVar5);
      }
LAB_18006a076:
      FUN_1800edbe0(param_2,param_3,0x2032,(ulonglong)local_c8);
LAB_18006a08e:
      FUN_1800ec960((longlong)param_2,uVar4);
      return;
    }
    local_128 = puVar6[4];
    local_138 = (byte)((byte)(param_10 >> 8) >> 1) & 0xff01;
    local_12c = puVar6[5];
    local_d8 = puVar6[6];
    local_a4 = puVar6[7];
    if ((param_5 == 0x16) || (param_5 == 0x17)) {
      if ((param_7 == 7) && (param_9 != 0)) {
        FUN_1800671f8(param_1,&local_158,(longlong)param_2);
        param_10 = uVar4;
        if ((char)local_130 != '\0') {
          param_10 = FUN_1800ec8c0((longlong)param_2,4,'\0');
          local_d8 = 0xffffffff;
          local_12c = 0xffffffff;
          local_128 = 0xffffffff;
          uVar1 = local_12c;
          uVar2 = local_128;
          uVar5 = local_d8;
        }
        local_d8 = uVar5;
        local_128 = uVar2;
        local_12c = uVar1;
        if ((char)local_130 != '\0') {
          FUN_180067464(param_1,(undefined8 *)local_f8,(longlong)param_2,0x3f800000,7);
          FUN_1800edbe0(param_2,param_3,0,(ulonglong)param_10);
        }
        FUN_1800edbe0(param_2,param_3,0xf,(ulonglong)local_158);
        FUN_1800edbe0(param_2,param_3,0xf,(ulonglong)local_158);
        if (param_5 == 0x17) {
          FUN_1800edbe0(param_2,param_3,0x2032,(ulonglong)local_158);
        }
      }
LAB_18006af3d:
      if ((byte)local_d4 == '\0') {
        if (param_12 == param_8) {
          return;
        }
        uVar4 = 0x36;
        goto LAB_18006b030;
      }
      FUN_180067464(param_1,(undefined8 *)local_f8,(longlong)param_2,0x3f800000,param_7);
LAB_18006afc9:
      uVar9 = (ulonglong)local_c8;
    }
    else {
      if (param_5 == 0x18) {
        FUN_180067464(param_1,(undefined8 *)&local_158,(longlong)param_2,0x40000000,7);
        fVar11 = 0.5;
        if ((char)local_130 == '\0') {
          fVar12 = -0.5;
        }
        else {
          fVar12 = 0.5;
        }
        if ((byte)local_d4 == '\0') {
          fVar11 = -0.5;
        }
        FUN_180067464(param_1,(undefined8 *)local_118,(longlong)param_2,fVar12 + fVar12,7);
        FUN_180067464(param_1,(undefined8 *)local_f8,(longlong)param_2,fVar11 + fVar11,7);
        uVar4 = FUN_1800ec8c0((longlong)param_2,4,'\0');
        FUN_18006724c(param_1,local_98,param_2,param_3,param_4,param_6,param_11 & 0xfeff,0);
        FUN_18006724c(param_1,local_98,param_2,param_3,param_4,param_6,param_12 & 0xfeff,0);
        FUN_1800edbe0(param_2,param_3,0x32,(ulonglong)uVar4);
        FUN_1800edbe0(param_2,param_3,0x32,(ulonglong)local_c8);
        uVar9 = (ulonglong)local_c8;
        uVar4 = 0x2010;
        goto LAB_18006afd9;
      }
      if (param_5 != 0x19) {
        if (param_5 != 0x1a) goto LAB_180069bca;
        if ((char)local_138 != '\0') {
          puVar6 = FUN_18006724c(param_1,local_f8,param_2,param_3,param_4,param_6,param_12,0);
          local_a8 = *puVar6;
          puVar6 = FUN_18006724c(param_1,local_f8,param_2,param_3,param_4,param_6,param_11,0);
          local_134 = *puVar6;
          local_185 = (char)local_130 * '\x02' | (byte)local_d4;
        }
        if (local_185 != 0) {
          if (local_185 == 1) {
            uVar4 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
            uVar5 = FUN_1800ec8c0((longlong)param_2,4,'\0');
            FUN_180067464(param_1,(undefined8 *)local_f8,(longlong)param_2,0x3f800000,param_7);
            FUN_1800edbe0(param_2,param_3,0,(ulonglong)uVar5);
            FUN_1800edbe0(param_2,param_3,0,(ulonglong)uVar4);
            goto LAB_18006a076;
          }
          if (local_185 != 2) {
            if (local_185 != 3) {
              return;
            }
            uVar4 = FUN_1800ec8c0((longlong)param_2,4,'\0');
            FUN_180067464(param_1,(undefined8 *)local_f8,(longlong)param_2,0x3f800000,param_7);
            FUN_1800edbe0(param_2,param_3,0,(ulonglong)uVar4);
            FUN_1800edbe0(param_2,param_3,0x32,(ulonglong)uVar4);
            goto LAB_18006afc9;
          }
        }
        uVar4 = FUN_1800ec8c0((longlong)param_2,4,'\0');
        FUN_1800edbe0(param_2,param_3,0,(ulonglong)uVar4);
        if (local_185 == 2) {
          FUN_180067464(param_1,(undefined8 *)local_f8,(longlong)param_2,0x3f800000,param_7);
          FUN_1800edbe0(param_2,param_3,0,(ulonglong)uVar4);
        }
        goto LAB_18006a27d;
      }
      if (local_185 != 0) {
        if ((local_185 != 1) && (local_185 != 2)) {
          if (local_185 != 3) {
            return;
          }
          uVar4 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
          uVar5 = FUN_1800ec8c0((longlong)param_2,4,'\0');
          FUN_180067464(param_1,(undefined8 *)&local_158,(longlong)param_2,0x3f800000,param_7);
          FUN_1800edbe0(param_2,param_3,0,(ulonglong)uVar4);
          FUN_1800edbe0(param_2,param_3,0,(ulonglong)uVar5);
          bVar8 = (byte)local_138;
          uVar5 = local_c8;
          if (bVar8 != 0) {
            uVar5 = uVar4;
          }
          FUN_1800edbe0(param_2,param_3,(bVar8 ^ 1) << 0xd | 0x32,(ulonglong)uVar5);
          if (bVar8 != 0) {
            FUN_1800edbe0(param_2,param_3,0x2000,(ulonglong)local_c8);
          }
          goto LAB_18006a08e;
        }
        uVar4 = FUN_1800ec8c0((longlong)param_2,4,'\0');
        FUN_1800edbe0(param_2,param_3,0x32,(ulonglong)uVar4);
        if ((char)local_138 != '\0') {
          FUN_180067464(param_1,(undefined8 *)local_f8,(longlong)param_2,0x3f800000,param_7);
          FUN_1800edbe0(param_2,param_3,0,(ulonglong)uVar4);
        }
        goto LAB_18006afc9;
      }
      FUN_18006724c(param_1,&local_158,param_2,param_3,param_4,param_6,(ushort)param_10,0);
      if ((char)local_138 == '\0') goto LAB_18006a27d;
      FUN_180067464(param_1,(undefined8 *)local_f8,(longlong)param_2,0x3f800000,param_7);
      FUN_1800edbe0(param_2,param_3,0x32,(ulonglong)local_c8);
LAB_180067d5e:
      uVar9 = (ulonglong)local_c8;
    }
  }
  uVar4 = 0x2000;
LAB_18006afd9:
  FUN_1800edbe0(param_2,param_3,uVar4,uVar9);
  return;
}

