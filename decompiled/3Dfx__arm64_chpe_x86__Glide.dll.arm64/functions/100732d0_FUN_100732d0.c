/*
 * FUN_100732d0 at 100732d0
 * undefined FUN_100732d0(void)
 * Address ranges: 100732d0-1007330b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100732d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 4) + 0x520;
  }
  uVar2 = FUN_1005e160(iVar1,param_2,param_3,param_4,param_5);
  return uVar2;
}

