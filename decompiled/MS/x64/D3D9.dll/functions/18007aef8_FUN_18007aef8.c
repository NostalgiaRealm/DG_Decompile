/*
 * FUN_18007aef8 at 18007aef8
 * undefined __fastcall FUN_18007aef8(ulonglong param_1, longlong * param_2, longlong param_3)
 * Address ranges: 18007aef8-18007aff9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007aef8(ulonglong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong local_res8;
  byte local_res20 [8];
  
  local_res8 = param_1;
  FUN_1800eddec(param_2,4,0x4000067,0x1020f2);
  uVar2 = 1;
  do {
    plVar1 = param_2;
    FUN_1800eddec(param_2,3,0x3000065,0x1020f2);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xd);
  local_res8 = local_res8 & 0xffffffffffffff00;
  local_res20[0] = 0;
  FUN_18007aab8(plVar1,param_3,(undefined1 *)&local_res8,local_res20);
  if ((byte)local_res8 != 0) {
    FUN_1800eddec(param_2,4,0x4000067,(ulonglong)((uint)(byte)local_res8 << 4 | 0x102002));
  }
  if (local_res20[0] != 0) {
    FUN_1800eddec(param_2,4,0x4000067,(ulonglong)((uint)local_res20[0] << 4 | 0x102002));
  }
  return;
}

