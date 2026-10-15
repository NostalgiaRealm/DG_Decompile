/*
 * FUN_1007b603 at 1007b603
 * byte __fastcall FUN_1007b603(void * param_1)
 * Address ranges: 1007b603-1007b61f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_1007b603(void *param_1)

{
  byte bVar1;
  
  if (*(char *)((int)param_1 + 0x151) == '\0') {
    bVar1 = FUN_10079d6c(param_1);
    *(byte *)((int)param_1 + 0x151) = bVar1;
    return bVar1;
  }
  return 1;
}

