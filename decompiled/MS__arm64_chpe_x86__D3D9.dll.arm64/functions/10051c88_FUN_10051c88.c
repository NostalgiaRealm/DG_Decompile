/*
 * FUN_10051c88 at 10051c88
 * undefined FUN_10051c88(void)
 * Address ranges: 10051c88-10051ce7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10051c88(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0xac);
  iVar2 = *(int *)(param_1 + 0xc4) + *(int *)(param_1 + 200) * 0x16c0;
  *(int *)(param_1 + 0xcc) = iVar2 + 0x6c0;
  FUN_1011b230(iVar2 + 0x1d00,*puVar1);
  FUN_10132260(*puVar1,8);
  *puVar1 = 0;
  return;
}

