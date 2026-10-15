/*
 * FUN_10038140 at 10038140
 * undefined FUN_10038140(void)
 * Address ranges: 10038140-100382a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10038140(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *extraout_w11;
  undefined1 extraout_w12;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  iVar1 = param_1 + param_2 * 0x1a0;
  *(uint *)(iVar1 + 0x2d70) = param_3;
  *(uint *)(iVar1 + 0x2d74) = param_4;
  *(undefined4 *)(iVar1 + 0x2d78) = param_7;
  *(uint *)(param_1 + (param_2 + 0x1c) * 0x1a0) = param_5;
  *(uint *)(iVar1 + 0x2d84) = param_6;
  *(undefined4 *)(iVar1 + 0x2d88) = param_8;
  if ((((param_4 & 7) - 1 & 0xfffffffd) == 0) || (bVar2 = 0, ((param_6 & 7) - 1 & 0xfffffffd) == 0))
  {
    bVar2 = 1;
  }
  if (param_3 < 0xb) {
    bVar4 = *(byte *)(param_3 + 0x10099d00);
  }
  else {
    bVar4 = 0;
  }
  if (param_5 < 0xb) {
    bVar3 = *(byte *)(param_5 + 0x10099d00);
  }
  else {
    bVar3 = 0;
  }
  *(byte *)(param_2 + param_1 + 0x32d9) = bVar4 | bVar2 | bVar3;
  FUN_10037198(param_1,param_2);
  *(undefined1 *)(param_1 + 0x32d0) = extraout_w12;
  return;
}

