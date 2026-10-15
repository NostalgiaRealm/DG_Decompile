/*
 * FUN_1002404f at 1002404f
 * bool __fastcall FUN_1002404f(int param_1)
 * Address ranges: 1002404f-100240a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1002404f(int param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))
                    (*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),5,1,0,0);
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x20))(&local_14,5);
    *(undefined4 *)(param_1 + 0x3c) = local_14;
    *(undefined4 *)(param_1 + 0x40) = local_10;
    *(undefined4 *)(param_1 + 0x38) = 0x20;
    *(undefined4 *)(param_1 + 0x44) = local_c;
  }
  return iVar1 != 0;
}

