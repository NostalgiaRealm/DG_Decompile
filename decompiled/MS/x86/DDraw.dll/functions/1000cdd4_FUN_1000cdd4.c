/*
 * FUN_1000cdd4 at 1000cdd4
 * float10 __fastcall FUN_1000cdd4(int param_1)
 * Address ranges: 1000cdd4-1000cdfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __fastcall FUN_1000cdd4(int param_1)

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

