/*
 * FUN_10010987 at 10010987
 * uint __thiscall FUN_10010987(void * this, int param_1, uint param_2, int * param_3, RECT * param_4, uint param_5)
 * Address ranges: 10010987-10010a04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_10010987(void *this,int param_1,uint param_2,int *param_3,RECT *param_4,uint param_5)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  iVar1 = param_1;
  uVar3 = 0x8876086c;
  if ((*(char *)((int)this + 0x6c) != '\0') && (param_2 < *(ushort *)((int)this + 0x30))) {
    puVar2 = (uint *)(*(int *)((int)this + 0x14) + -0x4dd4);
    if (*(int *)((int)this + 0x14) == 0) {
      puVar2 = (uint *)&DAT_00000b0c;
    }
    FUN_10003838((void *)((int)&param_1 + 3),(byte)(*puVar2 >> 2) & 1);
    uVar3 = FUN_1000e995(*(void **)(*(int *)((int)this + 0x38) + (iVar1 * 0x10 + param_2) * 4),
                         param_3,param_4,param_5,(uint)(*(int *)((int)this + 0x60) == 0));
    FUN_10003881((char *)((int)&param_1 + 3));
  }
  return uVar3;
}

