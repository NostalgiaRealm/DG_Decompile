/*
 * FUN_100417a0 at 100417a0
 * undefined FUN_100417a0(void)
 * Address ranges: 100417a0-10041873
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100417a0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  
  piVar1 = (int *)(param_1 + 0x148);
  if (*piVar1 != 0) {
    puVar2 = (undefined4 *)(param_1 + 0x14c);
    FUN_10109890(*piVar1,*puVar2,*(undefined4 *)(param_1 + 0x144));
    FUN_10109890(*piVar1,*puVar2,*(undefined4 *)(param_1 + 0x140));
    auVar4 = FUN_10109890(*piVar1,*puVar2,*(undefined4 *)(param_1 + 0x13c));
    FUN_101094c8(auVar4._0_8_,auVar4._8_8_,1,param_1 + 0x138,param_1 + 0x134);
    FUN_10109598();
    auVar4 = FUN_10109610();
    FUN_101092b0(auVar4._0_8_,auVar4._8_8_,0x12,param_1 + 0x8c);
    uVar3 = 0;
    do {
      FUN_101322d0(*(undefined4 *)(param_1 + 4 + uVar3 * 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x11);
    FUN_1010d6f0(*piVar1);
    *piVar1 = 0;
    *(undefined4 *)(param_1 + 0x150) = 0;
  }
  return;
}

