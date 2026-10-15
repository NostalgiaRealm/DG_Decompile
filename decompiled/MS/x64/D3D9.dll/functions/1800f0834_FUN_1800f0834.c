/*
 * FUN_1800f0834 at 1800f0834
 * undefined8 __fastcall FUN_1800f0834(longlong * param_1, longlong * param_2, undefined8 * param_3)
 * Address ranges: 1800f0834-1800f0887
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800f0834(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (((*param_2 == 0) && (param_2[1] == 0x46000000000000c0)) ||
     ((*param_2 == 0x40e251958ba5fb08 && (param_2[1] == 0x2013a9c980d58ac)))) {
    *param_3 = param_1;
    (**(code **)(*param_1 + 8))();
    uVar1 = 0;
  }
  else {
    *param_3 = 0;
    uVar1 = 0x80004002;
  }
  return uVar1;
}

