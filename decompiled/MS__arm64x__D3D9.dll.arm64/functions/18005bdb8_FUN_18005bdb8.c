/*
 * FUN_18005bdb8 at 18005bdb8
 * undefined FUN_18005bdb8(void)
 * Address ranges: 18005bdb8-18005be37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005bdb8(float param_1,longlong *param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*param_2 + 0x1d8))(param_2,0);
  iVar2 = (int)param_1;
  *(float *)(param_2 + 0x1d5) = param_1;
  *(undefined1 *)((longlong)param_2 + 0xeac) = param_3;
  iVar1 = iVar2;
  if (8 < iVar2) {
    iVar1 = 8;
  }
  if (iVar2 < 1) {
    iVar1 = 1;
  }
  *(int *)(param_2 + 0xd2d) = iVar1;
  *(undefined1 *)((longlong)param_2 + 0xf691) = 1;
  *(undefined1 *)((longlong)param_2 + 0xf6b4) = 1;
  *(int *)(param_2 + 0xa37) = iVar1;
  return;
}

