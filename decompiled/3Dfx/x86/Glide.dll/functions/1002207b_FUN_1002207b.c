/*
 * FUN_1002207b at 1002207b
 * undefined __cdecl FUN_1002207b(int * param_1)
 * Address ranges: 1002207b-100220c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1002207b(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = param_1[0xb];
  FUN_100273a6((void *)(iVar1 + 0x3950),0,0);
  FUN_1003ee5d(*(void **)(*(int *)(iVar1 + 0x3188) + 0x1304),*(uint *)(iVar1 + 0x31a8),
               (void *)(*(int *)(iVar1 + 0x3188) + 0x1430),(int)(param_1 + 1),iVar2);
  return;
}

