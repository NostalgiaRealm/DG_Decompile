/*
 * FUN_180018e80 at 180018e80
 * undefined __cdecl FUN_180018e80(longlong * param_1, int param_2)
 * Address ranges: 180018e80-180018f6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180018e80(longlong *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_180016b90((longlong *)param_1[0x660]);
  (**(code **)(*param_1 + 0x2e0))(param_1);
  *(int *)((longlong)param_1 + 0x2cb4) = param_2;
  bVar2 = param_2 - 3U < 2;
  bVar1 = param_2 - 1U < 2;
  uVar4 = (uint)(bVar1 || bVar2);
  *(uint *)(param_1 + 0x55f) = uVar4;
  if ((bVar1 || bVar2) && bVar2) {
    *(uint *)((longlong)param_1 + 0x2be4) = *(uint *)((longlong)param_1 + 0x2be4) | 2;
  }
  else {
    *(uint *)((longlong)param_1 + 0x2be4) = *(uint *)((longlong)param_1 + 0x2be4) & 0xfffffffd;
    *(undefined4 *)(param_1 + 0x560) =
         *(undefined4 *)(&DAT_180065ad0 + (longlong)*(int *)((longlong)param_1 + 0x2c0c) * 4);
    *(undefined4 *)((longlong)param_1 + 0x2b04) = 0;
  }
  *(undefined1 *)(param_1 + 0x58f) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2c7c) = 1;
  *(int *)(param_1 + 0x543) = param_2;
  uVar3 = 0;
  if ((int)param_1[0x542] == 0 || uVar4 != 0) {
    uVar3 = 0xff0000;
  }
  *(uint *)((longlong)param_1 + 0x2cac) = *(uint *)((longlong)param_1 + 0x2cac) & 0xffff | uVar3;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

