/*
 * FUN_1001756f at 1001756f
 * undefined __thiscall FUN_1001756f(void * this, undefined4 * param_1, uint param_2, uint param_3)
 * Address ranges: 1001756f-1001772b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001756f(void *this,undefined4 *param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int unaff_EBX;
  int *this_00;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  bool bVar10;
  undefined1 local_44 [8];
  int aiStack_3c [14];
  
  iVar2 = (**(code **)(**(int **)((int)this + 0x36a8) + 0x38))
                    (*(int **)((int)this + 0x36a8),local_44,0);
  if ((((-1 < iVar2) && (unaff_EBX == 4)) && (*(int *)(*(int *)((int)this + 0x3688) + 0x12e8) == 0))
     && (cVar1 = FUN_1003f843(*(void **)(*(int *)((int)this + 0x3680) + 0x172c0)), cVar1 != '\0')) {
    bVar10 = *(int *)((int)this + 0x44ac) != *(int *)((int)this + 0x44bc);
    uVar8 = 3;
    if (!bVar10) {
      do {
        if (6 < uVar8) break;
        bVar10 = FUN_1001fc05(this,uVar8,param_2,param_3 + param_2);
        uVar8 = uVar8 + 1;
      } while (!bVar10);
    }
    if (bVar10 == false) {
      FUN_100448d3(*(void **)(*(int *)((int)this + 0x3688) + 0x1304),*(int **)((int)this + 0x36a8),
                   param_2,param_3 + param_2,param_1,'\0');
      return;
    }
  }
  FUN_1004496b(*(void **)(*(int *)((int)this + 0x3688) + 0x1304),aiStack_3c,
               (void *)(*(int *)((int)this + 0x3688) + 0x1430),param_3,param_1);
  if (aiStack_3c[1] == 0) {
    return;
  }
  iVar2 = *(int *)((int)this + 0x3688);
  this_00 = (int *)(iVar2 + 0x11c0);
  FUN_1002e0d0(this_00);
  if (*(char *)(iVar2 + 0x12ec) != '\0') {
    puVar3 = (undefined4 *)FUN_1002dff0(this_00,0x34);
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar2 + 0x12e8) = *(int *)(iVar2 + 0x12e8) + 1;
      UNLOCK();
      puVar3[1] = 0x34;
      puVar3[2] = this;
      piVar6 = aiStack_3c;
      piVar9 = puVar3 + 3;
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar9 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar9 = piVar9 + 1;
      }
      puVar3[0xd] = param_2;
      puVar3[0xe] = param_3;
      puVar5 = (undefined4 *)((int)puVar3 + 0x3fU & 0xfffffffc);
      *puVar5 = 0;
      *puVar3 = FUN_1001772c;
      this_00[*(int *)(iVar2 + 0x12e4) * 5 + 0x1a] = (int)puVar5;
      if (*(char *)(iVar2 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar2 + 0x1220));
        return;
      }
      goto LAB_1001771d;
    }
    FUN_100165f0(this_00);
  }
  piVar6 = *(int **)(iVar2 + 0x12d0);
  *piVar6 = (int)this;
  piVar7 = aiStack_3c;
  piVar9 = piVar6;
  for (iVar2 = 10; piVar9 = piVar9 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar9 = *piVar7;
    piVar7 = piVar7 + 1;
  }
  piVar6[0xb] = param_2;
  piVar6[0xc] = param_3;
  FUN_1001772c(piVar6);
LAB_1001771d:
  *this_00 = 0;
  return;
}

