/*
 * FUN_10056fc0 at 10056fc0
 * undefined FUN_10056fc0(void)
 * Address ranges: 10056fc0-10057087
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10056fc0(int param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [16];
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar2 = 0x80070057;
  if (param_2 != (undefined8 *)0x0) {
    FUN_10096840(auStack_30);
    uVar3 = *(undefined8 *)(param_1 + 0x104);
    param_2[1] = *(undefined8 *)(param_1 + 0x10c);
    *param_2 = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x114);
    uVar2 = 0;
    param_2[3] = *(undefined8 *)(param_1 + 0x11c);
    param_2[2] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x124);
    param_2[5] = *(undefined8 *)(param_1 + 300);
    param_2[4] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x134);
    param_2[7] = *(undefined8 *)(param_1 + 0x13c);
    param_2[6] = uVar3;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x144);
    FUN_10096790(auStack_30);
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}

