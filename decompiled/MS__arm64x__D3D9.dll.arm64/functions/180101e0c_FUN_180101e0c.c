/*
 * FUN_180101e0c at 180101e0c
 * undefined FUN_180101e0c(void)
 * Address ranges: 180101e0c-180101e5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180101e0c(longlong param_1)

{
  int in_stack_00000010;
  
  do {
    (*__imp_USER32_dll_PeekMessageA)(&stack0x00000018,0,0,0,0x400000);
    (**(code **)(param_1 + 0x58))(param_1 + 0x200,&stack0x00000010,4,5);
    in_stack_00000010 = *(int *)(param_1 + 0x200);
  } while (0 < in_stack_00000010);
  return;
}

