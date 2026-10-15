/*
 * FUN_1000ceb0 at 1000ceb0
 * undefined __fastcall FUN_1000ceb0(int param_1)
 * Address ranges: 1000ceb0-1000cf4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000ceb0(int param_1)

{
  int *piVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = *(undefined4 *)(param_1 + 0x368c);
  local_8 = *(undefined4 *)(param_1 + 0x3690);
  piVar1 = *(int **)(*(int *)(param_1 + 0x3688) + 4);
  (**(code **)(*piVar1 + 0x1c))(piVar1,0,2,&local_c);
  piVar1 = *(int **)(*(int *)(param_1 + 0x3688) + 4);
  (**(code **)(*piVar1 + 0x40))(piVar1,0,2,&local_c);
  local_18 = *(undefined4 *)(param_1 + 0x36a0);
  local_14 = *(undefined4 *)(param_1 + 0x36a4);
  local_10 = *(undefined4 *)(param_1 + 0x36a8);
  FUN_100476d0(*(void **)(param_1 + 0x3680),*(int *)(param_1 + 0x3684),8,3,(int)&local_18);
  FUN_100476d0(*(void **)(param_1 + 0x3680),*(int *)(param_1 + 0x3684),0xc,1,param_1 + 14000);
  return;
}

