/*
 * FUN_10030ed0 at 10030ed0
 * undefined FUN_10030ed0(void)
 * Address ranges: 10030ed0-10030f47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10030ed0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_30;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  undefined8 uStack_14;
  undefined4 uStack_c;
  
  if (param_1 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      local_30 = 0x28;
      uStack_24 = 0;
      uStack_2c = 0;
      uStack_14 = 0;
      uStack_1c = 0;
      uStack_c = 0;
      iVar1 = (*(code *)PTR_FUN_101341d8)(param_1,&local_30);
      return iVar1 != 0;
    }
    *param_2 = 0x28;
    iVar1 = (*(code *)PTR_FUN_101341d8)(param_1,param_2);
    if (iVar1 != 0) {
      return true;
    }
  }
  return false;
}

