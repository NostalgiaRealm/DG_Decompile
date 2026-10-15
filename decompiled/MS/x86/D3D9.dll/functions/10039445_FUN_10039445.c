/*
 * FUN_10039445 at 10039445
 * undefined __fastcall FUN_10039445(int param_1)
 * Address ranges: 10039445-100394d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10039445(int param_1)

{
  int local_8;
  
  if (*(int *)(param_1 + 0xc4) != 0) {
    local_8 = param_1;
    FUN_10038f98(param_1);
    FUN_10038f61(param_1);
    FUN_10038e8e(param_1);
    if (*(uint *)(param_1 + 0xd0) != 0) {
      FUN_100c1038(*(void **)(*(int *)(param_1 + 0xc4) + 0x172c0),*(uint *)(param_1 + 0xd0),
                   (undefined *)0x0,'\x01');
    }
    local_8 = *(int *)(param_1 + 0xd0);
    FUN_100beac1((void *)(*(int *)(param_1 + 0xcc) + 0x1640),&local_8);
    (**(code **)(**(int **)(param_1 + 0xd0) + 8))(*(int **)(param_1 + 0xd0));
    *(undefined4 *)(param_1 + 0xd0) = 0;
    FUN_100b42a6(*(int **)(param_1 + 0xc4));
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  return;
}

