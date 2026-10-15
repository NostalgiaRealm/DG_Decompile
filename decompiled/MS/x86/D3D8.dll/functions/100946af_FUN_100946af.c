/*
 * FUN_100946af at 100946af
 * undefined __fastcall FUN_100946af(undefined4 * param_1)
 * Address ranges: 100946af-100946fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100946af(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *param_1 = &PTR_LAB_100b4e20;
  FUN_100949c3((int)param_1);
  thunk_FUN_100ad48c((LPVOID)param_1[0x13c]);
  thunk_FUN_100ad48c((LPVOID)param_1[0x131]);
  thunk_FUN_100ad48c((LPVOID)param_1[0x12e]);
  puVar2 = param_1 + 0x127;
  iVar3 = 8;
  do {
    puVar1 = puVar2 + -0xd;
    puVar2 = puVar2 + -0xe;
    thunk_FUN_100ad48c((LPVOID)*puVar1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

