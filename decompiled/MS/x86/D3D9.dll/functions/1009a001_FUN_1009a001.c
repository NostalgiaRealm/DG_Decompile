/*
 * FUN_1009a001 at 1009a001
 * uint __stdcall FUN_1009a001(int param_1, uint param_2, uint param_3, int param_4, int param_5, undefined4 * param_6, int param_7)
 * Address ranges: 1009a001-1009a07c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1009a001(int param_1,uint param_2,uint param_3,int param_4,int param_5,undefined4 *param_6,
                 int param_7)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = param_6;
  iVar1 = param_1;
  uVar3 = 0x8876086c;
  if ((param_6 != (undefined4 *)0x0) && (*param_6 = 0, param_7 == 0)) {
    FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
    if ((param_5 == 0) || ((param_5 == 2 || (param_5 == 3)))) {
      uVar3 = FUN_10098635((void *)(iVar1 + -0x66b4),param_2,param_3,param_4,0,0,param_5,
                           (undefined4 *)0x0,1,puVar2);
    }
    FUN_10003e89((char *)((int)&param_1 + 3));
  }
  return uVar3;
}

