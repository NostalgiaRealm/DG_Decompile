/*
 * FUN_100148a0 at 100148a0
 * uint __thiscall FUN_100148a0(void * this, int param_1, uint param_2, uint * param_3, RECT * param_4, uint param_5)
 * Address ranges: 100148a0-1001491e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_100148a0(void *this,int param_1,uint param_2,uint *param_3,RECT *param_4,uint param_5)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  iVar1 = param_1;
  uVar3 = 0x8876086c;
  if ((*(char *)((int)this + 0x6c) != '\0') && (param_2 < *(ushort *)((int)this + 0x30))) {
    puVar2 = (uint *)(*(int *)((int)this + 0x14) + -0x58e4);
    if (*(int *)((int)this + 0x14) == 0) {
      puVar2 = (uint *)&DAT_00000dd0;
    }
    FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*puVar2 >> 2) & 1);
    uVar3 = FUN_1001273f(*(void **)(*(int *)((int)this + 0x38) + (iVar1 * 0x10 + param_2) * 4),
                         param_3,param_4,param_5,(uint)(*(int *)((int)this + 0x60) == 0),0);
    FUN_10003e89((char *)((int)&param_1 + 3));
  }
  return uVar3;
}

