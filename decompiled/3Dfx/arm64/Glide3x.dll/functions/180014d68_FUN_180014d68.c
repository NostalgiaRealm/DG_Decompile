/*
 * FUN_180014d68 at 180014d68
 * undefined __cdecl FUN_180014d68(longlong * param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 180014d68-180014e63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180014d68(longlong *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_180016b90((longlong *)param_1[0x660]);
  (**(code **)(*param_1 + 0x2e0))(param_1);
  uVar3 = *(undefined4 *)(&DAT_1800676c0 + (longlong)param_2 * 4);
  *(uint *)(param_1 + 0x567) =
       (uint)(((param_2 != 4 || param_3 != 0) || param_4 != 4) || param_5 != 0);
  *(undefined4 *)((longlong)param_1 + 0x2b3c) = uVar3;
  uVar3 = 1;
  *(undefined4 *)(param_1 + 0x56a) = 1;
  if (param_4 == 4) {
    uVar3 = 2;
  }
  *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(&DAT_180067680 + (longlong)param_3 * 4);
  *(undefined4 *)((longlong)param_1 + 0x2b44) = 1;
  uVar4 = 1;
  uVar1 = uVar4;
  if (param_5 == 4) {
    uVar1 = 2;
  }
  *(undefined4 *)(param_1 + 0x569) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2b4c) = uVar1;
  uVar2 = *(uint *)((longlong)param_1 + 0x2be4) & 0xfffffffe;
  if (param_3 == 0xf) {
    uVar4 = 2;
    uVar2 = *(uint *)((longlong)param_1 + 0x2be4) | 1;
  }
  *(undefined4 *)(param_1 + 0x57c) = uVar4;
  *(uint *)((longlong)param_1 + 0x2be4) = uVar2;
  *(undefined1 *)((longlong)param_1 + 0x2c79) = 1;
  *(uint *)((longlong)param_1 + 0x2cac) =
       *(uint *)((longlong)param_1 + 0x2cac) & 0xffff0000 | (uint)(param_4 == 4) << 10 |
       (uint)(param_5 == 4) << 2;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

