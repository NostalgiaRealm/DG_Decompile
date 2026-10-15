/*
 * FUN_10099f8c at 10099f8c
 * uint __stdcall FUN_10099f8c(int param_1, uint param_2, uint param_3, int param_4, uint param_5, uint param_6, undefined4 param_7, undefined4 * param_8, int param_9)
 * Address ranges: 10099f8c-1009a000
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10099f8c(int param_1,uint param_2,uint param_3,int param_4,uint param_5,uint param_6,
                 undefined4 param_7,undefined4 *param_8,int param_9)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = param_8;
  iVar1 = param_1;
  uVar3 = 0x8876086c;
  if ((param_8 != (undefined4 *)0x0) && (*param_8 = 0, param_9 == 0)) {
    FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
    uVar3 = FUN_10098635((void *)(iVar1 + -0x66b4),param_2,param_3,param_4,param_5,param_6,0,
                         (undefined4 *)0x2,(uint)(param_4 == 0x46),puVar2);
    FUN_10003e89((char *)((int)&param_1 + 3));
  }
  return uVar3;
}

