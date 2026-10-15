/*
 * FUN_100378a0 at 100378a0
 * undefined FUN_100378a0(void)
 * Address ranges: 100378a0-10037973
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100378a0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  
  piVar1 = (int *)(param_1 + 0x148);
  if (*piVar1 != 0) {
    puVar2 = (undefined4 *)(param_1 + 0x14c);
    FUN_100d7690(*piVar1,*puVar2,*(undefined4 *)(param_1 + 0x144));
    FUN_100d7690(*piVar1,*puVar2,*(undefined4 *)(param_1 + 0x140));
    auVar4 = FUN_100d7690(*piVar1,*puVar2,*(undefined4 *)(param_1 + 0x13c));
    FUN_100d72c8(auVar4._0_8_,auVar4._8_8_,1,param_1 + 0x138,param_1 + 0x134);
    FUN_100d7398();
    auVar4 = FUN_100d7410();
    FUN_100d70b0(auVar4._0_8_,auVar4._8_8_,0x12,param_1 + 0x8c);
    uVar3 = 0;
    do {
      FUN_100fed00(*(undefined4 *)(param_1 + 4 + uVar3 * 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x11);
    FUN_100dafb0(*piVar1);
    *piVar1 = 0;
    *(undefined4 *)(param_1 + 0x150) = 0;
  }
  return;
}

