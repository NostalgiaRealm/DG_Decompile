/*
 * FUN_1000b140 at 1000b140
 * undefined FUN_1000b140(void)
 * Address ranges: 1000b140-1000b39b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000b140(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  if (*(char *)(param_1 + 0xcc4) != '\0') {
    if (*(int *)(param_1 + 0x18) == 0) {
      uStack_4c = 0;
    }
    else {
      uStack_4c = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 0x50);
    }
    if (*(int *)(param_1 + 0x1c) == 0) {
      local_48 = 0;
    }
    else {
      local_48 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0x50);
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      uStack_44 = 0;
    }
    else {
      uStack_44 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x20) + 4) + 0x50);
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      local_40 = 0;
    }
    else {
      local_40 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + 4) + 0x50);
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      uStack_3c = 0;
    }
    else {
      uStack_3c = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 4) + 0x50);
    }
    uVar3 = 0;
    local_50 = param_1;
    if (*(int *)(param_1 + 0x6670) == 0) {
      do {
        if (*(int *)(param_1 + 0x1258 + uVar3 * 4) != 0) {
          iVar1 = param_1 + uVar3 * 0x84;
          iVar2 = *(int *)(iVar1 + 0x77c) * 3;
          if ((((*(char *)(iVar2 + 0x10160f60) != '\0') && (*(int *)(iVar1 + 0x780) == 2)) ||
              ((*(char *)(iVar2 + 0x10160f61) != '\0' && (*(int *)(iVar1 + 0x784) == 2)))) ||
             ((((*(char *)(iVar2 + 0x10160f62) != '\0' && (*(int *)(iVar1 + 0x7e0) == 2)) ||
               ((iVar2 = *(int *)(iVar1 + 0x788) * 3, *(char *)(iVar2 + 0x10160f60) != '\0' &&
                (*(int *)(iVar1 + 0x78c) == 2)))) ||
              (((*(char *)(iVar2 + 0x10160f61) != '\0' && (*(int *)(iVar1 + 0x790) == 2)) ||
               ((*(char *)(iVar2 + 0x10160f62) != '\0' && (*(int *)(iVar1 + 0x7e4) == 2)))))))) {
            FUN_1000b3a0(&local_50,uVar3);
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 8);
    }
    else {
      do {
        if ((*(int *)(param_1 + 0x1258 + uVar3 * 4) != 0) &&
           ((*(uint *)(*(int *)(*(int *)(param_1 + 0x6670) + 4) + 0x1214) &
            1 << (ulonglong)(uVar3 & 0x1f)) != 0)) {
          FUN_1000b3a0(&local_50,uVar3);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x10);
    }
    *(char *)(param_1 + 0xcc4) = '\0';
  }
  return;
}

