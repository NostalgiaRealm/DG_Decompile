/*
 * FUN_10025120 at 10025120
 * undefined FUN_10025120(void)
 * Address ranges: 10025120-100251fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10025120(int param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x3180);
  FUN_1006a8c0(*piVar1,param_2,param_1);
  FUN_100240b8(param_1,1);
  iVar2 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 4) + 0x33)) {
    do {
      FUN_10040818(*(undefined4 *)(param_1 + 0xc9fc + iVar2 * 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(int *)(param_1 + 4) + 0x33));
  }
  FUN_10046620(param_1 + 0x3780);
  FUN_1002a6c8(param_1 + 0x32b8);
  FUN_10022c90(param_1);
  FUN_10064950(*piVar1,*(undefined4 *)(param_1 + 0x3184));
  (*(code *)PTR_FUN_1009d090)(*piVar1 + 0x4a0);
  return;
}

