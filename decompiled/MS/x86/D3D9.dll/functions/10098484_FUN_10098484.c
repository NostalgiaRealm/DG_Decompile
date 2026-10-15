/*
 * FUN_10098484 at 10098484
 * uint __stdcall FUN_10098484(int param_1, uint param_2, uint param_3, int param_4, int param_5, undefined4 * param_6, int param_7, undefined4 * param_8)
 * Address ranges: 10098484-1009850a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10098484(int param_1,uint param_2,uint param_3,int param_4,int param_5,undefined4 *param_6,
                 int param_7,undefined4 *param_8)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = param_6;
  iVar1 = param_1;
  uVar3 = 0x8876086c;
  if (((((uint)param_8 & 0xff7fc7ff) == 0) && (param_6 != (undefined4 *)0x0)) &&
     (*param_6 = 0, param_7 == 0)) {
    FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
    if (((param_5 == 0) || (param_5 == 2)) || (param_5 == 3)) {
      uVar3 = FUN_10098635((void *)(iVar1 + -0x66b4),param_2,param_3,param_4,0,0,param_5,param_8,1,
                           puVar2);
    }
    FUN_10003e89((char *)((int)&param_1 + 3));
  }
  return uVar3;
}

