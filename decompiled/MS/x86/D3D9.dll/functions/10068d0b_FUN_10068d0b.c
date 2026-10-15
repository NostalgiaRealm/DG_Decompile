/*
 * FUN_10068d0b at 10068d0b
 * undefined __stdcall FUN_10068d0b(int param_1, undefined1 * param_2, undefined1 * param_3)
 * Address ranges: 10068d0b-10068d4a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10068d0b(int param_1,undefined1 *param_2,undefined1 *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  piVar1 = (int *)(param_1 + 8);
  iVar6 = 0;
  do {
    param_1 = *piVar1;
    iVar2 = (int)uVar5 >> 3;
    uVar3 = uVar5 & 7;
    uVar5 = uVar5 + 1;
    iVar4 = iVar6 + 1;
    if ((*(byte *)((int)&param_1 + iVar2) >> uVar3 & 1) == 0) {
      iVar4 = iVar6;
    }
    iVar6 = iVar4;
  } while (uVar5 < 6);
  *param_2 = (&DAT_100d5e98)[iVar4];
  *param_3 = (&DAT_100d5e90)[iVar4];
  return;
}

