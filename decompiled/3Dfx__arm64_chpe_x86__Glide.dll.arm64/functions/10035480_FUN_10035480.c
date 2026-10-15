/*
 * FUN_10035480 at 10035480
 * undefined FUN_10035480(void)
 * Address ranges: 10035480-100354ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10035480(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = param_1[0xb];
  FUN_1003eed0(iVar1 + 0x3950,0,0);
  FUN_10063c50(*(undefined4 *)(*(int *)(iVar1 + 0x3188) + 0x1304),*(undefined4 *)(iVar1 + 0x31a8),
               *(int *)(iVar1 + 0x3188) + 0x1430,param_1 + 1,iVar2);
  return;
}

