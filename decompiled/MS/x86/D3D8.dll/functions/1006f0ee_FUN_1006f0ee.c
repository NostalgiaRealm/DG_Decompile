/*
 * FUN_1006f0ee at 1006f0ee
 * float10 __fastcall FUN_1006f0ee(int param_1)
 * Address ranges: 1006f0ee-1006f115
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __fastcall FUN_1006f0ee(int param_1)

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

