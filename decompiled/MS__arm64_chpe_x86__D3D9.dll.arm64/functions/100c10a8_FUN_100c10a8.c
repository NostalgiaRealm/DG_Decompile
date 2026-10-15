/*
 * FUN_100c10a8 at 100c10a8
 * undefined FUN_100c10a8(void)
 * Address ranges: 100c10a8-100c131b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100c10a8(int param_1)

{
  int iVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  
  FUN_100cefa0(param_1,&local_58);
  iVar1 = param_1 + 0x13c;
  if (*(int *)(param_1 + 0x34) - 3U < 3) {
    FUN_100bace8(iVar1,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),1,local_58,
                 uStack_54,local_50);
    FUN_100bace8(param_1 + 0x178,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),1,local_58,
                 uStack_54,local_50);
  }
  else {
    if (*(int *)(param_1 + 0x148) == 0) {
      FUN_100bace8(iVar1,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                   *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),1,local_58,
                   uStack_54,0);
    }
    if (*(int *)(param_1 + 0x184) == 0) {
      FUN_100bace8(param_1 + 0x178,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                   *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),1,local_58,
                   uStack_54,0);
    }
  }
  if ((*(int *)(param_1 + 0x148) == 0) || (*(int *)(param_1 + 0x184) == 0)) {
    FUN_100bb370(iVar1,1,1);
    FUN_100bb370(param_1 + 0x178,1,1);
  }
  return *(int *)(param_1 + 0x148) != 0;
}

