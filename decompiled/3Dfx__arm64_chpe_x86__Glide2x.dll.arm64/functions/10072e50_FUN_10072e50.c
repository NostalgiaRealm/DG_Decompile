/*
 * FUN_10072e50 at 10072e50
 * undefined FUN_10072e50(void)
 * Address ranges: 10072e50-10072e8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10072e50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 4) + 0x520;
  }
  uVar2 = FUN_1005dce0(iVar1,param_2,param_3,param_4,param_5);
  return uVar2;
}

