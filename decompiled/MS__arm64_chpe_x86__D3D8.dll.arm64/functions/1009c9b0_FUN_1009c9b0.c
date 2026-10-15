/*
 * FUN_1009c9b0 at 1009c9b0
 * undefined FUN_1009c9b0(void)
 * Address ranges: 1009c9b0-1009caa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1009c9b0(int param_1)

{
  int *piVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  if (*(int *)(param_1 + 0x1c) - 0x19U < 2) {
    piVar1 = (int *)(param_1 + 0x98);
    if (*piVar1 != 0) goto LAB_1009ca8c;
    *(undefined1 *)(param_1 + 0xbc) = 1;
    FUN_1009a030(param_1 + 0x84,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  }
  else {
    piVar1 = (int *)(param_1 + 0x90);
    if (*piVar1 != 0) goto LAB_1009ca8c;
    FUN_100ae580(param_1,&local_30);
    FUN_1009abb8(param_1 + 0x84,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),1,local_30,
                 uStack_2c,0);
  }
  FUN_1009c850(param_1);
LAB_1009ca8c:
  return *piVar1 != 0;
}

