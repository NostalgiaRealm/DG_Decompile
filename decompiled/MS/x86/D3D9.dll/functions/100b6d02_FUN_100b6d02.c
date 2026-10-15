/*
 * FUN_100b6d02 at 100b6d02
 * undefined __fastcall FUN_100b6d02(undefined4 * param_1)
 * Address ranges: 100b6d02-100b6d51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100b6d02(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *param_1 = &PTR_D3DPERF_GetStatus_100d8858;
  FUN_100b7016((int)param_1);
  thunk_FUN_100cfd6c((LPVOID)param_1[0x13c]);
  thunk_FUN_100cfd6c((LPVOID)param_1[0x131]);
  thunk_FUN_100cfd6c((LPVOID)param_1[0x12e]);
  puVar2 = param_1 + 0x127;
  iVar3 = 8;
  do {
    puVar1 = puVar2 + -0xd;
    puVar2 = puVar2 + -0xe;
    thunk_FUN_100cfd6c((LPVOID)*puVar1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

