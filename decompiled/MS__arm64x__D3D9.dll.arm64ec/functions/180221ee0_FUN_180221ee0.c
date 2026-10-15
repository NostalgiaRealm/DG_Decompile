/*
 * FUN_180221ee0 at 180221ee0
 * undefined FUN_180221ee0(void)
 * Address ranges: 180221ee0-180221f57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180221ee0(longlong param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *extraout_x11;
  int in_stack_00000010;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  do {
    thunk_FUN_180223c0c(&stack0x00000018,0,0,0,0x400000);
    (*(code *)puVar1)();
    (*extraout_x11)(param_2,&stack0x00000010,4,5);
    in_stack_00000010 = *(int *)(param_1 + 0x200);
  } while (0 < in_stack_00000010);
  return;
}

