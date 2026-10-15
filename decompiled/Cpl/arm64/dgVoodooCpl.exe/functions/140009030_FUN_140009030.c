/*
 * FUN_140009030 at 140009030
 * undefined __cdecl FUN_140009030(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined1 * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 140009030-1400090af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140009030(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  uint local_b0 [6];
  byte abStack_98 [136];
  
  local_b0[0] = 0;
  local_b0[1] = 0;
  local_b0[2] = 0;
  local_b0[3] = 0;
  bVar1 = FUN_140001c30(param_1 + 0x140,local_b0,param_3,param_4,param_5,param_6,param_7,param_8);
  if (bVar1) {
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x37) = local_b0[0];
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x3b) = local_b0[1];
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x43) = local_b0[2];
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x47) = local_b0[3];
  }
  uVar5 = 0x80;
  pbVar4 = abStack_98;
  uVar2 = FUN_14000fca8(param_1,0x3f2,(LPARAM)pbVar4,0x80);
  uVar3 = FUN_140009210(uVar2,abStack_98,pbVar4,uVar5,param_5,param_6,param_7,param_8);
  if (uVar3 != 0) {
    *(int *)(*(longlong *)(param_1 + 0x80) + 0x2f) = (int)uVar3;
  }
  return;
}

