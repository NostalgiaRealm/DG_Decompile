/*
 * FUN_1400058b8 at 1400058b8
 * undefined __fastcall FUN_1400058b8(ulonglong param_1)
 * Address ranges: 1400058b8-14000595d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1400058b8(ulonglong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint local_a8 [8];
  byte local_88 [128];
  
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  uVar1 = FUN_140001c44(param_1 + 0x140,local_a8);
  if ((char)uVar1 != '\0') {
    *(uint *)(*(longlong *)(param_1 + 0x80) + 100) = local_a8[0];
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x68) = local_a8[1];
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x70) = local_a8[2];
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x74) = local_a8[3];
  }
  uVar3 = param_1;
  FUN_14000e1c0(param_1,0x402,(LPARAM)local_88,0x80);
  lVar2 = FUN_140009b58(uVar3,local_88);
  if (lVar2 != 0) {
    *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x5c) = lVar2;
  }
  return;
}

