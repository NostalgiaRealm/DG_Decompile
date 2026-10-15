/*
 * FUN_10047dd0 at 10047dd0
 * undefined FUN_10047dd0(void)
 * Address ranges: 10047dd0-10047f47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10047dd0(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
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
  iVar1 = param_1 + param_2 * 0x180;
  *(uint *)(iVar1 + 0x2cd0) = param_3;
  *(uint *)(iVar1 + 0x2cd4) = param_4;
  *(undefined4 *)(iVar1 + 0x2cd8) = param_7;
  *(uint *)(iVar1 + 0x2ce0) = param_5;
  *(uint *)(iVar1 + 0x2ce4) = param_6;
  *(undefined4 *)(iVar1 + 0x2ce8) = param_8;
  if ((((param_4 & 7) - 1 & 0xfffffffd) == 0) || (bVar2 = 0, ((param_6 & 7) - 1 & 0xfffffffd) == 0))
  {
    bVar2 = 1;
  }
  if (param_3 < 0xb) {
    bVar4 = *(byte *)(param_3 + 0x10096ed0);
  }
  else {
    bVar4 = 0;
  }
  if (param_5 < 0xb) {
    bVar3 = *(byte *)(param_5 + 0x10096ed0);
  }
  else {
    bVar3 = 0;
  }
  *(byte *)(param_2 + param_1 + 0x3159) = bVar4 | bVar2 | bVar3;
  FUN_10047618(param_1,param_2);
  FUN_10048168(param_1,*(undefined1 *)(param_1 + 0x2994));
  *(undefined1 *)(param_1 + 0x3150) = extraout_w12;
  return;
}

