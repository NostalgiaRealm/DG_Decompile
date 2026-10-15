/*
 * FUN_18005c1d8 at 18005c1d8
 * undefined __cdecl FUN_18005c1d8(undefined8 param_1, longlong * param_2, ulonglong * param_3, ulonglong * param_4)
 * Address ranges: 18005c1d8-18005c23f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005c1d8(undefined8 param_1,longlong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  int aiStack_60 [16];
  
  (**(code **)(*param_2 + 0x50))(param_2,aiStack_60);
  uVar1 = (**(code **)(*param_2 + 0x70))(param_2,auStack_78,auStack_80);
  uVar2 = FUN_18005c008(uVar1,aiStack_60);
  *param_3 = uVar2;
  *param_4 = uVar2;
  return;
}

