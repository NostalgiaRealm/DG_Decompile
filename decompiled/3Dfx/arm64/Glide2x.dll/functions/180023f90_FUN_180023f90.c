/*
 * FUN_180023f90 at 180023f90
 * undefined __cdecl FUN_180023f90(longlong * param_1, int param_2)
 * Address ranges: 180023f90-18002407b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023f90(longlong *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_1800228b0((longlong *)param_1[0x630]);
  (**(code **)(*param_1 + 0x2a0))(param_1);
  *(int *)((longlong)param_1 + 0x2c14) = param_2;
  bVar2 = param_2 - 3U < 2;
  bVar1 = param_2 - 1U < 2;
  uVar4 = (uint)(bVar1 || bVar2);
  *(uint *)(param_1 + 0x54c) = uVar4;
  if ((bVar1 || bVar2) && bVar2) {
    *(uint *)((longlong)param_1 + 0x2b4c) = *(uint *)((longlong)param_1 + 0x2b4c) | 2;
  }
  else {
    *(uint *)((longlong)param_1 + 0x2b4c) = *(uint *)((longlong)param_1 + 0x2b4c) & 0xfffffffd;
    *(undefined4 *)(param_1 + 0x54d) =
         *(undefined4 *)(&DAT_180061e00 + (longlong)*(int *)((longlong)param_1 + 0x2b74) * 4);
    *(undefined4 *)((longlong)param_1 + 0x2a6c) = 0;
  }
  *(undefined1 *)(param_1 + 0x57c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2be4) = 1;
  *(int *)(param_1 + 0x534) = param_2;
  uVar3 = 0;
  if ((int)param_1[0x533] == 0 || uVar4 != 0) {
    uVar3 = 0xff0000;
  }
  *(uint *)((longlong)param_1 + 0x2c0c) = *(uint *)((longlong)param_1 + 0x2c0c) & 0xffff | uVar3;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

