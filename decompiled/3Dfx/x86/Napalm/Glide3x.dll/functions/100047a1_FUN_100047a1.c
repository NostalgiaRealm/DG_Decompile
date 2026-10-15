/*
 * FUN_100047a1 at 100047a1
 * uint __thiscall FUN_100047a1(void * this, int param_1, uint param_2, uint * param_3)
 * Address ranges: 100047a1-10004c1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100047a1(void *this,int param_1,uint param_2,uint *param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint extraout_EDX;
  uint extraout_EDX_00;
  longlong lVar6;
  uint local_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_24;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  cVar1 = FUN_1000560f((int)this);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar5 = 0;
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
    return local_40;
  case 1:
    uStack_34 = 5;
    param_3[1] = 6;
    param_3[2] = 5;
    param_3[3] = 8;
    break;
  case 2:
    if (*(char *)((int)this + 0x3c) != '\0') {
      LOCK();
      *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
      UNLOCK();
      cVar1 = (**(code **)(**(int **)((int)this + 0xc) + 0x54))();
      if (cVar1 == '\0') {
        uVar5 = 0;
      }
      else {
        FUN_1002de80();
        lVar6 = FUN_10056570();
        uVar5 = (int)lVar6 << 8;
      }
      *param_3 = uVar5;
      param_3[1] = uVar5 >> 8;
      goto LAB_10004882;
    }
    goto LAB_10004b5a;
  case 3:
    *param_3 = 0x40;
    return local_40;
  case 4:
    *param_3 = 0x100;
    return local_40;
  case 5:
    *param_3 = 0x356;
    return local_40;
  case 6:
    *param_3 = 0x70;
    return local_40;
  case 7:
    if (*(char *)((int)this + 0x3c) != '\0') {
      LOCK();
      *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
      UNLOCK();
      cVar1 = (**(code **)(**(int **)((int)this + 0xc) + 0x54))();
      *param_3 = (uint)(cVar1 != '\0');
      goto LAB_100048d9;
    }
    goto switchD_10004813_caseD_f;
  case 8:
  case 0xe:
  case 0x10:
    *param_3 = 1;
    return local_40;
  case 9:
    bVar2 = FUN_100051b3(this,4);
    uStack_34 = (-(uint)bVar2 & 0x700) + 0x100;
    break;
  case 10:
    *param_3 = 3;
    return local_40;
  case 0xb:
    uVar5 = FUN_100061fc((int)this);
    if ((&DAT_1005f389)[uVar5 * 0x18] == '\0') {
      uStack_34 = *(uint *)(*(int *)((int)this + 0x1c) + 0x78f);
    }
    else {
LAB_10004922:
      uStack_34 = 0;
    }
    break;
  case 0xc:
    uVar5 = FUN_100061fc((int)this);
    if ((&DAT_1005f389)[uVar5 * 0x18] != '\0') goto LAB_10004922;
    uStack_34 = *(uint *)(*(int *)((int)this + 0x1c) + 0x793);
    break;
  case 0xd:
    uVar5 = FUN_100061fc((int)this);
    if ((&DAT_1005f389)[uVar5 * 0x18] == '\0') {
      uVar5 = 0;
    }
    else {
      uVar5 = *(int *)(*(int *)((int)this + 0x1c) + 0x793) +
              *(int *)(*(int *)((int)this + 0x1c) + 0x78f);
    }
    *param_3 = uVar5;
    return local_40;
  case 0xf:
  case 0x22:
    goto switchD_10004813_caseD_f;
  case 0x11:
    *param_3 = 6;
    return local_40;
  case 0x12:
    uStack_34 = *(uint *)(*(int *)((int)this + 0x1c) + 0x797);
    break;
  case 0x13:
    if (*(char *)((int)this + 0x3c) != '\0') {
      LOCK();
      *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
      UNLOCK();
      uVar5 = (**(code **)(**(int **)((int)this + 0xc) + 0x70))();
      *param_3 = uVar5;
      goto LAB_100048d9;
    }
    goto switchD_10004813_caseD_f;
  case 0x14:
    uVar5 = FUN_100061fc((int)this);
    uStack_34 = *(uint *)(&DAT_1005f380 + uVar5 * 0x18);
    break;
  case 0x15:
    uVar5 = FUN_100061fc((int)this);
    uStack_34 = *(uint *)(&DAT_1005f384 + uVar5 * 0x18);
    break;
  case 0x16:
    (**(code **)(**(int **)((int)this + 0xc) + 0xf0))(&local_38);
    uStack_34 = local_38;
    break;
  case 0x17:
    (**(code **)(**(int **)((int)this + 0xc) + 0xf0))(&local_38);
    uStack_34 = uStack_30;
    break;
  case 0x18:
    (**(code **)(**(int **)((int)this + 0xc) + 0xf0))(&local_38);
    uStack_34 = uStack_2c;
    break;
  case 0x19:
    (**(code **)(**(int **)((int)this + 0xc) + 0xf0))(&local_38);
    uStack_34 = uStack_24;
    break;
  case 0x1a:
    (**(code **)(**(int **)((int)this + 0xc) + 0xf0))(&local_38);
    uStack_34 = uStack_1c;
    break;
  case 0x1b:
    (**(code **)(**(int **)((int)this + 0xc) + 0xf0))(&local_38);
    uStack_34 = uStack_18;
    break;
  default:
    goto switchD_10004813_caseD_1c;
  case 0x1d:
    (**(code **)(**(int **)((int)this + 0xc) + 0xf0))(&local_38);
    uStack_34 = 0;
    break;
  case 0x1e:
    (**(code **)(**(int **)((int)this + 0xc) + 0xf0))(&local_38);
    uStack_34 = uStack_14;
    break;
  case 0x1f:
    (**(code **)(**(int **)((int)this + 0xc) + 0xf0))(&local_38);
    break;
  case 0x21:
    if (*(char *)((int)this + 0x3c) == '\0') {
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *param_3 = 0;
        param_3 = param_3 + 1;
      }
      return local_40;
    }
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    UNLOCK();
    (**(code **)(**(int **)((int)this + 0xc) + 0x90))(param_3);
LAB_100048d9:
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + -1;
    UNLOCK();
    return local_40;
  case 0x23:
  case 0x29:
    *param_3 = 8;
    return local_40;
  case 0x24:
    if (*(char *)((int)this + 0x3c) != '\0') {
      LOCK();
      *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
      UNLOCK();
      uVar5 = (**(code **)(**(int **)((int)this + 0xc) + 0x48))();
      *param_3 = uVar5;
      FUN_1002de80();
      lVar6 = FUN_10056570();
      param_3[1] = (uint)lVar6;
      goto LAB_100048d9;
    }
LAB_10004b5a:
    param_3[1] = 0;
switchD_10004813_caseD_f:
    *param_3 = 0;
    return local_40;
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
    (**(code **)(**(int **)((int)this + 0xc) + 0x128))(param_3,param_3 + 1,param_3 + 2,param_3 + 3);
LAB_10004882:
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + -1;
    UNLOCK();
    return local_40;
  case 0x26:
    if (*(char *)((int)this + 0x3c) == '\0') {
      cVar1 = '\0';
    }
    else {
      uVar3 = FUN_1000901d(*(int *)((int)this + 0xc));
      cVar1 = (char)uVar3;
      uVar5 = extraout_EDX;
    }
    *param_3 = uVar5;
    param_3[1] = ((cVar1 == '\0') - 1 & 0xff0000) + 0xffff;
    return local_40;
  case 0x27:
    if (*(char *)((int)this + 0x3c) == '\0') {
      cVar1 = '\0';
    }
    else {
      uVar3 = FUN_1000901d(*(int *)((int)this + 0xc));
      cVar1 = (char)uVar3;
      uVar5 = extraout_EDX_00;
    }
    param_3[1] = uVar5;
    uStack_34 = ((cVar1 == '\0') - 1 & 0xff0000) + 0xffff;
  }
  *param_3 = uStack_34;
switchD_10004813_caseD_1c:
  return local_40;
}

