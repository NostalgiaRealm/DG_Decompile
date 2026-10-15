/*
 * FUN_100983fd at 100983fd
 * uint __stdcall FUN_100983fd(int param_1, uint param_2, uint param_3, int param_4, uint param_5, uint param_6, int param_7, undefined4 * param_8, int param_9, uint param_10)
 * Address ranges: 100983fd-10098483
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100983fd(int param_1,uint param_2,uint param_3,int param_4,uint param_5,uint param_6,
                 int param_7,undefined4 *param_8,int param_9,uint param_10)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_10;
  uVar2 = 0x8876086c;
  if ((((param_10 & 0xff7fc7ff) == 0) && (param_8 != (undefined4 *)0x0)) &&
     (*param_8 = 0, param_9 == 0)) {
    FUN_10003e40((void *)((int)&param_10 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
    uVar2 = FUN_10098635((void *)(param_1 + -0x66b4),param_2,param_3,param_4,param_5,param_6,0,
                         (undefined4 *)(uVar1 | 1),(uint)(param_7 != 0),param_8);
    FUN_10003e89((char *)((int)&param_10 + 3));
  }
  return uVar2;
}

