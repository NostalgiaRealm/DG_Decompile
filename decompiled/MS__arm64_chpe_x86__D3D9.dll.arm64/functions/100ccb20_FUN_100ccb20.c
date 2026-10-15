/*
 * FUN_100ccb20 at 100ccb20
 * undefined FUN_100ccb20(void)
 * Address ranges: 100ccb20-100ccb87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ccb20(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_1 + param_2 * 0xc18 + 0x100a8;
  FUN_101325a0(iVar1,param_1 + 0x1c228,0xc00);
  if (param_3 != 0) {
    FUN_10110f58(*(undefined4 *)(param_1 + 0x10),param_3,iVar1,param_1 + 0xc);
  }
  return;
}

