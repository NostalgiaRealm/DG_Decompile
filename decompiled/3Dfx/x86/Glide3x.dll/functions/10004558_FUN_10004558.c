/*
 * FUN_10004558 at 10004558
 * uint __thiscall FUN_10004558(void * this, int param_1, uint param_2, uint * param_3)
 * Address ranges: 10004558-1000496e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10004558(void *this,int param_1,uint param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint local_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_24;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  cVar1 = FUN_1000522d((int)this);
  if (cVar1 == '\0') {
    return 0;
  }
  local_40 = 0;
  switch(param_1) {
  case 1:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x23:
  case 0x24:
  case 0x2a:
    local_40 = 4;
    break;
  case 2:
  case 0x26:
    local_40 = 0x10;
    break;
  case 3:
  case 0x25:
  case 0x27:
  case 0x28:
    local_40 = 8;
    break;
  case 0x22:
    local_40 = 0x18;
  }
  if ((param_3 == (uint *)0x0) || (param_2 < local_40)) {
    return 0;
  }
  switch(param_1 + -1) {
  case 0:
    *param_3 = 0x10;
    break;
  case 1:
    *param_3 = 5;
    param_3[1] = 6;
    param_3[2] = 5;
    param_3[3] = 8;
    break;
  case 2:
    if (*(char *)((int)this + 0x3c) == '\0') {
LAB_100048f4:
      *param_3 = 0;
      goto LAB_10004957;
    }
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    UNLOCK();
    cVar1 = (**(code **)(**(int **)((int)this + 0xc) + 0x58))();
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      FUN_1002aa70();
      lVar4 = FUN_10053160();
      uVar2 = (int)lVar4 << 8;
    }
    *param_3 = uVar2;
    param_3[1] = uVar2 >> 8;
    goto LAB_1000463b;
  case 3:
    *param_3 = 0x40;
    break;
  case 4:
  case 9:
    *param_3 = 0x100;
    break;
  case 5:
    *param_3 = 0x21f;
    break;
  case 6:
    *param_3 = 0x70;
    break;
  case 7:
    if (*(char *)((int)this + 0x3c) == '\0') goto switchD_100045ca_caseD_f;
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    UNLOCK();
    cVar1 = (**(code **)(**(int **)((int)this + 0xc) + 0x58))();
    *param_3 = (uint)(cVar1 != '\0');
    goto LAB_10004687;
  case 8:
  case 0xe:
  case 0x10:
    *param_3 = 1;
    break;
  case 10:
    *param_3 = 3;
    break;
  case 0xb:
    uVar2 = FUN_10005e0b((int)this);
    if ((&DAT_1005b1b9)[uVar2 * 0x18] == '\0') {
      uStack_34 = *(uint *)(*(int *)((int)this + 0x1c) + 0x78f);
    }
    else {
LAB_100046bc:
      uStack_34 = 0;
    }
    goto LAB_100046c9;
  case 0xc:
    uVar2 = FUN_10005e0b((int)this);
    if ((&DAT_1005b1b9)[uVar2 * 0x18] != '\0') goto LAB_100046bc;
    uStack_34 = *(uint *)(*(int *)((int)this + 0x1c) + 0x793);
    goto LAB_100046c9;
  case 0xd:
    uVar2 = FUN_10005e0b((int)this);
    if ((&DAT_1005b1b9)[uVar2 * 0x18] == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(*(int *)((int)this + 0x1c) + 0x793) +
              *(int *)(*(int *)((int)this + 0x1c) + 0x78f);
    }
    *param_3 = uVar2;
    break;
  case 0xf:
  case 0x22:
switchD_100045ca_caseD_f:
    *param_3 = 0;
    break;
  case 0x11:
    *param_3 = 6;
    break;
  case 0x12:
    uStack_34 = *(uint *)(*(int *)((int)this + 0x1c) + 0x797);
    goto LAB_100046c9;
  case 0x13:
    if (*(char *)((int)this + 0x3c) == '\0') goto switchD_100045ca_caseD_f;
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    UNLOCK();
    uVar2 = (**(code **)(**(int **)((int)this + 0xc) + 0x74))();
    *param_3 = uVar2;
    goto LAB_10004687;
  case 0x14:
    uVar2 = FUN_10005e0b((int)this);
    uStack_34 = *(uint *)(&DAT_1005b1b0 + uVar2 * 0x18);
    goto LAB_100046c9;
  case 0x15:
    uVar2 = FUN_10005e0b((int)this);
    uStack_34 = *(uint *)(&DAT_1005b1b4 + uVar2 * 0x18);
    goto LAB_100046c9;
  case 0x16:
    (**(code **)(**(int **)((int)this + 0xc) + 0xfc))(&local_38);
    uStack_34 = local_38;
    goto LAB_100046c9;
  case 0x17:
    (**(code **)(**(int **)((int)this + 0xc) + 0xfc))(&local_38);
    uStack_34 = uStack_30;
    goto LAB_100046c9;
  case 0x18:
    (**(code **)(**(int **)((int)this + 0xc) + 0xfc))(&local_38);
    uStack_34 = uStack_2c;
    goto LAB_100046c9;
  case 0x19:
    (**(code **)(**(int **)((int)this + 0xc) + 0xfc))(&local_38);
    uStack_34 = uStack_24;
    goto LAB_100046c9;
  case 0x1a:
    (**(code **)(**(int **)((int)this + 0xc) + 0xfc))(&local_38);
    uStack_34 = uStack_1c;
    goto LAB_100046c9;
  case 0x1b:
    (**(code **)(**(int **)((int)this + 0xc) + 0xfc))(&local_38);
    uStack_34 = uStack_18;
    goto LAB_100046c9;
  case 0x1d:
    (**(code **)(**(int **)((int)this + 0xc) + 0xfc))(&local_38);
    uStack_34 = 0;
    goto LAB_100046c9;
  case 0x1e:
    (**(code **)(**(int **)((int)this + 0xc) + 0xfc))(&local_38);
    uStack_34 = uStack_14;
    goto LAB_100046c9;
  case 0x1f:
    (**(code **)(**(int **)((int)this + 0xc) + 0xfc))(&local_38);
LAB_100046c9:
    *param_3 = uStack_34;
    break;
  case 0x21:
    if (*(char *)((int)this + 0x3c) == '\0') {
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *param_3 = 0;
        param_3 = param_3 + 1;
      }
      return local_40;
    }
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    UNLOCK();
    (**(code **)(**(int **)((int)this + 0xc) + 0x94))(param_3);
    goto LAB_10004687;
  case 0x23:
  case 0x29:
    *param_3 = 8;
    break;
  case 0x24:
    if (*(char *)((int)this + 0x3c) == '\0') goto LAB_100048f4;
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    UNLOCK();
    uVar2 = (**(code **)(**(int **)((int)this + 0xc) + 0x4c))();
    *param_3 = uVar2;
    FUN_1002aa70();
    lVar4 = FUN_10053160();
    param_3[1] = (uint)lVar4;
LAB_10004687:
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + -1;
    UNLOCK();
    break;
  case 0x25:
    if (*(char *)((int)this + 0x3c) == '\0') {
      param_3[3] = 0;
      param_3[2] = 0;
      param_3[1] = 0;
      *param_3 = 0;
      return local_40;
    }
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    UNLOCK();
    (**(code **)(**(int **)((int)this + 0xc) + 0x134))(param_3,param_3 + 1,param_3 + 2,param_3 + 3);
LAB_1000463b:
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + -1;
    UNLOCK();
    break;
  case 0x26:
    *param_3 = 0;
    param_3[1] = 0xffff;
    break;
  case 0x27:
    *param_3 = 0xffff;
LAB_10004957:
    param_3[1] = 0;
  }
  return local_40;
}

