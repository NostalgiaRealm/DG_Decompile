/*
 * FUN_18012faf0 at 18012faf0
 * undefined FUN_18012faf0(void)
 * Address ranges: 18012faf0-18012fb27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18012faf0(longlong param_1)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)*(ushort *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x20) != 0) {
    bVar1 = *(byte *)(param_1 + 0x24);
    uVar4 = (uint)bVar1;
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x18012fb18);
      (*pcVar2)();
    }
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = (((uint)bVar1 + (uint)*(ushort *)(param_1 + 0x10)) - 1 & -(uint)bVar1) / uVar4;
    }
  }
  return uVar3;
}

