/*
 * FUN_10063c18 at 10063c18
 * float10 __fastcall FUN_10063c18(int param_1)
 * Address ranges: 10063c18-10063c3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __fastcall FUN_10063c18(int param_1)

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

