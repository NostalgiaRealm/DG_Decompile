/*
 * FUN_100531b8 at 100531b8
 * undefined FUN_100531b8(void)
 * Address ranges: 100531b8-1005324b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100531b8(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  
  if (param_3 == (undefined4 *)0x0) {
    iVar2 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958,param_2);
    if (iVar2 == 0) {
      FUN_10001c10(0);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
    (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
    uVar1 = 0x80070057;
  }
  else {
    local_20 = *param_3;
    local_1c = 0;
    local_14 = 0;
    uVar1 = FUN_10046968(*param_1,param_2,&local_20,param_4);
  }
  return uVar1;
}

