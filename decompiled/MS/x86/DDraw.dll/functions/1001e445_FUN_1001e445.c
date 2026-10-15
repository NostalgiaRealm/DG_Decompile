/*
 * FUN_1001e445 at 1001e445
 * undefined __fastcall FUN_1001e445(int * param_1, uint * param_2)
 * Address ranges: 1001e445-1001e4cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001e445(int *param_1,uint *param_2)

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
  FUN_100575ba((int *)puVar1,param_1,uVar3);
  FUN_100575ba((int *)puVar1,param_1,uVar2);
  FUN_100575ba((int *)puVar1,param_1,uVar2);
  return;
}

