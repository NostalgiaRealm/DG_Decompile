/*
 * FUN_180222670 at 180222670
 * undefined FUN_180222670(void)
 * Address ranges: 180222670-1802226c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180222670(undefined8 param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 1) {
    uVar2 = 1;
  }
  else if (param_3 == 2) {
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
  }
  uVar1 = thunk_FUN_180223ae0(param_1,param_2,0,uVar2);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar1;
  }
  return 0;
}

