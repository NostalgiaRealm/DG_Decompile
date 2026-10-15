/*
 * FUN_1007f982 at 1007f982
 * undefined4 __stdcall FUN_1007f982(int param_1, uint param_2, uint param_3, undefined4 * param_4)
 * Address ranges: 1007f982-1007f9f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007f982(int param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  uVar2 = 0x8876086c;
  if ((((param_2 < 8) && (param_3 != 0)) && (param_3 < 0x1d)) && (param_4 != (undefined4 *)0x0)) {
    if (*(char *)(param_3 * 0xc + *(int *)(iVar1 + -0x58d8)) == '\0') {
      *param_4 = 0;
    }
    else {
      uVar2 = 0;
      *param_4 = *(undefined4 *)(iVar1 + -0x539c + (param_2 * 0x1d + param_3) * 4);
    }
  }
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar2;
}

