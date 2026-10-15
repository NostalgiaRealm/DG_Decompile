/*
 * FUN_100c0f50 at 100c0f50
 * undefined FUN_100c0f50(void)
 * Address ranges: 100c0f50-100c0f77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100c0f50(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
    uVar4 = *(undefined8 *)(param_1 + -0x2c);
    uVar3 = *(undefined8 *)(param_1 + -0x14);
    uVar2 = *(undefined8 *)(param_1 + -0x1c);
    uVar1 = 0;
    param_2[1] = *(undefined8 *)(param_1 + -0x24);
    *param_2 = uVar4;
    param_2[3] = uVar3;
    param_2[2] = uVar2;
  }
  return uVar1;
}

