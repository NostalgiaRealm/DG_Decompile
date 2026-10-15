/*
 * FUN_1003e328 at 1003e328
 * undefined FUN_1003e328(void)
 * Address ranges: 1003e328-1003e387
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined2 FUN_1003e328(undefined2 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  switch(param_2) {
  default:
    goto switchD_1003e350_caseD_0;
  case 1:
    uVar2 = 0;
    break;
  case 2:
    uVar2 = 0x100;
    break;
  case 3:
    uVar2 = 0x200;
    break;
  case 4:
    uVar2 = 0x300;
  }
  uVar1 = FUN_1003e248(param_1,uVar2);
switchD_1003e350_caseD_0:
  return uVar1;
}

