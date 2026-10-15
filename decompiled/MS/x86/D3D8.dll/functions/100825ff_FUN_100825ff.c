/*
 * FUN_100825ff at 100825ff
 * undefined4 __stdcall FUN_100825ff(int param_1, uint param_2, int * param_3, uint * param_4, uint param_5)
 * Address ranges: 100825ff-10082671
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100825ff(int param_1,uint param_2,int *param_3,uint *param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  
  uVar2 = param_2;
  iVar1 = param_1;
  uVar4 = 0x8876086c;
  if ((*(char *)(param_1 + -0x10) != '\0') && (param_2 < *(ushort *)(param_1 + -0x98))) {
    puVar3 = (uint *)(*(int *)(param_1 + -0xb4) + -0x4dd4);
    if (*(int *)(param_1 + -0xb4) == 0) {
      puVar3 = (uint *)&DAT_00000b0c;
    }
    FUN_10003838((void *)((int)&param_1 + 3),(byte)(*puVar3 >> 2) & 1);
    uVar4 = FUN_10011231(*(void **)(iVar1 + -0x90 + uVar2 * 4),param_3,param_4,param_5);
    FUN_10003881((char *)((int)&param_1 + 3));
  }
  return uVar4;
}

