/*
 * FUN_1000c145 at 1000c145
 * undefined __fastcall FUN_1000c145(void * param_1)
 * Address ranges: 1000c145-1000c19a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000c145(void *param_1)

{
  int *piVar1;
  
  if (*(char *)((int)param_1 + 0x2c6b) != '\0') {
    if (*(int *)((int)param_1 + 0x2ad8) == 0x20) {
      FUN_1000c013(param_1,'\0');
    }
    piVar1 = *(int **)(*(int *)((int)param_1 + 0x3308) + 4);
    (**(code **)(*piVar1 + 0x6c))
              (piVar1,*(undefined4 *)((int)param_1 + *(int *)((int)param_1 + 0x2ad8) * 8 + 0x3338));
    piVar1 = *(int **)(*(int *)((int)param_1 + 0x3308) + 4);
    (**(code **)(*piVar1 + 0x6c))
              (piVar1,*(undefined4 *)((int)param_1 + *(int *)((int)param_1 + 0x2ad8) * 8 + 0x333c));
  }
  return;
}

