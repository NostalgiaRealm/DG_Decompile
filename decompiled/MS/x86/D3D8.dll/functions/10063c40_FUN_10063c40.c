/*
 * FUN_10063c40 at 10063c40
 * float10 __fastcall FUN_10063c40(int param_1)
 * Address ranges: 10063c40-10063c67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __fastcall FUN_10063c40(int param_1)

{
  undefined4 local_8;
  
  if (*(char *)(param_1 + 0x151) == '\0') {
    local_8 = 1.0;
  }
  else {
    local_8 = *(float *)(param_1 + 0x14c);
  }
  return (float10)local_8;
}

