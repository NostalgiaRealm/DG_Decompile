/*
 * FUN_10014c28 at 10014c28
 * undefined FUN_10014c28(void)
 * Address ranges: 10014c28-10014eab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10014c28(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_4c;
  
  FUN_10034140(param_1,&local_58);
  puVar1 = (undefined4 *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0xf4);
  if (*(int *)(param_1 + 0x34) - 3U < 3) {
    if (iVar2 == 0) {
      FUN_10010c18(param_1 + 0xe8,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                   *puVar1,*(undefined4 *)(param_1 + 0x24),1,local_58,uStack_54,0);
      FUN_10010c18(param_1 + 0x108,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                   *puVar1,*(undefined4 *)(param_1 + 0x24),1,local_58,uStack_54,0);
    }
  }
  else {
    if (iVar2 == 0) {
      FUN_10010c18(param_1 + 0xe8,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                   *puVar1,*(undefined4 *)(param_1 + 0x24),1,local_58,uStack_54,local_4c);
    }
    if (*(int *)(param_1 + 0x114) == 0) {
      FUN_10010c18(param_1 + 0x108,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                   *puVar1,*(undefined4 *)(param_1 + 0x24),1,local_58,uStack_54,local_4c);
    }
  }
  if ((*(int *)(param_1 + 0xf4) == 0) || (*(int *)(param_1 + 0x114) == 0)) {
    FUN_10010fe0(param_1 + 0xe8,*puVar1,*(undefined4 *)(param_1 + 0x24));
    FUN_10010fe0(param_1 + 0x108,*puVar1,*(undefined4 *)(param_1 + 0x24));
  }
  return *(int *)(param_1 + 0xf4) != 0;
}

