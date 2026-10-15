/*
 * FUN_1003cc1f at 1003cc1f
 * undefined __fastcall FUN_1003cc1f(undefined4 * param_1)
 * Address ranges: 1003cc1f-1003ccac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003cc1f(undefined4 *param_1)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = param_1[0x244];
  *param_1 = &PTR_FUN_10054460;
  param_1[1] = &PTR_LAB_10054434;
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
  thunk_FUN_1004f9b6((LPVOID)param_1[0x255]);
  thunk_FUN_1004f9b6((LPVOID)param_1[0x23d]);
  thunk_FUN_1004f9b6((LPVOID)param_1[0x23a]);
  return;
}

