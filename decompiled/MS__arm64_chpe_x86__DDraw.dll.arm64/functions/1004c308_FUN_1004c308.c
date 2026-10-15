/*
 * FUN_1004c308 at 1004c308
 * undefined FUN_1004c308(void)
 * Address ranges: 1004c308-1004c387
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1004c308(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x50);
  uVar2 = 0;
  if (uVar1 < 0x33545844) {
    if (uVar1 == 0x31545844) {
      return 8;
    }
    if (uVar1 == 0x32545844) {
      return 0x10;
    }
    uVar3 = 0x32595559;
  }
  else {
    if (((uVar1 < 0x33545845) || (uVar1 == 0x34545844)) || (uVar1 == 0x35545844)) {
      return 0x10;
    }
    uVar3 = 0x59565955;
  }
  if (uVar1 == uVar3) {
    uVar2 = 4;
  }
  return uVar2;
}

