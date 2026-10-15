/*
 * FUN_100381b1 at 100381b1
 * undefined4 __stdcall FUN_100381b1(int param_1, int param_2, undefined4 param_3, undefined4 param_4, uint param_5, int param_6, uint * param_7, uint * param_8)
 * Address ranges: 100381b1-10038223
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100381b1(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                 int param_6,uint *param_7,uint *param_8)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_100379f3(param_5,param_6,param_3,param_4,*(int **)(param_2 * 0x1510 + 0x510 + param_1)
                      );
  *param_7 = uVar1;
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = FUN_100379f3(param_5 + 0x254,param_6,param_3,param_4,
                         *(int **)(param_2 * 0x1510 + 0x510 + param_1));
    *param_8 = uVar2;
    if (uVar2 != 0) {
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
    uVar2 = (**(code **)(*(int *)*param_7 + 8))((int *)*param_7);
  }
  return uVar2 & 0xffffff00;
}

