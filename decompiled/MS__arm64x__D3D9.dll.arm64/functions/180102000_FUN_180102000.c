/*
 * FUN_180102000 at 180102000
 * undefined FUN_180102000(void)
 * Address ranges: 180102000-180102043
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180102000(undefined8 param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int in_stack_00000010;
  
  iVar1 = (*__imp_KERNEL32_dll_ReadFile)(param_1,param_3,param_2,&stack0x00000010,0);
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

