/*
 * FUN_10051f20 at 10051f20
 * undefined FUN_10051f20(void)
 * Address ranges: 10051f20-10051f8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10051f20(int param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  uint local_30 [4];
  
  local_30[0] = 0;
  uVar1 = FUN_10054be8(param_2,param_3,*(undefined4 *)(param_1 + 4),local_30);
  if ((uVar1 & 1) == 0) {
    local_30[0] = FUN_1003c490(*(undefined4 *)(param_1 + 4),param_2,param_3,0);
  }
  return local_30[0];
}

