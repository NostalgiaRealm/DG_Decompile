/*
 * FUN_100e9c70 at 100e9c70
 * undefined FUN_100e9c70(void)
 * Address ranges: 100e9c70-100e9cc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e9c70(int param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int local_20 [4];
  
  local_20[0] = 0;
  iVar1 = *(int *)(param_1 + 0x120);
  uVar3 = FUN_100d1560(param_1 + 0xe0,local_20);
  if ((uVar3 & 1) != 0) {
    FUN_100e9550(param_1);
  }
  iVar2 = local_20[0];
  if (local_20[0] == 0) {
    FUN_100d3450(iVar1 + 0x66b4);
  }
  return iVar2;
}

