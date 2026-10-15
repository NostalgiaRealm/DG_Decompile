/*
 * FUN_100180c8 at 100180c8
 * undefined __fastcall FUN_100180c8(int param_1)
 * Address ranges: 100180c8-100181a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100180c8(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x2bcb) != '\0') {
    uVar2 = 0;
    do {
      piVar1 = *(int **)(param_1 + 0x31b8 + uVar2 * 8);
      (**(code **)(*piVar1 + 8))(piVar1);
      piVar1 = *(int **)(param_1 + 0x31bc + uVar2 * 8);
      (**(code **)(*piVar1 + 8))(piVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x20);
    (**(code **)(**(int **)(param_1 + 0x31b4) + 8))(*(int **)(param_1 + 0x31b4));
  }
  FUN_100417d4(*(void **)(param_1 + 0x3180),*(int *)(param_1 + 0x3184),*(int **)(param_1 + 0x31a4));
  FUN_100417d4(*(void **)(param_1 + 0x3180),*(int *)(param_1 + 0x3184),*(int **)(param_1 + 0x31a0));
  (**(code **)(**(int **)(param_1 + 0x3198) + 8))(*(int **)(param_1 + 0x3198));
  (**(code **)(**(int **)(param_1 + 0x3194) + 8))(*(int **)(param_1 + 0x3194));
  FUN_100417d4(*(void **)(param_1 + 0x3180),*(int *)(param_1 + 0x3184),*(int **)(param_1 + 0x31a8));
  (**(code **)(**(int **)(param_1 + 0x319c) + 8))(*(int **)(param_1 + 0x319c));
  FUN_100417d4(*(void **)(param_1 + 0x3180),*(int *)(param_1 + 0x3184),*(int **)(param_1 + 0x31b0));
  (**(code **)(**(int **)(param_1 + 0x31ac) + 8))(*(int **)(param_1 + 0x31ac));
  (**(code **)(**(int **)(param_1 + 0x3190) + 8))(*(int **)(param_1 + 0x3190));
  (**(code **)(**(int **)(param_1 + 0x318c) + 8))(*(int **)(param_1 + 0x318c));
  return;
}

