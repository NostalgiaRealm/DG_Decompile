/*
 * FUN_1007e302 at 1007e302
 * undefined __fastcall FUN_1007e302(int param_1)
 * Address ranges: 1007e302-1007e4c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1007e302(int param_1)

{
  int *piVar1;
  uint uVar2;
  int local_c [2];
  
  if (*(int *)(param_1 + 0x1cf00) != 0) {
    local_c[0] = param_1;
    FUN_1007c0fc((undefined4 *)(param_1 + 0x1d02c));
    FUN_100cef50(*(int *)(param_1 + 0x1cf04) + 0x11c0);
    FUN_100bad40((void *)(*(int *)(*(int *)(param_1 + 0x1cf04) + 0x1304) + 4),'\0');
    FUN_100bdcba(*(void **)(param_1 + 0x1cf00),*(int **)(param_1 + 0x1d044));
    *(undefined4 *)(param_1 + 0x1d044) = 0;
    FUN_100b9fca(*(void **)(*(int *)(param_1 + 0x1cf04) + 0x15d8),*(int **)(param_1 + 0x1d048),1,
                 (int *)0x0,0,0);
    FUN_100bdcba(*(void **)(param_1 + 0x1cf00),*(int **)(param_1 + 0x1cf08));
    *(undefined4 *)(param_1 + 0x1cf08) = 0;
    FUN_1007c78c(param_1);
    if (*(void **)(param_1 + 0x1cf7c) != (void *)0x0) {
      FUN_1003c2e0(*(void **)(param_1 + 0x1cf7c),1);
    }
    *(undefined4 *)(param_1 + 0x1cf7c) = 0;
    if (*(void **)(param_1 + 0x1cf80) != (void *)0x0) {
      FUN_1003c2e0(*(void **)(param_1 + 0x1cf80),1);
    }
    *(undefined4 *)(param_1 + 0x1cf80) = 0;
    local_c[0] = *(int *)(param_1 + 0x1d024);
    if (local_c[0] != 0) {
      FUN_100beb63((void *)(*(int *)(param_1 + 0x1cf04) + 0x1640),local_c);
    }
    uVar2 = 0;
    do {
      local_c[0] = *(int *)(param_1 + 0x1cf84 + uVar2 * 4);
      if (local_c[0] != 0) {
        FUN_100beb63((void *)(*(int *)(param_1 + 0x1cf04) + 0x1640),local_c);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x28);
    local_c[0] = *(int *)(param_1 + 0x1cf0c);
    FUN_100beac1((void *)(*(int *)(param_1 + 0x1cf04) + 0x1640),local_c);
    if (*(uint *)(param_1 + 0x1cf0c) != 0) {
      FUN_100c1038(*(void **)(*(int *)(param_1 + 0x1cf00) + 0x172c0),*(uint *)(param_1 + 0x1cf0c),
                   (undefined *)0x0,'\x01');
    }
    (**(code **)(**(int **)(param_1 + 0x1cf0c) + 8))(*(int **)(param_1 + 0x1cf0c));
    *(undefined4 *)(param_1 + 0x1cf0c) = 0;
    FUN_1007c8b8(param_1);
    piVar1 = (int *)(*(int *)(param_1 + 0x1cf00) + 0x49c);
    LOCK();
    if (param_1 == *piVar1) {
      *piVar1 = 0;
    }
    UNLOCK();
    FUN_100c703c(*(void **)(param_1 + 0x1cf00),*(int *)(param_1 + 0x14));
    FUN_100b42a6(*(int **)(param_1 + 0x1cf00));
    *(undefined4 *)(param_1 + 0x1cf00) = 0;
    CloseHandle(*(HANDLE *)(param_1 + 0x1d060));
    *(undefined4 *)(param_1 + 0x1d060) = 0;
  }
  return;
}

