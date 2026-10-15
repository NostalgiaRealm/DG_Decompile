/*
 * FUN_1009c7f6 at 1009c7f6
 * undefined4 __stdcall FUN_1009c7f6(int param_1, undefined4 * param_2, int * param_3, SIZE_T param_4, uint param_5)
 * Address ranges: 1009c7f6-1009c847
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009c7f6(int param_1,undefined4 *param_2,int *param_3,SIZE_T param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  iVar1 = param_1;
  puVar3 = (uint *)(*(int *)(param_1 + -0x20) + -0x58e4);
  if (*(int *)(param_1 + -0x20) == 0) {
    puVar3 = (uint *)&DAT_00000dd0;
  }
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*puVar3 >> 2) & 1);
  uVar2 = FUN_10011763((void *)(iVar1 + -0x2c),param_2,param_3,param_4,param_5);
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar2;
}

