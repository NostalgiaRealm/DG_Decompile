/*
 * FUN_18009c338 at 18009c338
 * undefined FUN_18009c338(void)
 * Address ranges: 18009c338-18009c73f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18009c338(undefined8 param_1,uint *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,int param_6,uint param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  if (param_7 == 0 || param_6 != 1) {
    bVar4 = false;
    if (param_7 != 0) goto LAB_18009c390;
  }
  else {
    bVar4 = true;
LAB_18009c390:
    if ((*param_2 >> 0x11 & 1) != 0) {
      bVar9 = true;
      goto LAB_18009c3a4;
    }
  }
  bVar9 = false;
LAB_18009c3a4:
  uVar6 = param_7;
  if (!bVar9) {
    uVar6 = 0;
  }
  uVar5 = FUN_18009bd88(param_1,param_2,param_3,param_4,uVar6);
  uVar6 = uVar5;
  if (uVar5 != param_7) {
    uVar1 = (param_8 ^ 1) << 3 | 7;
    uVar12 = (uint)(*(char *)((longlong)param_2 + 5) != '\0') |
             (uint)(*(char *)((longlong)param_2 + 6) != '\0') << 1;
    if (uVar12 != 0) {
      uVar6 = FUN_1800f42d0(param_2 + 4,4,1);
    }
    uVar10 = param_2[0x1a];
    param_2[(ulonglong)(byte)uVar10 + 0x22] = 5;
    uVar2 = (byte)uVar10 | 0x410700;
    uVar10 = param_7;
    if (uVar12 != 0 || !bVar4) {
      uVar10 = uVar6;
    }
    uVar3 = (undefined1)uVar1;
    FUN_1800f5730(param_2 + 4,param_1,0xa7,uVar10,uVar3,uVar5 | 0x10000000,0,param_2[0x18],0xe4,0,
                  uVar2,0xe4,0);
    if (uVar12 - 1 < 3) {
      uVar7 = uVar5;
      if (uVar12 == 3) {
        uVar7 = FUN_1800f42d0(param_2 + 4,4,1);
      }
      uVar8 = 1;
      if (uVar12 == 2) {
        uVar8 = 2;
      }
      uVar11 = 0;
      FUN_1800f5730(param_2 + 4,param_1,0xa7,uVar7,uVar3,uVar5 | 0x10000000,uVar8,param_2[0x18],0xe4
                    ,0,uVar2,0xe4,0);
      uVar10 = param_7;
      if (uVar12 != 3 || !bVar4) {
        uVar10 = uVar6;
      }
      FUN_18009b4c8(param_1,param_2,uVar10,uVar1,uVar7,uVar6,uVar7,param_4,uVar11 & 0xffffff00);
      if (uVar12 == 3) {
        uVar8 = FUN_1800f42d0(param_2 + 4,4,1);
        FUN_1800f5730(param_2 + 4,param_1,0xa7,uVar8,uVar3,uVar5 | 0x10000000,3,param_2[0x18],0xe4,0
                      ,uVar2,0xe4,0);
        uVar12 = 0;
        FUN_1800f5730(param_2 + 4,param_1,0xa7,uVar5,uVar3,uVar5 | 0x10000000,2,param_2[0x18],0xe4,0
                      ,uVar2,0xe4,0);
        FUN_18009b4c8(param_1,param_2,uVar5,uVar1,uVar8,uVar5,uVar8,param_4,uVar12 & 0xffffff00);
        uVar10 = param_7;
        if (!bVar4) {
          uVar10 = uVar6;
        }
        FUN_18009b4c8(param_1,param_2,uVar10,uVar1,uVar5,uVar6,uVar5,param_4,0x55);
        if (uVar10 == uVar6) {
          uVar12 = param_7;
          if (param_7 == 0) {
            uVar12 = uVar6;
          }
          FUN_18009b2f0(param_1,param_2,uVar12,uVar1,uVar6,1,param_6);
        }
        FUN_1800f4370(param_2 + 4,uVar8);
      }
      else if (uVar10 == uVar6) {
        uVar12 = param_7;
        if (param_7 == 0) {
          uVar12 = uVar6;
        }
        FUN_18009b2f0(param_1,param_2,uVar12,uVar1,uVar6,1,param_6);
      }
      if (uVar7 != uVar5) {
        FUN_1800f4370(param_2 + 4,uVar7);
      }
    }
    else if (uVar12 == 0 && uVar10 == uVar6) {
      uVar12 = param_7;
      if (param_7 == 0) {
        uVar12 = uVar6;
      }
      FUN_18009b2f0(param_1,param_2,uVar12,uVar1,uVar6,1,param_6);
    }
    if (uVar6 != uVar5) {
      FUN_1800f4370(param_2 + 4,uVar5);
    }
    if (uVar10 != uVar6) {
      FUN_1800f4370(param_2 + 4,uVar6);
      uVar6 = param_7;
    }
  }
  FUN_1800f4370(param_2 + 4,param_4);
  return uVar6;
}

