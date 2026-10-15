/*
 * FUN_180035fc0 at 180035fc0
 * undefined __fastcall FUN_180035fc0(longlong * param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 180035fc0-1800360d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180035fc0(longlong *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  FUN_18002102c((longlong *)param_1[0x630]);
  (**(code **)(*param_1 + 0x2a0))(param_1);
  if ((((param_2 == 4) && (param_3 == 0)) && (param_4 == 4)) && (param_5 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0x554) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2aa4) =
       *(undefined4 *)(&DAT_180063bb0 + (longlong)param_2 * 4);
  *(undefined4 *)(param_1 + 0x555) = *(undefined4 *)(&DAT_180063b70 + (longlong)param_3 * 4);
  *(undefined4 *)((longlong)param_1 + 0x2aac) = 1;
  *(undefined4 *)(param_1 + 0x557) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2be1) = 1;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  *(uint *)(param_1 + 0x556) = (param_4 == 4) + 1;
  *(uint *)((longlong)param_1 + 0x2ab4) = (param_5 == 4) + 1;
  *(uint *)(param_1 + 0x569) = (param_3 == 0xf) + 1;
  uVar1 = *(uint *)((longlong)param_1 + 0x2b4c) | 1;
  if (param_3 != 0xf) {
    uVar1 = *(uint *)((longlong)param_1 + 0x2b4c) & 0xfffffffe;
  }
  *(uint *)((longlong)param_1 + 0x2c0c) = *(uint *)((longlong)param_1 + 0x2c0c) & 0xffff0000;
  *(uint *)((longlong)param_1 + 0x2b4c) = uVar1;
  uVar1 = 0;
  if (param_4 == 4) {
    uVar1 = 0x400;
  }
  uVar3 = 0;
  if (param_5 == 4) {
    uVar3 = 4;
  }
  *(uint *)((longlong)param_1 + 0x2c0c) = *(uint *)((longlong)param_1 + 0x2c0c) | uVar1 | uVar3;
  return;
}

