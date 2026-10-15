/*
 * FUN_10082589 at 10082589
 * undefined4 __stdcall FUN_10082589(int param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 10082589-100825fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10082589(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  iVar1 = param_1;
  puVar2 = (uint *)(*(int *)(param_1 + -0xb4) + -0x4dd4);
  if (*(int *)(param_1 + -0xb4) == 0) {
    puVar2 = (uint *)&DAT_00000b0c;
  }
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*puVar2 >> 2) & 1);
  uVar3 = 0x8876086c;
  if ((param_2 < *(ushort *)(iVar1 + -0x98)) && (param_3 != (undefined4 *)0x0)) {
    uVar3 = FUN_10081f63(*(int *)(iVar1 + -0x90 + param_2 * 4) + 0x94,0x100af3a0,param_3);
  }
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar3;
}

