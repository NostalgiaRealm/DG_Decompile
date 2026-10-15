/*
 * FUN_10052335 at 10052335
 * undefined __fastcall FUN_10052335(undefined4 * param_1)
 * Address ranges: 10052335-100523c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10052335(undefined4 *param_1)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = param_1[0x244];
  *param_1 = &PTR_FUN_10066ac4;
  param_1[1] = &PTR_LAB_10066a98;
  if (uVar2 != 0xffffffff) {
    pbVar1 = (byte *)(param_1[0x240] + 0xc + ((int)uVar2 >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  }
  (**(code **)(*(int *)param_1[0x18e] + 8))((int *)param_1[0x18e]);
  uVar2 = 0;
  param_1[0x18e] = 0;
  if (param_1[0x249] != 0) {
    do {
      (**(code **)(*(int *)param_1[uVar2 + 399] + 8))((int *)param_1[uVar2 + 399]);
      param_1[uVar2 + 399] = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[0x249]);
  }
  thunk_FUN_10060be1((LPVOID)param_1[0x255]);
  thunk_FUN_10060be1((LPVOID)param_1[0x23d]);
  thunk_FUN_10060be1((LPVOID)param_1[0x23a]);
  return;
}

