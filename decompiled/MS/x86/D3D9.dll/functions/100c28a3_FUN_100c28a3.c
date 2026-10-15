/*
 * FUN_100c28a3 at 100c28a3
 * undefined __fastcall FUN_100c28a3(void * param_1)
 * Address ranges: 100c28a3-100c2912
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100c28a3(void *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 local_8;
  
  if (*(int *)((int)param_1 + 0xc) != 0) {
    FUN_100c284c(param_1,*(int *)((int)param_1 + 0x14));
    piVar1 = (int *)((int)param_1 + 8);
    local_8 = 0;
    if (*(int *)((int)param_1 + 0xc) != 0) {
      do {
        piVar2 = *(int **)(*piVar1 + 4 + local_8 * 0x20);
        (**(code **)(*piVar2 + 8))(piVar2);
        piVar2 = *(int **)(local_8 * 0x20 + *piVar1);
        (**(code **)(*piVar2 + 8))(piVar2);
        local_8 = local_8 + 1;
      } while (local_8 < *(uint *)((int)param_1 + 0xc));
    }
    thunk_FUN_100cfd6c((LPVOID)*piVar1);
    *piVar1 = 0;
    *(undefined4 *)((int)param_1 + 0xc) = 0;
    *(undefined4 *)((int)param_1 + 0x10) = 0;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x20));
    *(undefined4 *)((int)param_1 + 0x20) = 0;
  }
  return;
}

