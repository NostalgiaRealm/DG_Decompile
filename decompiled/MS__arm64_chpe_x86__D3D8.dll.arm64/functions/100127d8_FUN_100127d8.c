/*
 * FUN_100127d8 at 100127d8
 * undefined FUN_100127d8(void)
 * Address ranges: 100127d8-10012903
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100127d8(uint *param_1,undefined4 param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_30 [4];
  
  uVar3 = 0;
  do {
    if (param_1[uVar3 + 6] == (param_3 & 0xffff)) {
      return uVar3;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  uVar4 = 0xffffffff;
  uVar3 = 0;
  do {
    local_30[0] = param_1[5];
    uVar2 = uVar4;
    if (((*(byte *)((int)local_30 + ((int)uVar3 >> 3)) >> (ulonglong)(uVar3 & 7) & 1) == 0) &&
       (uVar2 = uVar3, param_1[uVar3 + 6] == 0xffffffff)) goto LAB_100128a8;
    uVar4 = uVar2;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  if (uVar4 != 0xffffffff) {
    FUN_10002350(param_2,0x290200100100,*param_1 | 0x80000000,uVar4,param_1[uVar4 + 6] << 4,0);
  }
  uVar3 = 0xffffffff;
LAB_100128a8:
  if (uVar3 == 0xffffffff) {
    uVar3 = uVar4;
  }
  param_1[uVar3 + 6] = 0xffffffff;
  pbVar1 = (byte *)((int)param_1 + ((int)uVar3 >> 3) + 0x9c);
  *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar3 & 7));
  return uVar3;
}

