/*
 * FUN_1000e790 at 1000e790
 * undefined FUN_1000e790(void)
 * Address ranges: 1000e790-1000e81f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000e790(int param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x32e0);
  FUN_10018e60(iVar2);
  FUN_1000cda0(iVar2,iVar2 + 4,param_2);
  puVar1 = (uint *)(*(int *)(iVar2 + 0x1b0) + 0x32a0);
  *puVar1 = *(uint *)(iVar2 + 0xe4) | *puVar1 & 0xffffc001;
  *(undefined1 *)(*(int *)(iVar2 + 0x1b0) + 0x32d0) = 1;
  *(undefined1 *)(param_1 + 0x32d0) = 1;
  return;
}

