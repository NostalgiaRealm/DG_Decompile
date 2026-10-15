/*
 * FUN_18009ca18 at 18009ca18
 * undefined FUN_18009ca18(void)
 * Address ranges: 18009ca18-18009d11b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18009ca18(undefined8 param_1,uint *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,int param_6,uint param_7,uint param_8)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint *puVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined3 uVar15;
  undefined8 in_stack_ffffffffffffff38;
  undefined8 uVar16;
  undefined8 in_stack_ffffffffffffff40;
  undefined8 uVar17;
  ulonglong uVar18;
  undefined8 in_stack_ffffffffffffff50;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined8 in_stack_ffffffffffffff60;
  undefined8 in_stack_ffffffffffffff68;
  undefined8 uVar21;
  undefined8 in_stack_ffffffffffffff70;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined8 in_stack_ffffffffffffff80;
  undefined8 uVar24;
  undefined4 uVar25;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  uVar23 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  uVar25 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  if (param_7 == 0 || param_6 != 1) {
    bVar5 = false;
    if (param_7 != 0) goto LAB_18009ca6c;
LAB_18009ca7c:
    bVar12 = false;
  }
  else {
    bVar5 = true;
LAB_18009ca6c:
    if ((*param_2 >> 0x11 & 1) == 0) goto LAB_18009ca7c;
    bVar12 = true;
  }
  uVar9 = param_7;
  if (!bVar12) {
    uVar9 = 0;
  }
  uVar7 = FUN_18009bd88(param_1,param_2,param_3,param_4,uVar9);
  puVar11 = param_2 + 4;
  uVar9 = uVar7;
  if (uVar7 == param_7) goto LAB_18009d0f0;
  uVar9 = (uint)(*(char *)((longlong)param_2 + 5) != '\0') |
          (uint)(*(char *)((longlong)param_2 + 6) != '\0') << 1;
  uVar6 = param_2[0x1a];
  param_2[(ulonglong)(byte)uVar6 + 0x22] = 5;
  bVar2 = *(byte *)((longlong)param_2 + 0x69);
  param_2[(ulonglong)bVar2 + 0x22] = 5;
  if (uVar9 - 1 < 2) {
    if (param_2[4] < 0x50) {
      uVar8 = 0;
      uVar13 = 0x40;
      if (uVar9 != 1) {
        uVar13 = 0x80;
      }
      uVar14 = 0xc;
      if (uVar9 != 1) {
        uVar14 = 10;
      }
      FUN_1800f5730(puVar11,param_1,0x55,uVar7,uVar14,uVar7,uVar13,param_2[0x18],0xe4,
                    CONCAT44(uVar10,8),0);
      uVar10 = 3;
      if (uVar9 != 1) {
        uVar10 = 5;
      }
      FUN_1800f5730(param_2 + 4,param_1,1,uVar7,uVar10,uVar7,0xe4,param_2[0x19],0xe4,0xff,
                    CONCAT44(uVar8,0xff),0xff,CONCAT44(uVar20,0xff),0);
    }
    else {
      uVar6 = param_2[0x19];
      if (uVar9 == 1) {
        FUN_1800f5730(puVar11,param_1,0x8a,uVar7,0xf,uVar6,0xe4,8,8,CONCAT44(uVar10,8),
                      CONCAT44(uVar13,8),uVar6,CONCAT44(uVar20,0xe4),0,0,CONCAT44(uVar14,8),
                      CONCAT44(uVar23,8),uVar7,CONCAT44(uVar25,0x44),0);
      }
      else {
        FUN_1800f5730(puVar11,param_1,0x8a,uVar7,0xf,uVar6,0xe4,8,8,CONCAT44(uVar10,8),
                      CONCAT44(uVar13,8),uVar6,CONCAT44(uVar20,0xe4),0,CONCAT44(uVar8,8),0,
                      CONCAT44(uVar23,8),uVar7,CONCAT44(uVar25,0x88),0);
      }
    }
    uVar9 = FUN_18009c748(param_1,param_2,uVar7,param_4);
    FUN_1800f4370(param_2 + 4,uVar7);
  }
  else {
    uVar3 = (param_8 ^ 1) << 3 | 7;
    if (uVar9 == 0) {
      uVar9 = FUN_1800f42d0(puVar11,4,1);
      uVar1 = param_7;
      if (!bVar5) {
        uVar1 = uVar9;
      }
      if (param_2[4] < 0x50) {
        FUN_1800f5730(param_2 + 4,param_1,0x55,uVar7,2,uVar7,0,param_2[0x18],0xe4,CONCAT44(uVar10,8)
                      ,0);
        uVar10 = 0;
        FUN_1800f5730(param_2 + 4,param_1,1,uVar7,1,uVar7,0,param_2[0x18],0xe4,0xff,0);
      }
      else {
        uVar10 = 0;
        FUN_1800f5730(param_2 + 4,param_1,0x8a,uVar7,3,param_2[0x19],0xe4,8,8,0,0,param_2[0x19],
                      CONCAT44(uVar20,0xe4),0,CONCAT44(uVar8,8),0,0,uVar7,0,0);
      }
      uVar4 = (undefined1)uVar3;
      uVar18 = CONCAT44(uVar10,(uint)(byte)uVar6) | 0x410700;
      FUN_1800f5730(param_2 + 4,param_1,0xa7,uVar9,uVar4,uVar7 | 0x10000000,0,param_2[0x18],0xe4,0,
                    uVar18,0xe4,0);
      FUN_1800f5730(param_2 + 4,param_1,0xa7,uVar7,uVar4,uVar7 | 0x10000000,1,param_2[0x18],0xe4,0,
                    CONCAT44((int)(uVar18 >> 0x20),(uint)bVar2) | 0x410700,0xe4,0);
      FUN_1800f5730(param_2 + 4,param_1,0,uVar1,uVar4,uVar9,0x1e4,uVar7,0x1e4,0);
      if (uVar1 == param_7) {
LAB_18009cda0:
        FUN_1800f4370(param_2 + 4,uVar9);
        uVar9 = param_7;
      }
      else {
        if (param_7 == 0) {
          param_7 = uVar9;
        }
        FUN_18009b2f0(param_1,param_2,param_7,uVar3,uVar9,1,param_6);
      }
    }
    else if (uVar9 == 3) {
      uVar8 = FUN_1800f42d0(puVar11,4,1);
      if (param_2[4] < 0x50) {
        uVar13 = 0;
        uVar16 = CONCAT44(uVar10,8);
        FUN_1800f5730(param_2 + 4,param_1,0x55,uVar8,0xc,uVar7,0x44,param_2[0x18],0xe4,uVar16,0);
        uVar19 = CONCAT44(uVar20,0xff);
        uVar17 = CONCAT44(uVar13,0xff);
        uVar16 = CONCAT44((int)((ulonglong)uVar16 >> 0x20),0xff);
        FUN_1800f5730(param_2 + 4,param_1,1,uVar8,3,uVar7,0x44,param_2[0x19],0xe4,uVar16,uVar17,0xff
                      ,uVar19,0);
        uVar10 = (undefined4)((ulonglong)uVar16 >> 0x20);
        uVar13 = (undefined4)((ulonglong)uVar17 >> 0x20);
        uVar20 = (undefined4)((ulonglong)uVar19 >> 0x20);
      }
      else {
        uVar24 = CONCAT44(uVar25,0x44);
        uVar22 = CONCAT44(uVar23,8);
        uVar21 = CONCAT44(uVar14,8);
        uVar19 = CONCAT44(uVar20,0xe4);
        uVar17 = CONCAT44(uVar13,8);
        uVar16 = CONCAT44(uVar10,8);
        FUN_1800f5730(param_2 + 4,param_1,0x8a,uVar8,0xf,param_2[0x19],0xe4,8,8,uVar16,uVar17,
                      param_2[0x19],uVar19,0,0,uVar21,uVar22,uVar7,uVar24,0);
        uVar14 = (undefined4)((ulonglong)uVar21 >> 0x20);
        uVar23 = (undefined4)((ulonglong)uVar22 >> 0x20);
        uVar25 = (undefined4)((ulonglong)uVar24 >> 0x20);
        uVar10 = (undefined4)((ulonglong)uVar16 >> 0x20);
        uVar13 = (undefined4)((ulonglong)uVar17 >> 0x20);
        uVar20 = (undefined4)((ulonglong)uVar19 >> 0x20);
      }
      uVar9 = FUN_18009c748(param_1,param_2,uVar8,param_4);
      FUN_1800f4370(param_2 + 4,uVar8);
      uVar6 = param_2[0x19];
      if (param_2[4] < 0x50) {
        FUN_1800f5730(param_2 + 4,param_1,1,uVar7,3,uVar7,0xee,uVar6,0xe4,CONCAT44(uVar10,0xff),
                      CONCAT44(uVar13,0xff),0xff,CONCAT44(uVar20,0xff),0);
        uVar8 = 0;
        FUN_1800f5730(param_2 + 4,param_1,0x55,uVar7,0xc,uVar7,0xee,param_2[0x18],0xe4,8,0);
      }
      else {
        uVar8 = 0;
        FUN_1800f5730(param_2 + 4,param_1,0x8a,uVar7,0xf,uVar6,0xe4,8,8,CONCAT44(uVar10,8),
                      CONCAT44(uVar13,8),uVar6,CONCAT44(uVar20,0xe4),0,0,CONCAT44(uVar14,8),
                      CONCAT44(uVar23,8),uVar7,CONCAT44(uVar25,0xee),0);
      }
      uVar15 = (undefined3)((uint)uVar8 >> 8);
      uVar10 = FUN_18009c748(param_1,param_2,uVar7,param_4);
      uVar6 = param_7;
      if (param_7 == 0 || param_6 != 1) {
        uVar6 = uVar9;
      }
      FUN_18009b4c8(param_1,param_2,uVar6,uVar3,uVar10,uVar9,uVar10,param_4,CONCAT31(uVar15,0x55));
      if (uVar6 == uVar9) {
        uVar1 = param_7;
        if (param_7 == 0) {
          uVar1 = uVar9;
        }
        FUN_18009b2f0(param_1,param_2,uVar1,uVar3,uVar9,1,param_6);
      }
      FUN_1800f4370(param_2 + 4,uVar10);
      if (uVar6 == param_7) goto LAB_18009cda0;
    }
    else {
      uVar9 = 0;
    }
  }
  puVar11 = (uint *)FUN_1800f4370(param_2 + 4,uVar7);
LAB_18009d0f0:
  FUN_1800f4370(puVar11,param_4);
  return uVar9;
}

