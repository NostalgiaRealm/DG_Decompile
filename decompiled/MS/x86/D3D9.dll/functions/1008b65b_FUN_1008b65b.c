/*
 * FUN_1008b65b at 1008b65b
 * undefined __fastcall FUN_1008b65b(int * param_1, uint * param_2)
 * Address ranges: 1008b65b-1008b6e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1008b65b(int *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = param_2 + 3;
  uVar4 = *param_2 >> 0xc & 1;
  uVar2 = 1;
  if (uVar4 != 0) {
    uVar2 = 0x3c;
  }
  uVar3 = 0x20;
  if (uVar4 != 0) {
    uVar3 = 0x27;
  }
  FUN_100c3be1((int *)puVar1,param_1,uVar3);
  FUN_100c3be1((int *)puVar1,param_1,uVar2);
  FUN_100c3be1((int *)puVar1,param_1,uVar2);
  return;
}

