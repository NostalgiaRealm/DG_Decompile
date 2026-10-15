/*
 * FUN_1006abd0 at 1006abd0
 * undefined FUN_1006abd0(void)
 * Address ranges: 1006abd0-1006ac17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1006abd0(undefined8 param_1,ulonglong param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch((uint)((param_2 & 0xffffff) >> ((ulonglong)(uint)(param_3 * 3) & 0x3f)) & 7) {
  case 1:
  case 4:
  case 5:
  case 7:
    uVar1 = 0;
    break;
  case 2:
  case 6:
    uVar1 = 1;
    break;
  case 3:
    uVar1 = 2;
  }
  return uVar1;
}

