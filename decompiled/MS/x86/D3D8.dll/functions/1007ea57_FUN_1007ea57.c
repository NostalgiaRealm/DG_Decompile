/*
 * FUN_1007ea57 at 1007ea57
 * uint __stdcall FUN_1007ea57(int param_1, uint param_2, uint param_3, int param_4, uint param_5, int param_6, undefined4 * param_7)
 * Address ranges: 1007ea57-1007eac0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1007ea57(int param_1,uint param_2,uint param_3,int param_4,uint param_5,int param_6,
                 undefined4 *param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = param_7;
  uVar2 = 0x8876086c;
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 0;
    FUN_10003838((void *)((int)&param_7 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
    uVar2 = FUN_1007e184((void *)(param_1 + -0x58e0),param_2,param_3,param_4,param_5,0,
                         (undefined4 *)0x1,(uint)(param_6 != 0),puVar1);
    FUN_10003881((char *)((int)&param_7 + 3));
  }
  return uVar2;
}

