/*
 * FUN_10054210 at 10054210
 * undefined FUN_10054210(void)
 * Address ranges: 10054210-1005423f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10054210(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x80070057;
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = 0;
    uVar2 = *(undefined8 *)(*(int *)(param_1 + 4) + 0x1b8);
    param_2[1] = *(undefined8 *)(*(int *)(param_1 + 4) + 0x1c0);
    *param_2 = uVar2;
  }
  return uVar1;
}

