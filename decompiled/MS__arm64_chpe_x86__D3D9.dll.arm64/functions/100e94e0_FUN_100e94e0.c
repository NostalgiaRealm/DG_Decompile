/*
 * FUN_100e94e0 at 100e94e0
 * undefined FUN_100e94e0(void)
 * Address ranges: 100e94e0-100e954f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e94e0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != 0) {
    FUN_100e8618(iVar1);
    *(int *)(param_1 + 0x48) = 0;
  }
  uVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x38 + uVar2 * 4);
    if (iVar1 != 0) {
      FUN_100e8618(iVar1);
      *(undefined4 *)(param_1 + uVar2 * 4 + 0x38) = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return;
}

