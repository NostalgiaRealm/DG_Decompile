/*
 * FUN_1009f16f at 1009f16f
 * undefined4 __stdcall FUN_1009f16f(int param_1, uint param_2)
 * Address ranges: 1009f16f-1009f1d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009f16f(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  
  uVar2 = param_2;
  iVar1 = param_1;
  uVar4 = 0x8876086c;
  if (param_2 < *(ushort *)(param_1 + -0x98)) {
    puVar3 = (uint *)(*(int *)(param_1 + -0xb4) + -0x58e4);
    if (*(int *)(param_1 + -0xb4) == 0) {
      puVar3 = (uint *)&DAT_00000dd0;
    }
    FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*puVar3 >> 2) & 1);
    uVar4 = FUN_1001531c(*(int *)(iVar1 + -0x90 + uVar2 * 4));
    FUN_10003e89((char *)((int)&param_1 + 3));
  }
  return uVar4;
}

