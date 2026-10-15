/*
 * FUN_1009f086 at 1009f086
 * undefined4 __stdcall FUN_1009f086(int param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 1009f086-1009f0fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009f086(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  iVar1 = param_1;
  puVar2 = (uint *)(*(int *)(param_1 + -0xb4) + -0x58e4);
  if (*(int *)(param_1 + -0xb4) == 0) {
    puVar2 = (uint *)&DAT_00000dd0;
  }
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*puVar2 >> 2) & 1);
  uVar3 = 0x8876086c;
  if ((param_2 < *(ushort *)(iVar1 + -0x98)) && (param_3 != (undefined4 *)0x0)) {
    uVar3 = FUN_1009ea53(*(int *)(iVar1 + -0x90 + param_2 * 4) + 0x90,0x100d1380,param_3);
  }
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar3;
}

