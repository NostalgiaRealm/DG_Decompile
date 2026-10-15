/*
 * FUN_10086810 at 10086810
 * undefined FUN_10086810(void)
 * Address ranges: 10086810-1008684b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10086810(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 4) + 0x520;
  }
  uVar2 = FUN_1007bf98(iVar1,param_2,param_3,param_4,param_5);
  return uVar2;
}

