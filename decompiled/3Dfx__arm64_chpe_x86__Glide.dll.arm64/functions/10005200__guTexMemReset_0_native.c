/*
 * _guTexMemReset@0_native at 10005200
 * undefined _guTexMemReset@0_native(void)
 * Address ranges: 10005200-1000523b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guTexMemReset_0_native(void)

{
  int iVar1;
  
  iVar1 = FUN_1001beb0();
  *(undefined8 *)(iVar1 + 0x60) = 0;
  *(undefined8 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0xffffffff;
  *(undefined8 *)(iVar1 + 0x70) = 0xffffffffffffffff;
  return;
}

