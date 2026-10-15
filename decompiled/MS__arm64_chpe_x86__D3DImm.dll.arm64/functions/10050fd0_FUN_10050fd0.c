/*
 * FUN_10050fd0 at 10050fd0
 * undefined FUN_10050fd0(void)
 * Address ranges: 10050fd0-10051047
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10050fd0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined8 *)(param_1 + 0x14b8) = 0;
  *(undefined8 *)(param_1 + 0x14b0) = 0;
  *(undefined8 *)(param_1 + 0x14c8) = 0;
  *(undefined8 *)(param_1 + 0x14c0) = 0;
  *(undefined4 *)(param_1 + 0x14d0) = 0;
  if (*(int *)(param_1 + 0xa5c) != 0) {
    uVar3 = 0;
    do {
      iVar1 = uVar3 * 4;
      iVar2 = uVar3 * 8;
      uVar3 = uVar3 + 1;
      *(undefined4 *)(param_1 + 0x14b0 + iVar1) =
           *(undefined4 *)(*(int *)(param_1 + 0xa5c) + iVar2 + 4);
    } while (uVar3 < 9);
    if (*(int *)(*(int *)(param_1 + 0xa58) + 0x30) == 1) {
      *(undefined4 *)(param_1 + 0x14bc) = 1;
    }
  }
  return;
}

