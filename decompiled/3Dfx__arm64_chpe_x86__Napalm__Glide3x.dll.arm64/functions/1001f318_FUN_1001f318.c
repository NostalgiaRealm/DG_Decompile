/*
 * FUN_1001f318 at 1001f318
 * undefined FUN_1001f318(void)
 * Address ranges: 1001f318-1001f3d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001f318(int param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    FUN_10060a40(*(int *)(*(int *)(param_1 + 0x138) + 0x3688) + 0x1640,
                 *(undefined4 *)(param_1 + 0x994 + uVar2 * 4));
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  uVar2 = 0;
  do {
    uVar1 = FUN_10060a40(*(int *)(*(int *)(param_1 + 0x138) + 0x3688) + 0x1640,
                         *(undefined4 *)(param_1 + 0x920 + uVar2 * 4));
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x1d);
  uVar1 = FUN_10066718(uVar1,3,param_1 + 0x994);
  FUN_10066718(uVar1,0x1d,param_1 + 0x920);
  return;
}

