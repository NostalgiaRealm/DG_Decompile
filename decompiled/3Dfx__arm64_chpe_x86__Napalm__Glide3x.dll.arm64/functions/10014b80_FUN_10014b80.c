/*
 * FUN_10014b80 at 10014b80
 * undefined FUN_10014b80(void)
 * Address ranges: 10014b80-10014c53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10014b80(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_140 [272];
  
  FUN_10083b40(auStack_140,param_1 + 0x38f4,0x104);
  puVar1 = (uint *)(param_1 + 0xcc);
  uVar4 = *puVar1;
  uVar5 = 1;
  if (1 < uVar4) {
    do {
      FUN_10083b40(param_1 + 0x37f0 + uVar5 * 0x104,param_1 + 0x38f4 + uVar5 * 0x104,0x104);
      uVar4 = *puVar1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  FUN_10083b40(param_1 + uVar4 * 0x104 + 0x37f0,auStack_140,0x104);
  uVar4 = *puVar1;
  uVar5 = *(int *)(param_1 + 0x38d8) + 1;
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    uVar3 = SoftwareBreakpoint(0xf004,0x10014c30);
    (*(code *)uVar3)();
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = uVar5 / uVar4;
  }
  *(int *)(param_1 + 0x38d8) = uVar5 - uVar2 * uVar4;
  return;
}

