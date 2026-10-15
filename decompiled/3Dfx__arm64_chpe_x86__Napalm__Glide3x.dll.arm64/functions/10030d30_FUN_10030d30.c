/*
 * FUN_10030d30 at 10030d30
 * undefined FUN_10030d30(void)
 * Address ranges: 10030d30-10030d9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10030d30(int param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = FUN_10060a40(*(int *)(*(int *)(param_1 + 0x1e8) + 0x3688) + 0x1640,
                         *(undefined4 *)(param_1 + 0x1f8 + uVar2 * 4));
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  FUN_10066718(uVar1,2,param_1 + 0x1f8);
  return;
}

