/*
 * FUN_1007abc8 at 1007abc8
 * undefined4 __stdcall FUN_1007abc8(int param_1, uint param_2, uint param_3, undefined4 * param_4)
 * Address ranges: 1007abc8-1007ac40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007abc8(int param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  uVar1 = param_2;
  uVar3 = 0x8876086c;
  puVar2 = (uint *)(*(int *)(param_1 + -100) + -0x4dd4);
  if (*(int *)(param_1 + -100) == 0) {
    puVar2 = (uint *)&DAT_00000b0c;
  }
  FUN_10003838((void *)((int)&param_2 + 3),(byte)(*puVar2 >> 2) & 1);
  if (((uVar1 < 6) && (param_3 < *(ushort *)(param_1 + -0x48))) && (param_4 != (undefined4 *)0x0)) {
    uVar3 = FUN_100810e8(*(int *)(param_1 + 0x10 + (uVar1 * 0x10 + param_3) * 4) + 0x5c,0x100af390,
                         param_4);
  }
  FUN_10003881((char *)((int)&param_2 + 3));
  return uVar3;
}

