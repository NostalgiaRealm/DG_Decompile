/*
 * FUN_1002faf8 at 1002faf8
 * undefined FUN_1002faf8(void)
 * Address ranges: 1002faf8-1002fbb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002faf8(int param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    FUN_10057700(*(int *)(*(int *)(param_1 + 0x138) + 0x3188) + 0x1640,
                 *(undefined4 *)(param_1 + 0x4fc + uVar2 * 4));
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  uVar2 = 0;
  do {
    uVar1 = FUN_10057700(*(int *)(*(int *)(param_1 + 0x138) + 0x3188) + 0x1640,
                         *(undefined4 *)(param_1 + 0x4a0 + uVar2 * 4));
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x17);
  uVar1 = FUN_1005d3e8(uVar1,3,param_1 + 0x4fc);
  FUN_1005d3e8(uVar1,0x17,param_1 + 0x4a0);
  return;
}

