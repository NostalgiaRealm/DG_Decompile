/*
 * FUN_10077665 at 10077665
 * bool __thiscall FUN_10077665(void * this, int param_1, uint param_2, uint param_3, int param_4, uint param_5, uint param_6, undefined4 param_7, char param_8)
 * Address ranges: 10077665-1007774e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_10077665(void *this,int param_1,uint param_2,uint param_3,int param_4,uint param_5,uint param_6,
            undefined4 param_7,char param_8)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  bVar1 = false;
  piVar3 = (int *)**(undefined4 **)((int)this + 8);
  if (((*(int *)(param_1 + 0x14) == 1) && (*(int *)(param_1 + 0x18) == 0)) ||
     (iVar2 = (**(code **)(*piVar3 + 0x14))(piVar3,param_1,0,(int)this + 0x10), -1 < iVar2)) {
    *(int *)(param_1 + 0x18) = 0;
    bVar1 = false;
    *(undefined4 *)(param_1 + 0x14) = 1;
    iVar2 = (**(code **)(*piVar3 + 0x14))(piVar3,param_1,param_7,(int)this + 0xc);
    if ((-1 < iVar2) &&
       (bVar1 = FUN_10077485(this,param_2,param_3,param_4,param_5,param_6,param_8), !bVar1)) {
      (**(code **)(**(int **)((int)this + 0xc) + 8))(*(int **)((int)this + 0xc));
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    if ((bVar1 == false) && (piVar3 = *(int **)((int)this + 0x10), piVar3 != (int *)0x0)) {
      (**(code **)(*piVar3 + 8))(piVar3);
      *(int *)((int)this + 0x10) = 0;
    }
  }
  piVar3 = (int *)((int)this + 0x10);
  if (*piVar3 == 0) {
    if (*(int *)((int)this + 0xc) != 0) {
      *(int *)((int)this + 0xc) =
           *(int *)((int)this + 0xc) +
           *(int *)(*(int *)((int)this + 4) * 0x28 + 0x30 + *(int *)this);
    }
  }
  else {
    *piVar3 = *piVar3 + *(int *)(*(int *)((int)this + 4) * 0x28 + 0x30 + *(int *)this);
  }
  return bVar1;
}

