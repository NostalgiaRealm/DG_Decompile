/*
 * FUN_1004741d at 1004741d
 * undefined __fastcall FUN_1004741d(undefined4 * param_1)
 * Address ranges: 1004741d-1004746c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004741d(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *param_1 = &PTR_LAB_10066248;
  FUN_10047731((int)param_1);
  thunk_FUN_10060be1((LPVOID)param_1[0x13c]);
  thunk_FUN_10060be1((LPVOID)param_1[0x131]);
  thunk_FUN_10060be1((LPVOID)param_1[0x12e]);
  puVar2 = param_1 + 0x127;
  iVar3 = 8;
  do {
    puVar1 = puVar2 + -0xd;
    puVar2 = puVar2 + -0xe;
    thunk_FUN_10060be1((LPVOID)*puVar1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

