/*
 * FUN_10049750 at 10049750
 * undefined FUN_10049750(void)
 * Address ranges: 10049750-100497e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10049750(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  char *local_20 [4];
  
  local_20[0] = (char *)0x0;
  uVar1 = FUN_1007df50(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x5c) + param_2 * 0x10 + 4) +
                                         param_3 * 0x1c + 4) + param_4 * 4) +
                       *(int *)(param_1 + 0x44),local_20,0);
  if ((*local_20[0] == '\0') && ((1 - ((uint)(uVar1 >> 0x1f) & 1) & 0xfffffffe) == 0)) {
    *param_5 = (int)uVar1;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

