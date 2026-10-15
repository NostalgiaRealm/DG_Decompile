/*
 * FUN_10082672 at 10082672
 * undefined4 __stdcall FUN_10082672(int param_1, uint param_2)
 * Address ranges: 10082672-100826d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10082672(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  
  uVar2 = param_2;
  iVar1 = param_1;
  uVar4 = 0x8876086c;
  if (param_2 < *(ushort *)(param_1 + -0x98)) {
    puVar3 = (uint *)(*(int *)(param_1 + -0xb4) + -0x4dd4);
    if (*(int *)(param_1 + -0xb4) == 0) {
      puVar3 = (uint *)&DAT_00000b0c;
    }
    FUN_10003838((void *)((int)&param_1 + 3),(byte)(*puVar3 >> 2) & 1);
    uVar4 = FUN_1001142c(*(int *)(iVar1 + -0x90 + uVar2 * 4));
    FUN_10003881((char *)((int)&param_1 + 3));
  }
  return uVar4;
}

