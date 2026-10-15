/*
 * FUN_10094f7f at 10094f7f
 * undefined4 __stdcall FUN_10094f7f(int param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 10094f7f-10094feb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10094f7f(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = param_3;
  iVar1 = param_1;
  uVar3 = 0;
  if (((param_2 < 8) && (param_3 != 0)) && (param_3 < 0x21)) {
    if (*(char *)(param_3 * 0xc + *(int *)(param_1 + -0x66ac)) == '\0') {
      uVar3 = 0x8876086c;
    }
    else {
      FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
      FUN_10017bc8((void *)(iVar1 + -0x66b4),param_2,uVar2,param_4);
      FUN_10003e89((char *)((int)&param_1 + 3));
    }
  }
  return uVar3;
}

