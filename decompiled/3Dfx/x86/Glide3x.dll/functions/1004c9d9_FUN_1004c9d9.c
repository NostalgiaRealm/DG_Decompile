/*
 * FUN_1004c9d9 at 1004c9d9
 * bool __thiscall FUN_1004c9d9(void * this, uint param_1, int * param_2)
 * Address ranges: 1004c9d9-1004cb7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1004c9d9(void *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  float fVar7;
  
  piVar2 = param_2;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  iVar4 = *(int *)((int)this + 0x30);
  if (iVar4 == 0) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = (float)(((double)*(int *)((int)this + 0x38) +
                    (double)(&DAT_10058390)[-(*(int *)((int)this + 0x38) >> 0x1f)]) /
                   ((double)iVar4 + (double)(&DAT_10058390)[-(iVar4 >> 0x1f)]));
  }
  iVar4 = 3;
  if (0.9 <= fVar7) {
    iVar4 = -1;
  }
  FUN_1004c880(this,iVar4,param_1,param_2);
  bVar6 = false;
  if (param_2[1] == 0) {
    uVar5 = 0;
    if (*(int *)((int)this + 0x44) != 0) {
      if (*(int *)((int)this + 0x44) == 0) goto LAB_1004cabe;
      do {
        iVar4 = uVar5 * 0x38 + *(int *)((int)this + 0x40) + 8;
        if ((iVar4 != 0) && ((*(int *)(iVar4 + 0x14) != 0 || (param_1 <= *(uint *)(iVar4 + 0x10)))))
        {
          iVar1 = FUN_1004c61c(this,iVar4 + 8,param_1);
          if (iVar1 == -1) {
            FUN_1004c880(this,-1,0,(int *)0x0);
            iVar1 = FUN_1004c61c(this,iVar4 + 8,param_1);
            if (iVar1 == -1) goto LAB_1004cabe;
          }
          FUN_1004c994(this,param_2,(int *)(iVar4 + 8),iVar1);
          break;
        }
LAB_1004cabe:
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)((int)this + 0x44));
    }
    bVar6 = false;
    if (param_2[1] == 0) {
      FUN_1004c880(this,-1,0,(int *)0x0);
      do {
        piVar2 = (int *)FUN_1004c363(this,param_1);
        if (piVar2 != (int *)0x0) {
          iVar4 = FUN_1004c61c(this,(int)piVar2,param_1);
          if (iVar4 != -1) {
            FUN_1004c994(this,param_2,piVar2,iVar4);
          }
          break;
        }
        uVar5 = *(uint *)((int)this + 0x44);
        bVar6 = false;
        if (uVar5 == 0) break;
        do {
          uVar5 = uVar5 - 1;
          if (uVar5 < *(uint *)((int)this + 0x44)) {
            puVar3 = (uint *)(*(int *)((int)this + 0x40) + 0x10 + uVar5 * 0x38);
          }
          else {
            puVar3 = (uint *)&DAT_00000008;
          }
          if (puVar3[8] == 0) {
            FUN_1004c5e1(this,puVar3);
            FUN_100496db((void *)((int)this + 0x3c),uVar5);
            bVar6 = true;
          }
        } while (uVar5 != 0);
      } while (bVar6);
      bVar6 = param_2[1] == 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  return !bVar6;
}

