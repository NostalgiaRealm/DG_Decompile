/*
 * FUN_180057fc0 at 180057fc0
 * undefined FUN_180057fc0(void)
 * Address ranges: 180057fc0-18005809b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057fc0(longlong *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  uVar4 = param_2 * 4;
  uVar1 = uVar4 + 1;
  uVar2 = uVar4 + 2;
  *(undefined4 *)((longlong)param_1 + (ulonglong)uVar4 * 4 + 0x6e20) = *param_3;
  uVar3 = uVar4 + 3;
  *(undefined4 *)((longlong)param_1 + (ulonglong)uVar1 * 4 + 0x6e20) = param_3[1];
  *(undefined4 *)((longlong)param_1 + (ulonglong)uVar2 * 4 + 0x6e20) = param_3[2];
  *(undefined4 *)((longlong)param_1 + (ulonglong)uVar3 * 4 + 0x6e20) = param_3[3];
  *(undefined1 *)((longlong)param_1 + 0xf691) = 1;
  *(undefined4 *)((longlong)param_1 + (ulonglong)uVar4 * 4 + 0x6470) = *param_3;
  *(undefined4 *)((longlong)param_1 + (ulonglong)uVar1 * 4 + 0x6470) = param_3[1];
  *(undefined4 *)((longlong)param_1 + (ulonglong)uVar2 * 4 + 0x6470) = param_3[2];
  *(undefined4 *)((longlong)param_1 + (ulonglong)uVar3 * 4 + 0x6470) = param_3[3];
  *(undefined1 *)((longlong)param_1 + 0xf6c3) = 1;
  *(undefined4 *)((longlong)param_1 + (ulonglong)uVar4 * 4 + 0x51d0) = *param_3;
  *(undefined4 *)((longlong)param_1 + (ulonglong)uVar1 * 4 + 0x51d0) = param_3[1];
  *(undefined4 *)((longlong)param_1 + (ulonglong)uVar2 * 4 + 0x51d0) = param_3[2];
  *(undefined4 *)((longlong)param_1 + (ulonglong)uVar3 * 4 + 0x51d0) = param_3[3];
  *(undefined1 *)((longlong)param_1 + 0xf6b4) = 1;
  return;
}

