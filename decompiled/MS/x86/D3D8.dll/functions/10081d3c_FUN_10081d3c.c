/*
 * FUN_10081d3c at 10081d3c
 * undefined4 __stdcall FUN_10081d3c(int param_1, int param_2, undefined4 * param_3, uint * param_4)
 * Address ranges: 10081d3c-10081d8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10081d3c(int param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  iVar1 = param_1;
  puVar3 = (uint *)(*(int *)(param_1 + -0x3c) + -0x4dd4);
  if (*(int *)(param_1 + -0x3c) == 0) {
    puVar3 = (uint *)&DAT_00000b0c;
  }
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*puVar3 >> 2) & 1);
  uVar2 = FUN_1000de63((void *)(iVar1 + -0x48),param_2,param_3,param_4);
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar2;
}

