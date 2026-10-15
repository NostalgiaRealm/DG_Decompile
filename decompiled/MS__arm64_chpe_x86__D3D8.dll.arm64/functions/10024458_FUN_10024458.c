/*
 * FUN_10024458 at 10024458
 * undefined FUN_10024458(void)
 * Address ranges: 10024458-100244e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10024458(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0x9d8) == '\0') {
    FUN_100243e0(param_1);
    iVar3 = *(int *)(param_1 + 0xabc);
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
    *(char *)(param_1 + 0x9d8) = '\x01';
  }
  return;
}

