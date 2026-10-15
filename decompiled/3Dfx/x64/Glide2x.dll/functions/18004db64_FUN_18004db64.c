/*
 * FUN_18004db64 at 18004db64
 * undefined __fastcall FUN_18004db64(undefined8 * param_1)
 * Address ranges: 18004db64-18004dbcd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004db64(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *param_1 = &PTR__guEncodeRLE16_16_180064a68;
  FUN_18004e02c((longlong)param_1);
  FUN_18005d720((LPVOID)param_1[0xd2]);
  FUN_18005d720((LPVOID)param_1[0xcb]);
  FUN_18005d720((LPVOID)param_1[0xc9]);
  puVar2 = param_1 + 0xc3;
  lVar3 = 8;
  do {
    puVar1 = puVar2 + -0xb;
    puVar2 = puVar2 + -0xc;
    FUN_18005d720((LPVOID)*puVar1);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

