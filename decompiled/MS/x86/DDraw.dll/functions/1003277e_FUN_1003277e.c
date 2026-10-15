/*
 * FUN_1003277e at 1003277e
 * undefined4 __thiscall FUN_1003277e(void * this, uint param_1, uint param_2, int * param_3, int * param_4, char param_5)
 * Address ranges: 1003277e-100327ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1003277e(void *this,uint param_1,uint param_2,int *param_3,int *param_4,char param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((*(uint *)((int)this + 0x154) >> 0xb & 1) == 0) {
    iVar2 = *(int *)((int)this + 4);
    cVar1 = (**(code **)(**(int **)(iVar2 + 0x50) + 0x14))
                      (*(undefined4 *)(iVar2 + 0x6c),*(undefined4 *)(iVar2 + 0x70));
    if (cVar1 != '\0') {
      FUN_1002b35b((int *)((int)this + 0x20));
    }
    uVar3 = 0x80004005;
    iVar2 = FUN_10006277(*(void **)((int)this + 4),param_1,param_2,param_3,param_4,param_5);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else if (iVar2 == 1) {
      uVar3 = 0x8876021c;
    }
  }
  else {
    *param_3 = *(int *)((int)this + 0x174);
    *param_4 = *(int *)((int)this + 0x160);
  }
  return uVar3;
}

