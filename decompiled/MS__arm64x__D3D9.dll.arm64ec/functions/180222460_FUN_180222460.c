/*
 * FUN_180222460 at 180222460
 * undefined FUN_180222460(void)
 * Address ranges: 180222460-1802224c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180222460(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

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
  uVar1 = thunk_FUN_180223acc(param_2,uVar1,1,0,uVar2,0x80,0);
  param_1[1] = uVar1;
  return param_1;
}

