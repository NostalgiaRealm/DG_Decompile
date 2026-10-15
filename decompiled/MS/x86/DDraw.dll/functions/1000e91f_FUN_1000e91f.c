/*
 * FUN_1000e91f at 1000e91f
 * byte __fastcall FUN_1000e91f(void * param_1)
 * Address ranges: 1000e91f-1000e93b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_1000e91f(void *param_1)

{
  byte bVar1;
  
  if (*(char *)((int)param_1 + 0x151) == '\0') {
    bVar1 = FUN_1000d0f4(param_1);
    *(byte *)((int)param_1 + 0x151) = bVar1;
    return bVar1;
  }
  return 1;
}

