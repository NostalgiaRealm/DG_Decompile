/*
 * FUN_1000e07f at 1000e07f
 * undefined __thiscall FUN_1000e07f(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, uint param_9, int param_10)
 * Address ranges: 1000e07f-1000e1c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1000e07f(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,uint param_9,int param_10)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    bVar3 = FUN_100051b3(this,4);
    if (bVar3) {
      piVar2 = *(int **)((int)this + 0xc);
      uVar4 = ~-(uint)(2 < param_9) & param_9;
      if ((((((param_1 != *(int *)((int)piVar2 + 0x191)) ||
             (param_2 != *(int *)((int)piVar2 + 0x195))) ||
            (param_3 != *(int *)((int)piVar2 + 0x199))) ||
           ((param_4 != *(int *)((int)piVar2 + 0x19d) || (param_5 != *(int *)((int)piVar2 + 0x1a1)))
           )) || ((param_6 != *(int *)((int)piVar2 + 0x1a5) ||
                  ((param_7 != *(int *)((int)piVar2 + 0x1a9) ||
                   (param_8 != *(int *)((int)piVar2 + 0x1ad))))))) ||
         ((uVar4 != *(uint *)((int)piVar2 + 0x1b1) || (param_10 != *(int *)((int)piVar2 + 0x1b5)))))
      {
        (**(code **)(*piVar2 + 0x170))
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar4,param_10);
        *(int *)((int)piVar2 + 0x191) = param_1;
        *(int *)((int)piVar2 + 0x195) = param_2;
        *(int *)((int)piVar2 + 0x199) = param_3;
        *(int *)((int)piVar2 + 0x19d) = param_4;
        *(int *)((int)piVar2 + 0x1a1) = param_5;
        *(int *)((int)piVar2 + 0x1a5) = param_6;
        *(int *)((int)piVar2 + 0x1a9) = param_7;
        *(int *)((int)piVar2 + 0x1ad) = param_8;
        *(uint *)((int)piVar2 + 0x1b1) = uVar4;
        *(int *)((int)piVar2 + 0x1b5) = param_10;
        FUN_1000616b((int)this);
        *(undefined4 *)(*(int *)((int)this + 0xc) + 0x3d0) = 0;
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

