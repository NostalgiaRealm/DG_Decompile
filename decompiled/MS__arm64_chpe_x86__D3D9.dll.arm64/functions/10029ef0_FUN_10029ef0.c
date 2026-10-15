/*
 * FUN_10029ef0 at 10029ef0
 * undefined FUN_10029ef0(void)
 * Address ranges: 10029ef0-10029f7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029ef0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0xc9c) == '\0') {
    FUN_10029e78(param_1);
    iVar3 = *(int *)(param_1 + 0xd80);
    uVar4 = 0;
    do {
      uVar5 = 0;
      do {
        iVar1 = uVar5 * 0x10;
        iVar2 = uVar5 * 4;
        uVar5 = uVar5 + 1;
        *(undefined4 *)(iVar3 + 0x8500 + uVar4 * 0x10 + iVar2) =
             *(undefined4 *)(iVar3 + 0x8640 + uVar4 * 4 + iVar1);
      } while (uVar5 < 4);
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
    *(char *)(param_1 + 0xc9c) = '\x01';
  }
  return;
}

