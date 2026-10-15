/*
 * FUN_10081cea at 10081cea
 * undefined4 __stdcall FUN_10081cea(int param_1, undefined4 * param_2, int * param_3, SIZE_T param_4, uint param_5)
 * Address ranges: 10081cea-10081d3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10081cea(int param_1,undefined4 *param_2,int *param_3,SIZE_T param_4,uint param_5)

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
  uVar2 = FUN_1000da3f((void *)(iVar1 + -0x48),param_2,param_3,param_4,param_5);
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar2;
}

