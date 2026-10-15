/*
 * FUN_100c8118 at 100c8118
 * undefined __stdcall FUN_100c8118(int * param_1, undefined8 * param_2, undefined8 * param_3)
 * Address ranges: 100c8118-100c8160
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100c8118(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_5c [8];
  int aiStack_54 [5];
  undefined1 local_40 [60];
  
  (**(code **)(*param_1 + 0x28))(param_1,local_40);
  (**(code **)(*param_1 + 0x38))(param_1,auStack_5c,&stack0xffffffa0);
  uVar1 = FUN_100c7ebc(aiStack_54);
  *param_2 = uVar1;
  *param_3 = uVar1;
  return;
}

