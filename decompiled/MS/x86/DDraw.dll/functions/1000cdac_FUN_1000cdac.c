/*
 * FUN_1000cdac at 1000cdac
 * float10 __fastcall FUN_1000cdac(int param_1)
 * Address ranges: 1000cdac-1000cdd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __fastcall FUN_1000cdac(int param_1)

{
  undefined4 local_8;
  
  if (*(char *)(param_1 + 0x151) == '\0') {
    local_8 = 1.0;
  }
  else {
    local_8 = *(float *)(param_1 + 0x148);
  }
  return (float10)local_8;
}

