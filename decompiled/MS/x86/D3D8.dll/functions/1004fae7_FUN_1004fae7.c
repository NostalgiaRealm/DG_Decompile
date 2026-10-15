/*
 * FUN_1004fae7 at 1004fae7
 * uint * __thiscall FUN_1004fae7(void * this, uint * param_1, uint * param_2, uint * param_3, int param_4, uint param_5, uint param_6)
 * Address ranges: 1004fae7-100513b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __thiscall
FUN_1004fae7(void *this,uint *param_1,uint *param_2,uint *param_3,int param_4,uint param_5,
            uint param_6)

{
  bool bVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  char cVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  undefined4 extraout_EDX_09;
  undefined4 extraout_EDX_10;
  undefined4 extraout_EDX_11;
  undefined4 extraout_EDX_12;
  undefined4 extraout_EDX_13;
  uint **ppuVar13;
  uint *puVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  uint *puVar18;
  uint local_d0 [9];
  void *local_ac;
  uint *local_a8;
  uint *local_a4;
  uint local_a0;
  undefined1 local_9c;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  uint local_80;
  undefined1 local_7c;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint *local_60;
  uint *local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  uint *local_3c;
  undefined1 *local_38;
  void *local_34;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  undefined1 local_11;
  
  local_20 = (uint *)(uint)(ushort)*param_3;
  puVar10 = param_3 + 1;
  local_a8 = param_1;
  local_a4 = param_2;
  local_30 = param_1;
  local_2c = param_2;
  local_ac = this;
  local_34 = this;
  local_28 = this;
  if (local_20 < (uint *)0x48) {
    if (local_20 == (uint *)0x47) goto switchD_100507aa_caseD_49;
    if (local_20 < (uint *)0x13) {
      if (local_20 == (uint *)0x12) {
        local_24 = (uint *)param_3[2];
        local_38 = (undefined1 *)param_3[3];
        local_18 = (uint *)param_3[4];
        if (((uint)local_24 & 0xf000000) == 0x6000000) {
          local_24 = (uint *)((uint)local_24 & 0xf0ffffff);
          local_18 = (uint *)param_3[3];
          local_38 = (undefined1 *)param_3[4];
        }
        FUN_1004f034((int)param_1,*puVar10,param_4);
        FUN_1004f6fd((int *)param_1,(int *)param_2,(uint)local_24,(uint)local_38,(uint)local_18);
        local_11 = (undefined1)param_1[0x91];
        uVar5 = param_1[0x8d];
        local_60 = (uint *)FUN_100a05ed((int)param_1,4,'\0');
        param_1[0xa8] = param_1[0xa8] ^ 0x80000000;
        local_5c = (uint *)CONCAT31(local_5c._1_3_,local_11);
        local_50 = 0xffffffff;
        local_4c = 0xffffffff;
        local_48 = 0xffffffff;
        local_44 = 0xffffffff;
        FUN_100a14a8((int *)param_1,(int *)param_2,0);
        puVar10 = param_1 + 0xa8;
        *puVar10 = *puVar10 ^ 0x80000000;
        if (uVar5 == 0) {
          local_18 = (uint *)param_1[0x8c];
        }
        else {
          local_18 = (uint *)0x0;
        }
        FUN_100a1889(CONCAT31((int3)((uint)puVar10 >> 8),0xe4),
                     CONCAT31((int3)((uint)extraout_EDX_05 >> 8),local_5c._0_1_));
        uVar5 = (uint)local_18 | 0x32;
        goto LAB_10050321;
      }
      if (local_20 == (uint *)0x1) {
        FUN_1004f034((int)param_1,*puVar10,param_4);
        FUN_1004f115(local_28,extraout_EDX_04,(int *)param_1,(int *)param_2,0,param_3[2],
                     *puVar10 >> 7 & 0x2000,*puVar10 >> 0x18 & 0xf,'\x01',param_1[0x90],
                     (char)param_1[0x91]);
        goto switchD_100507aa_caseD_49;
      }
      if ((local_20 == (uint *)0x2) || (local_20 == (uint *)0x3)) {
        uVar5 = param_3[2] >> 0x18 & 0xf;
        uVar11 = param_3[3] >> 0x18 & 0xf;
        local_1c = *(uint **)(&DAT_100b2700 + uVar5 * 8);
        if (local_20 == (uint *)0x2) {
          fVar15 = 1.0;
        }
        else {
          fVar15 = -1.0;
        }
        local_24 = (uint *)(fVar15 * *(float *)(&DAT_100b2704 + uVar11 * 8) +
                           *(float *)(&DAT_100b2704 + uVar5 * 8));
        local_18 = *(uint **)(&DAT_100b2700 + uVar11 * 8);
        FUN_1004f034((int)param_1,*puVar10,param_4);
        local_2c = (uint *)((uint)local_2c & 0xffffff00);
        FUN_1004f115(local_28,extraout_EDX_02,(int *)param_1,(int *)param_2,0,param_3[2],0,0,'\0',0,
                     '\0');
        local_2c = (uint *)((uint)local_2c & 0xffffff00);
        local_38 = (undefined1 *)0x1;
        FUN_1004f115(local_28,extraout_EDX_03,(int *)param_1,(int *)param_2,1,param_3[3],0,0,'\0',0,
                     '\0');
        uVar5 = 0;
        if (local_20 == (uint *)0x3) {
          uVar5 = 0x80000000;
        }
        uVar5 = uVar5 ^ param_1[0xa0];
        param_1[0xa0] = uVar5;
        local_3c = (uint *)param_1[0x8d];
        puVar6 = (undefined1 *)
                 ((uint)CONCAT21((short)(uVar5 >> 0x10),
                                 ((float)local_24 == 0.0) << 6 | NAN((float)local_24) << 2 | 2U |
                                 (float)local_24 < 0.0) << 8);
        puVar3 = puVar6;
        if ((float)local_24 != 0.0) {
          puVar6 = (undefined1 *)0x1;
          puVar3 = local_38;
        }
        local_38 = puVar3;
        if (((uint)puVar6 & 0xff) == 0 && local_3c == (uint *)0x0) {
          local_20 = (uint *)param_1[0x8c];
        }
        else {
          local_20 = (uint *)0x0;
        }
        uVar7 = FUN_100a1889(CONCAT31((int3)((uint)local_3c >> 8),0xe4),
                             CONCAT31(0x800000,(char)param_1[0x91]));
        local_11 = (undefined1)uVar7;
        if (((float)local_1c == 1.0) && ((float)local_18 == 1.0)) {
          FUN_100a14a8((int *)param_1,(int *)param_2,(uint)local_20);
        }
        else {
          if ((float)local_1c == (float)local_18) {
            cVar4 = FUN_100a18e8((char)param_1[0x91]);
            FUN_1004a057(&local_80,(int)param_1,cVar4);
            FUN_100a14a8((int *)param_1,(int *)param_2,0);
            uVar5 = (uint)local_20 | 0x38;
          }
          else {
            bVar1 = (float)local_18 != 1.0;
            local_18 = param_1 + 0x98;
            if (bVar1) {
              local_18 = param_1 + 0xa0;
            }
            cVar4 = FUN_100a18e8((char)param_1[0x91]);
            FUN_1004a057(&local_80,(int)param_1,cVar4);
            uVar5 = (uint)local_20 | 0x32;
          }
          FUN_100a14a8((int *)param_1,(int *)param_2,uVar5);
        }
        if ((char)local_38 != '\0') {
          cVar4 = FUN_100a18e8((char)param_1[0x91]);
          FUN_1004a057(&local_80,(int)param_1,cVar4);
          if (local_3c == (uint *)0x0) {
            uVar5 = param_1[0x8c];
          }
          else {
            uVar5 = 0;
          }
          FUN_100a14a8((int *)param_1,(int *)param_2,uVar5);
        }
LAB_1004fbfc:
        puVar10 = param_3 + 4;
        goto switchD_100507aa_caseD_4b;
      }
      if (local_20 != (uint *)&DAT_00000004) {
        if (local_20 != (uint *)0x5) {
          if ((local_20 != (uint *)&DAT_00000008) && (local_20 != (uint *)0x9))
          goto switchD_100507aa_caseD_4b;
          FUN_1004f034((int)param_1,*puVar10,param_4);
          FUN_1004f613((int *)param_1,(int *)param_2,param_3[2],param_3[3]);
          local_1c = (uint *)((local_20 != (uint *)&DAT_00000008) + 0x10);
          if (param_1[0x8d] == 0) {
            local_18 = (uint *)param_1[0x8c];
          }
          else {
            local_18 = (uint *)0x0;
          }
          FUN_100a14a8((int *)param_1,(int *)param_2,(uint)local_18 | (uint)local_1c);
          goto LAB_1004fbfc;
        }
        uVar11 = param_3[2] >> 0x18 & 0xf;
        uVar5 = param_3[3] >> 0x18 & 0xf;
        puVar8 = *(uint **)(&DAT_100b2704 + uVar11 * 8);
        puVar14 = *(uint **)(&DAT_100b2704 + uVar5 * 8);
        fVar15 = *(float *)(&DAT_100b2700 + uVar11 * 8);
        fVar16 = *(float *)(&DAT_100b2700 + uVar5 * 8);
        local_3c = puVar14;
        local_1c = puVar8;
        FUN_1004f034((int)param_1,*puVar10,param_4);
        if (param_1[0x8d] == 0) {
          local_20 = (uint *)param_1[0x8c];
        }
        else {
          local_20 = (uint *)0x0;
        }
        if ((fVar15 == 1.0) && (fVar16 == 1.0)) {
          if (((float)puVar8 == 0.0) && ((float)puVar14 == 0.0)) {
            local_2c = (uint *)((uint)local_2c._1_3_ << 8);
            FUN_1004f115(local_28,0,(int *)param_1,(int *)param_2,0,param_3[2],0,0,'\0',0,'\0');
            local_2c = (uint *)((uint)local_2c & 0xffffff00);
            FUN_1004f115(local_28,extraout_EDX,(int *)param_1,(int *)param_2,1,param_3[3],0,0,'\0',0
                         ,'\0');
            goto LAB_1004fe8b;
          }
          if ((ABS((float)puVar8) == 1.0) && ((float)puVar14 == 0.0)) {
            local_2c = (uint *)((uint)local_2c._1_3_ << 8);
            FUN_1004f115(local_28,0,(int *)param_1,(int *)param_2,0,param_3[2],0,0,'\0',0,'\0');
            local_2c = (uint *)((uint)local_2c & 0xffffff00);
            FUN_1004f115(local_28,extraout_EDX_00,(int *)param_1,(int *)param_2,1,param_3[3],0,0,
                         '\0',0,'\0');
            uVar5 = 0;
            puVar10 = param_1 + 0xa8;
            puVar8 = param_1 + 0xa0;
            puVar14 = puVar10;
            for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
              *puVar14 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar14 = puVar14 + 1;
            }
            if ((float)local_1c < 0.0) {
              uVar5 = 0x80000000;
            }
            *puVar10 = *puVar10 ^ uVar5;
          }
          else {
            if ((ABS((float)puVar14) != 1.0) || ((float)puVar8 != 0.0)) goto LAB_1004fe79;
            local_2c = (uint *)((uint)local_2c._1_3_ << 8);
            FUN_1004f115(local_28,0,(int *)param_1,(int *)param_2,0,param_3[2],0,0,'\0',0,'\0');
            local_2c = (uint *)((uint)local_2c & 0xffffff00);
            FUN_1004f115(local_28,extraout_EDX_01,(int *)param_1,(int *)param_2,1,param_3[3],0,0,
                         '\0',0,'\0');
            uVar5 = 0;
            puVar10 = param_1 + 0xa8;
            puVar8 = param_1 + 0x98;
            puVar14 = puVar10;
            for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
              *puVar14 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar14 = puVar14 + 1;
            }
            if ((float)local_3c < 0.0) {
              uVar5 = 0x80000000;
            }
            *puVar10 = *puVar10 ^ uVar5;
          }
          FUN_100a14a8((int *)param_1,(int *)param_2,(uint)local_20 | 0x32);
        }
        else {
LAB_1004fe79:
          FUN_1004f613((int *)param_1,(int *)param_2,param_3[2],param_3[3]);
LAB_1004fe8b:
          FUN_100a14a8((int *)param_1,(int *)param_2,(uint)local_20 | 0x38);
        }
        param_3 = param_3 + 4;
        goto LAB_1004fc07;
      }
      FUN_1004f034((int)param_1,*puVar10,param_4);
      if (param_1[0x8d] == 0) {
        local_18 = (uint *)param_1[0x8c];
      }
      else {
        local_18 = (uint *)0x0;
      }
      FUN_1004f6fd((int *)param_1,(int *)param_2,param_3[2],param_3[3],param_3[4]);
      FUN_100a14a8((int *)param_1,(int *)param_2,(uint)local_18 | 0x32);
      goto LAB_1004ff2a;
    }
    if (local_20 == (uint *)&DAT_00000040) {
      local_28 = (uint *)(*puVar10 >> 0x10);
      local_3c = (uint *)(*puVar10 & 0x1fff);
      if (*(char *)(param_1[0x39] + 0x126) == '\x04') {
        puVar10 = param_3 + 2;
        local_18 = (uint *)*puVar10;
        local_24 = (uint *)((uint)local_18 & 0x1fff);
        local_38 = (undefined1 *)((uint)local_18 & 0xf000000);
        local_20 = (uint *)((uint)((int)local_24 + 5) | 0x410100);
        local_1c = local_20;
        if (((uint)local_18 & 0x70000000) == 0) {
          local_1c = (uint *)FUN_1004efd4((int)param_1,(int)local_24);
        }
        puVar8 = local_3c;
        local_3c = (uint *)CONCAT31(local_3c._1_3_,(char)((uint)local_18 >> 0x10));
        if (param_4 == 0) {
          FUN_1004efd4((int)param_1,(int)puVar8);
        }
        if (local_38 == (undefined1 *)0xa000000) {
          FUN_10051510((int)&local_34);
          goto LAB_100505d5;
        }
        uVar5 = 0x36;
      }
      else {
        if (param_4 == 0) {
          FUN_1004f004((int)param_1,(int)local_3c);
        }
        uVar5 = 0x2036;
      }
      FUN_100a138c((int *)param_1,(int *)param_2,uVar5);
LAB_100505d5:
      param_1[0x8d] = 0;
      puVar10 = puVar10 + 1;
      goto switchD_100507aa_caseD_4b;
    }
    if (local_20 == (uint *)0x41) {
      FUN_100a05ed((int)param_1,4,'\0');
      FUN_100a138c((int *)param_1,(int *)param_2,1);
      FUN_100a138c((int *)param_1,(int *)param_2,0x3c);
      FUN_100a138c((int *)param_1,(int *)param_2,0x3c);
      FUN_100a138c((int *)param_1,(int *)param_2,0x4000d);
      param_3 = param_3 + 2;
      param_1[0x8d] = 0;
      goto LAB_1004fc07;
    }
    if (local_20 == (uint *)0x42) {
      local_20 = (uint *)(*puVar10 & 0x1fff);
      uVar17 = __aullshr((char)local_20 * '\x03',0);
      local_38 = (undefined1 *)((uint)uVar17 & 7);
      if (*(char *)(param_1[0x39] + 0x126) == '\x04') {
        puVar10 = param_3 + 2;
        local_1c = (uint *)*puVar10;
        if (((uint)local_1c & 0x70000000) == 0) {
          local_28 = (uint *)FUN_1004efd4((int)param_1,(uint)local_1c & 0x1fff);
        }
        else {
          local_28 = (uint *)(((uint)local_1c & 0x1fff) + 5 | 0x410100);
        }
        local_24 = (uint *)FUN_1004efd4((int)param_1,(int)local_20);
        uVar5 = (uint)local_1c & 0xf000000;
        local_1c = (uint *)CONCAT31(local_1c._1_3_,(char)((uint)local_1c >> 0x10));
        local_3c = (uint *)(-(uint)(local_38 != (undefined1 *)0x0) & uVar5);
        uVar7 = FUN_1004a0d6(param_5,param_6,(char)local_20);
        if ((char)uVar7 == '\0') {
          local_18 = (uint *)0x0;
        }
        else {
          local_18 = (uint *)FUN_100a05ed((int)param_1,4,'\x01');
        }
        if ((local_3c == (uint *)0x9000000) ||
           (puVar8 = local_28, puVar14 = local_1c, local_3c == (uint *)0xa000000)) {
          if (local_28 == local_24) {
            FUN_100a05ed((int)param_1,4,'\0');
          }
          FUN_10051510((int)&local_34);
          puVar8 = (uint *)0x0;
          puVar14 = (uint *)0xe4;
        }
        FUN_1004a113(param_1,(int)local_38,(uint)local_20,(uint)local_24,local_18,param_5,param_6,
                     (int *)param_2,(int)puVar8,(byte)puVar14);
        pbVar2 = (byte *)((int)param_1 + ((int)local_20 >> 3) + 0x9c);
        *pbVar2 = *pbVar2 | '\x01' << ((uint)local_20 & 7);
        FUN_100a068b((int)param_1,(uint)local_18);
      }
      else {
        uVar5 = FUN_1004f004((int)param_1,(int)local_20);
        local_2c = (uint *)CONCAT31(local_2c._1_3_,0xe4);
        FUN_1004f8ba(param_1,(int *)param_2,(uint)local_20,uVar5,0,0,
                     (uint)((int)local_20 + 5) | 0x410100,0xe4,param_5,param_6);
      }
      goto LAB_100505d5;
    }
    if ((local_20 != (uint *)0x43) && (local_20 != (uint *)0x44)) {
      if ((local_20 == (uint *)0x45) || (local_20 == (uint *)0x46)) goto switchD_100507aa_caseD_52;
      goto switchD_100507aa_caseD_4b;
    }
    local_24 = (uint *)(*puVar10 & 0x1fff);
    local_1c = (uint *)(param_3[2] & 0x1fff);
    local_18 = (uint *)FUN_1004f004((int)param_1,(int)local_24);
    uVar17 = __aullshr((char)local_24 * '\x03',0);
    if ((uVar17 & 7) != 0) {
      iVar9 = FUN_1004f004((int)param_1,(int)local_1c);
      local_2c = (uint *)CONCAT31(local_2c._1_3_,0xe4);
      puVar10 = (uint *)((uint)((int)local_24 + 5) | 0x410100);
      puVar8 = local_24;
      puVar14 = local_18;
      iVar12 = 0;
      puVar18 = local_2c;
      if (local_20 == (uint *)0x44) {
        iVar12 = iVar9;
      }
      goto LAB_1005043f;
    }
    local_2c = (uint *)CONCAT31(local_2c._1_3_,0xe4);
    FUN_1004f8ba(param_1,(int *)param_2,(uint)local_24,(uint)local_18,0,0,(int)local_18,0xe4,param_5
                 ,param_6);
    goto LAB_1005021b;
  }
  switch(local_20) {
  case (uint *)0x48:
  case (uint *)0x54:
    local_24 = (uint *)(*puVar10 & 0x1fff);
    local_1c = (uint *)FUN_1004f004((int)param_1,(int)local_24);
    uVar17 = __aullshr((char)local_24 * '\x03',0);
    if (((uVar17 & 7) == 0) && (local_20 == (uint *)0x48)) {
      local_2c = (uint *)CONCAT31(local_2c._1_3_,0xe4);
      puVar10 = local_1c;
      puVar18 = local_2c;
    }
    else {
      FUN_1004f0bb((uint *)&local_30,(int)param_1,param_3[2],0xf);
      FUN_1004f115(local_28,extraout_EDX_09,(int *)param_1,(int *)param_2,0,param_3[2],0,0,'\0',
                   (int)local_30,(char)local_2c);
      local_3c = (uint *)((int)local_24 + 5);
      local_18 = local_24 + 1;
      if (local_20 != (uint *)0x48) {
        FUN_1004f034((int)param_1,*puVar10,0);
        FUN_100513f5(&local_ac,param_1 + 0x90,local_18,(int)local_3c,-1);
        param_1[0x98] = param_1[0x90];
        *(undefined1 *)(param_1 + 0x99) = 2;
        param_1[0x9c] = 0xffffffff;
        param_1[0x9f] = 0xffffffff;
        param_1[0x9e] = 0xffffffff;
        param_1[0x9d] = 0xffffffff;
        local_a0 = param_1[0x24];
        local_1c = (uint *)0x3f800000;
        local_60 = (uint *)0x20010c00;
        local_5c = (uint *)((uint)local_5c & 0xffffff00);
        local_50 = 0xffffffff;
        local_4c = 0xffffffff;
        local_48 = 0xffffffff;
        local_44 = 0xffffffff;
        local_7c = 0xe4;
        local_70 = 0x7fffffff;
        local_6c = 0xffffffff;
        local_68 = 0xffffffff;
        local_64 = 0xffffffff;
        local_9c = 0xe4;
        local_90 = 0x3f800000;
        local_8c = 0xffffffff;
        local_88 = 0xffffffff;
        local_84 = 0xffffffff;
        local_80 = local_a0;
        FUN_100a14a8((int *)param_1,(int *)param_2,0xe);
        FUN_100a14a8((int *)param_1,(int *)param_2,1);
        FUN_100a14a8((int *)param_1,(int *)param_2,0x37);
        goto switchD_100507aa_caseD_49;
      }
      local_60 = (uint *)FUN_100a05ed((int)param_1,4,'\0');
      local_5c = (uint *)CONCAT31(local_5c._1_3_,0xe4);
      local_50 = 0xffffffff;
      local_4c = 0xffffffff;
      local_48 = 0xffffffff;
      local_44 = 0xffffffff;
      FUN_100513f5(&local_ac,&local_60,local_18,(int)local_3c,-1);
      FUN_100a183b((byte)param_1[0x99],0xea);
      FUN_100a14a8((int *)param_1,(int *)param_2,0x36);
      puVar10 = local_60;
      puVar18 = local_5c;
    }
    iVar9 = 0;
    puVar8 = local_24;
    puVar14 = local_1c;
    iVar12 = 0;
LAB_1005043f:
    FUN_1004f8ba(param_1,(int *)param_2,(uint)puVar8,(uint)puVar14,iVar9,iVar12,(int)puVar10,
                 (byte)puVar18,param_5,param_6);
  case (uint *)0x49:
switchD_100507aa_caseD_49:
    param_1[0x8d] = 0;
LAB_1005021b:
    puVar10 = param_3 + 3;
switchD_100507aa_caseD_4b:
    param_3 = puVar10;
    break;
  case (uint *)0x4a:
  case (uint *)0x56:
    local_24 = (uint *)(*puVar10 & 0x1fff);
    uVar17 = __aullshr((char)local_24 * '\x03',0);
    puVar8 = (uint *)FUN_1004f004((int)param_1,(int)local_24);
    local_1c = puVar8;
    if (((uVar17 & 7) == 0) && (local_20 == (uint *)0x4a)) {
      local_2c = (uint *)CONCAT31(local_2c._1_3_,0xe4);
      puVar10 = local_24;
      goto LAB_10050b2e;
    }
    FUN_1004f0bb((uint *)&local_30,(int)param_1,param_3[2],0xf);
    FUN_1004f115(local_28,extraout_EDX_10,(int *)param_1,(int *)param_2,0,param_3[2],0,0,'\0',
                 (int)local_30,(char)local_2c);
    if (local_20 == (uint *)0x4a) {
      local_80 = FUN_100a05ed((int)param_1,4,'\x01');
      puVar10 = &local_80;
      local_7c = 0xe4;
      local_70 = -1;
      local_6c = 0xffffffff;
      local_68 = 0xffffffff;
      local_64 = 0xffffffff;
    }
    else {
      FUN_1004f034((int)param_1,*puVar10,0);
      puVar10 = param_1 + 0x90;
    }
    iVar12 = 8;
    ppuVar13 = &local_60;
    for (iVar9 = iVar12; iVar9 != 0; iVar9 = iVar9 + -1) {
      *ppuVar13 = (uint *)*puVar10;
      puVar10 = puVar10 + 1;
      ppuVar13 = ppuVar13 + 1;
    }
    ppuVar13 = &local_60;
    puVar10 = &local_a0;
    for (; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar10 = (uint)*ppuVar13;
      ppuVar13 = ppuVar13 + 1;
      puVar10 = puVar10 + 1;
    }
    FUN_100513f5(&local_ac,&local_a0,(undefined1 *)((int)local_24 + 3),(int)(local_24 + 1),
                 (int)((int)local_24 + 5));
    if (local_20 == (uint *)0x4a) {
      FUN_100a183b((byte)param_1[0x99],0xff);
      FUN_100a14a8((int *)param_1,(int *)param_2,0x36);
      local_2c = (uint *)CONCAT31(local_2c._1_3_,0xe4);
      FUN_1004f8ba(param_1,(int *)param_2,(uint)local_24,(uint)local_1c,0,0,local_a0,0xe4,param_5,
                   param_6);
    }
    else {
      local_80 = param_1[0x24];
      local_1c = (uint *)0x3f800000;
      local_70 = 0x3f800000;
      local_7c = 0xe4;
      local_6c = 0xffffffff;
      local_68 = 0xffffffff;
      local_64 = 0xffffffff;
      FUN_100a14a8((int *)param_1,(int *)param_2,0x36);
    }
    FUN_100a068b((int)param_1,local_a0);
    goto LAB_10050b37;
  default:
    goto switchD_100507aa_caseD_4b;
  case (uint *)0x4c:
  case (uint *)0x4d:
    local_18 = (uint *)(*puVar10 & 0x1fff);
    local_50 = 0xffffffff;
    local_4c = 0xffffffff;
    local_48 = 0xffffffff;
    local_44 = 0xffffffff;
    local_60 = (uint *)0x0;
    local_5c = (uint *)((uint)local_5c & 0xffffff00);
    uVar17 = __aullshr((char)local_18 * '\x03',0);
    if ((uVar17 & 7) != 0) {
      FUN_1004f0bb((uint *)&local_30,(int)param_1,param_3[2],0xf);
      FUN_1004f115(local_28,extraout_EDX_11,(int *)param_1,(int *)param_2,0,param_3[2],0,0,'\0',
                   (int)local_30,(char)local_2c);
      FUN_1004f034((int)param_1,*puVar10,0);
      local_38 = (undefined1 *)((int)local_18 + 5);
      local_3c = local_18 + 1;
      local_1c = (uint *)((int)local_18 + 3);
      FUN_100513f5(&local_ac,param_1 + 0x90,local_1c,(int)local_3c,(int)local_38);
      local_60 = (uint *)FUN_100a05ed((int)param_1,4,'\x01');
      local_5c = (uint *)CONCAT31(local_5c._1_3_,0xe4);
      local_50 = 0xffffffff;
      local_44 = 0xffffffff;
      local_48 = 0xffffffff;
      local_4c = 0xffffffff;
      if (local_20 == (uint *)&DAT_0000004c) {
        FUN_1004f0bb((uint *)&local_30,(int)param_1,param_3[3],0xf);
        FUN_1004f115(local_28,extraout_EDX_12,(int *)param_1,(int *)param_2,1,param_3[3],0,0,'\0',
                     (int)local_30,(char)local_2c);
      }
      else {
        FUN_100a138c((int *)param_1,(int *)param_2,0x36);
        FUN_100a138c((int *)param_1,(int *)param_2,0x36);
        FUN_100a138c((int *)param_1,(int *)param_2,0x36);
        ppuVar13 = &local_60;
        puVar8 = param_1 + 0xa0;
        for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar8 = (uint)*ppuVar13;
          ppuVar13 = ppuVar13 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      FUN_100a14a8((int *)param_1,(int *)param_2,0x10);
      FUN_100a183b((byte)param_1[0xa1],0xa4);
      FUN_100a14a8((int *)param_1,(int *)param_2,0x10);
      FUN_100a14a8((int *)param_1,(int *)param_2,0);
      FUN_100a14a8((int *)param_1,(int *)param_2,0xe);
      param_1[0xa0] = param_1[0xa0] ^ 0x80000000;
      FUN_100a14a8((int *)param_1,(int *)param_2,0x32);
      FUN_100a183b((byte)param_1[0x99],0xff);
      FUN_100a14a8((int *)param_1,(int *)param_2,0x36);
      FUN_100a068b((int)param_1,(uint)local_60);
    }
    uVar5 = FUN_1004f004((int)param_1,(int)local_18);
    FUN_1004f8ba(param_1,(int *)param_2,(uint)local_18,uVar5,0,0,(int)local_60,(byte)local_5c,
                 param_5,param_6);
    iVar12 = 8;
    if (local_20 == (uint *)&DAT_0000004c) {
      iVar12 = 0xc;
    }
    param_1[0x8d] = 0;
    param_3 = (uint *)((int)puVar10 + iVar12);
    break;
  case (uint *)0x50:
    FUN_1004f034((int)param_1,*puVar10,param_4);
    FUN_1004f6fd((int *)param_1,(int *)param_2,param_3[2],param_3[3],param_3[4]);
    local_11 = (undefined1)param_1[0x91];
    uVar5 = param_1[0x8d];
    local_60 = (uint *)FUN_100a05ed((int)param_1,4,'\0');
    local_5c = (uint *)CONCAT31(local_5c._1_3_,local_11);
    local_50 = 0xffffffff;
    local_4c = 0xffffffff;
    local_48 = 0xffffffff;
    local_44 = 0xffffffff;
    cVar4 = FUN_100a18e8((char)param_1[0x91]);
    FUN_1004a057(local_d0,(int)param_1,cVar4);
    FUN_100a14a8((int *)param_1,(int *)param_2,0x31);
    if (uVar5 == 0) {
      local_1c = (uint *)param_1[0x8c];
    }
    else {
      local_1c = (uint *)0x0;
    }
    FUN_100a1889(CONCAT31((int3)((uint)(param_1 + 0xa0) >> 8),0xe4),
                 CONCAT31((int3)((uint)extraout_EDX_08 >> 8),local_5c._0_1_));
    uVar5 = (uint)local_1c | 0x37;
    goto LAB_10050321;
  case (uint *)0x52:
switchD_100507aa_caseD_52:
    local_18 = (uint *)(*puVar10 & 0x1fff);
    uVar17 = __aullshr((char)local_18 * '\x03',0);
    puVar8 = (uint *)FUN_1004f004((int)param_1,(int)local_18);
    local_1c = puVar8;
    if ((uVar17 & 7) == 0) {
      local_2c = (uint *)CONCAT31(local_2c._1_3_,0xe4);
      puVar10 = local_18;
    }
    else {
      local_11 = 0xe4;
      if (local_20 == (uint *)0x45) {
        local_11 = 0xe3;
      }
      else if (local_20 == (uint *)0x46) {
        local_11 = 0xd9;
      }
      puVar8 = (uint *)FUN_1004f004((int)param_1,param_3[2] & 0x1fff);
      local_2c = (uint *)CONCAT31(local_2c._1_3_,local_11);
      puVar10 = local_18;
    }
LAB_10050b2e:
    FUN_1004f8ba(param_1,(int *)param_2,(uint)puVar10,(uint)local_1c,0,0,(int)puVar8,(byte)local_2c,
                 param_5,param_6);
LAB_10050b37:
    param_1[0x8d] = 0;
    param_3 = param_3 + 3;
    break;
  case (uint *)0x53:
  case (uint *)0x55:
    local_1c = (uint *)(*puVar10 & 0x1fff);
    local_2c = (uint *)FUN_1004f004((int)param_1,(int)local_1c);
    FUN_1004f0bb(&local_40,(int)param_1,param_3[2],0xf);
    FUN_1004f115(local_28,extraout_EDX_13,(int *)param_1,(int *)param_2,0,param_3[2],0,0,'\0',
                 local_40,(char)local_3c);
    FUN_1004f034((int)param_1,*puVar10,0);
    FUN_100513f5(&local_ac,param_1 + 0x90,(undefined1 *)((int)local_1c + 5),-1,-1);
    if (local_20 == (uint *)0x53) {
      local_80 = param_1[0x25];
      local_3c = (uint *)0x0;
      local_70 = 0;
      local_18 = (uint *)0x0;
      local_6c = 0;
      local_38 = (undefined1 *)0x0;
      local_68 = 0;
      local_24 = (uint *)0x0;
      local_64 = 0;
      local_7c = 0xe4;
      FUN_100a14a8((int *)param_1,(int *)param_2,0x36);
      FUN_100a183b((byte)param_1[0x99],0xff);
      FUN_100a14a8((int *)param_1,(int *)param_2,0x36);
      local_3c = (uint *)CONCAT31(local_3c._1_3_,0xe4);
      puVar10 = (uint *)param_1[0x90];
      iVar9 = 0;
      puVar8 = local_1c;
      puVar14 = local_2c;
      iVar12 = 0;
      puVar18 = local_3c;
      goto LAB_1005043f;
    }
    goto switchD_100507aa_caseD_49;
  case (uint *)0x57:
    FUN_1004efd4((int)param_1,*puVar10 & 0x1fff);
    FUN_100a138c((int *)param_1,(int *)param_2,0xe);
    FUN_100a138c((int *)param_1,(int *)param_2,1);
    local_2c = (uint *)0x3f800000;
    FUN_100a138c((int *)param_1,(int *)param_2,0x37);
    param_1[0x8d] = 0;
    param_3 = param_3 + 2;
    break;
  case (uint *)0x58:
    FUN_1004f034((int)param_1,*puVar10,param_4);
    FUN_1004f6fd((int *)param_1,(int *)param_2,param_3[2],param_3[3],param_3[4]);
    local_1c = (uint *)param_1[0x8d];
    local_11 = (undefined1)param_1[0x91];
    local_60 = (uint *)FUN_100a05ed((int)param_1,4,'\0');
    local_5c = (uint *)CONCAT31(local_5c._1_3_,local_11);
    local_50 = 0xffffffff;
    local_4c = 0xffffffff;
    local_48 = 0xffffffff;
    local_44 = 0xffffffff;
    cVar4 = FUN_100a18e8((char)param_1[0x91]);
    local_9c = 0xe4;
    if (cVar4 == '\0') {
      local_a0 = param_1[0x25];
      local_90 = 0x80000000;
      local_8c = 0x80000000;
      local_88 = 0x80000000;
      local_84 = 0x80000000;
    }
    else {
      local_a0 = param_1[0x24];
      local_90 = 0x80000000;
      local_8c = extraout_EDX_06;
      local_88 = extraout_EDX_06;
      local_84 = extraout_EDX_06;
    }
    local_90 = -0x80000000;
    iVar12 = 8;
    puVar10 = &local_a0;
    puVar8 = &local_80;
    for (iVar9 = iVar12; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar8 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar10 = &local_80;
    puVar8 = local_d0;
    local_8c = local_84;
    local_88 = local_84;
    for (; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar8 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar8 = puVar8 + 1;
    }
    FUN_100a14a8((int *)param_1,(int *)param_2,1);
    if (local_1c == (uint *)0x0) {
      local_1c = (uint *)param_1[0x8c];
    }
    else {
      local_1c = (uint *)0x0;
    }
    FUN_100a1889(CONCAT31((int3)((uint)extraout_ECX >> 8),0xe4),
                 CONCAT31((int3)((uint)extraout_EDX_07 >> 8),local_5c._0_1_));
    uVar5 = (uint)local_1c | 0x37;
LAB_10050321:
    FUN_100a14a8((int *)param_1,(int *)param_2,uVar5);
LAB_1004ff2a:
    param_3 = param_3 + 5;
    break;
  case (uint *)0x59:
    FUN_1004f034((int)param_1,*puVar10,param_4);
    FUN_1004f613((int *)param_1,(int *)param_2,param_3[2],param_3[3]);
    uVar11 = param_1[0x90];
    uVar5 = param_1[0x8d];
    local_60 = (uint *)FUN_100a05ed((int)param_1,4,'\0');
    local_70 = (uint)(byte)uVar11 * 0x30;
    local_50 = 0xffffffff;
    local_4c = 0xffffffff;
    local_48 = 0xffffffff;
    local_44 = 0xffffffff;
    local_8c = 0xffffffff;
    local_88 = 0xffffffff;
    local_a0 = param_1[0x16];
    local_90 = local_70 + 0xc0;
    local_70 = local_70 + 200;
    local_84 = 0xffffffff;
    local_6c = 0xffffffff;
    local_68 = 0xffffffff;
    local_64 = 0xffffffff;
    local_5c = (uint *)CONCAT31(local_5c._1_3_,0x54);
    local_9c = 0x54;
    local_7c = 0x54;
    local_80 = local_a0;
    FUN_100a14a8((int *)param_1,(int *)param_2,0xf);
    FUN_100a14a8((int *)param_1,(int *)param_2,0xf);
    if (uVar5 == 0) {
      uVar5 = param_1[0x8c];
    }
    else {
      uVar5 = 0;
    }
    FUN_100a14a8((int *)param_1,(int *)param_2,uVar5);
    param_3 = param_3 + 4;
  }
LAB_1004fc07:
  local_2c = (uint *)0x0;
  if (param_1[0xb0] != 0) {
    uVar5 = 0;
    do {
      if (3 < uVar5) {
        return param_3;
      }
      FUN_100a068b((int)param_1,param_1[uVar5 + 0xb0]);
      param_1[uVar5 + 0xb0] = 0;
      iVar12 = uVar5 + 0xb1;
      uVar5 = uVar5 + 1;
    } while (param_1[iVar12] != 0);
  }
  return param_3;
}

