/*
 * FUN_100fc930 at 100fc930
 * undefined FUN_100fc930(void)
 * Address ranges: 100fc930-100fca4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100fc930(int param_1)

{
  uint *puVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int local_50;
  undefined8 local_4c;
  undefined4 local_44;
  
  iVar3 = *(int *)(param_1 + 0x38);
  uVar2 = 1;
  uVar4 = 0;
  if (iVar3 != 0) {
    local_50 = FUN_100fcb80(param_1,*(undefined4 *)(param_1 + 0x34),iVar3);
    uVar2 = local_50 != -1;
    if (local_50 != -1) {
      puVar1 = (uint *)(param_1 + 0x60);
      uVar4 = 1;
      if (1 < *puVar1) {
        do {
          iVar3 = FUN_10132680(*(int *)(*(int *)(param_1 + 0x5c) + uVar4 * 0x10) +
                               *(int *)(param_1 + 0x44),*(int *)(param_1 + 0x44) + local_50);
          if (iVar3 == 0) {
            *(int *)(param_1 + 0x4c) = (*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x38)) + -1;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *puVar1);
      }
      if (uVar4 == *puVar1) {
        local_4c = 0;
        local_44 = 0;
        uVar2 = FUN_100fd0d8(param_1 + 0x5c,&local_50);
        FUN_100fd250(&local_4c);
      }
    }
  }
  *(uint *)(param_1 + 0x50) = uVar4;
  return uVar2;
}

