/*
 * FUN_10076af0 at 10076af0
 * undefined FUN_10076af0(void)
 * Address ranges: 10076af0-10076b2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10076af0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 4) + 0x520;
  }
  uVar2 = FUN_10061970(iVar1,param_2,param_3,param_4,param_5);
  return uVar2;
}

