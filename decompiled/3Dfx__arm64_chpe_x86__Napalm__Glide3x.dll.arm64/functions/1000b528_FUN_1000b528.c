/*
 * FUN_1000b528 at 1000b528
 * undefined FUN_1000b528(void)
 * Address ranges: 1000b528-1000b5bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000b528(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)(param_1 + 0xc);
  if (*piVar1 != 0) {
    piVar2 = (int *)(param_1 + 0x1c);
    iVar5 = 0;
    iVar4 = 0;
    if (0 < *(int *)(*piVar2 + 0x797)) {
      do {
        *(int *)(*piVar1 + iVar4 * 0x4e8 + 0x458) = iVar5;
        iVar3 = iVar4 * 0x4e8;
        iVar4 = iVar4 + 1;
        *(undefined4 *)(*piVar1 + iVar3 + 0x45c) = *(undefined4 *)(*piVar2 + 0x793);
        iVar5 = *(int *)(*piVar2 + 0x793) + iVar5;
      } while (iVar4 < *(int *)(*piVar2 + 0x797));
    }
  }
  return;
}

