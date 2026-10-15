/*
 * FUN_18005f160 at 18005f160
 * undefined __fastcall FUN_18005f160(longlong * param_1, int param_2, undefined4 * param_3)
 * Address ranges: 18005f160-18005f22d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005f160(longlong *param_1,int param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar4;
  
  uVar3 = param_2 * 4;
  uVar4 = (ulonglong)uVar3;
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  uVar5 = (ulonglong)(uVar3 + 1);
  *(undefined4 *)((longlong)param_1 + uVar4 * 4 + 0x6e20) = *param_3;
  uVar2 = (ulonglong)(uVar3 + 2);
  uVar1 = (ulonglong)(uVar3 + 3);
  *(undefined4 *)((longlong)param_1 + uVar5 * 4 + 0x6e20) = param_3[1];
  *(undefined4 *)((longlong)param_1 + uVar2 * 4 + 0x6e20) = param_3[2];
  *(undefined4 *)((longlong)param_1 + uVar1 * 4 + 0x6e20) = param_3[3];
  *(undefined1 *)((longlong)param_1 + 0xf691) = 1;
  *(undefined4 *)((longlong)param_1 + uVar4 * 4 + 0x6470) = *param_3;
  *(undefined4 *)((longlong)param_1 + uVar5 * 4 + 0x6470) = param_3[1];
  *(undefined4 *)((longlong)param_1 + uVar2 * 4 + 0x6470) = param_3[2];
  *(undefined4 *)((longlong)param_1 + uVar1 * 4 + 0x6470) = param_3[3];
  *(undefined1 *)((longlong)param_1 + 0xf6c3) = 1;
  *(undefined4 *)((longlong)param_1 + uVar4 * 4 + 0x51d0) = *param_3;
  *(undefined4 *)((longlong)param_1 + uVar5 * 4 + 0x51d0) = param_3[1];
  *(undefined4 *)((longlong)param_1 + uVar2 * 4 + 0x51d0) = param_3[2];
  *(undefined4 *)((longlong)param_1 + uVar1 * 4 + 0x51d0) = param_3[3];
  *(undefined1 *)((longlong)param_1 + 0xf6b4) = 1;
  return;
}

