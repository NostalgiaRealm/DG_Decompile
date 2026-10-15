/*
 * FUN_140010710 at 140010710
 * undefined8 __fastcall FUN_140010710(longlong param_1, undefined4 param_2)
 * Address ranges: 140010710-140010812
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140010710(longlong param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(undefined1 *)(param_1 + 0x21) = uVar1;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  uVar3 = 0;
  if (*(char *)(param_1 + 0x22) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))
                      (*(longlong **)(param_1 + 0x10),param_2);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                      (*(longlong **)(param_1 + 0x10),uVar2);
    switch(uVar2) {
    case 1:
      return 1;
    case 2:
      return 2;
    case 3:
      return 3;
    case 4:
      return 4;
    case 5:
      return 5;
    case 6:
      uVar3 = 6;
    }
  }
  return uVar3;
}

