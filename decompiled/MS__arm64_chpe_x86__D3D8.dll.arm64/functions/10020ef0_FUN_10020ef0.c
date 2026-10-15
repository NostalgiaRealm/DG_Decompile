/*
 * FUN_10020ef0 at 10020ef0
 * undefined FUN_10020ef0(void)
 * Address ranges: 10020ef0-10020f7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10020ef0(int param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  FUN_100ff690(*(int *)(param_1 + 0xabc),0,0x87b0);
  uVar2 = 0;
  do {
    puVar1 = (undefined8 *)(*(int *)(param_1 + 0xabc) + uVar2 * 0x40);
    puVar1[1] = 0;
    *puVar1 = 0x3f800000;
    puVar1[3] = 0;
    puVar1[2] = 0x3f80000000000000;
    puVar1[5] = 0x3f800000;
    puVar1[4] = 0;
    puVar1[7] = 0x3f80000000000000;
    puVar1[6] = 0;
    FUN_10022b20(param_1,uVar2);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10a);
  return;
}

