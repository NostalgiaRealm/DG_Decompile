/*
 * FUN_100180e7 at 100180e7
 * uint __thiscall FUN_100180e7(void * this, int param_1, int param_2, int param_3, uint param_4, int * param_5)
 * Address ranges: 100180e7-1001823d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_100180e7(void *this,int param_1,int param_2,int param_3,uint param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int *this_00;
  tagRECT local_2c;
  int local_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  void *local_c;
  byte local_6;
  char local_5;
  
  local_5 = '\0';
  local_c = this;
  if (*(char *)((int)this + -0x83) == '\x01') {
    FUN_100600a0(*(int *)((int)this + -0x7c) + 0x11c0);
  }
  pvVar4 = (void *)(**(code **)(*(int *)((int)this + -0xc0) + 0x60))(1);
  iVar7 = 0;
  if (pvVar4 == (void *)0x0) goto LAB_10018235;
  local_6 = 0;
  uVar5 = FUN_10016a94((int *)((int)this + -0xc0),pvVar4,param_1,param_2,param_3,param_4,param_5,
                       &local_2c,&local_6);
  bVar3 = local_6;
  pvVar4 = local_c;
  local_5 = (char)uVar5;
  if (local_5 == '\0') {
    return uVar5;
  }
  local_1c = local_2c.left;
  iVar7 = param_1 + *(int *)((int)this + -0x94) * param_2;
  iStack_18 = local_2c.top;
  iStack_14 = local_2c.right;
  iStack_10 = local_2c.bottom;
  iVar1 = *(int *)((int)local_c + -0x7c);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_1005f770(this_00);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_10018203:
    piVar2 = *(int **)(iVar1 + 0x12d0);
    *piVar2 = (int)pvVar4 + -0xc0;
    piVar2[1] = iVar7;
    piVar2[2] = local_1c;
    piVar2[3] = iStack_18;
    piVar2[4] = iStack_14;
    piVar2[5] = iStack_10;
    *(byte *)(piVar2 + 6) = bVar3;
    iVar7 = FUN_1001823e(piVar2);
  }
  else {
    puVar6 = (undefined4 *)FUN_1005f690(this_00,0x1c);
    if (puVar6 == (undefined4 *)0x0) {
      FUN_1000f2b0(this_00);
      goto LAB_10018203;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar6[1] = 0x1c;
    puVar6[2] = (int)pvVar4 + -0xc0;
    puVar6[3] = iVar7;
    puVar6[4] = local_1c;
    puVar6[5] = iStack_18;
    puVar6[6] = iStack_14;
    puVar6[7] = iStack_10;
    *(byte *)(puVar6 + 8) = bVar3;
    puVar8 = (undefined4 *)((int)puVar6 + 0x27U & 0xfffffffc);
    *puVar8 = 0;
    *puVar6 = FUN_1001823e;
    iVar7 = *(int *)(iVar1 + 0x12e4) * 0x14;
    this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar8;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this_00 = 0;
      iVar7 = SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_10018235;
    }
  }
  *this_00 = 0;
LAB_10018235:
  return CONCAT31((int3)((uint)iVar7 >> 8),local_5);
}

