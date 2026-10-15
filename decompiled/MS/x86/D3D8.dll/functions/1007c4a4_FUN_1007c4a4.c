/*
 * FUN_1007c4a4 at 1007c4a4
 * undefined4 __stdcall FUN_1007c4a4(int param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 1007c4a4-1007c510
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007c4a4(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = param_3;
  iVar1 = param_1;
  uVar3 = 0;
  if (((param_2 < 8) && (param_3 != 0)) && (param_3 < 0x1d)) {
    if (*(char *)(param_3 * 0xc + *(int *)(param_1 + -0x58d8)) == '\0') {
      uVar3 = 0x8876086c;
    }
    else {
      FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
      FUN_10013b45((void *)(iVar1 + -0x58e0),param_2,uVar2,param_4);
      FUN_10003881((char *)((int)&param_1 + 3));
    }
  }
  return uVar3;
}

