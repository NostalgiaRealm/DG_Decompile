/*
 * FUN_10061200 at 10061200
 * undefined FUN_10061200(void)
 * Address ranges: 10061200-1006123f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10061200(undefined4 param_1)

{
  undefined8 uVar1;
  
  switch(param_1) {
  case 0x44:
  case 0x45:
    uVar1 = 4;
    break;
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x4f:
  case 0x50:
  case 0x51:
    uVar1 = 8;
    break;
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x52:
  case 0x53:
  case 0x54:
    uVar1 = 0x10;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}

