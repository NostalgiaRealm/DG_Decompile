/*
 * FUN_1006c448 at 1006c448
 * undefined __stdcall FUN_1006c448(int * param_1, int param_2)
 * Address ranges: 1006c448-1006c565
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006c448(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int in_stack_00000018;
  
  piVar1 = (int *)(param_2 + 0x18);
  uVar2 = FUN_100c2e34((int)piVar1,1,'\0');
  if (in_stack_00000018 == 0) {
    FUN_100c3be1(piVar1,param_1,0x10);
    FUN_100c3be1(piVar1,param_1,0x44);
  }
  else if (*piVar1 == 0x10040) {
    FUN_100c3be1(piVar1,param_1,0xe);
  }
  else {
    FUN_100c3be1(piVar1,param_1,0x81);
  }
  FUN_100c3be1(piVar1,param_1,0x38);
  FUN_100c3be1(piVar1,param_1,0x27);
  FUN_100c3be1(piVar1,param_1,1);
  FUN_100c2ed2((int)piVar1,uVar2);
  return;
}

