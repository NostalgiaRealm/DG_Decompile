/*
 * FUN_18009d128 at 18009d128
 * undefined FUN_18009d128(void)
 * Address ranges: 18009d128-18009d407
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009d128(undefined8 param_1,uint *param_2,uint param_3,byte param_4,int param_5,
                  uint param_6,uint param_7)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  uint local_60 [4];
  
  uVar4 = (param_7 ^ 1) << 3;
  uVar5 = param_6;
  if ((param_6 & 0x3f00) == 0x200) {
    uVar5 = param_3;
  }
  uVar3 = *param_2;
  uVar2 = param_6;
  if (param_5 != 2) {
    uVar2 = uVar5;
  }
  uVar8 = 7;
  if ((uVar3 & 0x4000000) == 0) {
    uVar8 = 8;
  }
  local_60[0] = (uVar3 >> 0x12 & 3) << 3;
  uVar9 = 7;
  uVar1 = uVar9;
  if ((uVar3 & 0x8000000) == 0) {
    uVar1 = 8;
  }
  local_60[3] = (uVar3 >> 0x18 & 3) << 3;
  local_60[1] = (uVar3 >> 0x14 & 3) << 3;
  if ((uVar3 & 0x10000000) == 0) {
    uVar9 = 8;
  }
  local_60[2] = (uVar3 >> 0x16 & 3) << 3;
  uVar6 = 7;
  uVar5 = uVar6;
  if ((uVar3 & 0x20000000) == 0) {
    uVar5 = 8;
  }
  if (param_2[4] < 0x50) {
    uVar11 = (uint)param_4;
    uVar6 = uVar11 & 3;
    uVar5 = 0;
    do {
      if (((uVar6 != uVar5) &&
          (uVar7 = 1 << (ulonglong)(uVar5 & 0x1f), ((uVar4 & 0xff | 7) & uVar7) != 0)) &&
         ((*param_2 & 0x40000000) == 0 || uVar5 != 3)) {
        FUN_1800f5730(param_2 + 4,param_1,0x55,uVar2,uVar7,param_3,uVar11,param_2[0x18],0xe4,
                      local_60[uVar5],0);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 4);
    uVar5 = 1 << (ulonglong)uVar6;
    uVar7 = uVar4 & 0xff | 7;
    if (((uVar5 & uVar7) != 0) && ((*param_2 & 0x40000000) == 0 || uVar6 != 3)) {
      FUN_1800f5730(param_2 + 4,param_1,0x55,uVar2,uVar5,param_3,uVar11,param_2[0x18],0xe4,
                    local_60[uVar6],0);
    }
    uVar13 = 0;
    uVar5 = 7;
    if ((uVar3 & 0x40000000) == 0) {
      uVar5 = 0xf;
    }
    uVar12 = 0xff;
    uVar11 = 0xff;
    uVar10 = 0xff;
    uVar9 = 0xff;
    FUN_1800f5730(param_2 + 4,param_1,1,uVar2,uVar5 & uVar7,uVar2,0xe4,param_2[0x19],0xe4,0xff,0xff,
                  0xff,0xff,0);
  }
  else {
    uVar11 = param_2[0x19];
    if ((uVar3 & 0x40000000) == 0) {
      uVar6 = 0xf;
    }
    uVar13 = (ulonglong)local_60[0];
    uVar12 = 0xe4;
    uVar10 = (ulonglong)uVar5;
    FUN_1800f5730(param_2 + 4,param_1,0x8a,uVar2,(uVar4 & 0xff | 7) & uVar6,uVar11,0xe4,uVar8,uVar1,
                  uVar9,uVar10,uVar11,0xe4,uVar13,local_60[1],local_60[2],local_60[3],param_3,
                  param_4,0);
  }
  if (((*param_2 >> 0x1e & 1) != 0) && ((*param_2 >> 0xe & 1) == 0)) {
    FUN_1800f5730(param_2 + 4,param_1,0x36,uVar2,8,param_2[0x18],0xe4,0xff,0,uVar9,uVar10,uVar11,
                  uVar12,uVar13);
  }
  if (param_5 != 2) {
    FUN_18009b2f0(param_1,param_2,param_6,uVar4 | 7,uVar2,2,param_5);
  }
  return;
}

