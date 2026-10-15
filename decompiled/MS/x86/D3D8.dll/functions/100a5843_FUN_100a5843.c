/*
 * FUN_100a5843 at 100a5843
 * undefined __stdcall FUN_100a5843(int * param_1, undefined8 * param_2, undefined8 * param_3)
 * Address ranges: 100a5843-100a588b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a5843(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_5c [8];
  int aiStack_54 [5];
  undefined1 local_40 [60];
  
  (**(code **)(*param_1 + 0x28))(param_1,local_40);
  (**(code **)(*param_1 + 0x38))(param_1,auStack_5c,&stack0xffffffa0);
  uVar1 = FUN_100a55e7(aiStack_54);
  *param_2 = uVar1;
  *param_3 = uVar1;
  return;
}

