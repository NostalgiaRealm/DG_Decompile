/*
 * FUN_100852d4 at 100852d4
 * float10 __fastcall FUN_100852d4(int param_1)
 * Address ranges: 100852d4-100852fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __fastcall FUN_100852d4(int param_1)

{
  undefined4 local_8;
  
  if (*(char *)(param_1 + 0x1bd) == '\0') {
    local_8 = 1.0;
  }
  else {
    local_8 = *(float *)(param_1 + 0x1b4);
  }
  return (float10)local_8;
}

