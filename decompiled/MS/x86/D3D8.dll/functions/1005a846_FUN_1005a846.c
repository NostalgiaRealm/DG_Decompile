/*
 * FUN_1005a846 at 1005a846
 * bool __stdcall FUN_1005a846(int param_1, int * param_2, uint param_3, uint param_4, uint param_5)
 * Address ranges: 1005a846-1005a887
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1005a846(int param_1,int *param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = FUN_1005573b(param_2,param_1,param_3 | 0x410100,param_4,param_5,
                       *(char *)(param_1 + 0xda + param_3));
  *(uint *)(param_1 + 0xec + param_3 * 4) = uVar1;
  return uVar1 == (param_3 | 0x410100);
}

