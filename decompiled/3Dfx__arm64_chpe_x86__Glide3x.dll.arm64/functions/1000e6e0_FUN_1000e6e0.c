/*
 * FUN_1000e6e0 at 1000e6e0
 * undefined FUN_1000e6e0(void)
 * Address ranges: 1000e6e0-1000e77f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000e6e0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x32e0);
  FUN_10018e60(iVar2);
  FUN_1000cd10(iVar2,iVar2 + 4,param_2,param_3,param_4 != 0);
  puVar1 = (uint *)(*(int *)(iVar2 + 0x1b0) + 0x32a0);
  *puVar1 = *puVar1 & 0xffffc001 | *(uint *)(iVar2 + 0xe4);
  *(undefined1 *)(param_1 + 0x32d0) = 1;
  return;
}

