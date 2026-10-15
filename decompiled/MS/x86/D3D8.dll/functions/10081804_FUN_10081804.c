/*
 * FUN_10081804 at 10081804
 * undefined4 __stdcall FUN_10081804(int param_1, uint param_2, int param_3, undefined4 * param_4)
 * Address ranges: 10081804-1008186b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10081804(int param_1,uint param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  FUN_10003838((void *)((int)&param_1 + 3),
               (byte)(*(uint *)(*(int *)(param_1 + 0xec) + 0xb0c) >> 2) & 1);
  uVar2 = 0x8876086c;
  if (((param_2 < *(uint *)(iVar1 + 0x90)) && (param_4 != (undefined4 *)0x0)) && (param_3 == 0)) {
    uVar2 = FUN_100810e8(*(int *)(iVar1 + 0x3c + param_2 * 4) + 0x5c,0x100af390,param_4);
  }
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar2;
}

