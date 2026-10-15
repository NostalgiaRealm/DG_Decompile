/*
 * FUN_10010d39 at 10010d39
 * undefined __fastcall FUN_10010d39(void * param_1)
 * Address ranges: 10010d39-10010d80
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10010d39(void *param_1)

{
  bool bVar1;
  
  FUN_10010707(param_1,param_1);
  FUN_1001080e(param_1,0);
  bVar1 = FUN_10049fbe(*(void **)(*(int *)((int)param_1 + 4) + 0x2b14),*(int **)((int)param_1 + 8));
  if ((!bVar1) && (*(char *)(*(int *)(*(int *)((int)param_1 + 4) + 4) + 0x20) == '\0')) {
    FUN_100111f6(param_1);
  }
  return;
}

