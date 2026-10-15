/*
 * FUN_10052260 at 10052260
 * undefined __stdcall FUN_10052260(int param_1)
 * Address ranges: 10052260-100523b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10052260(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x18;
  if (*(char *)(param_1 + 0x49e) != '\0') {
    FUN_100a068b(iVar1,*(uint *)(param_1 + 0x44c));
    FUN_100a068b(iVar1,*(uint *)(param_1 + 0x450));
    FUN_100a068b(iVar1,*(uint *)(param_1 + 0x454));
    FUN_100a068b(iVar1,*(uint *)(param_1 + 0x458));
    FUN_100a068b(iVar1,*(uint *)(param_1 + 0x45c));
    FUN_100a068b(iVar1,*(uint *)(param_1 + 0x460));
    FUN_100a068b(iVar1,*(uint *)(param_1 + 0x464));
  }
  *(undefined4 *)(param_1 + 0x460) = 0;
  *(undefined4 *)(param_1 + 0x45c) = 0;
  *(uint *)(param_1 + 0x464) = 0;
  *(undefined4 *)(param_1 + 0x454) = 0;
  *(undefined4 *)(param_1 + 0x450) = 0;
  *(undefined4 *)(param_1 + 0x458) = 0;
  *(undefined4 *)(param_1 + 0x448) = 0;
  *(undefined4 *)(param_1 + 0x444) = 0;
  *(undefined4 *)(param_1 + 0x44c) = 0;
  *(undefined4 *)(param_1 + 0x440) = 0;
  if (*(char *)(param_1 + 0x49f) != '\0') {
    FUN_100a068b(param_1 + 0x18,*(uint *)(param_1 + 0x474));
    FUN_100a068b(param_1 + 0x18,*(uint *)(param_1 + 0x478));
    FUN_100a068b(param_1 + 0x18,*(uint *)(param_1 + 0x47c));
  }
  *(uint *)(param_1 + 0x47c) = 0;
  *(undefined4 *)(param_1 + 0x470) = 0;
  *(undefined4 *)(param_1 + 0x46c) = 0;
  *(undefined4 *)(param_1 + 0x468) = 0;
  *(uint *)(param_1 + 0x478) = 0;
  *(undefined4 *)(param_1 + 0x474) = 0;
  return;
}

