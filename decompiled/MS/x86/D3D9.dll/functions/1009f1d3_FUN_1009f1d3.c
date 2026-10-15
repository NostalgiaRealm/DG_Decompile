/*
 * FUN_1009f1d3 at 1009f1d3
 * undefined4 __stdcall FUN_1009f1d3(int param_1, int * param_2)
 * Address ranges: 1009f1d3-1009f22d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009f1d3(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  uint *puVar3;
  undefined4 uVar4;
  
  iVar1 = param_1;
  puVar3 = (uint *)(*(int *)(param_1 + -0xb4) + -0x58e4);
  if (*(int *)(param_1 + -0xb4) == 0) {
    puVar3 = (uint *)&DAT_00000dd0;
  }
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*puVar3 >> 2) & 1);
  cVar2 = FUN_10015a1a((void *)(iVar1 + -200),0,param_2);
  uVar4 = 0;
  if (cVar2 == '\0') {
    uVar4 = 0x8876086c;
  }
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar4;
}

