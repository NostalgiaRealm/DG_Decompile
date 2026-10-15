/*
 * FUN_180030c10 at 180030c10
 * undefined __fastcall FUN_180030c10(longlong * param_1)
 * Address ranges: 180030c10-180030cb1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180030c10(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  HCURSOR pHVar4;
  HCURSOR hCursor;
  
  lVar2 = (**(code **)(*param_1 + 0x70))();
  if (lVar2 == 0) {
    cVar1 = (**(code **)(*param_1 + 0x78))(param_1);
    if ((cVar1 == '\0') && (uVar3 = FUN_180030d78(), (char)uVar3 != '\0')) {
      pHVar4 = GetCursor();
      hCursor = (HCURSOR)FUN_180031098();
      if (pHVar4 != hCursor) {
        if (param_1[5] != -1) {
          pHVar4 = (HCURSOR)param_1[5];
        }
        (**(code **)(*param_1 + 0x80))(param_1,pHVar4);
        if (*(code **)(DAT_180111f48 + 0x78) == (code *)0x0) {
          SetCursor(hCursor);
        }
        else {
          (**(code **)(DAT_180111f48 + 0x78))();
        }
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    (**(code **)(*param_1 + 0x88))(param_1,uVar3);
    return;
  }
  return;
}

