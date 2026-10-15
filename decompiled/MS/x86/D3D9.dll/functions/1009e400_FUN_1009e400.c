/*
 * FUN_1009e400 at 1009e400
 * undefined4 __stdcall FUN_1009e400(int param_1, int param_2, undefined4 * param_3, uint * param_4)
 * Address ranges: 1009e400-1009e44e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009e400(int param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  iVar1 = param_1;
  puVar3 = (uint *)(*(int *)(param_1 + -0x3c) + -0x58e4);
  if (*(int *)(param_1 + -0x3c) == 0) {
    puVar3 = (uint *)&DAT_00000dd0;
  }
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*puVar3 >> 2) & 1);
  uVar2 = FUN_10011b87((void *)(iVar1 + -0x48),param_2,param_3,param_4);
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar2;
}

