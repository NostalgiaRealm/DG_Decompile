/*
 * FUN_10018838 at 10018838
 * float10 __fastcall FUN_10018838(int param_1)
 * Address ranges: 10018838-1001885f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __fastcall FUN_10018838(int param_1)

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

