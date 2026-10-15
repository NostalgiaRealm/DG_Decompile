/*
 * FUN_10010580 at 10010580
 * undefined FUN_10010580(void)
 * Address ranges: 10010580-1001061f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10010580(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x3660);
  FUN_10019588(iVar2);
  FUN_1000ebb0(iVar2,iVar2 + 4,param_2,param_3,param_4 != 0);
  puVar1 = (uint *)(*(int *)(iVar2 + 0x1b0) + 0x3620);
  *puVar1 = *puVar1 & 0xffffc001 | *(uint *)(iVar2 + 0xe4);
  *(undefined1 *)(param_1 + 0x3650) = 1;
  return;
}

