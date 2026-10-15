/*
 * FUN_10024aef at 10024aef
 * undefined __fastcall FUN_10024aef(int * param_1)
 * Address ranges: 10024aef-10024b4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10024aef(int *param_1)

{
  char extraout_AL;
  char cVar1;
  int iVar2;
  HCURSOR pHVar3;
  HCURSOR pHVar4;
  undefined4 uVar5;
  
  iVar2 = (**(code **)(*param_1 + 0x38))();
  if (iVar2 == 0) {
    (**(code **)(*param_1 + 0x3c))();
    if ((extraout_AL == '\0') && (cVar1 = FUN_10024c06(), cVar1 != '\0')) {
      pHVar3 = GetCursor();
      pHVar4 = (HCURSOR)FUN_10024e75();
      if (pHVar3 != pHVar4) {
        if (param_1[6] != -1) {
          pHVar3 = (HCURSOR)param_1[6];
        }
        (**(code **)(*param_1 + 0x40))(pHVar3);
        FUN_1002500a();
      }
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    (**(code **)(*param_1 + 0x44))(uVar5);
    return;
  }
  return;
}

