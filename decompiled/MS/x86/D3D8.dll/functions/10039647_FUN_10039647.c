/*
 * FUN_10039647 at 10039647
 * undefined4 __fastcall FUN_10039647(int param_1)
 * Address ranges: 10039647-10039793
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10039647(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_1009d06d(-(uint)(*(int *)(param_1 + 0xd9b4) != 0) &
                        *(int *)(param_1 + 0xd9b4) + 0x520U,*(undefined4 *)(param_1 + 0x10),0,0xa0,0
                       );
  *(undefined4 **)(param_1 + 0xda54) = puVar1;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_1009d06d(-(uint)(*(int *)(param_1 + 0xd9b4) != 0) &
                          *(int *)(param_1 + 0xd9b4) + 0x520U,*(undefined4 *)(param_1 + 0x10),0,
                          0x440,0);
    *(undefined4 **)(param_1 + 0xd9e8) = puVar1;
    puVar2 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_1009d06d(-(uint)(*(int *)(param_1 + 0xd9b4) != 0) &
                            *(int *)(param_1 + 0xd9b4) + 0x520U,*(undefined4 *)(param_1 + 0x10),0,
                            0x80,0);
      *(undefined4 **)(param_1 + 0xda5c) = puVar1;
      puVar2 = (undefined4 *)0x0;
      if (puVar1 != (undefined4 *)0x0) {
        puVar1 = FUN_1009d06d(-(uint)(*(int *)(param_1 + 0xd9b4) != 0) &
                              *(int *)(param_1 + 0xd9b4) + 0x520U,*(undefined4 *)(param_1 + 0x10),0,
                              *(int *)(param_1 + 0x7c) + 0xffU & 0xffffff00,0);
        *(undefined4 **)(param_1 + 0xda58) = puVar1;
        puVar2 = (undefined4 *)0x0;
        if (puVar1 != (undefined4 *)0x0) {
          puVar2 = FUN_1009d06d(-(uint)(*(int *)(param_1 + 0xd9b4) != 0) &
                                *(int *)(param_1 + 0xd9b4) + 0x520U,*(undefined4 *)(param_1 + 0x10),
                                0,0x10,0);
          *(undefined4 **)(param_1 + 0xda60) = puVar2;
          if (puVar2 != (undefined4 *)0x0) {
            return CONCAT31((int3)((uint)puVar2 >> 8),1);
          }
          puVar2 = (undefined4 *)0x0;
          if (*(void **)(param_1 + 0xda58) != (void *)0x0) {
            puVar2 = FUN_10031990(*(void **)(param_1 + 0xda58),1);
          }
        }
        if (*(void **)(param_1 + 0xda5c) != (void *)0x0) {
          puVar2 = FUN_10031990(*(void **)(param_1 + 0xda5c),1);
        }
      }
      if (*(void **)(param_1 + 0xd9e8) != (void *)0x0) {
        puVar2 = FUN_10031990(*(void **)(param_1 + 0xd9e8),1);
      }
    }
    if (*(void **)(param_1 + 0xda54) != (void *)0x0) {
      puVar2 = FUN_10031990(*(void **)(param_1 + 0xda54),1);
    }
  }
  return (uint)puVar2 & 0xffffff00;
}

