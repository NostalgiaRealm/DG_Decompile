/*
 * FUN_10029e79 at 10029e79
 * undefined __stdcall FUN_10029e79(int param_1)
 * Address ranges: 10029e79-10029f4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029e79(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1 * 0x228;
  LOCK();
  piVar2 = &DAT_100df2ec + param_1 * 0x8a;
  iVar4 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar4 == 1) {
    puVar1 = *(undefined4 **)(&DAT_100df4c0 + iVar5);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_1002b5d0(puVar1);
      FUN_100cfd6c(puVar1);
    }
    piVar2 = (int *)(&DAT_100df2e8)[param_1 * 0x8a];
    *(undefined4 *)(&DAT_100df4c0 + iVar5) = 0;
    iVar4 = 0;
    uVar3 = 0;
    do {
      if ((int *)(&DAT_100df2e8)[uVar3 * 0x8a] == piVar2) {
        iVar4 = iVar4 + (&DAT_100df2ec)[uVar3 * 0x8a];
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x20);
    if (iVar4 == 0) {
      (**(code **)(*piVar2 + 0xc))();
      (**(code **)(*(int *)(&DAT_100df2e8)[param_1 * 0x8a] + 4))();
    }
    (&DAT_100df2e8)[param_1 * 0x8a] = 0;
    thunk_FUN_100cfd6c(*(LPVOID *)(&DAT_100df4e8 + iVar5));
    *(undefined4 *)(&DAT_100df4e8 + iVar5) = 0;
    *(undefined4 *)(&DAT_100df4ec + iVar5) = 0;
    *(undefined4 *)(&DAT_100df4f0 + iVar5) = 0;
    thunk_FUN_100cfd6c(*(LPVOID *)(&DAT_100df4f4 + iVar5));
    *(undefined4 *)(&DAT_100df4f4 + iVar5) = 0;
    *(undefined4 *)(&DAT_100df4f8 + iVar5) = 0;
    *(undefined4 *)(&DAT_100df4fc + iVar5) = 0;
    FUN_1000fc01((undefined4 *)(&DAT_100df500 + iVar5));
  }
  return;
}

