/*
 * FUN_1800ee08c at 1800ee08c
 * int __fastcall FUN_1800ee08c(longlong * param_1, int param_2)
 * Address ranges: 1800ee08c-1800ee0e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800ee08c(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  
  uVar1 = FUN_1800ee040(param_2);
  local_14 = 0;
  local_c = 0;
  local_18 = 0x52444853;
  if (1 < (int)uVar1 - 0x40U) {
    local_18 = 0x58454853;
  }
  local_10 = param_2;
  FUN_1800edd90(param_1,(undefined8 *)&local_18,0x10);
  return (int)param_1[1] - (int)*param_1;
}

