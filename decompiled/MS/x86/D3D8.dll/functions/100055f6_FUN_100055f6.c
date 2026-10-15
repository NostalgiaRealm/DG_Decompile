/*
 * FUN_100055f6 at 100055f6
 * undefined __fastcall FUN_100055f6(int param_1)
 * Address ranges: 100055f6-10005764
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100055f6(int param_1)

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
  
  if (*(char *)(param_1 + 0xa00) != '\0') {
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
    if (*(int *)(param_1 + 0x589c) == 0) {
      do {
        if (*(int *)(param_1 + 0xf94 + uVar3 * 4) != 0) {
          iVar1 = uVar3 * 0x74;
          iVar2 = *(int *)(param_1 + 0x548 + iVar1) * 3;
          if (((((&DAT_100af9f0)[iVar2] != '\0') && (*(int *)(param_1 + 0x54c + iVar1) == 2)) ||
              (((&DAT_100af9f1)[iVar2] != '\0' && (*(int *)(param_1 + 0x550 + iVar1) == 2)))) ||
             (((((&DAT_100af9f2)[iVar2] != '\0' && (*(int *)(param_1 + 0x5ac + iVar1) == 2)) ||
               ((iVar2 = *(int *)(param_1 + 0x554 + iVar1) * 3, (&DAT_100af9f0)[iVar2] != '\0' &&
                (*(int *)(param_1 + 0x558 + iVar1) == 2)))) ||
              ((((&DAT_100af9f1)[iVar2] != '\0' && (*(int *)(param_1 + 0x55c + iVar1) == 2)) ||
               (((&DAT_100af9f2)[iVar2] != '\0' && (*(int *)(param_1 + 0x5b0 + iVar1) == 2)))))))) {
            FUN_10005765(&local_1c,uVar3);
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 8);
    }
    else {
      do {
        if ((*(int *)(param_1 + 0xf94 + uVar3 * 4) != 0) &&
           ((*(uint *)(*(int *)(*(int *)(param_1 + 0x589c) + 4) + 0xcc) & 1 << ((byte)uVar3 & 0x1f))
            != 0)) {
          FUN_10005765(&local_1c,uVar3);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 8);
    }
    *(undefined1 *)(param_1 + 0xa00) = 0;
  }
  return;
}

