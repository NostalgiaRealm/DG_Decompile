/*
 * FUN_1003f210 at 1003f210
 * undefined FUN_1003f210(void)
 * Address ranges: 1003f210-1003f2cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003f210(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x20);
  if ((*piVar1 != 0) && ((*(uint *)(param_1 + 0x34) >> 3 & 1) == 0)) {
    FUN_101322d0(*(undefined4 *)(param_1 + 0x24));
    FUN_101322d0(*(undefined4 *)(param_1 + 0x28));
    if (param_2 == 0) {
      (*(code *)PTR_FUN_1016c12c)(*piVar1 - param_3,0,0x8000);
    }
    else {
      (*(code *)PTR_FUN_1016c124)();
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    piVar1[0] = 0;
    piVar1[1] = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  FUN_1003b7c0(param_1);
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xffffffce;
  return;
}

