/*
 * FUN_1006649b at 1006649b
 * undefined4 __thiscall FUN_1006649b(void * this, int param_1, int param_2, int * param_3)
 * Address ranges: 1006649b-10066693
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1006649b(void *this,int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  int *extraout_ECX;
  undefined4 *puVar13;
  uint uVar14;
  int *this_00;
  undefined1 local_50 [76];
  
  LOCK();
  *(int *)((int)this + 0x1d05c) = *(int *)((int)this + 0x1d05c) + 1;
  UNLOCK();
  uVar14 = -(uint)(param_1 != 0) & param_1 - 0xc0U;
  FUN_10066182(local_50,this,*(undefined4 *)(uVar14 + 0x10),*(undefined4 *)(uVar14 + 0xe0));
  piVar10 = FUN_10096048(*(void **)((int)this + 0x1cf00),extraout_ECX);
  iVar1 = *(int *)((int)this + 0x1cf04);
  this_00 = (int *)(iVar1 + 0x11c0);
  iVar9 = param_3[8];
  iVar12 = param_3[7];
  iVar2 = param_3[6];
  iVar3 = param_3[5];
  iVar4 = param_3[4];
  iVar5 = param_3[3];
  iVar6 = param_3[2];
  iVar7 = param_3[1];
  iVar8 = *param_3;
  FUN_100abd50(this_00);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_100665f3:
    puVar11 = *(undefined4 **)(iVar1 + 0x12d0);
    *puVar11 = this;
    puVar11[1] = param_1;
    puVar11[2] = param_2;
    puVar11[3] = iVar8;
    puVar11[4] = iVar7;
    puVar11[5] = iVar6;
    puVar11[6] = iVar5;
    puVar11[7] = iVar4;
    puVar11[8] = iVar3;
    puVar11[9] = iVar2;
    puVar11[10] = iVar12;
    *(char *)(puVar11 + 0xb) = (char)iVar9;
    iVar12 = FUN_10066694(puVar11);
  }
  else {
    puVar11 = (undefined4 *)FUN_100abc70(this_00,0x30);
    if (puVar11 == (undefined4 *)0x0) {
      FUN_1002f90d(this_00);
      goto LAB_100665f3;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar11[1] = 0x30;
    puVar11[2] = this;
    puVar11[3] = param_1;
    puVar11[4] = param_2;
    puVar11[5] = iVar8;
    puVar11[6] = iVar7;
    puVar11[7] = iVar6;
    puVar11[8] = iVar5;
    puVar11[9] = iVar4;
    puVar11[10] = iVar3;
    puVar11[0xb] = iVar2;
    puVar11[0xc] = iVar12;
    *(char *)(puVar11 + 0xd) = (char)iVar9;
    puVar13 = (undefined4 *)((int)puVar11 + 0x3bU & 0xfffffffc);
    *puVar13 = 0;
    *puVar11 = FUN_10066694;
    iVar12 = *(int *)(iVar1 + 0x12e4) * 0x14;
    this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar13;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this_00 = 0;
      iVar12 = SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_10066653;
    }
  }
  *this_00 = 0;
LAB_10066653:
  if (param_2 != 0) {
    iVar12 = FUN_100ac680(*(int *)((int)this + 0x1cf04) + 0x11c0);
  }
  if (piVar10 != (int *)0x0) {
    FUN_10096f24(*(void **)((int)this + 0x1cf00),(int)piVar10);
    iVar12 = FUN_10096631(*(void **)((int)this + 0x1cf00),*piVar10,0);
  }
  return CONCAT31((int3)((uint)iVar12 >> 8),1);
}

