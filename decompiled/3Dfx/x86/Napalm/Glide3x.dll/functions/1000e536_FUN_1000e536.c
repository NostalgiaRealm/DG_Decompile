/*
 * FUN_1000e536 at 1000e536
 * undefined __thiscall FUN_1000e536(void * this, uint param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6)
 * Address ranges: 1000e536-1000e63e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1000e536(void *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
            uint param_6)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    bVar3 = FUN_100051b3(this,4);
    if (bVar3) {
      if (0xf < (int)param_1) {
        param_1 = 0;
      }
      if (0xf < (int)param_2) {
        param_2 = 0;
      }
      uVar4 = ~-(uint)(2 < param_3) & param_3;
      piVar2 = *(int **)((int)this + 0xc);
      uVar5 = ~-(uint)(2 < param_6) & param_6;
      if ((((param_1 != *(byte *)((int)piVar2 + 0xe6)) || (param_2 != *(byte *)((int)piVar2 + 0xe7))
           ) || (param_4 != *(byte *)(piVar2 + 0x3a))) ||
         (((param_5 != *(byte *)((int)piVar2 + 0xe9) || (uVar4 != *(byte *)((int)piVar2 + 0xea))) ||
          (uVar5 != *(byte *)((int)piVar2 + 0xeb))))) {
        (**(code **)(*piVar2 + 0xa4))(param_1,param_2,uVar4,param_4,param_5,uVar5);
        *(char *)(*(int *)((int)this + 0xc) + 0xe6) = (char)param_1;
        *(char *)(*(int *)((int)this + 0xc) + 0xe7) = (char)param_2;
        *(char *)(*(int *)((int)this + 0xc) + 0xe8) = (char)param_4;
        *(char *)(*(int *)((int)this + 0xc) + 0xe9) = (char)param_5;
        *(char *)(*(int *)((int)this + 0xc) + 0xea) = (char)uVar4;
        *(char *)(*(int *)((int)this + 0xc) + 0xeb) = (char)uVar5;
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

