/*
 * FUN_1001eb98 at 1001eb98
 * undefined FUN_1001eb98(void)
 * Address ranges: 1001eb98-1001ec57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001eb98(int param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    FUN_1005b390(*(int *)(*(int *)(param_1 + 0x138) + 0x3308) + 0x1640,
                 *(undefined4 *)(param_1 + 0x97c + uVar2 * 4));
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  uVar2 = 0;
  do {
    uVar1 = FUN_1005b390(*(int *)(*(int *)(param_1 + 0x138) + 0x3308) + 0x1640,
                         *(undefined4 *)(param_1 + 0x920 + uVar2 * 4));
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x17);
  uVar1 = FUN_10061078(uVar1,3,param_1 + 0x97c);
  FUN_10061078(uVar1,0x17,param_1 + 0x920);
  return;
}

