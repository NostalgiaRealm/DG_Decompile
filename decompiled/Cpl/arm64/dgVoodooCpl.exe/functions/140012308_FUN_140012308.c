/*
 * FUN_140012308 at 140012308
 * undefined8 __cdecl FUN_140012308(longlong param_1, undefined4 param_2)
 * Address ranges: 140012308-14001230f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140012308(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_140011fb8(param_1);
  uVar3 = 0;
  if (*(char *)(param_1 + 0x22) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))
                      (*(longlong **)(param_1 + 0x10),param_2);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                      (*(longlong **)(param_1 + 0x10),uVar1);
    if (iVar2 == 1) {
      uVar3 = 1;
    }
    else if (iVar2 == 2) {
      uVar3 = 2;
    }
    else if (iVar2 == 3) {
      uVar3 = 3;
    }
    else if (iVar2 == 4) {
      uVar3 = 4;
    }
    else if (iVar2 == 5) {
      uVar3 = 5;
    }
    else if (iVar2 == 6) {
      uVar3 = 6;
    }
  }
  return uVar3;
}

