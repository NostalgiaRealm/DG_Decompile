/*
 * FUN_140009800 at 140009800
 * undefined __fastcall FUN_140009800(ulonglong param_1)
 * Address ranges: 140009800-1400098a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140009800(ulonglong param_1)

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
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x37) = local_a8[0];
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x3b) = local_a8[1];
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x43) = local_a8[2];
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x47) = local_a8[3];
  }
  uVar3 = param_1;
  FUN_14000e1c0(param_1,0x3f2,(LPARAM)local_88,0x80);
  lVar2 = FUN_140009b58(uVar3,local_88);
  if (lVar2 != 0) {
    *(int *)(*(longlong *)(param_1 + 0x80) + 0x2f) = (int)lVar2;
  }
  return;
}

