/*
 * FUN_1001e7d0 at 1001e7d0
 * undefined FUN_1001e7d0(void)
 * Address ranges: 1001e7d0-1001e7f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001e7d0(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = 0;
    param_2[1] = *(undefined8 *)(param_1 + 0x30);
    *param_2 = uVar4;
    param_2[3] = uVar3;
    param_2[2] = uVar2;
  }
  return uVar1;
}

