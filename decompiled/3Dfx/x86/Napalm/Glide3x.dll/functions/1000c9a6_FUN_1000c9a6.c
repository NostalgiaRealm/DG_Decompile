/*
 * FUN_1000c9a6 at 1000c9a6
 * undefined __fastcall FUN_1000c9a6(void * param_1)
 * Address ranges: 1000c9a6-1000c9fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000c9a6(void *param_1)

{
  int *piVar1;
  
  if (*(char *)((int)param_1 + 0x2db3) != '\0') {
    if (*(int *)((int)param_1 + 0x2c18) == 0x20) {
      FUN_1000c874(param_1,'\0');
    }
    piVar1 = *(int **)(*(int *)((int)param_1 + 0x3688) + 4);
    (**(code **)(*piVar1 + 0x6c))
              (piVar1,*(undefined4 *)((int)param_1 + *(int *)((int)param_1 + 0x2c18) * 8 + 0x36b8));
    piVar1 = *(int **)(*(int *)((int)param_1 + 0x3688) + 4);
    (**(code **)(*piVar1 + 0x6c))
              (piVar1,*(undefined4 *)((int)param_1 + *(int *)((int)param_1 + 0x2c18) * 8 + 0x36bc));
  }
  return;
}

