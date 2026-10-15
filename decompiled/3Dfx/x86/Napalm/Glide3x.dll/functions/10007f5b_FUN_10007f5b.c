/*
 * FUN_10007f5b at 10007f5b
 * char __thiscall FUN_10007f5b(void * this, int param_1, uint param_2, int * param_3, int param_4, uint param_5)
 * Address ranges: 10007f5b-100083a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall
FUN_10007f5b(void *this,int param_1,uint param_2,int *param_3,int param_4,uint param_5)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  int extraout_EDX;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  int *local_c;
  char local_5;
  
  local_5 = '\x01';
  if (0x4000 < param_2) {
    param_2 = 0x4000;
  }
  bVar2 = false;
  iVar5 = 0;
  switch(param_1) {
  case 0:
    iVar5 = 1;
    break;
  case 1:
    iVar5 = 3;
    if ((*(char *)((int)this + 0x1ac) == '\0') || (*(int *)((int)this + 0x1b4) != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    goto LAB_10007fb8;
  case 2:
    param_2 = param_2 & 0xfffffffe;
    iVar5 = 2;
    break;
  case 3:
  case 5:
    iVar5 = 4;
LAB_10007fb8:
    bVar7 = param_2 < 2;
LAB_10007fbb:
    local_5 = '\x01' - bVar7;
    break;
  case 4:
    iVar5 = 5;
    if ((*(char *)((int)this + 0x1ac) == '\0') || (*(int *)((int)this + 0x1b4) != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    bVar7 = param_2 < 3;
    goto LAB_10007fbb;
  case 6:
    param_2 = param_2 - param_2 % 3;
    bVar2 = false;
    iVar5 = 4;
    break;
  case 7:
    local_5 = *(char *)((int)this + 0x1ad);
    iVar5 = 5;
    break;
  case 8:
    local_5 = *(char *)((int)this + 0x1ae);
    iVar5 = 4;
    break;
  default:
    local_5 = '\0';
  }
  if (param_2 == 0) {
    return local_5;
  }
  if (local_5 == '\0') {
    return '\0';
  }
  if (((*(char *)((int)this + 0x1ac) == '\0') || (*(int *)((int)this + 0x1b4) == 0)) ||
     (*(int *)((int)this + 0x1c4) == *(int *)((int)this + 0x1d4))) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((*(int *)((int)this + 0x1dc) != iVar5) || (bVar2)) {
    (**(code **)(*(int *)this + 4))(0,0);
    bVar7 = false;
    *(int *)((int)this + 0x1dc) = iVar5;
  }
  *(undefined2 *)((int)this + 0x1ad) = 0;
  *(undefined1 *)((int)this + 0x1ac) = 0;
  switch(param_1) {
  case 1:
  case 4:
    *(undefined1 *)((int)this + 0x1ac) = 1;
    if (bVar7) {
      FUN_10010109(this,0,1);
      **(undefined4 **)((int)this + 0x1d4) = *(undefined4 *)((int)this + 0x1b4);
      *(int *)((int)this + 0x1d4) = *(int *)((int)this + 0x1d4) + 4;
    }
  case 0:
  case 2:
  case 6:
    FUN_10010109(this,param_2,param_2);
    *(uint *)((int)this + 0x1e0) = *(int *)((int)this + 0x1d8) - param_2;
    uVar4 = param_2;
    do {
      **(int **)((int)this + 0x1d4) = *(int *)((int)this + 0x1d8) - uVar4;
      *(int *)((int)this + 0x1d4) = *(int *)((int)this + 0x1d4) + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    break;
  case 3:
  case 5:
    iVar5 = param_2 - 2;
    FUN_10010109(this,param_2,iVar5 * 3);
    *(uint *)((int)this + 0x1e0) = *(int *)((int)this + 0x1d8) - param_2;
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      **(int **)((int)this + 0x1d4) = *(int *)((int)this + 0x1d8) - param_2;
      *(int *)(*(int *)((int)this + 0x1d4) + 4) = (*(int *)((int)this + 0x1d8) - iVar5) + -1;
      *(int *)(*(int *)((int)this + 0x1d4) + 8) = *(int *)((int)this + 0x1d8) - iVar5;
      *(int *)((int)this + 0x1d4) = *(int *)((int)this + 0x1d4) + 0xc;
    }
    break;
  case 7:
    *(undefined1 *)((int)this + 0x1ac) = 1;
    if (*(int *)((int)this + 0x1e0) != -1) {
      FUN_100100d2(this,param_2,param_2);
    }
    piVar1 = (int *)((int)this + 0x1d4);
    if (*(int *)((int)this + 0x1e0) == -1) {
      FUN_10010109(this,param_2 + 2,param_2 + 2);
      FUN_10007b4f((int)this);
      *(int *)((int)this + 0x1e0) = extraout_EDX;
      *(int *)*piVar1 = extraout_EDX;
      *(int *)(*piVar1 + 4) = extraout_EDX + 1;
      *piVar1 = *piVar1 + 8;
    }
    else {
      FUN_10010109(this,param_2,param_2);
    }
    local_c = (int *)((int)this + 0x1d8);
    uVar4 = param_2;
    do {
      *(uint *)*piVar1 = *local_c - uVar4;
      *piVar1 = *piVar1 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    break;
  case 8:
    if (*(int *)((int)this + 0x1e0) != -1) {
      FUN_100100d2(this,param_2,param_2 * 3);
    }
    iVar5 = *(int *)((int)this + 0x1e0);
    uVar4 = param_2;
    if (iVar5 == -1) {
      FUN_10010109(this,param_2 + 2,param_2 * 3);
      iVar5 = (*(int *)((int)this + 0x1d8) - param_2) + -2;
      FUN_10007b4f((int)this);
      *(int *)((int)this + 0x1e0) = iVar5;
    }
    else {
      FUN_10010109(this,param_2,param_2 * 3);
    }
    do {
      **(int **)((int)this + 0x1d4) = iVar5;
      *(uint *)(*(int *)((int)this + 0x1d4) + 4) = (*(int *)((int)this + 0x1d8) - uVar4) + -1;
      *(uint *)(*(int *)((int)this + 0x1d4) + 8) = *(int *)((int)this + 0x1d8) - uVar4;
      *(int *)((int)this + 0x1d4) = *(int *)((int)this + 0x1d4) + 0xc;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if ((char)param_5 == '\0') {
    if (param_4 == 0) {
      FUN_10007dcc(this,param_3,param_2);
    }
    else {
      FUN_10007ce7(this,*param_3,param_4,param_2);
    }
  }
  else {
    piVar1 = param_3;
    uVar4 = param_2;
    if (param_4 == 0) {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        FUN_10007eb7(this,(undefined4 *)*piVar1,0);
        *(int *)((int)this + 0x1d0) = *(int *)((int)this + 0x1d0) + 0x50;
        piVar1 = piVar1 + 1;
      }
    }
    else {
      FUN_10007f29(this,(undefined4 *)*param_3,param_4,param_2);
    }
  }
  if (param_1 != 3) {
    if (param_1 == 4) {
LAB_10008307:
      if (param_2 < 2) {
        puVar3 = (undefined4 *)((int)this + 0x15c);
        puVar6 = (undefined4 *)((int)this + 0x10c);
        for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      else {
        iVar5 = 0;
        uVar4 = param_5;
        puVar3 = (undefined4 *)FUN_10007b85(param_3,param_2 - 2,param_4);
        FUN_10007a72(this,puVar3,iVar5,uVar4);
      }
      iVar5 = 1;
      puVar3 = (undefined4 *)FUN_10007b85(param_3,param_2 - 1,param_4);
      FUN_10007a72(this,puVar3,iVar5,param_5);
      *(undefined1 *)((int)this + 0x1ad) = 1;
      return local_5;
    }
    if (param_1 != 5) {
      if (param_1 == 7) goto LAB_10008307;
      if (param_1 != 8) {
        return local_5;
      }
      goto LAB_10008377;
    }
  }
  iVar5 = 0;
  uVar4 = param_5;
  puVar3 = (undefined4 *)FUN_10007b85(param_3,0,param_4);
  FUN_10007a72(this,puVar3,iVar5,uVar4);
LAB_10008377:
  iVar5 = 1;
  puVar3 = (undefined4 *)FUN_10007b85(param_3,param_2 - 1,param_4);
  FUN_10007a72(this,puVar3,iVar5,param_5);
  *(undefined1 *)((int)this + 0x1ae) = 1;
  return local_5;
}

