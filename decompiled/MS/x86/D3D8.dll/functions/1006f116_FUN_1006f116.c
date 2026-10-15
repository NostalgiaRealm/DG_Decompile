/*
 * FUN_1006f116 at 1006f116
 * float10 __fastcall FUN_1006f116(int param_1)
 * Address ranges: 1006f116-1006f13d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __fastcall FUN_1006f116(int param_1)

{
  undefined4 local_8;
  
  if (*(char *)(param_1 + 0x1bd) == '\0') {
    local_8 = 1.0;
  }
  else {
    local_8 = *(float *)(param_1 + 0x1b8);
  }
  return (float10)local_8;
}

