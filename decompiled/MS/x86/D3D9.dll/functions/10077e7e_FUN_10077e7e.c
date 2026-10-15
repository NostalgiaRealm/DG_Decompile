/*
 * FUN_10077e7e at 10077e7e
 * undefined4 __thiscall FUN_10077e7e(void * this, int * param_1, int * param_2, int param_3, int param_4, RECT * param_5)
 * Address ranges: 10077e7e-1007804e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_10077e7e(void *this,int *param_1,int *param_2,int param_3,int param_4,RECT *param_5)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  BOOL BVar5;
  undefined4 extraout_EAX;
  undefined4 extraout_ECX;
  int iVar6;
  undefined1 local_74 [8];
  int local_6c;
  int local_68;
  undefined1 local_48 [20];
  LONG local_34;
  LONG local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  RECT local_1c;
  uint local_c;
  
  uVar4 = IsRectEmpty(param_5);
  if (uVar4 == 0) {
    (**(code **)(*param_2 + 0x28))(param_2,local_74);
    local_1c.right = *(LONG *)((int)this + 0x14);
    local_1c.bottom = *(LONG *)((int)this + 0x18);
    local_1c.left = 0;
    local_1c.top = 0;
    FUN_100b8667(*(void **)((int)this + 0x40),extraout_ECX,(int)this);
    BVar5 = EqualRect(&local_1c,param_5);
    if (((BVar5 == 0) || (local_6c != 1)) || (local_68 != 1)) {
      local_c = local_c & 0xffffff00;
      cVar2 = FUN_1003a4d0(*(int *)((int)this + 0x34));
      if (cVar2 == '\0') {
        bVar3 = (byte)local_c;
      }
      else {
        (**(code **)(*param_1 + 0x28))(param_1,local_48);
        uVar4 = local_28;
        (**(code **)(*param_2 + 0x28))(param_2,local_48);
        bVar3 = (byte)(local_28 >> 6) & 1;
        if ((uVar4 & 0x40) != 0) {
          bVar3 = 1;
        }
      }
      iVar6 = *(int *)((int)this + 0x2c) * param_4 + param_3;
      if (bVar3 == 0) {
        local_34 = param_5->left;
        local_30 = param_5->top;
        local_28 = param_5->right;
        local_24 = param_5->bottom;
        local_20 = 1;
        local_2c = 0;
        uVar4 = (uint)(byte)(&DAT_100d28b0)[*(int *)((int)this + 0x1c)];
        if ((*(uint *)((int)this + 0x14) >> ((byte)param_3 & 0x1f) < uVar4) &&
           ((&DAT_100d27d8)[*(int *)((int)this + 0x1c)] != '\0')) {
          local_28 = uVar4 + param_5->right + -1 & -uVar4;
        }
        uVar4 = (uint)(byte)(&DAT_100d28e4)[*(int *)((int)this + 0x1c)];
        if ((*(uint *)((int)this + 0x18) >> ((byte)param_3 & 0x1f) < uVar4) &&
           ((&DAT_100d27d8)[*(int *)((int)this + 0x1c)] != '\0')) {
          local_24 = param_5->bottom + -1 + uVar4 & -uVar4;
        }
        piVar1 = *(int **)(*(int *)((int)this + 0x44) + 4);
        (**(code **)(*piVar1 + 0xb8))
                  (piVar1,param_1,iVar6,param_5->left,param_5->top,0,param_2,iVar6,&local_34);
      }
      else {
        piVar1 = *(int **)(*(int *)((int)this + 0x44) + 4);
        (**(code **)(*piVar1 + 0xb8))(piVar1,param_1,iVar6,0,0,0,param_2,iVar6,0);
      }
    }
    else {
      piVar1 = *(int **)(*(int *)((int)this + 0x44) + 4);
      (**(code **)(*piVar1 + 0xbc))(piVar1,param_1,param_2);
    }
    SetRectEmpty(param_5);
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0x40) + 0x4a0));
    uVar4 = CONCAT31((int3)((uint)extraout_EAX >> 8),1);
  }
  else {
    uVar4 = uVar4 & 0xffffff00;
  }
  return uVar4;
}

