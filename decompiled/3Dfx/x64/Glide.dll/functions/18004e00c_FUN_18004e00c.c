/*
 * FUN_18004e00c at 18004e00c
 * undefined __fastcall FUN_18004e00c(undefined8 * param_1)
 * Address ranges: 18004e00c-18004e075
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004e00c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *param_1 = &PTR__guEncodeRLE16_16_180064a68;
  FUN_18004e4d4((longlong)param_1);
  FUN_18005dbc0((LPVOID)param_1[0xd2]);
  FUN_18005dbc0((LPVOID)param_1[0xcb]);
  FUN_18005dbc0((LPVOID)param_1[0xc9]);
  puVar2 = param_1 + 0xc3;
  lVar3 = 8;
  do {
    puVar1 = puVar2 + -0xb;
    puVar2 = puVar2 + -0xc;
    FUN_18005dbc0((LPVOID)*puVar1);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

