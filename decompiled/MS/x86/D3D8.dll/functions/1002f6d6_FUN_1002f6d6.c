/*
 * FUN_1002f6d6 at 1002f6d6
 * undefined __fastcall FUN_1002f6d6(int param_1)
 * Address ranges: 1002f6d6-1002f764
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002f6d6(int param_1)

{
  int local_8;
  
  if (*(int *)(param_1 + 0xc4) != 0) {
    local_8 = param_1;
    FUN_1002f2bc(param_1);
    FUN_1002f285(param_1);
    FUN_1002f1b2(param_1);
    if (*(uint *)(param_1 + 0xd0) != 0) {
      FUN_1009ea70(*(void **)(*(int *)(param_1 + 0xc4) + 0x172c0),*(uint *)(param_1 + 0xd0),
                   (undefined *)0x0,'\x01');
    }
    local_8 = *(int *)(param_1 + 0xd0);
    FUN_1009c4e9((void *)(*(int *)(param_1 + 0xcc) + 0x1640),&local_8);
    (**(code **)(**(int **)(param_1 + 0xd0) + 8))(*(int **)(param_1 + 0xd0));
    *(undefined4 *)(param_1 + 0xd0) = 0;
    FUN_100920a4(*(int **)(param_1 + 0xc4));
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  return;
}

