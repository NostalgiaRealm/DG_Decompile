/*
 * FUN_100220d0 at 100220d0
 * undefined FUN_100220d0(void)
 * Address ranges: 100220d0-1002213f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100220d0(int param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  ulonglong uVar1;
  
  if ((*(int *)(param_1 + 0x90) != 0) &&
     (uVar1 = FUN_10021df0(param_1,param_1 + 0x84,param_1 + 0x48,param_4,param_5,param_2,param_3,
                           *(int *)(param_1 + 0x5c) +
                           (param_2 + *(int *)(param_1 + 0x2c) * param_3) * 0x20 + 0x10),
     (uVar1 & 1) != 0)) {
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  return;
}

