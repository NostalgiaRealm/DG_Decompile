/*
 * FUN_1000df34 at 1000df34
 * undefined __thiscall FUN_1000df34(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, uint param_9, int param_10)
 * Address ranges: 1000df34-1000e07e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1000df34(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
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
      if ((((((param_1 != *(int *)((int)piVar2 + 0x169)) ||
             (param_2 != *(int *)((int)piVar2 + 0x16d))) ||
            (param_3 != *(int *)((int)piVar2 + 0x171))) ||
           ((param_4 != *(int *)((int)piVar2 + 0x175) || (param_5 != *(int *)((int)piVar2 + 0x179)))
           )) || ((param_6 != *(int *)((int)piVar2 + 0x17d) ||
                  ((param_7 != *(int *)((int)piVar2 + 0x181) ||
                   (param_8 != *(int *)((int)piVar2 + 0x185))))))) ||
         ((uVar4 != *(uint *)((int)piVar2 + 0x189) || (param_10 != *(int *)((int)piVar2 + 0x18d)))))
      {
        (**(code **)(*piVar2 + 0x16c))
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar4,param_10);
        *(int *)((int)piVar2 + 0x169) = param_1;
        *(int *)((int)piVar2 + 0x16d) = param_2;
        *(int *)((int)piVar2 + 0x171) = param_3;
        *(int *)((int)piVar2 + 0x175) = param_4;
        *(int *)((int)piVar2 + 0x179) = param_5;
        *(int *)((int)piVar2 + 0x17d) = param_6;
        *(int *)((int)piVar2 + 0x181) = param_7;
        *(int *)((int)piVar2 + 0x185) = param_8;
        *(uint *)((int)piVar2 + 0x189) = uVar4;
        *(int *)((int)piVar2 + 0x18d) = param_10;
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

