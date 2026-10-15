/*
 * FUN_1000fa57 at 1000fa57
 * undefined __fastcall FUN_1000fa57(void * param_1)
 * Address ranges: 1000fa57-1000fa9e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000fa57(void *param_1)

{
  bool bVar1;
  
  FUN_1000f42d(param_1,param_1);
  FUN_1000f534(param_1,0);
  bVar1 = FUN_10046bb5(*(void **)(*(int *)((int)param_1 + 4) + 0x29d8),*(int **)((int)param_1 + 8));
  if ((!bVar1) && (*(char *)(*(int *)(*(int *)((int)param_1 + 4) + 4) + 0x20) == '\0')) {
    FUN_1000fe9a(param_1);
  }
  return;
}

