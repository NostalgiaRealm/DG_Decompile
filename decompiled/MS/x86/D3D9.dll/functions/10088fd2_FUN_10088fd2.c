/*
 * FUN_10088fd2 at 10088fd2
 * undefined __cdecl FUN_10088fd2(int * param_1)
 * Address ranges: 10088fd2-10089017
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10088fd2(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 0x30);
  iVar1 = *(int *)(iVar2 + 0x1cf00);
  iVar2 = *(int *)(iVar2 + 0x14) * 0x16c0;
  FUN_100bceec(*(void **)(iVar2 + 0x19c4 + iVar1),*(uint *)(*param_1 + 0x34),param_1[1],
               (void *)(iVar1 + 0x1af0 + iVar2),(int)(param_1 + 2),param_1 + 0xc);
  return;
}

