/*
 * FUN_10026738 at 10026738
 * undefined FUN_10026738(void)
 * Address ranges: 10026738-100269ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10026738(int param_1)

{
  int iVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  
  FUN_10034140(param_1,&local_58);
  iVar1 = param_1 + 0x13c;
  if (*(int *)(param_1 + 0x34) - 3U < 3) {
    FUN_10020818(iVar1,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),1,local_58,
                 uStack_54,local_50);
    FUN_10020818(param_1 + 0x178,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),1,local_58,
                 uStack_54,local_50);
  }
  else {
    if (*(int *)(param_1 + 0x148) == 0) {
      FUN_10020818(iVar1,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                   *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),1,local_58,
                   uStack_54,0);
    }
    if (*(int *)(param_1 + 0x184) == 0) {
      FUN_10020818(param_1 + 0x178,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                   *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),1,local_58,
                   uStack_54,0);
    }
  }
  if ((*(int *)(param_1 + 0x148) == 0) || (*(int *)(param_1 + 0x184) == 0)) {
    FUN_10020e88(iVar1,1,1);
    FUN_10020e88(param_1 + 0x178,1,1);
  }
  return *(int *)(param_1 + 0x148) != 0;
}

