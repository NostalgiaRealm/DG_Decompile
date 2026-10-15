/*
 * FUN_180050b18 at 180050b18
 * undefined __cdecl FUN_180050b18(undefined8 * param_1)
 * Address ranges: 180050b18-180050b7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050b18(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *param_1 = &PTR__guEncodeRLE16_16_180065a78;
  FUN_180050fe0((longlong)param_1);
  thunk_FUN_18005fbc8((LPVOID)param_1[0xd2]);
  thunk_FUN_18005fbc8((LPVOID)param_1[0xcb]);
  thunk_FUN_18005fbc8((LPVOID)param_1[0xc9]);
  lVar3 = 8;
  puVar2 = param_1 + 0xc3;
  do {
    puVar1 = puVar2 + -0xb;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + -0xc;
    thunk_FUN_18005fbc8((LPVOID)*puVar1);
  } while (lVar3 != 0);
  return;
}

