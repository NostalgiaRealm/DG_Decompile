/*
 * FUN_1007296b at 1007296b
 * undefined __fastcall FUN_1007296b(void * param_1)
 * Address ranges: 1007296b-100729b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1007296b(void *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)param_1 + 0x34) != 0) {
    iVar2 = *(int *)(*(int *)((int)param_1 + 0x30) + 0x14) * 0x16c0;
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x30) + 0x1cf00);
    FUN_1007264b(param_1,*(void **)(iVar2 + 0x1c98 + iVar1),*(int **)((int)param_1 + 0x38));
    FUN_100a7d2e((void *)(iVar1 + 0x1c40 + iVar2),*(undefined4 *)((int)param_1 + 0x34));
    *(undefined4 *)((int)param_1 + 0x34) = 0;
  }
  return;
}

