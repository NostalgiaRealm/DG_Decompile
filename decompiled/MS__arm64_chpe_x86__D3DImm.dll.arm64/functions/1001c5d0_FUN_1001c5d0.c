/*
 * FUN_1001c5d0 at 1001c5d0
 * undefined FUN_1001c5d0(void)
 * Address ranges: 1001c5d0-1001c62f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001c5d0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0xb4);
  iVar2 = *(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xd0) * 0x16c0;
  *(int *)(param_1 + 0xd4) = iVar2 + 0x6c0;
  FUN_10075bc0(iVar2 + 0x1d00,*puVar1);
  FUN_10081d50(*puVar1,8);
  *puVar1 = 0;
  return;
}

