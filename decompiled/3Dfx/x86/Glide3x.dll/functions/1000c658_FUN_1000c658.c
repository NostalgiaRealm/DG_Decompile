/*
 * FUN_1000c658 at 1000c658
 * undefined __fastcall FUN_1000c658(int param_1)
 * Address ranges: 1000c658-1000c6f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000c658(int param_1)

{
  int *piVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = *(undefined4 *)(param_1 + 0x330c);
  local_8 = *(undefined4 *)(param_1 + 0x3310);
  piVar1 = *(int **)(*(int *)(param_1 + 0x3308) + 4);
  (**(code **)(*piVar1 + 0x1c))(piVar1,0,2,&local_c);
  piVar1 = *(int **)(*(int *)(param_1 + 0x3308) + 4);
  (**(code **)(*piVar1 + 0x40))(piVar1,0,2,&local_c);
  local_18 = *(undefined4 *)(param_1 + 0x3320);
  local_14 = *(undefined4 *)(param_1 + 0x3324);
  local_10 = *(undefined4 *)(param_1 + 0x3328);
  FUN_100442c7(*(void **)(param_1 + 0x3300),*(int *)(param_1 + 0x3304),8,3,(int)&local_18);
  FUN_100442c7(*(void **)(param_1 + 0x3300),*(int *)(param_1 + 0x3304),0xc,1,param_1 + 0x3330);
  return;
}

