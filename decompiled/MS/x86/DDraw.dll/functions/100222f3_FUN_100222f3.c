/*
 * FUN_100222f3 at 100222f3
 * undefined __fastcall FUN_100222f3(undefined4 * param_1)
 * Address ranges: 100222f3-1002235e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100222f3(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_100641b8;
  param_1[4] = &PTR_FUN_10064164;
  param_1[0xe] = &PTR_FUN_10064140;
  param_1[0x55] = &PTR_LAB_1006413c;
  thunk_FUN_10060be1((LPVOID)param_1[0x59]);
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  thunk_FUN_10060be1((LPVOID)param_1[0x5c]);
  thunk_FUN_10060be1((LPVOID)param_1[0x59]);
  FUN_100012d0(param_1 + 0x56);
  FUN_10023fec(param_1);
  return;
}

