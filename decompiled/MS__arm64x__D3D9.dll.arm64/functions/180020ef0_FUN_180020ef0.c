/*
 * FUN_180020ef0 at 180020ef0
 * undefined FUN_180020ef0(void)
 * Address ranges: 180020ef0-180020f4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180020ef0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(longlong *)(param_1 + 0x18) == 0) && (*(longlong *)(param_1 + 0x10) == 0)) {
    iVar1 = FUN_1800015a0(param_1 + 0x2c);
    if (iVar1 == 1) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 8);
    }
    else {
      FUN_180001590(param_1 + 0x2c);
      uVar2 = 1;
    }
  }
  return uVar2;
}

