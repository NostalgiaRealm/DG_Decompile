/*
 * FUN_1009ae87 at 1009ae87
 * undefined4 __stdcall FUN_1009ae87(int param_1, uint param_2, uint param_3, undefined4 * param_4)
 * Address ranges: 1009ae87-1009aefd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009ae87(int param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  uVar2 = 0x8876086c;
  if ((((param_2 < 8) && (param_3 != 0)) && (param_3 < 0x21)) && (param_4 != (undefined4 *)0x0)) {
    if (*(char *)(param_3 * 0xc + *(int *)(iVar1 + -0x66ac)) == '\0') {
      *param_4 = 0;
    }
    else {
      uVar2 = 0;
      *param_4 = *(undefined4 *)(iVar1 + -0x5f3c + (param_2 * 0x21 + param_3) * 4);
    }
  }
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar2;
}

