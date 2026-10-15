/*
 * FUN_1005ef10 at 1005ef10
 * uint * __thiscall FUN_1005ef10(void * this, uint * param_1, uint * param_2, uint * param_3, int param_4, undefined4 param_5, uint param_6)
 * Address ranges: 1005ef10-100607e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __thiscall
FUN_1005ef10(void *this,uint *param_1,uint *param_2,uint *param_3,int param_4,undefined4 param_5,
            uint param_6)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  uint extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  uint **ppuVar11;
  uint *puVar12;
  float fVar13;
  float fVar14;
  ulonglong uVar15;
  uint *puVar16;
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
  uint local_38;
  void *local_34;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  uint local_20;
  uint *local_1c;
  uint *local_18;
  undefined1 local_11;
  
  local_20 = (uint)(ushort)*param_3;
  puVar8 = param_3 + 1;
  local_a8 = param_1;
  local_a4 = param_2;
  local_30 = param_1;
  local_2c = param_2;
  local_ac = this;
  local_34 = this;
  local_28 = this;
  if (local_20 < 0x48) {
    if (local_20 == 0x47) goto switchD_1005fbcc_caseD_49;
    if (local_20 < 0x13) {
      if (local_20 == 0x12) {
        local_24 = (uint *)param_3[2];
        local_38 = param_3[3];
        local_18 = (uint *)param_3[4];
        if (((uint)local_24 & 0xf000000) == 0x6000000) {
          local_24 = (uint *)((uint)local_24 & 0xf0ffffff);
          local_18 = (uint *)param_3[3];
          local_38 = param_3[4];
        }
        FUN_1005e3fa((int)param_1,*puVar8,param_4);
        FUN_1005eb28((int *)param_1,(int *)param_2,(uint)local_24,local_38,(uint)local_18);
        local_11 = (undefined1)param_1[0xcd];
        uVar4 = param_1[0xc9];
        local_60 = (uint *)FUN_100c2e34((int)param_1,4,'\0');
        param_1[0xe4] = param_1[0xe4] ^ 0x80000000;
        local_5c = (uint *)CONCAT31(local_5c._1_3_,local_11);
        local_50 = 0xffffffff;
        local_4c = 0xffffffff;
        local_48 = 0xffffffff;
        local_44 = 0xffffffff;
        FUN_100c3cfd((int *)param_1,(int *)param_2,0);
        puVar8 = param_1 + 0xe4;
        *puVar8 = *puVar8 ^ 0x80000000;
        if (uVar4 == 0) {
          local_18 = (uint *)param_1[200];
        }
        else {
          local_18 = (uint *)0x0;
        }
        FUN_100c40de(CONCAT31((int3)((uint)puVar8 >> 8),0xe4),
                     CONCAT31((int3)((uint)extraout_EDX >> 8),local_5c._0_1_));
        uVar4 = (uint)local_18 | 0x32;
        goto LAB_1005f74a;
      }
      if (local_20 == 1) {
        FUN_1005e3fa((int)param_1,*puVar8,param_4);
        FUN_1005e4d8(local_28,(int *)param_1,(int *)param_2,0,param_3[2],*puVar8 >> 7 & 0x2000,
                     *puVar8 >> 0x18 & 0xf,'\x01',param_1[0xcc],(char)param_1[0xcd]);
        goto switchD_1005fbcc_caseD_49;
      }
      if ((local_20 == 2) || (local_20 == 3)) {
        uVar4 = param_3[2] >> 0x18 & 0xf;
        uVar9 = param_3[3] >> 0x18 & 0xf;
        local_1c = *(uint **)(&DAT_100d5da0 + uVar4 * 8);
        if (local_20 == 2) {
          fVar13 = 1.0;
        }
        else {
          fVar13 = -1.0;
        }
        local_24 = (uint *)(fVar13 * *(float *)(&DAT_100d5da4 + uVar9 * 8) +
                           *(float *)(&DAT_100d5da4 + uVar4 * 8));
        local_18 = *(uint **)(&DAT_100d5da0 + uVar9 * 8);
        FUN_1005e3fa((int)param_1,*puVar8,param_4);
        local_2c = (uint *)((uint)local_2c & 0xffffff00);
        FUN_1005e4d8(local_28,(int *)param_1,(int *)param_2,0,param_3[2],0,0,'\0',0,'\0');
        local_2c = (uint *)((uint)local_2c & 0xffffff00);
        local_38 = 1;
        FUN_1005e4d8(local_28,(int *)param_1,(int *)param_2,1,param_3[3],0,0,'\0',0,'\0');
        uVar4 = 0;
        if (local_20 == 3) {
          uVar4 = 0x80000000;
        }
        uVar4 = uVar4 ^ param_1[0xdc];
        param_1[0xdc] = uVar4;
        local_3c = (uint *)param_1[0xc9];
        uVar9 = (uint)CONCAT21((short)(uVar4 >> 0x10),
                               ((float)local_24 == 0.0) << 6 | NAN((float)local_24) << 2 | 2U |
                               (float)local_24 < 0.0) << 8;
        uVar4 = uVar9;
        if ((float)local_24 != 0.0) {
          uVar9 = 1;
          uVar4 = local_38;
        }
        local_38 = uVar4;
        if ((uVar9 & 0xff) == 0 && local_3c == (uint *)0x0) {
          local_20 = param_1[200];
        }
        else {
          local_20 = 0;
        }
        uVar5 = FUN_100c40de(CONCAT31((int3)((uint)local_3c >> 8),0xe4),
                             CONCAT31(0x800000,(char)param_1[0xcd]));
        local_11 = (undefined1)uVar5;
        if (((float)local_1c == 1.0) && ((float)local_18 == 1.0)) {
          FUN_100c3cfd((int *)param_1,(int *)param_2,local_20);
        }
        else {
          if ((float)local_1c == (float)local_18) {
            cVar2 = FUN_100c413d((char)param_1[0xcd]);
            FUN_10058f9a(&local_80,(int)param_1,cVar2);
            FUN_100c3cfd((int *)param_1,(int *)param_2,0);
            uVar4 = local_20 | 0x38;
          }
          else {
            bVar3 = (float)local_18 != 1.0;
            local_18 = param_1 + 0xd4;
            if (bVar3) {
              local_18 = param_1 + 0xdc;
            }
            cVar2 = FUN_100c413d((char)param_1[0xcd]);
            FUN_10058f9a(&local_80,(int)param_1,cVar2);
            uVar4 = local_20 | 0x32;
          }
          FUN_100c3cfd((int *)param_1,(int *)param_2,uVar4);
        }
        if ((char)local_38 != '\0') {
          cVar2 = FUN_100c413d((char)param_1[0xcd]);
          FUN_10058f9a(&local_80,(int)param_1,cVar2);
          if (local_3c == (uint *)0x0) {
            uVar4 = param_1[200];
          }
          else {
            uVar4 = 0;
          }
          FUN_100c3cfd((int *)param_1,(int *)param_2,uVar4);
        }
LAB_1005f025:
        puVar8 = param_3 + 4;
        goto switchD_1005fbcc_caseD_4b;
      }
      if (local_20 != 4) {
        if (local_20 != 5) {
          if ((local_20 != 8) && (local_20 != 9)) goto switchD_1005fbcc_caseD_4b;
          FUN_1005e3fa((int)param_1,*puVar8,param_4);
          FUN_1005ea3e((int *)param_1,(int *)param_2,param_3[2],param_3[3]);
          local_1c = (uint *)((local_20 != 8) + 0x10);
          if (param_1[0xc9] == 0) {
            local_18 = (uint *)param_1[200];
          }
          else {
            local_18 = (uint *)0x0;
          }
          FUN_100c3cfd((int *)param_1,(int *)param_2,(uint)local_18 | (uint)local_1c);
          goto LAB_1005f025;
        }
        uVar9 = param_3[2] >> 0x18 & 0xf;
        uVar4 = param_3[3] >> 0x18 & 0xf;
        puVar6 = *(uint **)(&DAT_100d5da4 + uVar9 * 8);
        puVar12 = *(uint **)(&DAT_100d5da4 + uVar4 * 8);
        fVar13 = *(float *)(&DAT_100d5da0 + uVar9 * 8);
        fVar14 = *(float *)(&DAT_100d5da0 + uVar4 * 8);
        local_3c = puVar12;
        local_1c = puVar6;
        FUN_1005e3fa((int)param_1,*puVar8,param_4);
        if (param_1[0xc9] == 0) {
          local_20 = param_1[200];
        }
        else {
          local_20 = 0;
        }
        if ((fVar13 == 1.0) && (fVar14 == 1.0)) {
          if (((float)puVar6 == 0.0) && ((float)puVar12 == 0.0)) {
            local_2c = (uint *)((uint)local_2c._1_3_ << 8);
            FUN_1005e4d8(local_28,(int *)param_1,(int *)param_2,0,param_3[2],0,0,'\0',0,'\0');
            local_2c = (uint *)((uint)local_2c & 0xffffff00);
            FUN_1005e4d8(local_28,(int *)param_1,(int *)param_2,1,param_3[3],0,0,'\0',0,'\0');
            goto LAB_1005f2b4;
          }
          if ((ABS((float)puVar6) == 1.0) && ((float)puVar12 == 0.0)) {
            local_2c = (uint *)((uint)local_2c._1_3_ << 8);
            FUN_1005e4d8(local_28,(int *)param_1,(int *)param_2,0,param_3[2],0,0,'\0',0,'\0');
            local_2c = (uint *)((uint)local_2c & 0xffffff00);
            FUN_1005e4d8(local_28,(int *)param_1,(int *)param_2,1,param_3[3],0,0,'\0',0,'\0');
            uVar4 = 0;
            puVar8 = param_1 + 0xe4;
            puVar6 = param_1 + 0xdc;
            puVar12 = puVar8;
            for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar12 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar12 = puVar12 + 1;
            }
            if ((float)local_1c < 0.0) {
              uVar4 = 0x80000000;
            }
            *puVar8 = *puVar8 ^ uVar4;
          }
          else {
            if ((ABS((float)puVar12) != 1.0) || ((float)puVar6 != 0.0)) goto LAB_1005f2a2;
            local_2c = (uint *)((uint)local_2c._1_3_ << 8);
            FUN_1005e4d8(local_28,(int *)param_1,(int *)param_2,0,param_3[2],0,0,'\0',0,'\0');
            local_2c = (uint *)((uint)local_2c & 0xffffff00);
            FUN_1005e4d8(local_28,(int *)param_1,(int *)param_2,1,param_3[3],0,0,'\0',0,'\0');
            uVar4 = 0;
            puVar8 = param_1 + 0xe4;
            puVar6 = param_1 + 0xd4;
            puVar12 = puVar8;
            for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar12 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar12 = puVar12 + 1;
            }
            if ((float)local_3c < 0.0) {
              uVar4 = 0x80000000;
            }
            *puVar8 = *puVar8 ^ uVar4;
          }
          FUN_100c3cfd((int *)param_1,(int *)param_2,local_20 | 0x32);
        }
        else {
LAB_1005f2a2:
          FUN_1005ea3e((int *)param_1,(int *)param_2,param_3[2],param_3[3]);
LAB_1005f2b4:
          FUN_100c3cfd((int *)param_1,(int *)param_2,local_20 | 0x38);
        }
        param_3 = param_3 + 4;
        goto LAB_1005f030;
      }
      FUN_1005e3fa((int)param_1,*puVar8,param_4);
      if (param_1[0xc9] == 0) {
        local_18 = (uint *)param_1[200];
      }
      else {
        local_18 = (uint *)0x0;
      }
      FUN_1005eb28((int *)param_1,(int *)param_2,param_3[2],param_3[3],param_3[4]);
      FUN_100c3cfd((int *)param_1,(int *)param_2,(uint)local_18 | 0x32);
      goto LAB_1005f353;
    }
    if (local_20 == 0x40) {
      local_20 = *puVar8 >> 0x10;
      local_18 = (uint *)(*puVar8 & 0x7ff);
      if (*(char *)(param_1[0x3d] + 0x126e) == '\x04') {
        puVar8 = param_3 + 2;
        local_38 = *puVar8;
        local_3c = (uint *)(local_38 & 0x7ff);
        local_24 = (uint *)(local_38 & 0xf000000);
        local_1c = (uint *)((int)local_3c + 5U | 0x410100);
        uVar9 = FUN_1005da5e(local_38);
        puVar6 = local_1c;
        uVar4 = extraout_EDX_01;
        if (uVar9 == 0) {
          puVar6 = (uint *)FUN_1005e39a((int)param_1,(int)local_3c);
          uVar4 = local_38;
        }
        local_38 = CONCAT31(local_38._1_3_,(char)(uVar4 >> 0x10));
        local_3c = puVar6;
        if (param_4 == 0) {
          FUN_1005e39a((int)param_1,(int)local_18);
        }
        if (local_24 == (uint *)0xa000000) {
          FUN_1006093d((int)&local_34);
          goto LAB_1005f9f8;
        }
        uVar4 = 0x36;
      }
      else {
        if (param_4 == 0) {
          FUN_1005e3ca((int)param_1,(int)local_18);
        }
        uVar4 = 0x2036;
      }
      FUN_100c3be1((int *)param_1,(int *)param_2,uVar4);
LAB_1005f9f8:
      param_1[0xc9] = 0;
      puVar8 = puVar8 + 1;
      goto switchD_1005fbcc_caseD_4b;
    }
    if (local_20 == 0x41) {
      FUN_100c2e34((int)param_1,4,'\0');
      FUN_100c3be1((int *)param_1,(int *)param_2,1);
      FUN_100c3be1((int *)param_1,(int *)param_2,0x3c);
      FUN_100c3be1((int *)param_1,(int *)param_2,0x3c);
      FUN_100c3be1((int *)param_1,(int *)param_2,0x4000d);
      param_3 = param_3 + 2;
      param_1[0xc9] = 0;
      goto LAB_1005f030;
    }
    if (local_20 == 0x42) {
      local_20 = *puVar8 & 0x7ff;
      uVar15 = __aullshr((char)local_20 * '\x03',param_6 & 0xffff);
      local_38 = (uint)uVar15 & 7;
      if (*(char *)(param_1[0x3d] + 0x126e) == '\x04') {
        puVar8 = param_3 + 2;
        local_1c = (uint *)*puVar8;
        uVar4 = FUN_1005da5e((uint)local_1c);
        if (uVar4 == 0) {
          local_28 = (uint *)FUN_1005e39a((int)param_1,extraout_EDX_00);
        }
        else {
          local_28 = (uint *)(extraout_EDX_00 + 5U | 0x410100);
        }
        local_24 = (uint *)FUN_1005e39a((int)param_1,local_20);
        uVar4 = (uint)local_1c & 0xf000000;
        local_1c = (uint *)CONCAT31(local_1c._1_3_,(char)((uint)local_1c >> 0x10));
        local_3c = (uint *)(-(uint)(local_38 != 0) & uVar4);
        bVar3 = FUN_10059019(param_5,param_6,(char)local_20);
        if (bVar3) {
          local_18 = (uint *)FUN_100c2e34((int)param_1,4,'\x01');
        }
        else {
          local_18 = (uint *)0x0;
        }
        if ((local_3c == (uint *)0x9000000) ||
           (puVar6 = local_28, puVar12 = local_1c, local_3c == (uint *)0xa000000)) {
          if (local_28 == local_24) {
            FUN_100c2e34((int)param_1,4,'\0');
          }
          FUN_1006093d((int)&local_34);
          puVar6 = (uint *)0x0;
          puVar12 = (uint *)0xe4;
        }
        FUN_10059057(param_1,local_38,local_20,(uint)local_24,local_18,param_5,param_6,
                     (int *)param_2,(int)puVar6,(byte)puVar12);
        pbVar1 = (byte *)((int)param_1 + ((int)local_20 >> 3) + 0xac);
        *pbVar1 = *pbVar1 | '\x01' << (local_20 & 7);
        FUN_100c2ed2((int)param_1,(uint)local_18);
      }
      else {
        uVar4 = FUN_1005e3ca((int)param_1,local_20);
        local_2c = (uint *)CONCAT31(local_2c._1_3_,0xe4);
        FUN_1005ece5(param_1,(int *)param_2,local_20,uVar4,0,0,local_20 + 5 | 0x410100,0xe4,param_5,
                     param_6);
      }
      goto LAB_1005f9f8;
    }
    if ((local_20 != 0x43) && (local_20 != 0x44)) {
      if ((local_20 == 0x45) || (local_20 == 0x46)) goto switchD_1005fbcc_caseD_52;
      goto switchD_1005fbcc_caseD_4b;
    }
    local_24 = (uint *)(*puVar8 & 0x7ff);
    local_1c = (uint *)(param_3[2] & 0x7ff);
    local_18 = (uint *)FUN_1005e3ca((int)param_1,(int)local_24);
    uVar15 = __aullshr((char)local_24 * '\x03',param_6 & 0xffff);
    if ((uVar15 & 7) != 0) {
      iVar7 = FUN_1005e3ca((int)param_1,(int)local_1c);
      local_2c = (uint *)CONCAT31(local_2c._1_3_,0xe4);
      puVar8 = (uint *)((int)local_24 + 5U | 0x410100);
      puVar6 = local_24;
      puVar12 = local_18;
      iVar10 = 0;
      puVar16 = local_2c;
      if (local_20 == 0x44) {
        iVar10 = iVar7;
      }
      goto LAB_1005f863;
    }
    local_2c = (uint *)CONCAT31(local_2c._1_3_,0xe4);
    FUN_1005ece5(param_1,(int *)param_2,(uint)local_24,(uint)local_18,0,0,(int)local_18,0xe4,param_5
                 ,param_6);
    goto LAB_1005f644;
  }
  switch(local_20) {
  case 0x48:
  case 0x54:
    local_24 = (uint *)(*puVar8 & 0x7ff);
    local_1c = (uint *)FUN_1005e3ca((int)param_1,(int)local_24);
    uVar15 = __aullshr((char)local_24 * '\x03',param_6 & 0xffff);
    if (((uVar15 & 7) == 0) && (local_20 == 0x48)) {
      local_2c = (uint *)CONCAT31(local_2c._1_3_,0xe4);
      puVar8 = local_1c;
      puVar16 = local_2c;
    }
    else {
      FUN_1005e47e((uint *)&local_30,(int)param_1,param_3[2],0xf);
      FUN_1005e4d8(local_28,(int *)param_1,(int *)param_2,0,param_3[2],0,0,'\0',(int)local_30,
                   (char)local_2c);
      local_3c = (uint *)((int)local_24 + 5);
      local_18 = local_24 + 1;
      if (local_20 != 0x48) {
        FUN_1005e3fa((int)param_1,*puVar8,0);
        FUN_10060822(&local_ac,param_1 + 0xcc,local_18,(int)local_3c,-1);
        param_1[0xd4] = param_1[0xcc];
        *(undefined1 *)(param_1 + 0xd5) = 2;
        param_1[0xd8] = 0xffffffff;
        param_1[0xdb] = 0xffffffff;
        param_1[0xda] = 0xffffffff;
        param_1[0xd9] = 0xffffffff;
        local_a0 = param_1[0x28];
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
        FUN_100c3cfd((int *)param_1,(int *)param_2,0xe);
        FUN_100c3cfd((int *)param_1,(int *)param_2,1);
        FUN_100c3cfd((int *)param_1,(int *)param_2,0x37);
        goto switchD_1005fbcc_caseD_49;
      }
      local_60 = (uint *)FUN_100c2e34((int)param_1,4,'\0');
      local_5c = (uint *)CONCAT31(local_5c._1_3_,0xe4);
      local_50 = 0xffffffff;
      local_4c = 0xffffffff;
      local_48 = 0xffffffff;
      local_44 = 0xffffffff;
      FUN_10060822(&local_ac,&local_60,local_18,(int)local_3c,-1);
      FUN_100c4090((byte)param_1[0xd5],0xea);
      FUN_100c3cfd((int *)param_1,(int *)param_2,0x36);
      puVar8 = local_60;
      puVar16 = local_5c;
    }
    iVar7 = 0;
    puVar6 = local_24;
    puVar12 = local_1c;
    iVar10 = 0;
LAB_1005f863:
    FUN_1005ece5(param_1,(int *)param_2,(uint)puVar6,(uint)puVar12,iVar7,iVar10,(int)puVar8,
                 (byte)puVar16,param_5,param_6);
  case 0x49:
switchD_1005fbcc_caseD_49:
    param_1[0xc9] = 0;
LAB_1005f644:
    puVar8 = param_3 + 3;
switchD_1005fbcc_caseD_4b:
    param_3 = puVar8;
    break;
  case 0x4a:
  case 0x56:
    local_24 = (uint *)(*puVar8 & 0x7ff);
    uVar15 = __aullshr((char)local_24 * '\x03',param_6 & 0xffff);
    puVar6 = (uint *)FUN_1005e3ca((int)param_1,(int)local_24);
    local_1c = puVar6;
    if (((uVar15 & 7) == 0) && (local_20 == 0x4a)) {
      local_2c = (uint *)CONCAT31(local_2c._1_3_,0xe4);
      puVar8 = local_24;
      goto LAB_1005ff62;
    }
    FUN_1005e47e((uint *)&local_30,(int)param_1,param_3[2],0xf);
    FUN_1005e4d8(local_28,(int *)param_1,(int *)param_2,0,param_3[2],0,0,'\0',(int)local_30,
                 (char)local_2c);
    if (local_20 == 0x4a) {
      local_80 = FUN_100c2e34((int)param_1,4,'\x01');
      puVar8 = &local_80;
      local_7c = 0xe4;
      local_70 = -1;
      local_6c = 0xffffffff;
      local_68 = 0xffffffff;
      local_64 = 0xffffffff;
    }
    else {
      FUN_1005e3fa((int)param_1,*puVar8,0);
      puVar8 = param_1 + 0xcc;
    }
    iVar10 = 8;
    ppuVar11 = &local_60;
    for (iVar7 = iVar10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppuVar11 = (uint *)*puVar8;
      puVar8 = puVar8 + 1;
      ppuVar11 = ppuVar11 + 1;
    }
    ppuVar11 = &local_60;
    puVar8 = &local_a0;
    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar8 = (uint)*ppuVar11;
      ppuVar11 = ppuVar11 + 1;
      puVar8 = puVar8 + 1;
    }
    FUN_10060822(&local_ac,&local_a0,(int)local_24 + 3,(int)(local_24 + 1),(int)local_24 + 5);
    if (local_20 == 0x4a) {
      FUN_100c4090((byte)param_1[0xd5],0xff);
      FUN_100c3cfd((int *)param_1,(int *)param_2,0x36);
      local_2c = (uint *)CONCAT31(local_2c._1_3_,0xe4);
      FUN_1005ece5(param_1,(int *)param_2,(uint)local_24,(uint)local_1c,0,0,local_a0,0xe4,param_5,
                   param_6);
    }
    else {
      local_80 = param_1[0x28];
      local_1c = (uint *)0x3f800000;
      local_70 = 0x3f800000;
      local_7c = 0xe4;
      local_6c = 0xffffffff;
      local_68 = 0xffffffff;
      local_64 = 0xffffffff;
      FUN_100c3cfd((int *)param_1,(int *)param_2,0x36);
    }
    FUN_100c2ed2((int)param_1,local_a0);
    goto LAB_1005ff6b;
  default:
    goto switchD_1005fbcc_caseD_4b;
  case 0x4c:
  case 0x4d:
    local_18 = (uint *)(*puVar8 & 0x7ff);
    local_50 = 0xffffffff;
    local_4c = 0xffffffff;
    local_48 = 0xffffffff;
    local_44 = 0xffffffff;
    local_60 = (uint *)0x0;
    local_5c = (uint *)((uint)local_5c & 0xffffff00);
    uVar15 = __aullshr((char)local_18 * '\x03',param_6 & 0xffff);
    if ((uVar15 & 7) != 0) {
      FUN_1005e47e((uint *)&local_30,(int)param_1,param_3[2],0xf);
      FUN_1005e4d8(local_28,(int *)param_1,(int *)param_2,0,param_3[2],0,0,'\0',(int)local_30,
                   (char)local_2c);
      FUN_1005e3fa((int)param_1,*puVar8,0);
      local_38 = (int)local_18 + 5;
      local_3c = local_18 + 1;
      local_1c = (uint *)((int)local_18 + 3);
      FUN_10060822(&local_ac,param_1 + 0xcc,local_1c,(int)local_3c,local_38);
      local_60 = (uint *)FUN_100c2e34((int)param_1,4,'\x01');
      local_5c = (uint *)CONCAT31(local_5c._1_3_,0xe4);
      local_50 = 0xffffffff;
      local_44 = 0xffffffff;
      local_48 = 0xffffffff;
      local_4c = 0xffffffff;
      if (local_20 == 0x4c) {
        FUN_1005e47e((uint *)&local_30,(int)param_1,param_3[3],0xf);
        FUN_1005e4d8(local_28,(int *)param_1,(int *)param_2,1,param_3[3],0,0,'\0',(int)local_30,
                     (char)local_2c);
      }
      else {
        FUN_100c3be1((int *)param_1,(int *)param_2,0x36);
        FUN_100c3be1((int *)param_1,(int *)param_2,0x36);
        FUN_100c3be1((int *)param_1,(int *)param_2,0x36);
        ppuVar11 = &local_60;
        puVar6 = param_1 + 0xdc;
        for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar6 = (uint)*ppuVar11;
          ppuVar11 = ppuVar11 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      FUN_100c3cfd((int *)param_1,(int *)param_2,0x10);
      FUN_100c4090((byte)param_1[0xdd],0xa4);
      FUN_100c3cfd((int *)param_1,(int *)param_2,0x10);
      FUN_100c3cfd((int *)param_1,(int *)param_2,0);
      FUN_100c3cfd((int *)param_1,(int *)param_2,0xe);
      param_1[0xdc] = param_1[0xdc] ^ 0x80000000;
      FUN_100c3cfd((int *)param_1,(int *)param_2,0x32);
      FUN_100c4090((byte)param_1[0xd5],0xff);
      FUN_100c3cfd((int *)param_1,(int *)param_2,0x36);
      FUN_100c2ed2((int)param_1,(uint)local_60);
    }
    uVar4 = FUN_1005e3ca((int)param_1,(int)local_18);
    FUN_1005ece5(param_1,(int *)param_2,(uint)local_18,uVar4,0,0,(int)local_60,(byte)local_5c,
                 param_5,param_6);
    iVar10 = 8;
    if (local_20 == 0x4c) {
      iVar10 = 0xc;
    }
    param_1[0xc9] = 0;
    param_3 = (uint *)((int)puVar8 + iVar10);
    break;
  case 0x50:
    FUN_1005e3fa((int)param_1,*puVar8,param_4);
    FUN_1005eb28((int *)param_1,(int *)param_2,param_3[2],param_3[3],param_3[4]);
    local_11 = (undefined1)param_1[0xcd];
    uVar4 = param_1[0xc9];
    local_60 = (uint *)FUN_100c2e34((int)param_1,4,'\0');
    local_5c = (uint *)CONCAT31(local_5c._1_3_,local_11);
    local_50 = 0xffffffff;
    local_4c = 0xffffffff;
    local_48 = 0xffffffff;
    local_44 = 0xffffffff;
    cVar2 = FUN_100c413d((char)param_1[0xcd]);
    FUN_10058f9a(local_d0,(int)param_1,cVar2);
    FUN_100c3cfd((int *)param_1,(int *)param_2,0x31);
    if (uVar4 == 0) {
      local_1c = (uint *)param_1[200];
    }
    else {
      local_1c = (uint *)0x0;
    }
    FUN_100c40de(CONCAT31((int3)((uint)(param_1 + 0xdc) >> 8),0xe4),
                 CONCAT31((int3)((uint)extraout_EDX_04 >> 8),local_5c._0_1_));
    uVar4 = (uint)local_1c | 0x37;
    goto LAB_1005f74a;
  case 0x52:
switchD_1005fbcc_caseD_52:
    local_18 = (uint *)(*puVar8 & 0x7ff);
    uVar15 = __aullshr((char)local_18 * '\x03',param_6 & 0xffff);
    puVar6 = (uint *)FUN_1005e3ca((int)param_1,(int)local_18);
    local_1c = puVar6;
    if ((uVar15 & 7) == 0) {
      local_2c = (uint *)CONCAT31(local_2c._1_3_,0xe4);
      puVar8 = local_18;
    }
    else {
      local_11 = 0xe4;
      if (local_20 == 0x45) {
        local_11 = 0xe3;
      }
      else if (local_20 == 0x46) {
        local_11 = 0xd9;
      }
      puVar6 = (uint *)FUN_1005e3ca((int)param_1,param_3[2] & 0x7ff);
      local_2c = (uint *)CONCAT31(local_2c._1_3_,local_11);
      puVar8 = local_18;
    }
LAB_1005ff62:
    FUN_1005ece5(param_1,(int *)param_2,(uint)puVar8,(uint)local_1c,0,0,(int)puVar6,(byte)local_2c,
                 param_5,param_6);
LAB_1005ff6b:
    param_1[0xc9] = 0;
    param_3 = param_3 + 3;
    break;
  case 0x53:
  case 0x55:
    local_1c = (uint *)(*puVar8 & 0x7ff);
    local_2c = (uint *)FUN_1005e3ca((int)param_1,(int)local_1c);
    FUN_1005e47e(&local_40,(int)param_1,param_3[2],0xf);
    FUN_1005e4d8(local_28,(int *)param_1,(int *)param_2,0,param_3[2],0,0,'\0',local_40,
                 (char)local_3c);
    FUN_1005e3fa((int)param_1,*puVar8,0);
    FUN_10060822(&local_ac,param_1 + 0xcc,(int)local_1c + 5,-1,-1);
    if (local_20 == 0x53) {
      local_80 = param_1[0x29];
      local_3c = (uint *)0x0;
      local_70 = 0;
      local_18 = (uint *)0x0;
      local_6c = 0;
      local_38 = 0;
      local_68 = 0;
      local_24 = (uint *)0x0;
      local_64 = 0;
      local_7c = 0xe4;
      FUN_100c3cfd((int *)param_1,(int *)param_2,0x36);
      FUN_100c4090((byte)param_1[0xd5],0xff);
      FUN_100c3cfd((int *)param_1,(int *)param_2,0x36);
      local_3c = (uint *)CONCAT31(local_3c._1_3_,0xe4);
      puVar8 = (uint *)param_1[0xcc];
      iVar7 = 0;
      puVar6 = local_1c;
      puVar12 = local_2c;
      iVar10 = 0;
      puVar16 = local_3c;
      goto LAB_1005f863;
    }
    goto switchD_1005fbcc_caseD_49;
  case 0x57:
    FUN_1005e39a((int)param_1,*puVar8 & 0x7ff);
    FUN_100c3be1((int *)param_1,(int *)param_2,0xe);
    FUN_100c3be1((int *)param_1,(int *)param_2,1);
    local_2c = (uint *)0x3f800000;
    FUN_100c3be1((int *)param_1,(int *)param_2,0x37);
    param_1[0xc9] = 0;
    param_3 = param_3 + 2;
    break;
  case 0x58:
    FUN_1005e3fa((int)param_1,*puVar8,param_4);
    FUN_1005eb28((int *)param_1,(int *)param_2,param_3[2],param_3[3],param_3[4]);
    local_1c = (uint *)param_1[0xc9];
    local_11 = (undefined1)param_1[0xcd];
    local_60 = (uint *)FUN_100c2e34((int)param_1,4,'\0');
    local_5c = (uint *)CONCAT31(local_5c._1_3_,local_11);
    local_50 = 0xffffffff;
    local_4c = 0xffffffff;
    local_48 = 0xffffffff;
    local_44 = 0xffffffff;
    cVar2 = FUN_100c413d((char)param_1[0xcd]);
    local_9c = 0xe4;
    if (cVar2 == '\0') {
      local_a0 = param_1[0x29];
      local_90 = 0x80000000;
      local_8c = 0x80000000;
      local_88 = 0x80000000;
      local_84 = 0x80000000;
    }
    else {
      local_a0 = param_1[0x28];
      local_90 = 0x80000000;
      local_8c = extraout_EDX_02;
      local_88 = extraout_EDX_02;
      local_84 = extraout_EDX_02;
    }
    local_90 = -0x80000000;
    iVar10 = 8;
    puVar8 = &local_a0;
    puVar6 = &local_80;
    for (iVar7 = iVar10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar6 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar8 = &local_80;
    puVar6 = local_d0;
    local_8c = local_84;
    local_88 = local_84;
    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar6 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_100c3cfd((int *)param_1,(int *)param_2,1);
    if (local_1c == (uint *)0x0) {
      local_1c = (uint *)param_1[200];
    }
    else {
      local_1c = (uint *)0x0;
    }
    FUN_100c40de(CONCAT31((int3)((uint)extraout_ECX >> 8),0xe4),
                 CONCAT31((int3)((uint)extraout_EDX_03 >> 8),local_5c._0_1_));
    uVar4 = (uint)local_1c | 0x37;
LAB_1005f74a:
    FUN_100c3cfd((int *)param_1,(int *)param_2,uVar4);
LAB_1005f353:
    param_3 = param_3 + 5;
    break;
  case 0x59:
    FUN_1005e3fa((int)param_1,*puVar8,param_4);
    FUN_1005ea3e((int *)param_1,(int *)param_2,param_3[2],param_3[3]);
    uVar9 = param_1[0xcc];
    uVar4 = param_1[0xc9];
    local_60 = (uint *)FUN_100c2e34((int)param_1,4,'\0');
    local_70 = (uint)(byte)uVar9 * 0x40;
    local_50 = 0xffffffff;
    local_4c = 0xffffffff;
    local_48 = 0xffffffff;
    local_44 = 0xffffffff;
    local_90 = local_70 + 0xc0;
    local_a0 = param_1[0x1a];
    local_70 = local_70 + 200;
    local_5c = (uint *)CONCAT31(local_5c._1_3_,0x54);
    local_9c = 0x54;
    local_8c = 0xffffffff;
    local_88 = 0xffffffff;
    local_84 = 0xffffffff;
    local_7c = 0x54;
    local_6c = 0xffffffff;
    local_68 = 0xffffffff;
    local_64 = 0xffffffff;
    local_80 = local_a0;
    FUN_100c3cfd((int *)param_1,(int *)param_2,0xf);
    FUN_100c3cfd((int *)param_1,(int *)param_2,0xf);
    if (uVar4 == 0) {
      uVar4 = param_1[200];
    }
    else {
      uVar4 = 0;
    }
    FUN_100c3cfd((int *)param_1,(int *)param_2,uVar4);
    param_3 = param_3 + 4;
  }
LAB_1005f030:
  local_2c = (uint *)0x0;
  if (param_1[0xec] != 0) {
    uVar4 = 0;
    do {
      if (3 < uVar4) {
        return param_3;
      }
      FUN_100c2ed2((int)param_1,param_1[uVar4 + 0xec]);
      param_1[uVar4 + 0xec] = 0;
      iVar10 = uVar4 + 0xed;
      uVar4 = uVar4 + 1;
    } while (param_1[iVar10] != 0);
  }
  return param_3;
}

