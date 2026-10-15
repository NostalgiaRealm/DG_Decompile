/*
 * FUN_1001af01 at 1001af01
 * undefined __fastcall FUN_1001af01(int param_1)
 * Address ranges: 1001af01-1001af82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001af01(int param_1)

{
  int local_8;
  
  if (*(int *)(param_1 + 0xcc) != 0) {
    local_8 = param_1;
    FUN_1001abe6(param_1);
    FUN_1001abaf(param_1);
    FUN_1001aaf0(param_1);
    FUN_1005336b(*(void **)(param_1 + 0xcc),*(uint *)(param_1 + 0xd8));
    local_8 = *(int *)(param_1 + 0xd8);
    FUN_10053eeb((void *)(*(int *)(param_1 + 0xd4) + 0x1640),&local_8);
    (**(code **)(**(int **)(param_1 + 0xd8) + 8))(*(int **)(param_1 + 0xd8));
    *(undefined4 *)(param_1 + 0xd8) = 0;
    FUN_1004f60d(*(int **)(param_1 + 0xcc));
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  return;
}

