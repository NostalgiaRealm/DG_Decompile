/*
 * FUN_1006578b at 1006578b
 * byte __fastcall FUN_1006578b(void * param_1)
 * Address ranges: 1006578b-100657a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_1006578b(void *param_1)

{
  byte bVar1;
  
  if (*(char *)((int)param_1 + 0x151) == '\0') {
    bVar1 = FUN_10063f60(param_1);
    *(byte *)((int)param_1 + 0x151) = bVar1;
    return bVar1;
  }
  return 1;
}

