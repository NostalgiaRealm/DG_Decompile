/*
 * FUN_1003830f at 1003830f
 * undefined __stdcall FUN_1003830f(int * param_1, int param_2)
 * Address ranges: 1003830f-1003842c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003830f(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int in_stack_00000018;
  
  piVar1 = (int *)(param_2 + 0x10);
  uVar2 = FUN_10056ee5((int)piVar1,1,'\0');
  if (in_stack_00000018 == 0) {
    FUN_10057c8a(piVar1,param_1,0x10);
    FUN_10057c8a(piVar1,param_1,0x44);
  }
  else if (*piVar1 == 0x10040) {
    FUN_10057c8a(piVar1,param_1,0xe);
  }
  else {
    FUN_10057c8a(piVar1,param_1,0x81);
  }
  FUN_10057c8a(piVar1,param_1,0x38);
  FUN_10057c8a(piVar1,param_1,0x27);
  FUN_10057c8a(piVar1,param_1,1);
  FUN_10056fd9((int)piVar1,uVar2);
  return;
}

