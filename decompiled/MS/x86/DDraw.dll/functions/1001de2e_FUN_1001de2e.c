/*
 * FUN_1001de2e at 1001de2e
 * undefined __fastcall FUN_1001de2e(int * param_1, int param_2)
 * Address ranges: 1001de2e-1001df90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001de2e(int *param_1,int param_2)

{
  uint *puVar1;
  int in_stack_00000014;
  
  puVar1 = (uint *)(param_2 + 0xc);
  if (*puVar1 < 0x50) {
    FUN_100569bf((int)puVar1,2,'\0');
    FUN_100575ba((int *)puVar1,param_1,0x29);
    FUN_100575ba((int *)puVar1,param_1,0x29);
    FUN_100575ba((int *)puVar1,param_1,0x29);
    FUN_100575ba((int *)puVar1,param_1,0x3c);
  }
  else {
    if (in_stack_00000014 == 0) {
      FUN_100569bf((int)puVar1,4,'\0');
    }
    FUN_100575ba((int *)puVar1,param_1,0x29);
  }
  FUN_100575ba((int *)puVar1,param_1,0x3c);
  FUN_100575ba((int *)puVar1,param_1,0x3c);
  return;
}

