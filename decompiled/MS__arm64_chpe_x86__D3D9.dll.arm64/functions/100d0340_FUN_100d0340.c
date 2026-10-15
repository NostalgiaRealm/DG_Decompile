/*
 * FUN_100d0340 at 100d0340
 * undefined FUN_100d0340(void)
 * Address ranges: 100d0340-100d03f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d0340(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x4c) != 0) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x48) + uVar2 * 4);
      FUN_101322d0(*(undefined4 *)(&DAT_10170f78 + iVar1 * 4));
      (&DAT_10170f78)[iVar1 * 4] = 0;
      (&DAT_10170f80)[iVar1 * 8] = 0;
      FUN_101322d0(*(undefined4 *)(&DAT_10170f84 + iVar1 * 4));
      (&DAT_10170f84)[iVar1 * 4] = 0;
      (&DAT_10170f8c)[iVar1 * 8] = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x4c));
  }
  return;
}

