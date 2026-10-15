/*
 * FUN_1802223f0 at 1802223f0
 * undefined FUN_1802223f0(void)
 * Address ranges: 1802223f0-180222457
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1802223f0(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_180229168;
  *(undefined1 *)(param_1 + 2) = 1;
  if ((param_3 & 1) == 0) {
    uVar2 = 3;
    uVar1 = 0x80000000;
  }
  else {
    uVar2 = 2;
    uVar1 = 0x40000000;
  }
  uVar1 = thunk_FUN_180223ab8(param_2,uVar1,1,0,uVar2,0x80,0);
  param_1[1] = uVar1;
  return param_1;
}

