/*
 * FUN_18012d328 at 18012d328
 * undefined FUN_18012d328(void)
 * Address ranges: 18012d328-18012d383
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18012d328(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(longlong *)(param_1 + 0x18) == 0) && (*(longlong *)(param_1 + 0x10) == 0)) {
    iVar1 = FUN_1801042e0(param_1 + 0x2c);
    if (iVar1 == 1) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 8);
    }
    else {
      FUN_1801042d0(param_1 + 0x2c);
      uVar2 = 1;
    }
  }
  return uVar2;
}

