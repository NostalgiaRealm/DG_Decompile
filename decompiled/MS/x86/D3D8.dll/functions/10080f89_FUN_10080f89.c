/*
 * FUN_10080f89 at 10080f89
 * undefined4 __stdcall FUN_10080f89(int param_1, int param_2, undefined4 * param_3, uint * param_4)
 * Address ranges: 10080f89-10080fd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10080f89(int param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  iVar1 = param_1;
  puVar3 = (uint *)(*(int *)(param_1 + -0x20) + -0x4dd4);
  if (*(int *)(param_1 + -0x20) == 0) {
    puVar3 = (uint *)&DAT_00000b0c;
  }
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*puVar3 >> 2) & 1);
  uVar2 = FUN_1000de63((void *)(iVar1 + -0x2c),param_2,param_3,param_4);
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar2;
}

