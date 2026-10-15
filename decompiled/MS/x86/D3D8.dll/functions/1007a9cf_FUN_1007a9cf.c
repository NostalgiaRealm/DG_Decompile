/*
 * FUN_1007a9cf at 1007a9cf
 * undefined __fastcall FUN_1007a9cf(int * param_1)
 * Address ranges: 1007a9cf-1007aa3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1007a9cf(int *param_1)

{
  uint *puVar1;
  undefined4 uStack_8;
  
  puVar1 = (uint *)(param_1[5] + -0x4dd4);
  if (param_1[5] == 0) {
    puVar1 = (uint *)&DAT_00000b0c;
  }
  uStack_8 = param_1;
  FUN_10003838((void *)((int)&uStack_8 + 3),(byte)(*puVar1 >> 2) & 1);
  FUN_1000658f((void *)(-(uint)(param_1[5] != 0) & param_1[5] - 0x58e0U),(int)param_1);
  FUN_100108d3((int)param_1);
  FUN_10010191(param_1);
  FUN_1007a8dd(param_1);
  FUN_100ad48c(param_1);
  FUN_10003881((char *)((int)&uStack_8 + 3));
  return;
}

