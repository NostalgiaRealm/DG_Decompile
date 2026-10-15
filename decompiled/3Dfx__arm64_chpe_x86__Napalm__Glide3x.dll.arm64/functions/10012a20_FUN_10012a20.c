/*
 * FUN_10012a20 at 10012a20
 * undefined FUN_10012a20(void)
 * Address ranges: 10012a20-10012aeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10012a20(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_140 [288];
  
  FUN_10083b40(auStack_140,param_1 + 0x3a80,0x120);
  puVar1 = (uint *)(param_1 + 0xcc);
  uVar4 = *puVar1;
  uVar5 = 1;
  if (1 < uVar4) {
    do {
      FUN_10083b40(param_1 + (uVar5 + 0x33) * 0x120,param_1 + (uVar5 + 0x34) * 0x120,0x120);
      uVar4 = *puVar1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  FUN_10083b40(param_1 + (uVar4 + 0x33) * 0x120,auStack_140,0x120);
  uVar4 = *puVar1;
  uVar5 = *(int *)(param_1 + 0x3a60) + 1;
  if (uVar4 != 0) {
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = uVar5 / uVar4;
    }
    *(int *)(param_1 + 0x3a60) = uVar5 - uVar2 * uVar4;
    return;
  }
                    /* WARNING: Does not return */
  uVar3 = SoftwareBreakpoint(0xf004,0x10012acc);
  (*(code *)uVar3)();
}

