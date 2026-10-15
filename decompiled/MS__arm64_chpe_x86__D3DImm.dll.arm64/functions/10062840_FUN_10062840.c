/*
 * FUN_10062840 at 10062840
 * undefined FUN_10062840(void)
 * Address ranges: 10062840-10062883
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10062840(int param_1,undefined4 param_2)

{
  ulonglong uVar1;
  undefined4 local_20 [4];
  
  local_20[0] = 0;
  uVar1 = FUN_10065140(param_1 + 4,param_2,local_20,0);
  if ((uVar1 & 1) != 0) {
    FUN_10062890(param_1);
  }
  return local_20[0];
}

