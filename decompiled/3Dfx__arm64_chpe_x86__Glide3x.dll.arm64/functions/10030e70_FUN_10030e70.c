/*
 * FUN_10030e70 at 10030e70
 * undefined FUN_10030e70(void)
 * Address ranges: 10030e70-10030f13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10030e70(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  
  FUN_10036600(param_1 + 0x3d10,0,0);
  FUN_10014978(param_1);
  FUN_10030dc8(param_1,param_2,param_3,param_4);
  uVar1 = 3;
  do {
    FUN_100374c0(param_1,uVar1,param_3,param_3 + param_4);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 7);
  (*(code *)PTR_FUN_100a0090)(*(int *)(param_1 + 0x3300) + 0x4a0);
  return;
}

