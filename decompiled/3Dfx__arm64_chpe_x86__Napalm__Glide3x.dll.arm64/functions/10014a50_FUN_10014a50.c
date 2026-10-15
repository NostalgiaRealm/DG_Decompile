/*
 * FUN_10014a50 at 10014a50
 * undefined FUN_10014a50(void)
 * Address ranges: 10014a50-10014b2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10014a50(int param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x3680);
  FUN_10073c00(*piVar1,param_2,param_1);
  FUN_100148c8(param_1,1);
  iVar2 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 4) + 0x33)) {
    do {
      FUN_100340b8(*(undefined4 *)(param_1 + 0xd4f0 + iVar2 * 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(int *)(param_1 + 4) + 0x33));
  }
  switchD_10035238::caseD_100352e8(param_1 + 0x4090);
  FUN_1001b370(param_1 + 0x37b8);
  FUN_10013480(param_1);
  FUN_1006dc90(*piVar1,*(undefined4 *)(param_1 + 0x3684));
  (*(code *)PTR_FUN_100a8090)(*piVar1 + 0x4a0);
  return;
}

