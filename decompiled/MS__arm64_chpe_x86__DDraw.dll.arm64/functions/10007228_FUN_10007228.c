/*
 * FUN_10007228 at 10007228
 * undefined FUN_10007228(void)
 * Address ranges: 10007228-1000726f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10007228(int param_1)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(param_1 + 8);
  if (*(int *)(param_1 + 0x18) != 0) {
    bVar1 = *(byte *)(param_1 + 0x1c);
    uVar3 = (uint)bVar1;
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      uVar2 = SoftwareBreakpoint(0xf004,0x1000725c);
      (*(code *)uVar2)();
    }
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = (((uint)bVar1 + (uint)*(ushort *)(param_1 + 8)) - 1 & -(uint)bVar1) / uVar3;
    }
  }
  return uVar4;
}

