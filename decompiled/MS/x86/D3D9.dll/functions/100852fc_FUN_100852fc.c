/*
 * FUN_100852fc at 100852fc
 * float10 __fastcall FUN_100852fc(int param_1)
 * Address ranges: 100852fc-10085323
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __fastcall FUN_100852fc(int param_1)

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

