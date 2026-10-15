/*
 * FUN_10010630 at 10010630
 * undefined FUN_10010630(void)
 * Address ranges: 10010630-100106bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10010630(int param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x3660);
  FUN_10019588(iVar2);
  FUN_1000ec40(iVar2,iVar2 + 4,param_2);
  puVar1 = (uint *)(*(int *)(iVar2 + 0x1b0) + 0x3620);
  *puVar1 = *(uint *)(iVar2 + 0xe4) | *puVar1 & 0xffffc001;
  *(undefined1 *)(*(int *)(iVar2 + 0x1b0) + 0x3650) = 1;
  *(undefined1 *)(param_1 + 0x3650) = 1;
  return;
}

