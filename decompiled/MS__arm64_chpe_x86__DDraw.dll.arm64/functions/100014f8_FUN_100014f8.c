/*
 * FUN_100014f8 at 100014f8
 * undefined FUN_100014f8(void)
 * Address ranges: 100014f8-10001693
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100014f8(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(param_1 + 0x14);
  piVar2 = (int *)(param_1 + 4);
  if (*piVar1 != 0) {
    FUN_1008dee0(*piVar2 + 0x60,*piVar1,param_1);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_1008dee0(*piVar2 + 0x60,*(int *)(param_1 + 0x18),param_1);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1008dee0(*piVar2 + 0x60,*(int *)(param_1 + 0x1c),param_1);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_1008dee0(*piVar2 + 0x60,*(int *)(param_1 + 0x20),param_1);
  }
  piVar2 = (int *)(param_1 + 4);
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1008dee0(*piVar2 + 0x60,*(int *)(param_1 + 0x24),param_1);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1008dee0(*piVar2 + 0x60,*(int *)(param_1 + 0x28),param_1);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_1008dee0(*piVar2 + 0x60,*(int *)(param_1 + 0x2c),param_1);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1008dee0(*(int *)(param_1 + 4) + 0x60,*(int *)(param_1 + 0x30),param_1);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_1008dee0(*(int *)(param_1 + 4) + 0x60,*(int *)(param_1 + 0x34),param_1);
  }
  *(undefined8 *)(param_1 + 0x1c) = 0;
  piVar1[0] = 0;
  piVar1[1] = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}

