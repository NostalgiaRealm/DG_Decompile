/*
 * FUN_1001b8d5 at 1001b8d5
 * undefined __fastcall FUN_1001b8d5(void * param_1)
 * Address ranges: 1001b8d5-1001b91c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001b8d5(void *param_1)

{
  bool bVar1;
  
  FUN_1001b2b9(param_1,param_1);
  FUN_1001b3c0(param_1,0);
  bVar1 = FUN_100440cd(*(void **)(*(int *)((int)param_1 + 4) + 0x295c),*(int **)((int)param_1 + 8));
  if ((!bVar1) && (*(char *)(*(int *)(*(int *)((int)param_1 + 4) + 4) + 0x20) == '\0')) {
    FUN_1001bd18(param_1);
  }
  return;
}

