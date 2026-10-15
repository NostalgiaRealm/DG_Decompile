/*
 * FUN_10039570 at 10039570
 * undefined FUN_10039570(void)
 * Address ranges: 10039570-100395c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10039570(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x11c) * 0x228;
  if ((&DAT_100be33a)[iVar1] == '\0') {
    uVar2 = 1;
  }
  else if ((*(int *)(&DAT_100be2e8 + iVar1) !=
            *(int *)(&DAT_100be2cc + *(int *)(param_1 + 0x11c) * 0x45)) ||
          (uVar2 = 1, *(int *)(&DAT_100be2ec + iVar1) != *(int *)((int)&DAT_100be2cc + iVar1 + 4)))
  {
    uVar2 = 0;
  }
  return uVar2;
}

