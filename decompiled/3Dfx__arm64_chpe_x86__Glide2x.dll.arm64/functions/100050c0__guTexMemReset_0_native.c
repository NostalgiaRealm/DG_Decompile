/*
 * _guTexMemReset@0_native at 100050c0
 * undefined _guTexMemReset@0_native(void)
 * Address ranges: 100050c0-100050fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guTexMemReset_0_native(void)

{
  int iVar1;
  
  iVar1 = FUN_1001ba50();
  *(undefined8 *)(iVar1 + 0x60) = 0;
  *(undefined8 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0xffffffff;
  *(undefined8 *)(iVar1 + 0x70) = 0xffffffffffffffff;
  return;
}

