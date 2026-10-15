/*
 * FUN_10027953 at 10027953
 * undefined __fastcall FUN_10027953(int param_1)
 * Address ranges: 10027953-100279f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10027953(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_100272cf(param_1);
  iVar2 = (**(code **)(**(int **)(param_1 + 0xbc) + 8))(*(int **)(param_1 + 0xbc));
  piVar1 = *(int **)(param_1 + 0xbc);
  if (iVar2 == 1) {
    FUN_1003b699(*(void **)(param_1 + 0xa4),piVar1);
  }
  else {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_1003b699(*(void **)(param_1 + 0xa4),*(int **)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  FUN_1003c3aa(*(void **)(*(int *)(param_1 + 0xa8) + 0x15dc),*(int **)(param_1 + 0xc4),2,(int *)0x0,
               0,0);
  FUN_1003c3aa(*(void **)(*(int *)(param_1 + 0xa8) + 0x15d8),*(int **)(param_1 + 0xc0),2,(int *)0x0,
               0,0);
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
  return;
}

