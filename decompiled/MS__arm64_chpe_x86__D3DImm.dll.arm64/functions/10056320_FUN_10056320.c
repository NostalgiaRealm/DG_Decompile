/*
 * FUN_10056320 at 10056320
 * undefined FUN_10056320(void)
 * Address ranges: 10056320-100563f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10056320(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [16];
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar2 = 0x80070057;
  if (param_2 != (undefined4 *)0x0) {
    FUN_10096840(auStack_30);
    uVar2 = 0;
    *param_2 = *(undefined4 *)(param_1 + 0x2c);
    param_2[1] = *(undefined4 *)(param_1 + 0x30);
    param_2[2] = *(undefined4 *)(param_1 + 0x34);
    param_2[3] = *(undefined4 *)(param_1 + 0x38);
    param_2[4] = *(undefined4 *)(param_1 + 0x3c);
    param_2[5] = *(undefined4 *)(param_1 + 0x40);
    FUN_10096790(auStack_30);
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}

