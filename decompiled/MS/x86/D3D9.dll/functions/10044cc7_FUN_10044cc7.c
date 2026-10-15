/*
 * FUN_10044cc7 at 10044cc7
 * undefined4 __fastcall FUN_10044cc7(int param_1)
 * Address ranges: 10044cc7-10044e16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10044cc7(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_100bf645(-(uint)(*(int *)(param_1 + 0xf6b4) != 0) &
                        *(int *)(param_1 + 0xf6b4) + 0x520U,*(undefined4 *)(param_1 + 0x10),0,0x2f0,
                        0);
  *(undefined4 **)(param_1 + 0xf754) = puVar1;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_100bf645(-(uint)(*(int *)(param_1 + 0xf6b4) != 0) &
                          *(int *)(param_1 + 0xf6b4) + 0x520U,*(undefined4 *)(param_1 + 0x10),0,
                          0x4d0,0);
    *(undefined4 **)(param_1 + 0xf6e8) = puVar1;
    puVar2 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_100bf645(-(uint)(*(int *)(param_1 + 0xf6b4) != 0) &
                            *(int *)(param_1 + 0xf6b4) + 0x520U,*(undefined4 *)(param_1 + 0x10),0,
                            0xec0,0);
      *(undefined4 **)(param_1 + 0xf75c) = puVar1;
      puVar2 = (undefined4 *)0x0;
      if (puVar1 != (undefined4 *)0x0) {
        puVar1 = FUN_100bf645(-(uint)(*(int *)(param_1 + 0xf6b4) != 0) &
                              *(int *)(param_1 + 0xf6b4) + 0x520U,*(undefined4 *)(param_1 + 0x10),0,
                              *(int *)(param_1 + 0x7c) + 0xffU & 0xffffff00,0);
        *(undefined4 **)(param_1 + 0xf758) = puVar1;
        puVar2 = (undefined4 *)0x0;
        if (puVar1 != (undefined4 *)0x0) {
          puVar2 = FUN_100bf645(-(uint)(*(int *)(param_1 + 0xf6b4) != 0) &
                                *(int *)(param_1 + 0xf6b4) + 0x520U,*(undefined4 *)(param_1 + 0x10),
                                0,0x100,0);
          *(undefined4 **)(param_1 + 0xf760) = puVar2;
          if (puVar2 != (undefined4 *)0x0) {
            return CONCAT31((int3)((uint)puVar2 >> 8),1);
          }
          puVar2 = (undefined4 *)0x0;
          if (*(void **)(param_1 + 0xf758) != (void *)0x0) {
            puVar2 = FUN_1003c2e0(*(void **)(param_1 + 0xf758),1);
          }
        }
        if (*(void **)(param_1 + 0xf75c) != (void *)0x0) {
          puVar2 = FUN_1003c2e0(*(void **)(param_1 + 0xf75c),1);
        }
      }
      if (*(void **)(param_1 + 0xf6e8) != (void *)0x0) {
        puVar2 = FUN_1003c2e0(*(void **)(param_1 + 0xf6e8),1);
      }
    }
    if (*(void **)(param_1 + 0xf754) != (void *)0x0) {
      puVar2 = FUN_1003c2e0(*(void **)(param_1 + 0xf754),1);
    }
  }
  return (uint)puVar2 & 0xffffff00;
}

