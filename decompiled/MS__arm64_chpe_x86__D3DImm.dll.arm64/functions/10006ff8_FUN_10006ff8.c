/*
 * FUN_10006ff8 at 10006ff8
 * undefined FUN_10006ff8(void)
 * Address ranges: 10006ff8-1000707b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10006ff8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0x908) == '\0') {
    FUN_10006f80(param_1);
    iVar3 = *(int *)(param_1 + 0x9cc);
    uVar4 = 0;
    do {
      uVar5 = 0;
      do {
        iVar1 = uVar5 * 0x10;
        iVar2 = uVar5 * 4;
        uVar5 = uVar5 + 1;
        *(undefined4 *)(iVar3 + 0x700 + uVar4 * 0x10 + iVar2) =
             *(undefined4 *)(iVar3 + 0x840 + uVar4 * 4 + iVar1);
      } while (uVar5 < 4);
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
    *(char *)(param_1 + 0x908) = '\x01';
  }
  return;
}

