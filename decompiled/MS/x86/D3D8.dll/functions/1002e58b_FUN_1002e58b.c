/*
 * FUN_1002e58b at 1002e58b
 * undefined4 __stdcall FUN_1002e58b(int param_1, int param_2, undefined4 param_3, undefined4 param_4, void * param_5, undefined4 param_6, uint * param_7, uint * param_8)
 * Address ranges: 1002e58b-1002e5f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1002e58b(int param_1,int param_2,undefined4 param_3,undefined4 param_4,void *param_5,
                 undefined4 param_6,uint *param_7,uint *param_8)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_1002e27a(param_5,param_3,param_4,*(int **)(param_2 * 0x1510 + 0x510 + param_1));
  *param_7 = uVar1;
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = FUN_1002e27a((void *)((int)param_5 + 0xb0),param_3,param_4,
                         *(int **)(param_2 * 0x1510 + 0x510 + param_1));
    *param_8 = uVar2;
    if (uVar2 != 0) {
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
    uVar2 = (**(code **)(*(int *)*param_7 + 8))((int *)*param_7);
  }
  return uVar2 & 0xffffff00;
}

