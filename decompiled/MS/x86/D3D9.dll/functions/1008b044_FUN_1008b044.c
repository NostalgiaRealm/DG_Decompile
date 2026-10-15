/*
 * FUN_1008b044 at 1008b044
 * undefined __fastcall FUN_1008b044(int * param_1, int param_2)
 * Address ranges: 1008b044-1008b1a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1008b044(int *param_1,int param_2)

{
  uint *puVar1;
  int in_stack_00000014;
  
  puVar1 = (uint *)(param_2 + 0xc);
  if (*puVar1 < 0x50) {
    FUN_100c2e34((int)puVar1,2,'\0');
    FUN_100c3be1((int *)puVar1,param_1,0x29);
    FUN_100c3be1((int *)puVar1,param_1,0x29);
    FUN_100c3be1((int *)puVar1,param_1,0x29);
    FUN_100c3be1((int *)puVar1,param_1,0x3c);
  }
  else {
    if (in_stack_00000014 == 0) {
      FUN_100c2e34((int)puVar1,4,'\0');
    }
    FUN_100c3be1((int *)puVar1,param_1,0x29);
  }
  FUN_100c3be1((int *)puVar1,param_1,0x3c);
  FUN_100c3be1((int *)puVar1,param_1,0x3c);
  return;
}

