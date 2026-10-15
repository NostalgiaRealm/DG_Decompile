/*
 * FUN_100032d0 at 100032d0
 * undefined FUN_100032d0(void)
 * Address ranges: 100032d0-1000333f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100032d0(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (param_1 < 0x33545844) {
    if (param_1 == 0x31545844) {
      return 4;
    }
    if (param_1 == 0x32545844) {
      return 4;
    }
    iVar2 = 0x32595559;
  }
  else {
    if (((param_1 < 0x33545845) || (param_1 == 0x34545844)) || (param_1 == 0x35545844)) {
      return 4;
    }
    iVar2 = 0x59565955;
  }
  if (param_1 == iVar2) {
    uVar1 = 2;
  }
  return uVar1;
}

