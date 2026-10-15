/*
 * FUN_1800397e0 at 1800397e0
 * undefined __cdecl FUN_1800397e0(longlong * param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 1800397e0-1800398db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800397e0(longlong *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_1800228b0((longlong *)param_1[0x630]);
  (**(code **)(*param_1 + 0x2a0))(param_1);
  uVar3 = *(undefined4 *)(&DAT_180064b60 + (longlong)param_2 * 4);
  *(uint *)(param_1 + 0x554) =
       (uint)(((param_2 != 4 || param_3 != 0) || param_4 != 4) || param_5 != 0);
  *(undefined4 *)((longlong)param_1 + 0x2aa4) = uVar3;
  uVar3 = 1;
  *(undefined4 *)(param_1 + 0x557) = 1;
  if (param_4 == 4) {
    uVar3 = 2;
  }
  *(undefined4 *)(param_1 + 0x555) = *(undefined4 *)(&DAT_180064b20 + (longlong)param_3 * 4);
  *(undefined4 *)((longlong)param_1 + 0x2aac) = 1;
  uVar4 = 1;
  uVar1 = uVar4;
  if (param_5 == 4) {
    uVar1 = 2;
  }
  *(undefined4 *)(param_1 + 0x556) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2ab4) = uVar1;
  uVar2 = *(uint *)((longlong)param_1 + 0x2b4c) & 0xfffffffe;
  if (param_3 == 0xf) {
    uVar4 = 2;
    uVar2 = *(uint *)((longlong)param_1 + 0x2b4c) | 1;
  }
  *(undefined4 *)(param_1 + 0x569) = uVar4;
  *(uint *)((longlong)param_1 + 0x2b4c) = uVar2;
  *(undefined1 *)((longlong)param_1 + 0x2be1) = 1;
  *(uint *)((longlong)param_1 + 0x2c0c) =
       *(uint *)((longlong)param_1 + 0x2c0c) & 0xffff0000 | (uint)(param_4 == 4) << 10 |
       (uint)(param_5 == 4) << 2;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

