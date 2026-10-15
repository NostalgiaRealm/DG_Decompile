/*
 * FUN_1001bc60 at 1001bc60
 * undefined __fastcall FUN_1001bc60(void * param_1)
 * Address ranges: 1001bc60-1001bca7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001bc60(void *param_1)

{
  bool bVar1;
  
  FUN_1001b644(param_1,param_1);
  FUN_1001b74b(param_1,0);
  bVar1 = FUN_1004445d(*(void **)(*(int *)((int)param_1 + 4) + 0x295c),*(int **)((int)param_1 + 8));
  if ((!bVar1) && (*(char *)(*(int *)(*(int *)((int)param_1 + 4) + 4) + 0x20) == '\0')) {
    FUN_1001c0a4(param_1);
  }
  return;
}

