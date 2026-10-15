/*
 * FUN_10061c68 at 10061c68
 * undefined FUN_10061c68(void)
 * Address ranges: 10061c68-10061d33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10061c68(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0xfc38 + uVar2 * 4);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  if (*(int *)(param_1 + 0xfc78) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xfc78) + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0xf760) != 0) {
    FUN_100557b0(*(int *)(param_1 + 0xf760),1);
  }
  if (*(int *)(param_1 + 0xf758) != 0) {
    FUN_100557b0(*(int *)(param_1 + 0xf758),1);
  }
  if (*(int *)(param_1 + 0xf75c) != 0) {
    FUN_100557b0(*(int *)(param_1 + 0xf75c),1);
  }
  if (*(int *)(param_1 + 0xf6e8) != 0) {
    FUN_100557b0(*(int *)(param_1 + 0xf6e8),1);
  }
  if (*(int *)(param_1 + 0xf754) != 0) {
    FUN_100557b0(*(int *)(param_1 + 0xf754),1);
  }
  *(undefined4 *)(param_1 + 0xf760) = 0;
  *(undefined8 *)(param_1 + 0xf758) = 0;
  *(undefined4 *)(param_1 + 0xf6e8) = 0;
  *(undefined4 *)(param_1 + 0xf754) = 0;
  return;
}

