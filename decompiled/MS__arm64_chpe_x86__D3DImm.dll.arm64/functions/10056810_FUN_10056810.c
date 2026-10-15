/*
 * FUN_10056810 at 10056810
 * undefined FUN_10056810(void)
 * Address ranges: 10056810-100568fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10056810(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar2 = 0x80070057;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 2;
    uVar2 = 0;
    param_2[1] = *(uint *)(param_1 + 0x1f0) | *(int *)(param_1 + 500) << 0xc;
    param_2[2] = *(undefined4 *)(param_1 + 0x1f8);
    param_2[3] = *(undefined4 *)(param_1 + 0x1fc);
    param_2[4] = *(undefined4 *)(param_1 + 0x200);
    param_2[5] = *(undefined4 *)(param_1 + 0x204);
    param_2[6] = *(undefined4 *)(param_1 + 0x208);
    param_2[7] = *(undefined4 *)(param_1 + 0x20c);
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}

