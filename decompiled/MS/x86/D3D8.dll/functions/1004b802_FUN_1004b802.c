/*
 * FUN_1004b802 at 1004b802
 * uint * __stdcall FUN_1004b802(uint * param_1, int * param_2, int * param_3, undefined4 param_4, uint param_5, uint param_6, byte param_7)
 * Address ranges: 1004b802-1004b99d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1004b802(uint *param_1,int *param_2,int *param_3,undefined4 param_4,uint param_5,
                   uint param_6,byte param_7)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint local_40 [9];
  byte local_1c;
  undefined3 uStack_1b;
  byte local_18;
  undefined3 uStack_17;
  uint local_14;
  
  bVar1 = FUN_1004b582((int)param_2,param_6);
  _local_1c = CONCAT31(uStack_1b,bVar1);
  *(byte *)(param_1 + 1) = bVar1;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  bVar2 = (byte)(param_6 >> 9) & 1 ^ param_7;
  _local_18 = CONCAT31(uStack_17,bVar2);
  local_14 = (uint)bVar2 << 0x1f;
  uVar3 = param_6 & 0xf0;
  *param_1 = 0;
  if (0x60 < uVar3) {
    if (uVar3 == 0x70) {
      *param_1 = local_14 | param_5;
      return param_1;
    }
    if (uVar3 != 0x80) {
      if (uVar3 != 0xb0) {
        return param_1;
      }
      *param_1 = (param_6 & 0xffff) >> 10 | local_14 | 0x410000;
      return param_1;
    }
    iVar5 = 0x90;
    if ((param_6 & 0x100) == 0) {
      iVar5 = 0x94;
    }
    uVar3 = *(uint *)(iVar5 + (int)param_2);
    *(undefined1 *)(param_1 + 1) = 0xe4;
    *param_1 = uVar3 | local_14;
    param_1[4] = 0;
    if ((param_6 & 0x100) != 0) {
      return param_1;
    }
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    return param_1;
  }
  if (uVar3 == 0x60) {
    puVar4 = FUN_1004b7ac(local_40,(int)param_2,0xa0,bVar1,bVar2);
    puVar6 = param_1;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    return param_1;
  }
  if (uVar3 == 0x10) {
    FUN_1004b5e4(param_2,param_3);
    uVar3 = param_2[0x7e];
  }
  else if (uVar3 == 0x20) {
    FUN_1004b64f((int)param_2);
    uVar3 = param_2[0x7f];
  }
  else {
    if (uVar3 == 0x30) {
      if (param_2[0x81] == 0) {
        uVar3 = FUN_100a05ed((int)param_2,4,'\x01');
        param_2[0x81] = uVar3;
        FUN_100a138c(param_2,param_3,0x2036);
      }
      uVar3 = param_2[0x81] | local_14;
      goto LAB_1004b90e;
    }
    if (uVar3 != 0x40) {
      return param_1;
    }
    FUN_1004b677(param_2,param_3);
    uVar3 = param_2[0x82];
  }
  uVar3 = uVar3 | local_14;
LAB_1004b90e:
  *param_1 = uVar3;
  return param_1;
}

