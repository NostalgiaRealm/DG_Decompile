/*
 * FUN_100f7480 at 100f7480
 * undefined FUN_100f7480(void)
 * Address ranges: 100f7480-100f74bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100f7480(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 4) + 0x520;
  }
  uVar2 = FUN_100ed508(iVar1,param_2,param_3,param_4,param_5);
  return uVar2;
}

