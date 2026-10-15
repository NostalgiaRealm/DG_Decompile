/*
 * FUN_10054bb8 at 10054bb8
 * undefined FUN_10054bb8(void)
 * Address ranges: 10054bb8-10054c6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10054bb8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_FUN_1009d040)(param_1,param_2,param_3);
  if (iVar1 != 0) {
    iVar2 = (*(code *)PTR_FUN_1009d0d8)(param_1,iVar1);
    if (((iVar2 != 0) && (iVar1 = (*(code *)PTR_FUN_1009d098)(param_1,iVar1), iVar1 != 0)) &&
       (iVar1 = (*(code *)PTR_FUN_1009d09c)(iVar1), iVar1 != 0)) {
      FUN_1007a780(param_4,iVar1,iVar2);
      return 1;
    }
  }
  return 0;
}

