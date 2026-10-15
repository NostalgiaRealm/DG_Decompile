/*
 * FUN_1000e1ca at 1000e1ca
 * undefined __thiscall FUN_1000e1ca(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9, uint param_10, int param_11)
 * Address ranges: 1000e1ca-1000e343
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1000e1ca(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,uint param_10,int param_11)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    UNLOCK();
    bVar2 = FUN_100051b3(this,4);
    if ((bVar2) && (param_1 < *(int *)(*(int *)((int)this + 0x1c) + 0x797))) {
      piVar1 = *(int **)((int)this + 0xc);
      iVar4 = param_1 * 0x9d;
      uVar3 = ~-(uint)(2 < param_10) & param_10;
      if (((param_2 != *(int *)(iVar4 + 0x21e + (int)piVar1)) ||
          ((((param_3 != *(int *)(iVar4 + 0x222 + (int)piVar1) ||
             (param_4 != *(int *)(iVar4 + 0x226 + (int)piVar1))) ||
            (param_5 != *(int *)(iVar4 + 0x22a + (int)piVar1))) ||
           ((param_6 != *(int *)(iVar4 + 0x22e + (int)piVar1) ||
            (param_7 != *(int *)(iVar4 + 0x232 + (int)piVar1))))))) ||
         ((param_8 != *(int *)(iVar4 + 0x236 + (int)piVar1) ||
          (((param_9 != *(int *)(iVar4 + 0x23a + (int)piVar1) ||
            (uVar3 != *(uint *)(iVar4 + 0x23e + (int)piVar1))) ||
           (param_11 != *(int *)(iVar4 + 0x242 + (int)piVar1))))))) {
        (**(code **)(*piVar1 + 0x174))
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,uVar3,
                   param_11);
        *(int *)(iVar4 + 0x21e + (int)piVar1) = param_2;
        *(int *)(iVar4 + 0x222 + (int)piVar1) = param_3;
        *(int *)(iVar4 + 0x226 + (int)piVar1) = param_4;
        *(int *)(iVar4 + 0x22a + (int)piVar1) = param_5;
        *(int *)(iVar4 + 0x22e + (int)piVar1) = param_6;
        *(int *)(iVar4 + 0x232 + (int)piVar1) = param_7;
        *(int *)(iVar4 + 0x236 + (int)piVar1) = param_8;
        *(int *)(iVar4 + 0x23a + (int)piVar1) = param_9;
        *(uint *)(iVar4 + 0x23e + (int)piVar1) = uVar3;
        *(int *)(iVar4 + 0x242 + (int)piVar1) = param_11;
        FUN_1000616b((int)this);
        *(undefined4 *)(*(int *)((int)this + 0xc) + 0x3d0) = 0;
      }
    }
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + -1;
    UNLOCK();
  }
  return;
}

