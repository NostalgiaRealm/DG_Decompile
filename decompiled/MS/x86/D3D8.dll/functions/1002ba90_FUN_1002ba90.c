/*
 * FUN_1002ba90 at 1002ba90
 * undefined __thiscall FUN_1002ba90(void * this, uint param_1, uint param_2, int * param_3, int * param_4)
 * Address ranges: 1002ba90-1002bdd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002ba90(void *this,uint param_1,uint param_2,int *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  char cVar6;
  uint uVar7;
  byte bVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  int *local_2c [5];
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  void *local_8;
  
  local_8 = this;
  FUN_1002a5f0(this,0,0,0);
  if ((*param_3 == 0) && (*param_4 == 0)) {
    *(undefined4 *)((int)this + 0xdad8) = 0;
    *(undefined4 *)((int)this + 0xdad4) = 0;
    *(undefined4 *)((int)this + 0xdad0) = 0;
    *(undefined4 *)((int)this + 0xdacc) = 0;
    *(undefined4 *)((int)this + 0xdb54) = 0;
    *(undefined4 *)((int)this + 0xdb50) = 0;
    *(undefined4 *)((int)this + 0xdb4c) = 0;
    *(undefined4 *)((int)this + 0xdb48) = 0;
    *(undefined4 *)((int)this + 0xdadc) = 0;
    *(undefined4 *)((int)this + 0xdb78) = 0;
    *(undefined4 *)((int)this + 0x5888) = 0;
    *(undefined4 *)((int)this + 0x588c) = 0;
    *(undefined1 *)((int)this + 0x5958) = 1;
    *(undefined4 *)((int)this + 0x560) = 1;
    *(undefined1 *)((int)this + 0xd97a) = 1;
    return;
  }
  uVar7 = 0;
  local_2c[0] = (int *)0x0;
  local_2c[1] = (int *)0x0;
  local_2c[2] = (int *)0x0;
  local_2c[3] = (int *)0x0;
  if (param_1 != 0) {
    do {
      local_c = 0;
      piVar9 = (int *)(param_3[uVar7 * 3] + -0x88);
      if (param_3[uVar7 * 3] == 0) {
        piVar9 = (int *)0x0;
      }
      local_2c[uVar7] = piVar9;
      uVar7 = uVar7 + 1;
      this = local_8;
    } while (uVar7 < param_1);
  }
  uVar7 = 0;
  local_2c[4] = local_2c[0];
  piVar9 = (int *)(*param_4 + -0x88);
  if (*param_4 == 0) {
    piVar9 = (int *)0x0;
  }
  local_14 = piVar9;
  do {
    piVar2 = *(int **)((int)this + uVar7 * 4 + 0xdb08);
    if ((piVar2 != (int *)0x0) &&
       ((((*(int **)((int)this + 0xdacc) == piVar2 || (*(int **)((int)this + 0xdadc) == piVar2)) ||
         (local_2c[0] == piVar2)) || (piVar9 == piVar2)))) {
      *(undefined1 *)((int)this + 0xd979) = 1;
      pbVar5 = (byte *)((int)this + ((int)uVar7 >> 3) + 0xd970);
      *pbVar5 = *pbVar5 | '\x01' << (uVar7 & 7);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 8);
  uVar7 = 0;
  if (param_1 != 0) {
    local_8 = (void *)((int)this + 0xdb48);
    local_c = (int)this + 0xdae0;
    do {
      local_18 = (int)this + 0xdacc;
      piVar2 = local_2c[uVar7];
      if (piVar2 == (int *)0x0) {
        *(undefined4 *)(local_18 + uVar7 * 4) = 0;
        iVar10 = 0;
        *(undefined4 *)((int)this + uVar7 * 4 + 0xdb48) = 0;
        *(undefined4 *)((int)this + uVar7 * 4 + 0xdae0) = 0;
      }
      else {
        iVar10 = piVar2[0xb];
        iVar3 = param_3[uVar7 * 3 + 2];
        iVar4 = param_3[uVar7 * 3 + 1];
        *(int **)(local_18 + uVar7 * 4) = piVar2;
        *(undefined4 *)((int)this + uVar7 * 4 + 0xdb48) =
             *(undefined4 *)(piVar2[0x18] + (iVar10 * iVar3 + iVar4) * 0x1c);
        *(int *)((int)this + uVar7 * 4 + 0xdae0) = param_3[uVar7 * 3 + 1];
        iVar10 = param_3[uVar7 * 3 + 2];
        local_10 = iVar10;
      }
      *(int *)((int)this + uVar7 * 4 + 0xdaf0) = iVar10;
      uVar7 = uVar7 + 1;
      local_c = (int)this + 0xdae0;
      local_8 = (void *)((int)this + 0xdb48);
    } while (uVar7 < param_1);
  }
  if (*(int **)((int)this + 0xdacc) == (int *)0x0) {
    bVar11 = false;
  }
  else {
    cVar6 = (**(code **)(**(int **)((int)this + 0xdacc) + 0x40))();
    bVar11 = cVar6 != '\0';
  }
  cVar6 = *(char *)((int)this + 0x5950);
  *(bool *)((int)this + 0x5950) = bVar11;
  bVar8 = bVar11 != (bool)cVar6 | *(byte *)((int)this + 0xd97c);
  *(byte *)((int)this + 0xd97c) = bVar8;
  if (param_2 != *(uint *)((int)this + 0x560)) {
    if (*(uint *)((int)this + 0x560) < 2) {
      param_3 = (int *)0xffffffff;
    }
    else {
      param_3 = *(int **)((int)this + 0x55c);
    }
    if (param_2 < 2) {
      param_1 = 0xffffffff;
    }
    else {
      param_1 = *(uint *)((int)this + 0x55c);
    }
    *(uint *)((int)this + 0x560) = param_2;
    uVar7 = (1 << ((byte)param_2 & 0x1f)) - 1;
    *(byte *)((int)this + 0xd97c) = (uVar7 & (uint)param_3) != (uVar7 & param_1) | bVar8;
  }
  if (piVar9 == (int *)0x0) {
    cVar6 = '\0';
  }
  else {
    cVar6 = (**(code **)(*piVar9 + 0x44))();
  }
  cVar1 = *(char *)((int)this + 0x5892);
  *(char *)((int)this + 0x5892) = cVar6;
  *(byte *)((int)this + 0xd97b) = *(byte *)((int)this + 0xd97b) | cVar6 != cVar1;
  if (piVar9 == (int *)0x0) {
    *(undefined4 *)((int)this + 0xdadc) = 0;
    *(undefined4 *)((int)this + 0xdb78) = 0;
  }
  else {
    iVar10 = piVar9[0xb];
    iVar3 = param_4[2];
    iVar4 = param_4[1];
    *(int **)((int)this + 0xdadc) = piVar9;
    *(undefined4 *)((int)this + 0xdb78) =
         *(undefined4 *)(piVar9[0x18] + 4 + (iVar10 * iVar3 + iVar4) * 0x1c);
    *(int *)((int)this + 0xdb00) = param_4[1];
    *(int *)((int)this + 0xdb04) = param_4[2];
  }
  if (local_2c[4] != (int *)0x0) {
    piVar9 = local_2c[4];
  }
  FUN_10044b20(this,piVar9);
  FUN_10044cb0(this,piVar9);
  *(undefined1 *)((int)this + 0xd97a) = 1;
  return;
}

