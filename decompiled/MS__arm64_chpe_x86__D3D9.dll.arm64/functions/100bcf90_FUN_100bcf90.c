/*
 * FUN_100bcf90 at 100bcf90
 * undefined FUN_100bcf90(void)
 * Address ranges: 100bcf90-100bd08b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100bcf90(int param_1)

{
  int *piVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  if ((*(int *)(param_1 + 0x1c) - 0x24U & 0xfffffffa) == 0) {
    piVar1 = (int *)(param_1 + 0x98);
    if (*piVar1 != 0) goto LAB_100bd070;
    *(undefined1 *)(param_1 + 0xbc) = 1;
    FUN_100ba160(param_1 + 0x84,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  }
  else {
    piVar1 = (int *)(param_1 + 0x90);
    if (*piVar1 != 0) goto LAB_100bd070;
    FUN_100cefa0(param_1,&local_30);
    FUN_100bace8(param_1 + 0x84,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),1,local_30,
                 uStack_2c,0);
  }
  FUN_100bce30(param_1);
LAB_100bd070:
  return *piVar1 != 0;
}

