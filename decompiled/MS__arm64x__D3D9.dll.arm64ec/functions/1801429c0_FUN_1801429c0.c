/*
 * FUN_1801429c0 at 1801429c0
 * undefined FUN_1801429c0(void)
 * Address ranges: 1801429c0-180142a3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801429c0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    FUN_180206a20(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 0x168 + lVar2 * 8));
    *(undefined8 *)(param_1 + 0x168 + lVar2 * 8) = 0;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  iVar1 = *(int *)(param_1 + 0x180);
  if (iVar1 != -1) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x198) + 0x1930);
    thunk_FUN_1802236f8(lVar2 + 0x28);
    FUN_18020c678(lVar2,iVar1,3);
    thunk_FUN_18022370c(lVar2 + 0x28);
  }
  return;
}

