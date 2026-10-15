/*
 * FUN_1009f0fc at 1009f0fc
 * undefined4 __stdcall FUN_1009f0fc(int param_1, uint param_2, uint * param_3, uint * param_4, uint param_5)
 * Address ranges: 1009f0fc-1009f16e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009f0fc(int param_1,uint param_2,uint *param_3,uint *param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  
  uVar2 = param_2;
  iVar1 = param_1;
  uVar4 = 0x8876086c;
  if ((*(char *)(param_1 + -0x10) != '\0') && (param_2 < *(ushort *)(param_1 + -0x98))) {
    puVar3 = (uint *)(*(int *)(param_1 + -0xb4) + -0x58e4);
    if (*(int *)(param_1 + -0xb4) == 0) {
      puVar3 = (uint *)&DAT_00000dd0;
    }
    FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*puVar3 >> 2) & 1);
    uVar4 = FUN_10015102(*(void **)(iVar1 + -0x90 + uVar2 * 4),param_3,param_4,param_5);
    FUN_10003e89((char *)((int)&param_1 + 3));
  }
  return uVar4;
}

