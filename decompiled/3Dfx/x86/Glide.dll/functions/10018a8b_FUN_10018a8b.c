/*
 * FUN_10018a8b at 10018a8b
 * undefined __fastcall FUN_10018a8b(void * param_1)
 * Address ranges: 10018a8b-10018ae0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10018a8b(void *param_1)

{
  int *piVar1;
  
  if (*(char *)((int)param_1 + 0x2bcb) != '\0') {
    if (*(int *)((int)param_1 + 0x2a38) == 0x20) {
      FUN_10018959(param_1,'\0');
    }
    piVar1 = *(int **)(*(int *)((int)param_1 + 0x3188) + 4);
    (**(code **)(*piVar1 + 0x6c))
              (piVar1,*(undefined4 *)((int)param_1 + *(int *)((int)param_1 + 0x2a38) * 8 + 0x31b8));
    piVar1 = *(int **)(*(int *)((int)param_1 + 0x3188) + 4);
    (**(code **)(*piVar1 + 0x6c))
              (piVar1,*(undefined4 *)((int)param_1 + *(int *)((int)param_1 + 0x2a38) * 8 + 0x31bc));
  }
  return;
}

