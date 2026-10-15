/*
 * FUN_100211b0 at 100211b0
 * undefined FUN_100211b0(void)
 * Address ranges: 100211b0-1002122b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100211b0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x988);
  if (iVar1 != 0) {
    FUN_1005bc90(iVar1);
    FUN_1007dd10(iVar1,0x78);
  }
  FUN_1001eb98(param_1);
  uVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x1f8 + uVar2 * 0x120) != 0) {
      FUN_1002fe30(param_1 + uVar2 * 0x120 + 0x140);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 7);
  return;
}

