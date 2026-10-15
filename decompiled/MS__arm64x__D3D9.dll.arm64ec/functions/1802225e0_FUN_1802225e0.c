/*
 * FUN_1802225e0 at 1802225e0
 * undefined FUN_1802225e0(void)
 * Address ranges: 1802225e0-18022261b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1802225e0(undefined8 param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int in_stack_00000010;
  
  iVar1 = thunk_FUN_180223b1c(param_1,param_3,param_2,&stack0x00000010,0);
  if (iVar1 == 1) {
    if (param_4 != (int *)0x0) {
      *param_4 = in_stack_00000010;
      return 0;
    }
    if (in_stack_00000010 == param_2) {
      return 0;
    }
  }
  return 1;
}

