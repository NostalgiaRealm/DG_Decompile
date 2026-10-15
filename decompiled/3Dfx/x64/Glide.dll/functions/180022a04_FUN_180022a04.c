/*
 * FUN_180022a04 at 180022a04
 * undefined __fastcall FUN_180022a04(longlong * param_1, int param_2)
 * Address ranges: 180022a04-180022ae2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180022a04(longlong *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  FUN_1800214d4((longlong *)param_1[0x630]);
  (**(code **)(*param_1 + 0x2a0))();
  *(int *)((longlong)param_1 + 0x2c14) = param_2;
  bVar1 = param_2 - 3U < 2;
  if ((param_2 - 1U < 2) || (bVar1)) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x54c) = iVar3;
  if (bVar1) {
    *(uint *)((longlong)param_1 + 0x2b4c) = *(uint *)((longlong)param_1 + 0x2b4c) | 2;
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x2a6c) = 0;
    *(uint *)((longlong)param_1 + 0x2b4c) = *(uint *)((longlong)param_1 + 0x2b4c) & 0xfffffffd;
    *(undefined4 *)(param_1 + 0x54d) =
         *(undefined4 *)(&DAT_180060e58 + (longlong)*(int *)((longlong)param_1 + 0x2b74) * 4);
  }
  *(undefined1 *)(param_1 + 0x57c) = 1;
  if (((int)param_1[0x533] == 0) || (iVar3 != 0)) {
    uVar2 = 0xff0000;
  }
  else {
    uVar2 = 0;
  }
  *(uint *)((longlong)param_1 + 0x2c0c) = *(uint *)((longlong)param_1 + 0x2c0c) & 0xffff;
  *(uint *)((longlong)param_1 + 0x2c0c) = *(uint *)((longlong)param_1 + 0x2c0c) | uVar2;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2be4) = 1;
  *(int *)(param_1 + 0x534) = param_2;
  return;
}

