/*
 * FUN_100133a0 at 100133a0
 * undefined FUN_100133a0(void)
 * Address ranges: 100133a0-10013463
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100133a0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  piVar1 = (int *)(param_1 + 0x130);
  if (*piVar1 != 0) {
    puVar2 = (undefined4 *)(param_1 + 0x134);
    FUN_1006e100(*piVar1,*puVar2,*(undefined4 *)(param_1 + 300));
    FUN_1006e100(*piVar1,*puVar2,*(undefined4 *)(param_1 + 0x128));
    FUN_1006e100(*piVar1,*puVar2,*(undefined4 *)(param_1 + 0x124));
    FUN_1006de68();
    FUN_1006def8();
    FUN_1006dc70();
    uVar3 = 0;
    do {
      FUN_10081dc0(*(undefined4 *)(param_1 + 4 + uVar3 * 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0xd);
    FUN_10070b58(*piVar1);
    *piVar1 = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  return;
}

