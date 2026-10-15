/*
 * FUN_1009c460 at 1009c460
 * undefined FUN_1009c460(void)
 * Address ranges: 1009c460-1009c4cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009c460(int param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  ulonglong uVar1;
  
  if ((*(int *)(param_1 + 0x90) != 0) &&
     (uVar1 = FUN_1009c180(param_1,param_1 + 0x84,param_1 + 0x48,param_4,param_5,param_2,param_3,
                           *(int *)(param_1 + 0x5c) +
                           (param_2 + *(int *)(param_1 + 0x2c) * param_3) * 0x20 + 0x10),
     (uVar1 & 1) != 0)) {
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  return;
}

