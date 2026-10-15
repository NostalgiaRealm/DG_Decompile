/*
 * FUN_10081a5a at 10081a5a
 * undefined4 __stdcall FUN_10081a5a(int param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 10081a5a-10081ac4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10081a5a(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  iVar1 = param_1;
  puVar2 = (uint *)(*(int *)(param_1 + -100) + -0x4dd4);
  if (*(int *)(param_1 + -100) == 0) {
    puVar2 = (uint *)&DAT_00000b0c;
  }
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*puVar2 >> 2) & 1);
  uVar3 = 0x8876086c;
  if ((param_2 < *(ushort *)(iVar1 + -0x48)) && (param_3 != (undefined4 *)0x0)) {
    uVar3 = FUN_100810e8(*(int *)(iVar1 + 0x10 + param_2 * 4) + 0x5c,0x100af390,param_3);
  }
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar3;
}

