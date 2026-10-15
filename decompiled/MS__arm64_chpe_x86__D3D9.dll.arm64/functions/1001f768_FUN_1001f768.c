/*
 * FUN_1001f768 at 1001f768
 * undefined FUN_1001f768(void)
 * Address ranges: 1001f768-1001f7ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1001f768(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x4c);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    uVar4 = SoftwareBreakpoint(0xf004,0x1001f780);
    (*(code *)uVar4)();
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = *(uint *)(param_1 + 100) / uVar1;
  }
  uVar2 = uVar2 * *(int *)(param_1 + 0x74);
  uVar1 = *(uint *)(param_1 + 0x50);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    uVar4 = SoftwareBreakpoint(0xf004,0x1001f7a8);
    (*(code *)uVar4)();
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = *(uint *)(param_1 + 0x68) / uVar1;
  }
  uVar3 = uVar3 * *(int *)(param_1 + 0x78);
  if (uVar3 <= uVar2) {
    uVar2 = uVar3;
  }
  uVar1 = *(uint *)(DAT_10170ad0 + 0x80e);
  if (*(uint *)(DAT_10170ad0 + 0x80e) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1;
  if (0x10 < uVar1) {
    uVar2 = 0x10;
  }
  if (uVar1 == 0) {
    uVar2 = 1;
  }
  return uVar2;
}

