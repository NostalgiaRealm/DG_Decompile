/*
 * FUN_100146f0 at 100146f0
 * undefined FUN_100146f0(void)
 * Address ranges: 100146f0-100147c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100146f0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_140 [272];
  
  FUN_1007e4a0(auStack_140,param_1 + 0x3574,0x104);
  puVar1 = (uint *)(param_1 + 0xcc);
  uVar4 = *puVar1;
  uVar5 = 1;
  if (1 < uVar4) {
    do {
      FUN_1007e4a0(param_1 + 0x3470 + uVar5 * 0x104,param_1 + 0x3574 + uVar5 * 0x104,0x104);
      uVar4 = *puVar1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  FUN_1007e4a0(param_1 + uVar4 * 0x104 + 0x3470,auStack_140,0x104);
  uVar4 = *puVar1;
  uVar5 = *(int *)(param_1 + 0x3558) + 1;
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    uVar3 = SoftwareBreakpoint(0xf004,0x100147a0);
    (*(code *)uVar3)();
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = uVar5 / uVar4;
  }
  *(int *)(param_1 + 0x3558) = uVar5 - uVar2 * uVar4;
  return;
}

