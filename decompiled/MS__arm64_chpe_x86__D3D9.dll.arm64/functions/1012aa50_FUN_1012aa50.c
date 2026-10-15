/*
 * FUN_1012aa50 at 1012aa50
 * undefined FUN_1012aa50(void)
 * Address ranges: 1012aa50-1012aa8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1012aa50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 4) + 0x520;
  }
  uVar2 = FUN_1011fd58(iVar1,param_2,param_3,param_4,param_5);
  return uVar2;
}

