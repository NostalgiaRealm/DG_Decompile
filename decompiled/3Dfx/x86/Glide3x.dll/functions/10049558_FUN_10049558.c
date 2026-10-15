/*
 * FUN_10049558 at 10049558
 * bool __thiscall FUN_10049558(void * this, uint param_1, int * param_2)
 * Address ranges: 10049558-10049677
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10049558(void *this,uint param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  EnterCriticalSection(this);
  uVar5 = 0;
  if (*(int *)((int)this + 0x30) != 0) {
    if (*(int *)((int)this + 0x30) == 0) goto LAB_100495b3;
    do {
      iVar4 = uVar5 * 0x38 + *(int *)((int)this + 0x2c) + 8;
      if ((iVar4 != 0) &&
         (((piVar2 = (int *)(iVar4 + 8), *(int *)(iVar4 + 0x14) != 0 ||
           (param_1 <= *(uint *)(iVar4 + 0x10))) &&
          (uVar1 = FUN_10049453(this,(int)piVar2,param_1), uVar1 != 0xffffffff)))) {
        *param_2 = *(int *)((int)this + 0x18) * uVar1 + *piVar2;
        param_2[1] = *piVar2;
        param_2[2] = param_1;
        break;
      }
LAB_100495b3:
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)((int)this + 0x30));
  }
  bVar6 = false;
  if (*param_2 == 0) {
    do {
      piVar2 = (int *)FUN_100492ad(this,param_1);
      if (piVar2 != (int *)0x0) {
        uVar5 = FUN_10049453(this,(int)piVar2,param_1);
        if (uVar5 != 0xffffffff) {
          *param_2 = *(int *)((int)this + 0x18) * uVar5 + *piVar2;
          param_2[1] = *piVar2;
          param_2[2] = param_1;
        }
        break;
      }
      uVar5 = *(uint *)((int)this + 0x30);
      bVar6 = false;
      if (uVar5 == 0) break;
      do {
        uVar5 = uVar5 - 1;
        if (uVar5 < *(uint *)((int)this + 0x30)) {
          puVar3 = (undefined4 *)(*(int *)((int)this + 0x2c) + 0x10 + uVar5 * 0x38);
        }
        else {
          puVar3 = (undefined4 *)&DAT_00000008;
        }
        if (puVar3[8] == 0) {
          FUN_1004942d(puVar3);
          FUN_100496db((void *)((int)this + 0x28),uVar5);
          bVar6 = true;
        }
      } while (uVar5 != 0);
    } while (bVar6);
    bVar6 = *param_2 == 0;
  }
  LeaveCriticalSection(this);
  return !bVar6;
}

