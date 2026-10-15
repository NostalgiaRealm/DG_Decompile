/*
 * FUN_10005a37 at 10005a37
 * undefined __fastcall FUN_10005a37(int param_1)
 * Address ranges: 10005a37-10005ab5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10005a37(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint local_8;
  
  if (((*(char *)(param_1 + 0x61) != '\0') &&
      (puVar2 = *(undefined4 **)(param_1 + 0x50), puVar2 != (undefined4 *)0x0)) &&
     (*(char *)(param_1 + 0x60) == '\0')) {
    puVar1 = *(undefined4 **)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x5c) == *(int *)(param_1 + 0x54)) {
      FUN_10060d80(puVar2,puVar1,
                   (*(uint *)(param_1 + 0x34) >> 3) * *(int *)(param_1 + 0x1c) *
                   *(int *)(param_1 + 0x18));
    }
    else {
      local_8 = 0;
      if (*(int *)(param_1 + 0x1c) != 0) {
        do {
          FUN_10060d80(puVar2,puVar1,
                       (uint)(*(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x18)) >> 3);
          puVar1 = (undefined4 *)((int)puVar1 + *(int *)(param_1 + 0x5c));
          puVar2 = (undefined4 *)((int)puVar2 + *(int *)(param_1 + 0x54));
          local_8 = local_8 + 1;
        } while (local_8 < *(uint *)(param_1 + 0x1c));
      }
    }
  }
  *(undefined1 *)(param_1 + 0x61) = 0;
  return;
}

