/*
 * FUN_1008f4d8 at 1008f4d8
 * undefined FUN_1008f4d8(void)
 * Address ranges: 1008f4d8-1008f75b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1008f4d8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_4c;
  
  FUN_100ae580(param_1,&local_58);
  puVar1 = (undefined4 *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0xf4);
  if (*(int *)(param_1 + 0x34) - 3U < 3) {
    if (iVar2 == 0) {
      FUN_1008b4c8(param_1 + 0xe8,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                   *puVar1,*(undefined4 *)(param_1 + 0x24),1,local_58,uStack_54,0);
      FUN_1008b4c8(param_1 + 0x108,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                   *puVar1,*(undefined4 *)(param_1 + 0x24),1,local_58,uStack_54,0);
    }
  }
  else {
    if (iVar2 == 0) {
      FUN_1008b4c8(param_1 + 0xe8,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                   *puVar1,*(undefined4 *)(param_1 + 0x24),1,local_58,uStack_54,local_4c);
    }
    if (*(int *)(param_1 + 0x114) == 0) {
      FUN_1008b4c8(param_1 + 0x108,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                   *puVar1,*(undefined4 *)(param_1 + 0x24),1,local_58,uStack_54,local_4c);
    }
  }
  if ((*(int *)(param_1 + 0xf4) == 0) || (*(int *)(param_1 + 0x114) == 0)) {
    FUN_1008b890(param_1 + 0xe8,*puVar1,*(undefined4 *)(param_1 + 0x24));
    FUN_1008b890(param_1 + 0x108,*puVar1,*(undefined4 *)(param_1 + 0x24));
  }
  return *(int *)(param_1 + 0xf4) != 0;
}

