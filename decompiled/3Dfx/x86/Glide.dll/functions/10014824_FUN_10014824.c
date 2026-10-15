/*
 * FUN_10014824 at 10014824
 * undefined __thiscall FUN_10014824(void * this, int param_1, int param_2, undefined4 param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint param_8)
 * Address ranges: 10014824-10014904
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10014824(void *this,int param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,
            uint param_6,uint param_7,uint param_8)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint extraout_EDX;
  uint uVar5;
  
  iVar2 = param_1;
  if (*(char *)((int)this + 0x3c) != '\0') {
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    UNLOCK();
    iVar4 = *(int *)((int)this + 0x1c);
    if (param_1 < *(int *)(iVar4 + 0x797)) {
      uVar3 = FUN_10014e74(param_5,param_6,param_7,param_8);
      if ((char)uVar3 != '\0') {
        uVar1 = *(uint *)(iVar4 + 0x793);
        uVar5 = extraout_EDX;
        if (uVar1 < extraout_EDX) {
          uVar5 = uVar1;
        }
        iVar4 = param_1 * 0x41 + 0x151 + *(int *)((int)this + 0xc);
        if ((((*(byte *)(iVar4 + 0x3f) != param_4) ||
             (*(uint *)(iVar4 + 0x1f + param_2 * 4) != uVar5)) ||
            (*(uint *)(iVar4 + 0x37) != param_7)) ||
           (((*(uint *)(iVar4 + 0x3b) != param_8 || (*(uint *)(iVar4 + 0x33) != param_6)) ||
            (param_1._0_1_ = '\0', *(uint *)(iVar4 + 0x2f) != param_5)))) {
          param_1._0_1_ = '\x01';
        }
        *(uint *)(iVar4 + 0x1f + param_2 * 4) = uVar5;
        *(char *)(iVar4 + 0x3f) = (char)param_4;
        *(uint *)(iVar4 + 0x37) = param_7;
        *(uint *)(iVar4 + 0x3b) = param_8;
        *(uint *)(iVar4 + 0x33) = param_6;
        *(uint *)(iVar4 + 0x2f) = param_5;
        FUN_10014f0b(this,iVar2,(char)param_1);
      }
    }
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + -1;
    UNLOCK();
  }
  return;
}

