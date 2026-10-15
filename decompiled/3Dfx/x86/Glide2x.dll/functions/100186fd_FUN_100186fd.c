/*
 * FUN_100186fd at 100186fd
 * undefined __fastcall FUN_100186fd(void * param_1)
 * Address ranges: 100186fd-10018752
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100186fd(void *param_1)

{
  int *piVar1;
  
  if (*(char *)((int)param_1 + 0x2bcb) != '\0') {
    if (*(int *)((int)param_1 + 0x2a38) == 0x20) {
      FUN_100185cb(param_1,'\0');
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

