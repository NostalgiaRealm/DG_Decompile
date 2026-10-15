/*
 * FUN_1001be37 at 1001be37
 * uint __thiscall FUN_1001be37(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, undefined4 * param_8, char param_9, undefined4 param_10)
 * Address ranges: 1001be37-1001bfb2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_1001be37(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,undefined4 *param_8,char param_9,undefined4 param_10)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  char cVar6;
  int *this_00;
  undefined1 local_5;
  
  if (*(int *)(*(int *)((int)this + 0x3688) + 0x12e8) == 0) {
    uVar2 = FUN_100129a9(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         param_9,param_10);
    return uVar2;
  }
  iVar1 = *(int *)((int)this + 0x3688);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_1002e0d0(this_00);
  cVar6 = (char)param_10;
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_1001bf3d:
    puVar3 = *(undefined4 **)(iVar1 + 0x12d0);
    *puVar3 = this;
    puVar3[1] = param_1;
    puVar3[2] = param_2;
    puVar3[3] = param_3;
    puVar3[4] = param_4;
    puVar3[5] = param_5;
    puVar3[6] = param_6;
    puVar3[7] = param_7;
    puVar3[8] = param_8;
    *(char *)(puVar3 + 9) = param_9;
    *(char *)(puVar3 + 10) = cVar6;
    puVar3[0xb] = &local_5;
    iVar4 = FUN_1001c03d(puVar3);
  }
  else {
    puVar3 = (undefined4 *)FUN_1002dff0(this_00,0x30);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_100165f0(this_00);
      goto LAB_1001bf3d;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar3[1] = 0x30;
    puVar3[2] = this;
    puVar3[3] = param_1;
    puVar3[4] = param_2;
    puVar3[5] = param_3;
    puVar3[6] = param_4;
    puVar3[7] = param_5;
    puVar3[8] = param_6;
    puVar3[9] = param_7;
    puVar3[10] = param_8;
    *(char *)(puVar3 + 0xb) = param_9;
    *(char *)(puVar3 + 0xc) = cVar6;
    puVar3[0xd] = &local_5;
    puVar5 = (undefined4 *)((int)puVar3 + 0x3bU & 0xfffffffc);
    *puVar5 = 0;
    *puVar3 = FUN_1001c03d;
    iVar4 = *(int *)(iVar1 + 0x12e4) * 0x14;
    this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar5;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this_00 = 0;
      iVar4 = SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_1001bf94;
    }
  }
  *this_00 = 0;
LAB_1001bf94:
  if (cVar6 == '\0') {
    iVar4 = FUN_1002ea00(*(int *)((int)this + 0x3688) + 0x11c0);
  }
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
}

