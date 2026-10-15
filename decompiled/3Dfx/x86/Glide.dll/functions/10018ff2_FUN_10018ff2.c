/*
 * FUN_10018ff2 at 10018ff2
 * undefined __fastcall FUN_10018ff2(int param_1)
 * Address ranges: 10018ff2-1001908d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10018ff2(int param_1)

{
  int *piVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = *(undefined4 *)(param_1 + 0x318c);
  local_8 = *(undefined4 *)(param_1 + 0x3190);
  piVar1 = *(int **)(*(int *)(param_1 + 0x3188) + 4);
  (**(code **)(*piVar1 + 0x1c))(piVar1,0,2,&local_c);
  piVar1 = *(int **)(*(int *)(param_1 + 0x3188) + 4);
  (**(code **)(*piVar1 + 0x40))(piVar1,0,2,&local_c);
  local_18 = *(undefined4 *)(param_1 + 0x31a0);
  local_14 = *(undefined4 *)(param_1 + 0x31a4);
  local_10 = *(undefined4 *)(param_1 + 0x31a8);
  FUN_10041b6f(*(void **)(param_1 + 0x3180),*(int *)(param_1 + 0x3184),8,3,(int)&local_18);
  FUN_10041b6f(*(void **)(param_1 + 0x3180),*(int *)(param_1 + 0x3184),0xc,1,param_1 + 0x31b0);
  return;
}

