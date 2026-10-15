/*
 * FUN_10021b4d at 10021b4d
 * undefined __thiscall FUN_10021b4d(void * this, undefined4 * param_1, int param_2, uint param_3)
 * Address ranges: 10021b4d-10021cee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10021b4d(void *this,undefined4 *param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int unaff_EBX;
  int *this_00;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  undefined1 local_44 [8];
  int aiStack_3c [14];
  
  iVar2 = (**(code **)(**(int **)((int)this + 0x31a8) + 0x38))
                    (*(int **)((int)this + 0x31a8),local_44,0);
  if ((((-1 < iVar2) && (unaff_EBX == 4)) && (*(int *)(*(int *)((int)this + 0x3188) + 0x12e8) == 0))
     && (cVar1 = FUN_10039950(*(void **)(*(int *)((int)this + 0x3180) + 0x172c0)), cVar1 != '\0')) {
    bVar10 = *(int *)((int)this + 0x3968) != *(int *)((int)this + 0x3978);
    uVar6 = 3;
    if (!bVar10) {
      for (; uVar6 < 3; uVar6 = uVar6 + 1) {
        bVar10 = false;
      }
    }
    if (!bVar10) {
      FUN_1003e9e2(*(void **)(*(int *)((int)this + 0x3188) + 0x1304),*(int **)((int)this + 0x31a8),
                   param_2,param_3 + param_2,param_1,'\0');
      return;
    }
  }
  FUN_1003ea7a(*(void **)(*(int *)((int)this + 0x3188) + 0x1304),aiStack_3c,
               (void *)(*(int *)((int)this + 0x3188) + 0x1430),param_3,param_1);
  if (aiStack_3c[1] == 0) {
    return;
  }
  iVar2 = *(int *)((int)this + 0x3188);
  this_00 = (int *)(iVar2 + 0x11c0);
  FUN_10035d50(this_00);
  if (*(char *)(iVar2 + 0x12ec) != '\0') {
    puVar3 = (undefined4 *)FUN_10035c70(this_00,0x34);
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar2 + 0x12e8) = *(int *)(iVar2 + 0x12e8) + 1;
      UNLOCK();
      puVar3[1] = 0x34;
      puVar3[2] = this;
      piVar7 = aiStack_3c;
      piVar9 = puVar3 + 3;
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      puVar3[0xd] = param_2;
      puVar3[0xe] = param_3;
      puVar5 = (undefined4 *)((int)puVar3 + 0x3fU & 0xfffffffc);
      *puVar5 = 0;
      *puVar3 = FUN_10021cef;
      this_00[*(int *)(iVar2 + 0x12e4) * 5 + 0x1a] = (int)puVar5;
      if (*(char *)(iVar2 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar2 + 0x1220));
        return;
      }
      goto LAB_10021ce0;
    }
    FUN_10021b34(this_00);
  }
  piVar7 = *(int **)(iVar2 + 0x12d0);
  *piVar7 = (int)this;
  piVar8 = aiStack_3c;
  piVar9 = piVar7;
  for (iVar2 = 10; piVar9 = piVar9 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar9 = *piVar8;
    piVar8 = piVar8 + 1;
  }
  piVar7[0xb] = param_2;
  piVar7[0xc] = param_3;
  FUN_10021cef(piVar7);
LAB_10021ce0:
  *this_00 = 0;
  return;
}

