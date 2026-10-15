/*
 * FUN_100118b7 at 100118b7
 * undefined __fastcall FUN_100118b7(uint param_1)
 * Address ranges: 100118b7-10011ad7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100118b7(uint param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint local_c [2];
  
  if (*(int *)(param_1 + 0xcf00) != 0) {
    local_c[0] = param_1;
    FUN_1000f2d9((undefined4 *)(param_1 + 0xd02c));
    local_c[0] = 0;
    if (*(int *)(param_1 + 0xd06c) != 0) {
      do {
        puVar2 = (undefined4 *)(*(int *)(param_1 + 0xd064) + local_c[0] * 0x50 + 0x40);
        FUN_1000f1f8((int *)(param_1 + 0xd064),(int *)*puVar2,(int *)puVar2[1],(void *)puVar2[2]);
        local_c[0] = local_c[0] + 1;
      } while (local_c[0] < *(uint *)(param_1 + 0xd06c));
    }
    *(undefined4 *)(param_1 + 0xd06c) = 0;
    FUN_100600a0(*(int *)(param_1 + 0xcf04) + 0x11c0);
    FUN_10052996((void *)(*(int *)(*(int *)(param_1 + 0xcf04) + 0x1304) + 4),'\0');
    FUN_1004b30e(*(void **)(param_1 + 0xcf00),*(int **)(param_1 + 0xd044));
    *(undefined4 *)(param_1 + 0xd044) = 0;
    FUN_1004bcb3(*(void **)(*(int *)(param_1 + 0xcf04) + 0x15d8),*(int **)(param_1 + 0xd048),1,
                 (int *)0x0,0,0);
    FUN_1004b30e(*(void **)(param_1 + 0xcf00),*(int **)(param_1 + 53000));
    *(undefined4 *)(param_1 + 53000) = 0;
    FUN_1000f9a7(param_1);
    puVar2 = *(undefined4 **)(param_1 + 0xcf7c);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_1004f425(puVar2);
      FUN_10060be1(puVar2);
    }
    puVar2 = *(undefined4 **)(param_1 + 0xcf80);
    *(undefined4 *)(param_1 + 0xcf7c) = 0;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_1004f425(puVar2);
      FUN_10060be1(puVar2);
    }
    *(undefined4 *)(param_1 + 0xcf80) = 0;
    local_c[0] = *(uint *)(param_1 + 0xd024);
    if (local_c[0] != 0) {
      FUN_1004eb05((void *)(*(int *)(param_1 + 0xcf04) + 0x1640),(int *)local_c);
    }
    uVar3 = 0;
    do {
      local_c[0] = *(uint *)(param_1 + 0xcf84 + uVar3 * 4);
      if (local_c[0] != 0) {
        FUN_1004eb05((void *)(*(int *)(param_1 + 0xcf04) + 0x1640),(int *)local_c);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x28);
    local_c[0] = *(uint *)(param_1 + 0xcf0c);
    FUN_1004ea63((void *)(*(int *)(param_1 + 0xcf04) + 0x1640),(int *)local_c);
    if (*(uint *)(param_1 + 0xcf0c) != 0) {
      FUN_1004feaf(*(void **)(*(int *)(param_1 + 0xcf00) + 0x172c0),*(uint *)(param_1 + 0xcf0c),
                   (undefined *)0x0,'\x01');
    }
    (**(code **)(**(int **)(param_1 + 0xcf0c) + 8))(*(int **)(param_1 + 0xcf0c));
    *(undefined4 *)(param_1 + 0xcf0c) = 0;
    FUN_1000fad3(param_1);
    puVar1 = (uint *)(*(int *)(param_1 + 0xcf00) + 0x49c);
    LOCK();
    if (param_1 == *puVar1) {
      *puVar1 = 0;
    }
    UNLOCK();
    FUN_100519f5(*(void **)(param_1 + 0xcf00),*(int *)(param_1 + 0x14));
    FUN_100461da(*(int **)(param_1 + 0xcf00));
    *(undefined4 *)(param_1 + 0xcf00) = 0;
    CloseHandle(*(HANDLE *)(param_1 + 0xd060));
    *(undefined4 *)(param_1 + 0xd060) = 0;
  }
  return;
}

