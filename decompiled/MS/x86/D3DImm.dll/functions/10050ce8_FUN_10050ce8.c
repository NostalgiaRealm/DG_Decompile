/*
 * FUN_10050ce8 at 10050ce8
 * undefined __fastcall FUN_10050ce8(undefined4 * param_1)
 * Address ranges: 10050ce8-10050d37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10050ce8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *param_1 = &PTR_LAB_1005fbc4;
  FUN_10050ffc((int)param_1);
  thunk_FUN_1005c76c((LPVOID)param_1[0x13c]);
  thunk_FUN_1005c76c((LPVOID)param_1[0x131]);
  thunk_FUN_1005c76c((LPVOID)param_1[0x12e]);
  puVar2 = param_1 + 0x127;
  iVar3 = 8;
  do {
    puVar1 = puVar2 + -0xd;
    puVar2 = puVar2 + -0xe;
    thunk_FUN_1005c76c((LPVOID)*puVar1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

