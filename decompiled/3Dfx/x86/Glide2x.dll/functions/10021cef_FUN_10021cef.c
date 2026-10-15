/*
 * FUN_10021cef at 10021cef
 * undefined __cdecl FUN_10021cef(int * param_1)
 * Address ranges: 10021cef-10021d39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10021cef(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = param_1[0xb];
  FUN_1002701c((void *)(iVar1 + 0x3950),0,0);
  FUN_1003eacd(*(void **)(*(int *)(iVar1 + 0x3188) + 0x1304),*(uint *)(iVar1 + 0x31a8),
               (void *)(*(int *)(iVar1 + 0x3188) + 0x1430),(int)(param_1 + 1),iVar2);
  return;
}

