/*
 * FUN_180051968 at 180051968
 * undefined __cdecl FUN_180051968(undefined8 * param_1)
 * Address ranges: 180051968-1800519cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180051968(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *param_1 = &PTR__guEncodeRLE16_16_180066a78;
  FUN_180051e30((longlong)param_1);
  thunk_FUN_180060a18((LPVOID)param_1[0xd2]);
  thunk_FUN_180060a18((LPVOID)param_1[0xcb]);
  thunk_FUN_180060a18((LPVOID)param_1[0xc9]);
  lVar3 = 8;
  puVar2 = param_1 + 0xc3;
  do {
    puVar1 = puVar2 + -0xb;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + -0xc;
    thunk_FUN_180060a18((LPVOID)*puVar1);
  } while (lVar3 != 0);
  return;
}

