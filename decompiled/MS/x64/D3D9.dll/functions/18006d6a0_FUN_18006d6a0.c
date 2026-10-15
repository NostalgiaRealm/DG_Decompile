/*
 * FUN_18006d6a0 at 18006d6a0
 * uint * __fastcall FUN_18006d6a0(undefined8 param_1, uint * param_2, longlong * param_3, uint * param_4, ulonglong param_5, uint param_6)
 * Address ranges: 18006d6a0-18006f97b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_18006d6a0(undefined8 param_1,uint *param_2,longlong *param_3,uint *param_4,
                    ulonglong param_5,uint param_6)

{
  float fVar1;
  byte *pbVar2;
  uint3 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_res8;
  uint local_res10;
  undefined4 uStackX_14;
  uint local_res18;
  undefined4 uStackX_1c;
  uint *local_res20;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  uint uStack_110;
  uint uStack_10c;
  undefined1 local_108 [12];
  uint uStack_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  uint local_e8;
  undefined1 local_e4;
  undefined8 local_d8;
  undefined8 uStack_d0;
  uint *local_c8 [2];
  undefined8 local_b8;
  uint *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  
  puVar14 = param_4 + 1;
  uVar15 = *param_4 & 0xffff;
  local_res8._5_3_ = (uint3)((ulonglong)param_1 >> 0x28);
  uVar3 = local_res8._5_3_;
  local_res10 = uVar15;
  local_res20 = param_4;
  local_118 = param_3;
  local_c8[0] = param_4;
  local_b8 = param_1;
  local_b0 = param_2;
  local_a8 = param_3;
  uStack_120 = param_2;
  local_128 = param_1;
  if (uVar15 < 0x48) {
    if (uVar15 == 0x47) {
LAB_18006ee6a:
      puVar14 = param_4 + 3;
      param_2[0xcd] = 0;
      goto LAB_18006df6b;
    }
    if (uVar15 < 0x13) {
      if (uVar15 == 0x12) {
        uVar15 = param_4[2];
        if ((uVar15 & 0xf000000) == 0x6000000) {
          lVar8 = 0x10;
          uVar15 = uVar15 & 0xf0ffffff;
          uVar16 = 0xc;
        }
        else {
          lVar8 = 0xc;
          uVar16 = 0x10;
        }
        uVar16 = *(uint *)((ulonglong)uVar16 + (longlong)param_4);
        uVar5 = *(uint *)(lVar8 + (longlong)param_4);
        FUN_18006c6fc(param_1,(longlong)param_2,*puVar14,param_6);
        FUN_18006cfe0(param_1,param_2,param_3,(ulonglong)uVar15,uVar5,uVar16);
        uVar15 = param_2[0xcd];
        uVar16 = param_2[0xd1];
        uVar5 = FUN_1800ec8c0((longlong)param_2,4,'\0');
        local_128._4_4_ = CONCAT31(local_128._5_3_,(char)uVar16);
        puVar14 = param_2 + 0xe8;
        local_118 = (longlong *)0xffffffffffffffff;
        uStack_110 = 0xffffffff;
        uStack_10c = 0xffffffff;
        *puVar14 = *puVar14 ^ 0x80000000;
        local_128._0_4_ = uVar5;
        FUN_1800edd10(param_2,param_3,0,&local_128);
        *puVar14 = *puVar14 ^ 0x80000000;
        if (uVar15 == 0) {
          uVar16 = param_2[0xcc];
        }
        else {
          uVar16 = 0;
        }
        FUN_1800ee208(0xe4,local_128._4_1_);
        uVar16 = uVar16 | 0x32;
LAB_18006e155:
        FUN_1800edd10(param_2,param_3,uVar16,param_2 + 0xd0);
        puVar14 = local_res20 + 5;
        goto LAB_18006df6b;
      }
      if (uVar15 == 1) {
        FUN_18006c6fc(param_1,(longlong)param_2,*puVar14,param_6);
        FUN_18006c808(param_1,param_2,param_3,0,param_4[2],*(undefined8 *)(param_2 + 0xd0),
                      *puVar14 >> 7 & 0x2000,*puVar14 >> 0x18 & 0xf,'\x01');
        goto LAB_18006e02a;
      }
      if ((uVar15 == 2) || (uVar15 == 3)) {
        uVar7 = (ulonglong)(param_4[2] >> 0x18 & 0xf);
        uVar17 = (ulonglong)(param_4[3] >> 0x18 & 0xf);
        fVar20 = *(float *)(&DAT_1801028b0 + uVar7 * 8);
        if (uVar15 == 2) {
          fVar21 = 1.0;
        }
        else {
          fVar21 = -1.0;
        }
        fVar19 = *(float *)(&DAT_1801028b0 + uVar17 * 8);
        fVar21 = fVar21 * *(float *)(&DAT_1801028b4 + uVar17 * 8) +
                 *(float *)(&DAT_1801028b4 + uVar7 * 8);
        FUN_18006c6fc(uVar17,(longlong)param_2,*puVar14,param_6);
        FUN_18006c808(param_1,param_2,param_3,0,param_4[2],(ulonglong)local_res8._5_3_ << 0x28,0,0,
                      '\0');
        FUN_18006c808(param_1,param_2,param_3,1,param_4[3],(ulonglong)local_res8._5_3_ << 0x28,0,0,
                      '\0');
        uVar16 = 0;
        if (uVar15 == 3) {
          uVar16 = 0x80000000;
        }
        param_2[0xe0] = param_2[0xe0] ^ uVar16;
        local_res10 = param_2[0xcd];
        if (local_res10 != 0 || fVar21 != 0.0) {
          uVar15 = 0;
        }
        else {
          uVar15 = param_2[0xcc];
        }
        puVar14 = param_2 + 0xd0;
        uVar9 = 0xe4;
        FUN_1800ee208(0xe4,(byte)param_2[0xd1]);
        if ((fVar20 == 1.0) && (fVar19 == 1.0)) {
          FUN_1800edd10(param_2,param_3,uVar15,puVar14);
        }
        else {
          if (fVar20 == fVar19) {
            if (((byte)param_2[0xd1] < 9) && ((0x116U >> ((byte)param_2[0xd1] & 0x1f) & 1) != 0)) {
              cVar4 = '\x01';
            }
            else {
              cVar4 = '\0';
            }
            FUN_18006560c(uVar9,(undefined8 *)local_108,(longlong)param_2,fVar20,cVar4);
            FUN_1800edd10(param_2,param_3,0,puVar14);
            uVar15 = uVar15 | 0x38;
          }
          else {
            lVar8 = 0x380;
            if (fVar19 != 1.0) {
              lVar8 = 0x360;
            }
            if (fVar19 != 1.0) {
              fVar20 = fVar19;
            }
            if (((byte)param_2[0xd1] < 9) && ((0x116U >> ((byte)param_2[0xd1] & 0x1f) & 1) != 0)) {
              cVar4 = '\x01';
            }
            else {
              cVar4 = '\0';
            }
            FUN_18006560c(lVar8 + (longlong)param_2,(undefined8 *)local_108,(longlong)param_2,fVar20
                          ,cVar4);
            uVar15 = uVar15 | 0x32;
          }
          FUN_1800edd10(param_2,param_3,uVar15,puVar14);
        }
        uVar15 = 0;
        if (fVar21 != 0.0) {
          if ((8 < (byte)param_2[0xd1]) ||
             (cVar4 = '\x01', (0x116U >> ((byte)param_2[0xd1] & 0x1f) & 1) == 0)) {
            cVar4 = '\0';
          }
          FUN_18006560c(0,(undefined8 *)local_108,(longlong)param_2,fVar21,cVar4);
          if (local_res10 == uVar15) {
            uVar15 = param_2[0xcc];
          }
          FUN_1800edd10(param_2,param_3,uVar15,puVar14);
        }
LAB_18006df5d:
        puVar14 = local_res20 + 4;
        goto LAB_18006df6b;
      }
      if (uVar15 == 4) {
        FUN_18006c6fc(param_1,(longlong)param_2,*puVar14,param_6);
        uVar15 = 0;
        if (param_2[0xcd] == 0) {
          uVar15 = param_2[0xcc];
        }
        FUN_18006cfe0(param_1,param_2,param_3,(ulonglong)param_4[2],param_4[3],param_4[4]);
        FUN_1800edd10(param_2,param_3,uVar15 | 0x32,param_2 + 0xd0);
        puVar14 = param_4 + 5;
        goto LAB_18006df6b;
      }
      if (uVar15 != 5) {
        if ((uVar15 == 8) || (uVar15 == 9)) {
          FUN_18006c6fc(param_1,(longlong)param_2,*puVar14,param_6);
          FUN_18006ce5c(param_1,param_2,param_3,param_4[2],param_4[3]);
          uVar16 = 0;
          if (param_2[0xcd] == 0) {
            uVar16 = param_2[0xcc];
          }
          FUN_1800edd10(param_2,param_3,uVar16 | (uVar15 != 8) + 0x10,param_2 + 0xd0);
          puVar14 = param_4 + 4;
        }
        goto LAB_18006df6b;
      }
      uVar15 = param_4[2] >> 0x18 & 0xf;
      fVar20 = *(float *)(&DAT_1801028b0 + (ulonglong)uVar15 * 8);
      fVar21 = *(float *)(&DAT_1801028b4 + (ulonglong)uVar15 * 8);
      uVar7 = (ulonglong)(param_4[3] >> 0x18 & 0xf);
      fVar19 = *(float *)(&DAT_1801028b0 + uVar7 * 8);
      fVar1 = *(float *)(&DAT_1801028b4 + uVar7 * 8);
      FUN_18006c6fc(param_1,(longlong)param_2,*puVar14,param_6);
      uVar16 = 0;
      uVar15 = uVar16;
      if (param_2[0xcd] == 0) {
        uVar15 = param_2[0xcc];
      }
      if ((fVar20 == 1.0) && (fVar19 == 1.0)) {
        if ((fVar21 == 0.0) && (fVar1 == 0.0)) {
          local_res8 = (ulonglong)local_res8._5_3_ << 0x28;
          FUN_18006c808(param_1,param_2,param_3,0,param_4[2],local_res8,0,0,'\0');
          FUN_18006c808(param_1,param_2,param_3,1,param_4[3],(ulonglong)uVar3 << 0x28,0,0,'\0');
          goto LAB_18006db66;
        }
        if ((ABS(fVar21) == 1.0) && (fVar1 == 0.0)) {
          local_res8 = (ulonglong)local_res8._5_3_ << 0x28;
          FUN_18006c808(param_1,param_2,param_3,0,param_4[2],local_res8,0,0,'\0');
          FUN_18006c808(param_1,param_2,param_3,1,param_4[3],(ulonglong)uVar3 << 0x28,0,0,'\0');
          puVar14 = param_2 + 0xe8;
          *(undefined8 *)puVar14 = *(undefined8 *)(param_2 + 0xe0);
          *(undefined8 *)(param_2 + 0xea) = *(undefined8 *)(param_2 + 0xe2);
          if (fVar21 < 0.0) {
            uVar16 = 0x80000000;
          }
          *(undefined8 *)(param_2 + 0xec) = *(undefined8 *)(param_2 + 0xe4);
          *(undefined8 *)(param_2 + 0xee) = *(undefined8 *)(param_2 + 0xe6);
          *puVar14 = *puVar14 ^ uVar16;
        }
        else {
          if ((ABS(fVar1) != 1.0) || (fVar21 != 0.0)) goto LAB_18006db4d;
          local_res8 = (ulonglong)local_res8._5_3_ << 0x28;
          FUN_18006c808(param_1,param_2,param_3,0,param_4[2],local_res8,0,0,'\0');
          FUN_18006c808(param_1,param_2,param_3,1,param_4[3],(ulonglong)uVar3 << 0x28,0,0,'\0');
          puVar14 = param_2 + 0xe8;
          *(undefined8 *)puVar14 = *(undefined8 *)(param_2 + 0xd8);
          *(undefined8 *)(param_2 + 0xea) = *(undefined8 *)(param_2 + 0xda);
          if (fVar1 < 0.0) {
            uVar16 = 0x80000000;
          }
          *(undefined8 *)(param_2 + 0xec) = *(undefined8 *)(param_2 + 0xdc);
          *(undefined8 *)(param_2 + 0xee) = *(undefined8 *)(param_2 + 0xde);
          *puVar14 = *puVar14 ^ uVar16;
        }
        FUN_1800edd10(param_2,param_3,uVar15 | 0x32,param_2 + 0xd0);
      }
      else {
LAB_18006db4d:
        FUN_18006ce5c(param_1,param_2,param_3,param_4[2],param_4[3]);
LAB_18006db66:
        FUN_1800edd10(param_2,param_3,uVar15 | 0x38,param_2 + 0xd0);
      }
      puVar14 = param_4 + 4;
      goto LAB_18006df6b;
    }
    if (uVar15 == 0x40) {
      uVar15 = *puVar14;
      if (*(char *)(*(longlong *)(param_2 + 0x40) + 0x126e) == '\x04') {
        uVar16 = param_4[2];
        local_res8._0_4_ = uVar16 & 0xf000000;
        uVar5 = uVar16 >> 0x14 & 0x700 | uVar16 & 0x1800;
        uVar7 = (ulonglong)uVar5;
        if (uVar5 < 0x100) {
          FUN_18006c684(uVar7,(longlong)param_2,uVar16 & 0x7ff);
        }
        if (param_6 == 0) {
          param_6 = FUN_18006c684(uVar7,(longlong)param_2,uVar15 & 0x7ff);
        }
        if ((uint)local_res8 == 0xa000000) {
          FUN_18006fae0((longlong)&local_128,param_6);
        }
        else {
          FUN_1800edbe0(param_2,param_3,0x36,(ulonglong)param_6);
        }
        lVar8 = 0xc;
      }
      else {
        if (param_6 == 0) {
          param_6 = FUN_18006c6c0(0x7ff,(longlong)param_2,uVar15 & 0x7ff);
          param_1 = local_128;
        }
        local_128 = param_1;
        FUN_1800edbe0(param_2,param_3,0x2036,(ulonglong)param_6);
LAB_18006e762:
        lVar8 = 8;
      }
LAB_18006e767:
      puVar14 = (uint *)((longlong)local_c8[0] + lVar8);
      param_2[0xcd] = 0;
      goto LAB_18006df6b;
    }
    if (uVar15 == 0x41) {
      uVar15 = FUN_1800ec8c0((longlong)param_2,4,'\0');
      FUN_1800edbe0(param_2,param_3,1,(ulonglong)uVar15);
      FUN_1800edbe0(param_2,param_3,0x3c,(ulonglong)uVar15);
      FUN_1800edbe0(param_2,param_3,0x3c,(ulonglong)uVar15);
      FUN_1800edbe0(param_2,param_3,0x4000d,0xffffffff);
LAB_18006e611:
      puVar14 = local_res20 + 2;
      param_2[0xcd] = 0;
      goto LAB_18006df6b;
    }
    if (uVar15 == 0x42) {
      uVar15 = *puVar14;
      uVar16 = uVar15 & 0x7ff;
      if (*(char *)(*(longlong *)(param_2 + 0x40) + 0x126e) != '\x04') {
        uVar15 = FUN_18006c6c0(param_1,(longlong)param_2,uVar16);
        FUN_18006d298(param_5,param_2,param_3,uVar16,uVar16 + 5 | 0x410100,uVar15,param_5,0,0);
        goto LAB_18006e762;
      }
      uVar5 = param_4[2];
      uVar17 = (param_5 & 0xffffffffffff) >> ((char)uVar16 * '\x03' & 0x3fU);
      uVar13 = (uint)uVar17 & 7;
      uVar6 = uVar5 >> 0x14 & 0x700 | uVar5 & 0x1800;
      uVar7 = (ulonglong)uVar6;
      if (uVar6 < 0x100) {
        uVar6 = FUN_18006c684(uVar7,(longlong)param_2,uVar5 & 0x7ff);
      }
      else {
        uVar6 = (uVar5 & 0x7ff) + 5 | 0x410100;
      }
      local_res10 = FUN_18006c684(uVar7,(longlong)param_2,uVar16);
      local_res20 = (uint *)CONCAT44(local_res20._4_4_,uVar5 >> 0x10);
      local_res18 = -(uint)((uVar17 & 7) != 0) & uVar5 & 0xf000000;
      if ((uVar13 - 5 < 2) && ((param_5 >> 0x32 & 1) != 0)) {
        uVar5 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
        uVar7 = (ulonglong)uVar5;
      }
      else {
        uVar7 = 0;
      }
      uVar5 = (uint)uVar7;
      if ((local_res18 + 0xf7000000 & 0xfeffffff) == 0) {
        if (uVar6 == local_res10) {
          FUN_1800ec8c0((longlong)param_2,4,'\0');
        }
        puVar10 = &local_128;
        FUN_18006fae0((longlong)puVar10,local_res10);
        FUN_180065668(puVar10,param_2,uVar13,uVar16,local_res10,uVar5,param_5,param_3,0);
      }
      else {
        FUN_180065668(uVar7,param_2,uVar13,uVar16,local_res10,uVar5,param_5,param_3,uVar6);
      }
      pbVar2 = (byte *)((longlong)param_2 + ((longlong)(int)uVar16 >> 3) + 0xb4);
      *pbVar2 = *pbVar2 | '\x01' << (uVar15 & 7);
      FUN_1800ec960((longlong)param_2,uVar5);
      lVar8 = 0xc;
      goto LAB_18006e767;
    }
    if ((uVar15 != 0x43) && (uVar15 != 0x44)) {
      if ((uVar15 != 0x45) && (uVar15 != 0x46)) goto LAB_18006df6b;
LAB_18006e7cc:
      uVar16 = *puVar14 & 0x7ff;
      local_res8._0_4_ = *puVar14 & 0x7ff;
      local_res10 = FUN_18006c6c0(param_1,(longlong)param_2,uVar16);
      uVar16 = uVar16 * 3;
      uVar7 = (ulonglong)uVar16;
      uVar18 = 0xe4;
      if (((param_5 & 0xffffffffffff) >> ((byte)uVar16 & 0x3f) & 7) == 0) {
        uStackX_14 = CONCAT31(uStackX_14._1_3_,0xe4);
        uVar15 = local_res10;
      }
      else {
        if (uVar15 == 0x45) {
          uVar18 = 0xe3;
        }
        else if (uVar15 == 0x46) {
          uVar18 = 0xd9;
        }
        local_res18 = FUN_18006c6c0(uVar7,(longlong)param_2,param_4[2] & 0x7ff);
        uStackX_1c = CONCAT31(uStackX_1c._1_3_,uVar18);
        uVar15 = local_res18;
      }
      FUN_18006d298(uVar7,param_2,param_3,(uint)local_res8,uVar15,local_res10,param_5,0,0);
      param_2[0xcd] = 0;
      puVar14 = param_4 + 3;
      goto LAB_18006df6b;
    }
    uVar16 = param_4[2];
    uVar13 = *puVar14 & 0x7ff;
    uVar6 = FUN_18006c6c0(param_1,(longlong)param_2,uVar13);
    uVar5 = uVar13 * 3;
    if (((param_5 & 0xffffffffffff) >> ((byte)uVar5 & 0x3f) & 7) != 0) {
      uVar5 = FUN_18006c6c0((ulonglong)uVar5,(longlong)param_2,uVar16 & 0x7ff);
      local_res10 = uVar13 + 5 | 0x410100;
      uStackX_14 = CONCAT31(uStackX_14._1_3_,0xe4);
      uVar16 = 0;
      if (uVar15 == 0x44) {
        uVar16 = uVar5;
      }
      FUN_18006d298((ulonglong)uVar16,param_2,param_3,uVar13,uVar13 + 5 | 0x410100,uVar6,param_5,
                    uVar5,uVar16);
      goto LAB_18006e2a8;
    }
    FUN_18006d298((ulonglong)uVar5,param_2,param_3,uVar13,uVar6,uVar6,param_5,0,0);
  }
  else {
    if (uVar15 < 0x54) {
      if (uVar15 == 0x53) {
LAB_18006f505:
        uVar16 = *puVar14 & 0x7ff;
        uVar9 = param_1;
        local_res18 = uVar16;
        uVar15 = FUN_18006c6c0(param_1,(longlong)param_2,uVar16);
        FUN_18006c79c(uVar9,(uint *)&local_res20,(longlong)param_2,param_4[2],0xf);
        FUN_18006c808(param_1,param_2,param_3,0,param_4[2],local_res20,0,0,'\0');
        FUN_18006c6fc(param_1,(longlong)param_2,*puVar14,0);
        FUN_18006f97c((longlong)&local_b8,param_2 + 0xd0,(ulonglong)(uVar16 + 5),-1,-1);
        if (local_res10 == 0x53) {
          local_e8 = param_2[0x2b];
          local_e4 = 0xe4;
          local_d8 = 0;
          uStack_d0 = 0;
          FUN_1800edd10(param_2,param_3,0x36,0x106);
          puVar14 = param_2;
          FUN_1800edd10(param_2,param_3,0x36,0x108);
          local_res10 = param_2[0xd0];
          uStackX_14 = CONCAT31(uStackX_14._1_3_,0xe4);
          FUN_18006d298(puVar14,param_2,param_3,local_res18,local_res10,uVar15,param_5,0,0);
        }
LAB_18006e02a:
        param_2[0xcd] = 0;
        puVar14 = param_4 + 3;
        goto LAB_18006df6b;
      }
      if (uVar15 != 0x48) {
        if (uVar15 != 0x49) {
          if (uVar15 == 0x4a) goto LAB_18006f243;
          if ((uVar15 == 0x4c) || (uVar15 == 0x4d)) {
            local_res18 = *puVar14 & 0x7ff;
            local_128._0_4_ = 0;
            local_128._4_4_ = (uint)local_res8._5_3_ << 8;
            puVar11 = (uint *)(ulonglong)(local_res18 * 3);
            local_118 = (longlong *)0xffffffffffffffff;
            uStack_110 = 0xffffffff;
            uStack_10c = 0xffffffff;
            if (((param_5 & 0xffffffffffff) >> ((byte)(local_res18 * 3) & 0x3f) & 7) != 0) {
              FUN_18006c79c(puVar11,(uint *)&local_res20,(longlong)param_2,param_4[2],0xf);
              uVar9 = param_1;
              FUN_18006c808(param_1,param_2,param_3,0,param_4[2],local_res20,0,0,'\0');
              FUN_18006c6fc(uVar9,(longlong)param_2,*puVar14,0);
              local_98 = local_res18 + 5;
              local_res20 = (uint *)CONCAT44(local_res20._4_4_,local_res18 + 4);
              FUN_18006f97c((longlong)&local_b8,param_2 + 0xd0,(ulonglong)(local_res18 + 3),
                            local_res18 + 4,local_98);
              puVar14 = param_2;
              local_128._0_4_ = FUN_1800ec8c0((longlong)param_2,4,'\x01');
              uVar15 = local_res10;
              uStack_10c = 0xffffffff;
              uStack_110 = 0xffffffff;
              local_118 = (longlong *)0xffffffffffffffff;
              local_128._4_4_ = CONCAT31(local_128._5_3_,0xe4);
              if (local_res10 == 0x4c) {
                FUN_18006c79c(puVar14,&local_res10,(longlong)param_2,param_4[3],0xf);
                FUN_18006c808(param_1,param_2,param_3,1,param_4[3],CONCAT44(uStackX_14,local_res10),
                              0,0,'\0');
              }
              else {
                FUN_1800edbe0(param_2,param_3,0x36,(ulonglong)(uint)local_128);
                FUN_1800edbe0(param_2,param_3,0x36,(ulonglong)(uint)local_128);
                FUN_1800edbe0(param_2,param_3,0x36,(ulonglong)(uint)local_128);
                *(ulonglong *)(param_2 + 0xe0) = CONCAT44(local_128._4_4_,(uint)local_128);
                *(uint **)(param_2 + 0xe2) = uStack_120;
                *(longlong **)(param_2 + 0xe4) = local_118;
                *(ulonglong *)(param_2 + 0xe6) = CONCAT44(uStack_10c,uStack_110);
              }
              FUN_1800edd10(param_2,param_3,0x10,0x108);
              FUN_1800edd10(param_2,param_3,0x10,0x108);
              FUN_1800edd10(param_2,param_3,0,0x108);
              FUN_1800edd10(param_2,param_3,0xe,0x108);
              param_2[0xe0] = param_2[0xe0] ^ 0x80000000;
              FUN_1800edd10(param_2,param_3,0x32,0x107);
              FUN_1800edd10(param_2,param_3,0x36,0x108);
              puVar11 = param_2;
              FUN_1800ec960((longlong)param_2,(uint)local_128);
            }
            uVar16 = local_res18;
            uVar5 = FUN_18006c6c0(puVar11,(longlong)param_2,local_res18);
            FUN_18006d298(CONCAT44(local_128._4_4_,(uint)local_128),param_2,param_3,uVar16,
                          (uint)local_128,uVar5,param_5,0,0);
            param_2[0xcd] = 0;
            lVar8 = 0xc;
            if (uVar15 == 0x4c) {
              lVar8 = 0x10;
            }
            puVar14 = (uint *)(lVar8 + (longlong)local_c8[0]);
            goto LAB_18006df6b;
          }
          if (uVar15 != 0x50) {
            if (uVar15 != 0x52) goto LAB_18006df6b;
            goto LAB_18006e7cc;
          }
          FUN_18006c6fc(param_1,(longlong)param_2,*puVar14,param_6);
          FUN_18006cfe0(param_1,param_2,param_3,(ulonglong)param_4[2],param_4[3],param_4[4]);
          uVar15 = param_2[0xcd];
          uVar16 = param_2[0xd1];
          puVar14 = param_2;
          uVar5 = FUN_1800ec8c0((longlong)param_2,4,'\0');
          local_128._4_4_ = CONCAT31(local_128._5_3_,(char)uVar16);
          local_118 = (longlong *)0xffffffffffffffff;
          uStack_110 = 0xffffffff;
          uStack_10c = 0xffffffff;
          if (((byte)param_2[0xd1] < 9) && ((0x116U >> ((byte)param_2[0xd1] & 0x1f) & 1) != 0)) {
            cVar4 = '\x01';
          }
          else {
            cVar4 = '\0';
          }
          local_128._0_4_ = uVar5;
          FUN_18006560c(puVar14,(undefined8 *)local_108,(longlong)param_2,0x3f000000,cVar4);
          FUN_1800edd10(param_2,param_3,0x31,&local_128);
          if (uVar15 == 0) {
            uVar16 = param_2[0xcc];
          }
          else {
            uVar16 = 0;
          }
          FUN_1800ee208(0xe4,local_128._4_1_);
LAB_18006f140:
          uVar16 = uVar16 | 0x37;
          goto LAB_18006e155;
        }
        goto LAB_18006ee6a;
      }
LAB_18006f69d:
      uVar16 = *puVar14 & 0x7ff;
      local_res8._0_4_ = *puVar14 & 0x7ff;
      uVar5 = FUN_18006c6c0(param_1,(longlong)param_2,uVar16);
      uVar16 = uVar16 * 3;
      uVar7 = (ulonglong)uVar16;
      if ((((param_5 & 0xffffffffffff) >> ((byte)uVar16 & 0x3f) & 7) == 0) &&
         (uVar9 = local_128, uVar15 == 0x48)) goto LAB_18006f28e;
      local_res10 = uVar5;
      FUN_18006c79c(uVar7,&local_res18,(longlong)param_2,param_4[2],0xf);
      FUN_18006c808(param_1,param_2,param_3,0,param_4[2],CONCAT44(uStackX_1c,local_res18),0,0,'\0');
      if (uVar15 == 0x48) {
        uVar15 = FUN_1800ec8c0((longlong)param_2,4,'\0');
        local_128._4_4_ = CONCAT31(local_128._5_3_,0xe4);
        local_118 = (longlong *)0xffffffffffffffff;
        uStack_110 = 0xffffffff;
        uStack_10c = 0xffffffff;
        local_128._0_4_ = uVar15;
        FUN_18006f97c((longlong)&local_b8,&local_128,(ulonglong)((uint)local_res8 + 4),
                      (uint)local_res8 + 5,-1);
        FUN_1800edd10(param_2,param_3,0x36,0x10c);
        uVar9 = CONCAT44(local_128._4_4_,(uint)local_128);
        uVar7 = (ulonglong)local_res10;
        goto LAB_18006f2be;
      }
      FUN_18006c6fc(param_1,(longlong)param_2,*puVar14,0);
      FUN_18006f97c((longlong)&local_b8,param_2 + 0xd0,(ulonglong)((uint)local_res8 + 4),
                    (uint)local_res8 + 5,-1);
      param_2[0xdc] = 0xffffffff;
      param_2[0xdf] = 0xffffffff;
      param_2[0xde] = 0xffffffff;
      param_2[0xdd] = 0xffffffff;
      local_f8 = 0xffffffff;
      local_f4 = 0xffffffff;
      local_f0 = 0xffffffff;
      local_ec = 0xffffffff;
      uStack_d0 = 0xffffffffffffffff;
      uStack_110 = 0xffffffff;
      uStack_10c = 0xffffffff;
      param_2[0xd8] = param_2[0xd0];
      *(undefined1 *)(param_2 + 0xd9) = 2;
      local_e8 = param_2[0x2a];
      local_118 = (longlong *)0xffffffff3f800000;
      local_108._0_4_ = 0x20010c00;
      local_108[4] = 0;
      local_e4 = 0xe4;
      local_d8 = 0xffffffff7fffffff;
      local_128._4_4_ = CONCAT31(local_128._5_3_,0xe4);
      local_128._0_4_ = local_e8;
      FUN_1800edd10(param_2,param_3,0xe,0x101);
      FUN_1800edd10(param_2,param_3,1,0x102);
      FUN_1800edd10(param_2,param_3,0x37,local_108);
    }
    else {
      if (uVar15 == 0x54) goto LAB_18006f69d;
      if (uVar15 == 0x55) goto LAB_18006f505;
      if (uVar15 != 0x56) {
        if (uVar15 == 0x57) {
          uVar15 = FUN_18006c684(param_1,(longlong)param_2,*puVar14 & 0x7ff);
          FUN_1800edbe0(param_2,param_3,0xe,(ulonglong)uVar15);
          FUN_1800edbe0(param_2,param_3,1,(ulonglong)uVar15);
          FUN_1800edbe0(param_2,param_3,0x37,0x20010c00);
          goto LAB_18006e611;
        }
        if (uVar15 != 0x58) {
          if (uVar15 != 0x59) goto LAB_18006df6b;
          FUN_18006c6fc(param_1,(longlong)param_2,*puVar14,param_6);
          FUN_18006ce5c(param_1,param_2,param_3,param_4[2],param_4[3]);
          uVar15 = param_2[0xcd];
          uVar16 = param_2[0xd0];
          uVar5 = FUN_1800ec8c0((longlong)param_2,4,'\0');
          local_e8 = param_2[0x1c];
          iVar12 = (uVar16 & 0xff) * 0x40;
          local_118 = (longlong *)0xffffffffffffffff;
          uStack_110 = 0xffffffff;
          uStack_10c = 0xffffffff;
          local_a8 = (longlong *)CONCAT44(0xffffffff,iVar12 + 0xc0);
          local_a0 = 0xffffffff;
          local_9c = 0xffffffff;
          local_d8 = CONCAT44(0xffffffff,iVar12 + 200);
          uStack_d0 = 0xffffffffffffffff;
          local_128._4_4_ = CONCAT31(local_128._5_3_,0x54);
          local_b8._0_5_ = CONCAT14(0x54,local_e8);
          local_e4 = 0x54;
          local_128._0_4_ = uVar5;
          FUN_1800edd10(param_2,param_3,0xf,0x101);
          FUN_1800edd10(param_2,param_3,0xf,0x102);
          if (uVar15 == 0) {
            uVar15 = param_2[0xcc];
          }
          else {
            uVar15 = 0;
          }
          FUN_1800edd10(param_2,param_3,uVar15,param_2 + 0xd0);
          goto LAB_18006df5d;
        }
        FUN_18006c6fc(param_1,(longlong)param_2,*puVar14,param_6);
        FUN_18006cfe0(param_1,param_2,param_3,(ulonglong)param_4[2],param_4[3],param_4[4]);
        uVar15 = param_2[0xcd];
        uVar16 = param_2[0xd1];
        uVar5 = FUN_1800ec8c0((longlong)param_2,4,'\0');
        local_b8._0_5_ = CONCAT14((char)uVar16,uVar5);
        local_a8 = (longlong *)0xffffffffffffffff;
        local_a0 = 0xffffffff;
        local_9c = 0xffffffff;
        uStack_110 = 0x80000000;
        if (((byte)param_2[0xd1] < 9) && ((0x116U >> ((byte)param_2[0xd1] & 0x1f) & 1) != 0)) {
          local_128._0_4_ = param_2[0x2a];
          uStack_110 = 0xffffffff;
        }
        else {
          local_128._0_4_ = param_2[0x2b];
        }
        local_118 = (longlong *)CONCAT44(uStack_110,0x80000000);
        uVar16 = 0;
        local_128._5_3_ = (undefined3)local_108._5_7_;
        uStack_120._0_4_ = SUB74(local_108._5_7_,3);
        uStack_120._4_4_ = uStack_fc;
        local_128._4_4_ = CONCAT31(local_128._5_3_,0xe4);
        uStack_10c = uStack_110;
        FUN_1800edd10(param_2,param_3,1,&local_b8);
        if (uVar15 == 0) {
          uVar16 = param_2[0xcc];
        }
        FUN_1800ee208(0xe4,local_b8._4_1_);
        goto LAB_18006f140;
      }
LAB_18006f243:
      uVar16 = *puVar14 & 0x7ff;
      local_res8._0_4_ = *puVar14 & 0x7ff;
      uVar5 = FUN_18006c6c0(param_1,(longlong)param_2,uVar16);
      uVar16 = uVar16 * 3;
      uVar7 = (ulonglong)uVar16;
      local_res18 = uVar5;
      if ((((param_5 & 0xffffffffffff) >> ((byte)uVar16 & 0x3f) & 7) != 0) ||
         (uVar9 = local_128, uVar15 != 0x4a)) {
        FUN_18006c79c(uVar7,(uint *)local_c8,(longlong)param_2,param_4[2],0xf);
        FUN_18006c808(param_1,param_2,param_3,0,param_4[2],local_c8[0],0,0,'\0');
        uVar15 = local_res10;
        if (local_res10 == 0x4a) {
          uVar16 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
          uVar18 = 0xe4;
          uVar5 = 0xffffffff;
          uVar6 = 0xffffffff;
          uStack_110 = 0xffffffff;
          uStack_10c = 0xffffffff;
        }
        else {
          FUN_18006c6fc(param_1,(longlong)param_2,*puVar14,0);
          uVar16 = param_2[0xd0];
          uVar18 = (undefined1)param_2[0xd1];
          uStack_fc = param_2[0xd3];
          uVar5 = param_2[0xd4];
          uVar6 = param_2[0xd5];
          uStack_110 = param_2[0xd6];
          uStack_10c = param_2[0xd7];
          local_108._5_7_ = (undefined7)*(undefined8 *)((longlong)param_2 + 0x345);
        }
        local_128._5_3_ = (undefined3)local_108._5_7_;
        uStack_120._0_4_ = SUB74(local_108._5_7_,3);
        local_128._4_4_ = CONCAT31(local_128._5_3_,uVar18);
        local_118 = (longlong *)CONCAT44(uVar6,uVar5);
        local_128._0_4_ = uVar16;
        uStack_120._4_4_ = uStack_fc;
        FUN_18006f97c((longlong)&local_b8,&local_128,(ulonglong)((uint)local_res8 + 3),
                      (uint)local_res8 + 4,(uint)local_res8 + 5);
        if (uVar15 == 0x4a) {
          puVar14 = param_2;
          FUN_1800edd10(param_2,param_3,0x36,0x108);
          FUN_18006d298(puVar14,param_2,param_3,(uint)local_res8,(uint)local_128,local_res18,param_5
                        ,0,0);
        }
        else {
          local_e8 = param_2[0x2a];
          uStack_d0 = 0xffffffffffffffff;
          local_d8 = 0xffffffff3f800000;
          local_e4 = 0xe4;
          FUN_1800edd10(param_2,param_3,0x36,0x108);
        }
        FUN_1800ec960((longlong)param_2,(uint)local_128);
        goto LAB_18006e2a8;
      }
LAB_18006f28e:
      uStackX_14 = CONCAT31(uStackX_14._1_3_,0xe4);
      local_res10 = uVar5;
      local_128._0_4_ = uVar5;
LAB_18006f2be:
      FUN_18006d298(uVar7,param_2,param_3,(uint)local_res8,(uint)local_128,local_res10,param_5,0,0);
      local_128 = uVar9;
    }
LAB_18006e2a8:
    param_2[0xcd] = 0;
  }
  puVar14 = local_res20 + 3;
LAB_18006df6b:
  uVar15 = param_2[0xf0];
  uVar7 = 0;
  while ((uVar15 != 0 && (uVar16 = (uint)uVar7, uVar16 < 4))) {
    FUN_1800ec960((longlong)param_2,param_2[uVar7 + 0xf0]);
    param_2[uVar7 + 0xf0] = 0;
    uVar15 = param_2[(ulonglong)(uVar16 + 1) + 0xf0];
    uVar7 = (ulonglong)(uVar16 + 1);
  }
  return puVar14;
}

