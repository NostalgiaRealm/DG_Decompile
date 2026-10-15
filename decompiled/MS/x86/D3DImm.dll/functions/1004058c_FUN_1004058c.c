/*
 * FUN_1004058c at 1004058c
 * int __thiscall FUN_1004058c(void * this, int * param_1, int * param_2, int param_3, char param_4)
 * Address ranges: 1004058c-100406e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1004058c(void *this,int *param_1,int *param_2,int param_3,char param_4)

{
  BOOL BVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  int iVar6;
  ushort in_FPUControlWord;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  local_c = &local_10;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_10 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_10 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  iVar6 = -0x7ff8ffa9;
  if ((((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (param_3 == 0)) &&
     (iVar6 = -0x7789fd3d, *(int *)((int)this + 0xa74) == 0)) {
    piVar2 = (int *)(**(code **)(*param_1 + 0x48))();
    piVar3 = (int *)(**(code **)(*param_1 + 0x4c))();
    iVar6 = FUN_1003dd24(this,param_1,piVar2);
    if (-1 < iVar6) {
      uVar4 = FUN_10007c0b(this,(int)param_1,piVar2,extraout_ECX,param_4);
      if ((char)uVar4 == '\0') {
        iVar6 = -0x7fffbffb;
      }
      else {
        (**(code **)(*param_2 + 4))(param_2);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 4))(piVar3);
        }
        piVar2 = *(int **)((int)this + 0xa7c);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        piVar2 = *(int **)((int)this + 0xa78);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        *(int **)((int)this + 0xa78) = param_2;
        *(int **)((int)this + 0xa7c) = piVar3;
        iVar5 = (**(code **)(*param_1 + 0x38))();
        *(byte *)((int)this + 0x930) = (byte)(*(uint *)(iVar5 + 0x68) >> 0xc) & 1;
      }
    }
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return iVar6;
}

