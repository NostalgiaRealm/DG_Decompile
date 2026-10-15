/*
 * FUN_10023fec at 10023fec
 * undefined __fastcall FUN_10023fec(undefined4 * param_1)
 * Address ranges: 10023fec-1002404f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10023fec(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_10064534;
  param_1[4] = &PTR_FUN_10064164;
  param_1[0xe] = &PTR_FUN_10064140;
  FUN_100255b5((uint)param_1);
  thunk_FUN_10060be1((LPVOID)param_1[0x50]);
  thunk_FUN_10060be1((LPVOID)param_1[0x4d]);
  thunk_FUN_10060be1((LPVOID)param_1[0x4a]);
  thunk_FUN_10060be1((LPVOID)param_1[0x43]);
  FUN_1000381d(param_1 + 4);
  *param_1 = &PTR_FUN_10064590;
  FUN_10001b7a(param_1 + 0xf);
  return;
}

