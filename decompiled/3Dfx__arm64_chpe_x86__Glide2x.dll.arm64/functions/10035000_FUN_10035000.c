/*
 * FUN_10035000 at 10035000
 * undefined FUN_10035000(void)
 * Address ranges: 10035000-1003507f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10035000(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = param_1[0xb];
  FUN_1003ea50(iVar1 + 0x3950,0,0);
  FUN_100637d0(*(undefined4 *)(*(int *)(iVar1 + 0x3188) + 0x1304),*(undefined4 *)(iVar1 + 0x31a8),
               *(int *)(iVar1 + 0x3188) + 0x1430,param_1 + 1,iVar2);
  return;
}

