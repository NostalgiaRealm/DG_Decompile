/*
 * FUN_100826d6 at 100826d6
 * undefined4 __stdcall FUN_100826d6(int param_1, int * param_2)
 * Address ranges: 100826d6-10082730
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100826d6(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  uint *puVar3;
  undefined4 uVar4;
  
  iVar1 = param_1;
  puVar3 = (uint *)(*(int *)(param_1 + -0xb4) + -0x4dd4);
  if (*(int *)(param_1 + -0xb4) == 0) {
    puVar3 = (uint *)&DAT_00000b0c;
  }
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*puVar3 >> 2) & 1);
  cVar2 = FUN_10011b37((void *)(iVar1 + -200),0,param_2);
  uVar4 = 0;
  if (cVar2 == '\0') {
    uVar4 = 0x8876086c;
  }
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar4;
}

