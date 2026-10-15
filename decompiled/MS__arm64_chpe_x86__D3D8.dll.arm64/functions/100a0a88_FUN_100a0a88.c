/*
 * FUN_100a0a88 at 100a0a88
 * undefined FUN_100a0a88(void)
 * Address ranges: 100a0a88-100a0cfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100a0a88(int param_1)

{
  int iVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  
  FUN_100ae580(param_1,&local_58);
  iVar1 = param_1 + 0x13c;
  if (*(int *)(param_1 + 0x34) - 3U < 3) {
    FUN_1009abb8(iVar1,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),1,local_58,
                 uStack_54,local_50);
    FUN_1009abb8(param_1 + 0x178,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),1,local_58,
                 uStack_54,local_50);
  }
  else {
    if (*(int *)(param_1 + 0x148) == 0) {
      FUN_1009abb8(iVar1,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                   *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),1,local_58,
                   uStack_54,0);
    }
    if (*(int *)(param_1 + 0x184) == 0) {
      FUN_1009abb8(param_1 + 0x178,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                   *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),1,local_58,
                   uStack_54,0);
    }
  }
  if ((*(int *)(param_1 + 0x148) == 0) || (*(int *)(param_1 + 0x184) == 0)) {
    FUN_1009b228(iVar1,1,1);
    FUN_1009b228(param_1 + 0x178,1,1);
  }
  return *(int *)(param_1 + 0x148) != 0;
}

