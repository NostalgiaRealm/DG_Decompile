/*
 * FUN_10022220 at 10022220
 * undefined FUN_10022220(void)
 * Address ranges: 10022220-100222f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10022220(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_150 [288];
  
  FUN_1007a780(auStack_150,param_1 + 0x3580,0x120);
  puVar1 = (uint *)(param_1 + 0xcc);
  uVar4 = *puVar1;
  uVar5 = 1;
  if (1 < uVar4) {
    do {
      FUN_1007a780(param_1 + 0x3460 + uVar5 * 0x120,param_1 + 0x3580 + uVar5 * 0x120,0x120);
      uVar4 = *puVar1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  FUN_1007a780(param_1 + uVar4 * 0x120 + 0x3460,auStack_150,0x120);
  uVar4 = *puVar1;
  uVar5 = *(int *)(param_1 + 0x3560) + 1;
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    uVar3 = SoftwareBreakpoint(0xf004,0x100222d0);
    (*(code *)uVar3)();
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = uVar5 / uVar4;
  }
  *(int *)(param_1 + 0x3560) = uVar5 - uVar2 * uVar4;
  return;
}

