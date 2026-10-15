/*
 * FUN_100255a0 at 100255a0
 * undefined FUN_100255a0(void)
 * Address ranges: 100255a0-1002567b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100255a0(int param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x3180);
  FUN_1006ad40(*piVar1,param_2,param_1);
  FUN_10024538(param_1,1);
  iVar2 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 4) + 0x33)) {
    do {
      FUN_10040c98(*(undefined4 *)(param_1 + 0xc9fc + iVar2 * 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(int *)(param_1 + 4) + 0x33));
  }
  FUN_10046aa0(param_1 + 0x3780);
  FUN_1002ab48(param_1 + 0x32b8);
  FUN_10023110(param_1);
  FUN_10064dd0(*piVar1,*(undefined4 *)(param_1 + 0x3184));
  (*(code *)PTR_FUN_1009d090)(*piVar1 + 0x4a0);
  return;
}

