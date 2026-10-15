/*
 * FUN_100717e5 at 100717e5
 * char __thiscall FUN_100717e5(void * this, int param_1, int param_2, int param_3, uint param_4, int * param_5)
 * Address ranges: 100717e5-1007194b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall
FUN_100717e5(void *this,int param_1,int param_2,int param_3,uint param_4,int *param_5)

{
  void *this_00;
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  byte bVar4;
  char cVar5;
  void *pvVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *this_01;
  tagRECT local_30;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  void *local_10;
  void *local_c;
  char local_6;
  byte local_5;
  
  local_6 = '\0';
  this_00 = (void *)((int)this + -0xc0);
  local_10 = this;
  local_c = this_00;
  pvVar6 = (void *)FUN_10071596(this_00,'\x01');
  if (pvVar6 == (void *)0x0) {
    return local_6;
  }
  local_5 = 0;
  uVar7 = FUN_1006d34a(this_00,pvVar6,param_1,param_2,param_3,param_4,param_5,&local_30,&local_5);
  bVar4 = local_5;
  local_6 = (char)uVar7;
  if (local_6 == '\0') {
    return '\0';
  }
  iVar1 = *(int *)((int)this + -0x7c);
  this_01 = (int *)(iVar1 + 0x11c0);
  local_20 = local_30.left;
  uVar7 = param_1 + *(int *)((int)this + -0x94) * param_2;
  iStack_1c = local_30.top;
  iStack_18 = local_30.right;
  iStack_14 = local_30.bottom;
  FUN_100abd50(this_01);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_100718ec:
    piVar2 = *(int **)(iVar1 + 0x12d0);
    *piVar2 = (int)local_c;
    piVar2[1] = uVar7;
    piVar2[2] = local_20;
    piVar2[3] = iStack_1c;
    piVar2[4] = iStack_18;
    piVar2[5] = iStack_14;
    *(byte *)(piVar2 + 6) = bVar4;
    FUN_1007194c(piVar2);
  }
  else {
    puVar8 = (undefined4 *)FUN_100abc70(this_01,0x1c);
    if (puVar8 == (undefined4 *)0x0) {
      FUN_1002f90d(this_01);
      goto LAB_100718ec;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar8[1] = 0x1c;
    puVar8[2] = local_c;
    puVar8[3] = uVar7;
    puVar8[4] = local_20;
    puVar8[5] = iStack_1c;
    puVar8[6] = iStack_18;
    puVar8[7] = iStack_14;
    *(byte *)(puVar8 + 8) = bVar4;
    puVar9 = (undefined4 *)((int)puVar8 + 0x27U & 0xfffffffc);
    *puVar9 = 0;
    *puVar8 = FUN_1007194c;
    this_01[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar9;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this_01 = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_1007191a;
    }
  }
  *this_01 = 0;
LAB_1007191a:
  cVar5 = FUN_1006f16a((int)local_c);
  if ((cVar5 != '\0') && (*(int *)((int)local_10 + 0x90) != 0)) {
    pbVar3 = (byte *)((int)local_10 + ((int)(uVar7 & 0x1f) >> 3) + (uVar7 >> 5) * 4 + 8);
    *pbVar3 = *pbVar3 | '\x01' << (uVar7 & 7);
  }
  return local_6;
}

