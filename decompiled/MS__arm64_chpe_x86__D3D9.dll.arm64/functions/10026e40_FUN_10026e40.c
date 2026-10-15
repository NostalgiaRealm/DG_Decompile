/*
 * FUN_10026e40 at 10026e40
 * undefined FUN_10026e40(void)
 * Address ranges: 10026e40-10026ecf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10026e40(int param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  FUN_101325d0(*(int *)(param_1 + 0xd80),0,0x87b0);
  uVar2 = 0;
  do {
    puVar1 = (undefined8 *)(*(int *)(param_1 + 0xd80) + uVar2 * 0x40);
    puVar1[1] = 0;
    *puVar1 = 0x3f800000;
    puVar1[3] = 0;
    puVar1[2] = 0x3f80000000000000;
    puVar1[5] = 0x3f800000;
    puVar1[4] = 0;
    puVar1[7] = 0x3f80000000000000;
    puVar1[6] = 0;
    FUN_100289c0(param_1,uVar2);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10a);
  return;
}

