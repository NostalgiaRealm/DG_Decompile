/*
 * FUN_1001c4c2 at 1001c4c2
 * undefined __fastcall FUN_1001c4c2(int * param_1, uint * param_2, undefined4 param_3, undefined4 param_4, int param_5)
 * Address ranges: 1001c4c2-1001c588
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_1001c4c2(int *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  
  uVar1 = (-(uint)((*param_2 & 0x1000) != 0) & 7) + 0x20;
  if (param_5 == 0) {
    FUN_100575ba((int *)(param_2 + 3),param_1,1);
    FUN_100575ba((int *)(param_2 + 3),param_1,uVar1);
  }
  else {
    FUN_100575ba((int *)(param_2 + 3),param_1,uVar1);
  }
  return;
}

