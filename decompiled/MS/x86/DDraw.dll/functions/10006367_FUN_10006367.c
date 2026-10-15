/*
 * FUN_10006367 at 10006367
 * undefined __fastcall FUN_10006367(void * param_1)
 * Address ranges: 10006367-1000638d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10006367(void *param_1)

{
  if (((*(uint *)((int)param_1 + 0x34) >> 5 & 1) == 0) && (*(char *)((int)param_1 + 0xad) != '\0'))
  {
    FUN_10006691((int)param_1);
    return;
  }
  FUN_100053b3(param_1,(uint)*(byte *)((int)param_1 + 0x48));
  return;
}

