/*
 * FUN_100256d0 at 100256d0
 * undefined FUN_100256d0(void)
 * Address ranges: 100256d0-100257a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100256d0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_140 [272];
  
  FUN_1007ac00(auStack_140,param_1 + 0x33f4,0x104);
  puVar1 = (uint *)(param_1 + 0xcc);
  uVar4 = *puVar1;
  uVar5 = 1;
  if (1 < uVar4) {
    do {
      FUN_1007ac00(param_1 + 0x32f0 + uVar5 * 0x104,param_1 + 0x33f4 + uVar5 * 0x104,0x104);
      uVar4 = *puVar1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  FUN_1007ac00(param_1 + uVar4 * 0x104 + 0x32f0,auStack_140,0x104);
  uVar4 = *puVar1;
  uVar5 = *(int *)(param_1 + 0x33d8) + 1;
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    uVar3 = SoftwareBreakpoint(0xf004,0x10025780);
    (*(code *)uVar3)();
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = uVar5 / uVar4;
  }
  *(int *)(param_1 + 0x33d8) = uVar5 - uVar2 * uVar4;
  return;
}

