/*
 * FUN_10081617 at 10081617
 * undefined __cdecl FUN_10081617(int * param_1)
 * Address ranges: 10081617-10081653
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10081617(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x1304);
  FUN_100b9fca((void *)param_1[1],(int *)param_1[2],param_1[3],
               *(int **)(*(int *)(*param_1 + 0x1300) + 0xc),*(uint *)(iVar1 + 0x938),
               *(undefined4 *)(iVar1 + 0x93c));
  return;
}

