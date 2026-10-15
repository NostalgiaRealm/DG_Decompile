/*
 * FUN_100033f0 at 100033f0
 * undefined FUN_100033f0(void)
 * Address ranges: 100033f0-1000347f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100033f0(int param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  FUN_10081f10(*(int *)(param_1 + 0x9cc),0,0x9b0);
  uVar2 = 0;
  do {
    puVar1 = (undefined8 *)(*(int *)(param_1 + 0x9cc) + uVar2 * 0x40);
    puVar1[1] = 0;
    *puVar1 = 0x3f800000;
    puVar1[3] = 0;
    puVar1[2] = 0x3f80000000000000;
    puVar1[5] = 0x3f800000;
    puVar1[4] = 0;
    puVar1[7] = 0x3f80000000000000;
    puVar1[6] = 0;
    FUN_10004f00(param_1,uVar2);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xe);
  return;
}

