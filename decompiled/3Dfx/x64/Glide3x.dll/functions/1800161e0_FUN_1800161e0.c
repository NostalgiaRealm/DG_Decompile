/*
 * FUN_1800161e0 at 1800161e0
 * undefined __fastcall FUN_1800161e0(longlong * param_1, int param_2)
 * Address ranges: 1800161e0-1800162be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800161e0(longlong *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  FUN_1800144d0((longlong *)param_1[0x660]);
  (**(code **)(*param_1 + 0x2e0))();
  *(int *)((longlong)param_1 + 0x2cb4) = param_2;
  bVar1 = param_2 - 3U < 2;
  if ((param_2 - 1U < 2) || (bVar1)) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x55f) = iVar3;
  if (bVar1) {
    *(uint *)((longlong)param_1 + 0x2be4) = *(uint *)((longlong)param_1 + 0x2be4) | 2;
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x2b04) = 0;
    *(uint *)((longlong)param_1 + 0x2be4) = *(uint *)((longlong)param_1 + 0x2be4) & 0xfffffffd;
    *(undefined4 *)(param_1 + 0x560) =
         *(undefined4 *)(&DAT_180062b70 + (longlong)*(int *)((longlong)param_1 + 0x2c0c) * 4);
  }
  *(undefined1 *)(param_1 + 0x58f) = 1;
  if (((int)param_1[0x542] == 0) || (iVar3 != 0)) {
    uVar2 = 0xff0000;
  }
  else {
    uVar2 = 0;
  }
  *(uint *)((longlong)param_1 + 0x2cac) = *(uint *)((longlong)param_1 + 0x2cac) & 0xffff;
  *(uint *)((longlong)param_1 + 0x2cac) = *(uint *)((longlong)param_1 + 0x2cac) | uVar2;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2c7c) = 1;
  *(int *)(param_1 + 0x543) = param_2;
  return;
}

