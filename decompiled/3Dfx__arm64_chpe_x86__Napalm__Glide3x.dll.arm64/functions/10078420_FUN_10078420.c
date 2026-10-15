/*
 * FUN_10078420 at 10078420
 * undefined FUN_10078420(void)
 * Address ranges: 10078420-10078517
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10078420(undefined8 param_1,uint *param_2,uint param_3,byte param_4,uint param_5,
                undefined1 param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = ((1 << (ulonglong)(param_3 >> 0x14 & 7)) + 0xffU & (uint)param_4) <<
          (ulonglong)(param_3 >> 0x12 & 3);
  uVar2 = param_3 >> 0x10 & 3;
  uVar4 = param_3 & 0xff;
  if (1 < uVar2) {
    uVar4 = param_3 >> 0xe & 3;
  }
  param_2[1] = uVar4;
  param_2[2] = param_3 & 0xff;
  iVar5 = uVar2 + 1;
  bVar3 = (~(param_3 >> 0x1b) & 4) == 0;
  if ((param_3 >> 0x1e & 1) == 0) {
    param_5 = 2;
    if (bVar3) {
      param_5 = 0;
    }
    param_5 = param_5 | (param_3 & 0x3f00 | uVar2 << 0x10 | uVar1 & 0xff) << 4;
  }
  else {
    uVar4 = 2;
    if (bVar3) {
      uVar4 = 0;
    }
    *param_2 = uVar4 | (param_3 & 0x3f00 | (uVar2 | 0x60) << 0x10 | uVar1 & 0xff) << 4;
    uVar4 = FUN_100785f0(param_5,param_6,1,4,0,0);
    param_5 = param_5 & 0xff;
    param_2[iVar5] = uVar4;
    param_2 = param_2 + iVar5 + 1;
    iVar5 = uVar2 + 3;
  }
  *param_2 = param_5;
  return iVar5;
}

