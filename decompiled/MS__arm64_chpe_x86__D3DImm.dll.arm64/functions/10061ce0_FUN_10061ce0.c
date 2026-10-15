/*
 * FUN_10061ce0 at 10061ce0
 * undefined FUN_10061ce0(void)
 * Address ranges: 10061ce0-10061e0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10061ce0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  if (iVar1 != 0) {
    do {
      FUN_10052bf0(*(undefined4 *)(*(int *)(param_1 + 0x9c) + iVar1 * 4 + -4),0);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = *(int *)(param_1 + 0xac);
  if (iVar1 != 0) {
    do {
      FUN_10067fd0(*(undefined4 *)(*(int *)(param_1 + 0xa8) + iVar1 * 4 + -4));
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 != 0) {
    do {
      FUN_10065540(*(undefined4 *)(*(int *)(param_1 + 0xb4) + iVar1 * 4 + -4));
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = *(int *)(param_1 + 0xc4);
  if (iVar1 != 0) {
    do {
      FUN_10066070(*(undefined4 *)(*(int *)(param_1 + 0xc0) + iVar1 * 4 + -4));
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = *(int *)(param_1 + 0xd0);
  if (iVar1 != 0) {
    do {
      FUN_100674e0(*(undefined4 *)(*(int *)(param_1 + 0xcc) + iVar1 * 4 + -4));
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = *(int *)(param_1 + 0xdc);
  if (iVar1 != 0) {
    do {
      FUN_10061710(*(undefined4 *)(*(int *)(param_1 + 0xd8) + iVar1 * 4 + -4));
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

