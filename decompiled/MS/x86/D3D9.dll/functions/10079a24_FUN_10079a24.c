/*
 * FUN_10079a24 at 10079a24
 * float10 __fastcall FUN_10079a24(int param_1)
 * Address ranges: 10079a24-10079a4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __fastcall FUN_10079a24(int param_1)

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

