/*
 * FUN_10043a88 at 10043a88
 * undefined FUN_10043a88(void)
 * Address ranges: 10043a88-10043ae7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10043a88(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0xac);
  iVar2 = *(int *)(param_1 + 0xc4) + *(int *)(param_1 + 200) * 0x16c0;
  *(int *)(param_1 + 0xcc) = iVar2 + 0x6c0;
  FUN_100e89e0(iVar2 + 0x1d00,*puVar1);
  FUN_100fec90(*puVar1,8);
  *puVar1 = 0;
  return;
}

