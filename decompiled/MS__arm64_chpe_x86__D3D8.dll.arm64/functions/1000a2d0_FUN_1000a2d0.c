/*
 * FUN_1000a2d0 at 1000a2d0
 * undefined FUN_1000a2d0(void)
 * Address ranges: 1000a2d0-1000a51f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000a2d0(int param_1)

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
  
  if (*(char *)(param_1 + 0xa00) != '\0') {
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
    if (*(int *)(param_1 + 0x589c) == 0) {
      do {
        if (*(int *)(param_1 + 0xf94 + uVar3 * 4) != 0) {
          iVar1 = param_1 + uVar3 * 0x74;
          iVar2 = *(int *)(iVar1 + 0x548) * 3;
          if ((((*(char *)(iVar2 + 0x1012b5e0) != '\0') && (*(int *)(iVar1 + 0x54c) == 2)) ||
              ((*(char *)(iVar2 + 0x1012b5e1) != '\0' && (*(int *)(iVar1 + 0x550) == 2)))) ||
             ((((*(char *)(iVar2 + 0x1012b5e2) != '\0' && (*(int *)(iVar1 + 0x5ac) == 2)) ||
               ((iVar2 = *(int *)(iVar1 + 0x554) * 3, *(char *)(iVar2 + 0x1012b5e0) != '\0' &&
                (*(int *)(iVar1 + 0x558) == 2)))) ||
              (((*(char *)(iVar2 + 0x1012b5e1) != '\0' && (*(int *)(iVar1 + 0x55c) == 2)) ||
               ((*(char *)(iVar2 + 0x1012b5e2) != '\0' && (*(int *)(iVar1 + 0x5b0) == 2)))))))) {
            FUN_1000a520(&local_50,uVar3);
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 8);
    }
    else {
      do {
        if ((*(int *)(param_1 + 0xf94 + uVar3 * 4) != 0) &&
           ((*(uint *)(*(int *)(*(int *)(param_1 + 0x589c) + 4) + 0xcc) &
            1 << (ulonglong)(uVar3 & 0x1f)) != 0)) {
          FUN_1000a520(&local_50,uVar3);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 8);
    }
    *(char *)(param_1 + 0xa00) = '\0';
  }
  return;
}

