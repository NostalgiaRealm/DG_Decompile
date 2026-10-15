/*
 * FUN_1011f160 at 1011f160
 * undefined FUN_1011f160(void)
 * Address ranges: 1011f160-1011f1d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1011f160(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined4 local_30 [4];
  
  uVar1 = 1;
  local_30[0] = param_2;
  (*(code *)PTR_FUN_1016c074)(param_1 + 0x1c);
  uVar2 = FUN_1011f580(param_1,local_30);
  if ((int)uVar2 != 0) {
    uVar1 = FUN_1011e4a0(uVar2,uVar2 & 0xffffffff,param_3);
  }
  (*(code *)PTR_FUN_1016c0c0)(param_1 + 0x1c);
  return uVar1;
}

