/*
 * FUN_1800712e4 at 1800712e4
 * undefined __fastcall FUN_1800712e4(undefined8 param_1, uint * param_2, longlong * param_3, uint param_4, ulonglong param_5, uint * param_6)
 * Address ranges: 1800712e4-180071b4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800712e4(undefined8 param_1,uint *param_2,longlong *param_3,uint param_4,ulonglong param_5
                  ,uint *param_6)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  sbyte sVar11;
  uint *puVar12;
  byte bVar13;
  byte bVar14;
  int iVar15;
  char cVar16;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint *local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  byte local_64;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar2 = param_2[0x108];
  uVar5 = uVar2 & 0xff;
  uVar9 = (ulonglong)uVar5;
  uVar6 = (uint)((param_5 & 0xffffffffffff) >> ((char)uVar2 * '\x03' & 0x3fU)) & 7;
  if ((&DAT_180102960)[uVar6] != *(char *)(*(longlong *)(param_2 + 0x40) + 0x14f + uVar9)) {
    uVar6 = -(uint)(*(char *)((longlong)param_2 + 0xfa) != '\0') & uVar6;
  }
  local_b8 = 0xffffffffffffffff;
  uStack_b0 = 0xffffffffffffffff;
  if (param_6 == (uint *)0x0) {
    local_88 = 0;
    uStack_84 = uStack_84 & 0xffffff00;
    uVar8 = 0;
    uStack_c4 = uStack_84;
  }
  else {
    uVar8 = *param_6;
    uStack_80 = param_6[2];
    uStack_7c = param_6[3];
    local_b8 = *(undefined8 *)(param_6 + 4);
    uStack_b0 = *(undefined8 *)(param_6 + 6);
    uStack_c4 = param_6[1];
  }
  param_6._0_4_ = 0;
  if (((3 < uVar6 - 1) && (uVar6 != 7)) || (cVar16 = '\x01', 0x50 < *param_2)) {
    cVar16 = '\0';
  }
  bVar13 = (byte)param_2[0xfd];
  bVar14 = (byte)param_2[0x109];
  *(undefined1 *)(param_2 + 0x109) = 0;
  bVar1 = (&DAT_180102958)[uVar6];
  bVar13 = ((bVar13 >> (bVar1 >> 4 & 3) * '\x02' & 3 | (bVar13 >> (bVar1 >> 6) * '\x02') << 2) << 2
           | bVar13 >> (bVar1 >> 2 & 3) * '\x02' & 3) << 2 | bVar13 >> (bVar1 & 3) * '\x02' & 3;
  *(byte *)(param_2 + 0xfd) = bVar13;
  local_c8 = uVar8;
  uStack_c0 = uStack_80;
  uStack_bc = uStack_7c;
  local_a0 = param_2;
  if (uVar6 == 0) {
    local_98 = (longlong *)0x0;
    local_90 = 0;
    local_8c = 0x3f800000;
    local_a8._5_3_ = (undefined3)((ulonglong)param_1 >> 0x28);
    local_a8._0_5_ = CONCAT14(0xe4,param_2[0x2b]);
    FUN_1800edd10(param_2,param_3,0x36,param_2 + 0xd0);
    goto LAB_180071b19;
  }
  local_a8 = param_1;
  local_98 = param_3;
  if (uVar6 == 1) goto LAB_180071492;
  if (uVar6 == 2) {
    puVar12 = param_2 + 0xd0;
    if ((cVar16 != '\0') && ((*puVar12 & 0x3f00) != 0)) {
      uVar6 = param_2[0xd1];
      if (uVar8 == 0) {
        local_c8 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
        uStack_b0 = 0xffffffffffffffff;
        local_b8 = 0xffffffffffffffff;
      }
      uStack_c4 = CONCAT31(uStack_c4._1_3_,(char)uVar6);
      puVar12 = &local_c8;
    }
    uVar10 = FUN_1800ec830((int *)param_2,uVar5 + 0x10,1,uVar5 + 0x10);
    local_88 = (uint)uVar10;
    uStack_84 = CONCAT31(uStack_84._1_3_,bVar14);
    local_78 = 0xffffffffffffffff;
    uStack_70 = 0xffffffffffffffff;
    FUN_1800edd10(param_2,param_3,param_4 | param_2[0xcc],puVar12);
  }
  else {
    if (uVar6 == 3) {
      if (*(char *)(*(longlong *)(param_2 + 0x40) + 0x14f + uVar9) == '\x02') {
        if (uVar8 == 0) {
          uVar8 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
          uStack_b0 = 0xffffffffffffffff;
          local_b8 = 0xffffffffffffffff;
        }
        uStack_c4 = CONCAT31(uStack_c4._1_3_,0xb);
        local_c8 = uVar8;
        if (param_2[0xfc] != uVar8) {
          FUN_1800ee208((byte)param_2[0xfd],0xb);
          FUN_1800edd10(param_2,param_3,0x36,&local_c8);
        }
        local_88 = param_2[0x2a];
        uStack_84 = CONCAT31(uStack_84._1_3_,0xe4);
        local_78 = 0xffffffffffffffff;
        uStack_70 = 0xffffffffffffffff;
        FUN_1800edd10(param_2,param_3,0x36,0x104);
        param_2[0xfc] = local_c8;
        param_2[0xfd] = uStack_c4;
        param_2[0xfe] = uStack_c0;
        param_2[0xff] = uStack_bc;
        *(undefined8 *)(param_2 + 0x100) = local_b8;
        *(undefined8 *)(param_2 + 0x102) = uStack_b0;
      }
    }
    else if (uVar6 != 4) {
      if ((uVar6 == 5) || (uVar6 == 6)) {
        iVar7 = 0;
        if (uVar6 == 6) {
          iVar7 = 0x10;
        }
        uVar9 = FUN_1800ec830((int *)param_2,iVar7 + uVar5,(uint)(uVar6 == 6),iVar7 + uVar5);
        local_88 = (uint)uVar9;
        uStack_84 = CONCAT31(uStack_84._1_3_,bVar14);
        sVar11 = 4;
        local_68 = param_2[0xfc] | 0x10000000;
        local_78 = 0xffffffffffffffff;
        uStack_70 = 0xffffffffffffffff;
        if (uVar6 == 6) {
          sVar11 = 6;
        }
        local_64 = bVar13 >> sVar11 & 3;
        uVar6 = (uint)(param_5 >> 0x32) & 1 | (ushort)(param_5 >> 0x30) & 2;
        local_58 = 0xffffffffffffffff;
        uStack_50 = 0xffffffffffffffff;
        if ((uVar6 == 0) || (uVar6 == 1)) {
          bVar13 = (byte)param_2[0xd1];
          if ((bVar13 & 8) == 0) goto LAB_18007154f;
          bVar4 = true;
          *(byte *)(param_2 + 0xd1) = bVar13 & 7;
        }
        else {
LAB_18007154f:
          bVar4 = false;
        }
        if (uVar6 == 0) {
LAB_180071751:
          if ((uVar6 == 2) || ((param_2[0xd1] & 7) != 0)) {
            FUN_1800edd10(param_2,param_3,param_2[0xcc] | 0x46,param_2 + 0xd0);
LAB_1800717a3:
            pbVar3 = (byte *)((longlong)param_2 + ((longlong)(int)uVar5 >> 3) + 0xb4);
            *pbVar3 = *pbVar3 | '\x01' << (uVar2 & 7);
          }
        }
        else if (uVar6 == 1) {
LAB_18007157a:
          if ((uVar6 == 3) || ((param_2[0xd1] & 7) != 0)) {
            if (param_2[0xfc] == uVar8) {
              local_c8 = 0;
              param_6._0_4_ = uVar8;
            }
            if (local_c8 == 0) {
              local_c8 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
              uStack_b0 = 0xffffffffffffffff;
              local_b8 = 0xffffffffffffffff;
            }
            uStack_c4 = CONCAT31(uStack_c4._1_3_,0xe4);
            uVar9 = 0;
            do {
              FUN_1800edd10(param_2,param_3,0x80000046,(ulonglong)(uint)(&DAT_180102788)[uVar9]);
              uVar6 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar6;
            } while (uVar6 < 4);
            local_a8._0_5_ = CONCAT14(0xe4,param_2[0x2a]);
            local_98 = (longlong *)0xffffffff3e4ccccd;
            local_90 = 0xffffffff;
            local_8c = 0xffffffff;
            FUN_1800edd10(param_2,param_3,0x11,0x101);
            FUN_1800edd10(param_2,param_3,0x46,0x102);
            FUN_1800edd10(param_2,param_3,0x32,param_2 + 0xd0);
            goto LAB_1800717a3;
          }
        }
        else {
          if (uVar6 == 2) goto LAB_180071751;
          if (uVar6 == 3) goto LAB_18007157a;
        }
        if (bVar4) {
          local_a8._0_5_ = CONCAT14(0xe4,param_2[0x2a]);
          local_98 = (longlong *)0xffffffff3f800000;
          local_90 = 0xffffffff;
          local_8c = 0xffffffff;
          FUN_1800edd10(param_2,param_3,0x36,0x108);
        }
        goto LAB_180071b19;
      }
      if (uVar6 != 7) goto LAB_180071b19;
    }
LAB_180071492:
    if (uVar6 == 4) {
      bVar13 = bVar14 & 3;
      bVar14 = ((bVar14 << 2 | bVar13) << 2 | bVar13) << 2 | bVar13;
    }
    else if (uVar6 == 7) {
      bVar14 = bVar14 >> 2 & 3 | (bVar14 & 3) << 2 | bVar14 & 0xf0;
    }
    puVar12 = param_2 + 0xd0;
    if ((cVar16 != '\0') && ((*puVar12 & 0x3f00) != 0)) {
      uVar8 = param_2[0xd1];
      if (local_c8 == 0) {
        local_c8 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
        uStack_b0 = 0xffffffffffffffff;
        local_b8 = 0xffffffffffffffff;
      }
      uStack_c4 = CONCAT31(uStack_c4._1_3_,(char)uVar8);
      puVar12 = &local_c8;
    }
    iVar7 = 0;
    if (uVar6 == 3) {
      iVar7 = 0x20;
    }
    iVar15 = 0;
    if (uVar6 == 3) {
      iVar15 = 2;
    }
    uVar10 = FUN_1800ec830((int *)param_2,iVar7 + uVar5,iVar15,iVar7 + uVar5);
    local_88 = (uint)uVar10;
    uStack_84 = CONCAT31(uStack_84._1_3_,bVar14);
    local_78 = 0xffffffffffffffff;
    uStack_70 = 0xffffffffffffffff;
    FUN_1800edd10(param_2,param_3,param_4 | param_2[0xcc],puVar12);
  }
  FUN_180071b50((longlong)&local_a8,(longlong)puVar12,uVar9,cVar16);
  pbVar3 = (byte *)((longlong)param_2 + ((longlong)(int)uVar5 >> 3) + 0xb4);
  *pbVar3 = *pbVar3 | '\x01' << (uVar2 & 7);
LAB_180071b19:
  FUN_1800ec960((longlong)param_2,local_c8);
  FUN_1800ec960((longlong)param_2,(uint)param_6);
  return;
}

