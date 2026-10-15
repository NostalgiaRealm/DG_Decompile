/*
 * FUN_10005e41 at 10005e41
 * undefined __fastcall FUN_10005e41(int param_1)
 * Address ranges: 10005e41-10005fb2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10005e41(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(char *)(param_1 + 0xcc4) != '\0') {
    if (*(int *)(param_1 + 0x18) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 0x50);
    }
    if (*(int *)(param_1 + 0x1c) == 0) {
      local_14 = 0;
    }
    else {
      local_14 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0x50);
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      local_10 = 0;
    }
    else {
      local_10 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x20) + 4) + 0x50);
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      local_c = 0;
    }
    else {
      local_c = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + 4) + 0x50);
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 4) + 0x50);
    }
    uVar3 = 0;
    local_1c = param_1;
    if (*(int *)(param_1 + 0x6670) == 0) {
      do {
        if (*(int *)(param_1 + 0x1258 + uVar3 * 4) != 0) {
          iVar1 = uVar3 * 0x84;
          iVar2 = *(int *)(param_1 + 0x77c + iVar1) * 3;
          if (((((&DAT_100d1b30)[iVar2] != '\0') && (*(int *)(param_1 + 0x780 + iVar1) == 2)) ||
              (((&DAT_100d1b31)[iVar2] != '\0' && (*(int *)(param_1 + 0x784 + iVar1) == 2)))) ||
             (((((&DAT_100d1b32)[iVar2] != '\0' && (*(int *)(param_1 + 0x7e0 + iVar1) == 2)) ||
               ((iVar2 = *(int *)(param_1 + 0x788 + iVar1) * 3, (&DAT_100d1b30)[iVar2] != '\0' &&
                (*(int *)(param_1 + 0x78c + iVar1) == 2)))) ||
              ((((&DAT_100d1b31)[iVar2] != '\0' && (*(int *)(param_1 + 0x790 + iVar1) == 2)) ||
               (((&DAT_100d1b32)[iVar2] != '\0' && (*(int *)(param_1 + 0x7e4 + iVar1) == 2)))))))) {
            FUN_10005fb3(&local_1c,uVar3);
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 8);
    }
    else {
      do {
        if ((*(int *)(param_1 + 0x1258 + uVar3 * 4) != 0) &&
           ((*(uint *)(*(int *)(*(int *)(param_1 + 0x6670) + 4) + 0x1214) &
            1 << ((byte)uVar3 & 0x1f)) != 0)) {
          FUN_10005fb3(&local_1c,uVar3);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x10);
    }
    *(undefined1 *)(param_1 + 0xcc4) = 0;
  }
  return;
}

