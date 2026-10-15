/*
 * FUN_10036e30 at 10036e30
 * undefined __thiscall FUN_10036e30(void * this, uint param_1, uint param_2, int * param_3, int * param_4)
 * Address ranges: 10036e30-100374d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10036e30(void *this,uint param_1,uint param_2,int *param_3,int *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int unaff_EBX;
  uint uVar11;
  bool bVar12;
  int iStack_4c;
  int local_44;
  byte *local_3c;
  uint uStack_38;
  int local_34;
  int *local_30;
  uint local_2c;
  int *local_28;
  int *piStack_24;
  undefined1 uStack_20;
  char cStack_1f;
  undefined4 uStack_1e;
  undefined1 uStack_1a;
  int *local_18 [5];
  
  FUN_10036ae0(this,0,0,0);
  if ((*param_3 == 0) && (*param_4 == 0)) {
    uVar11 = 0;
    do {
      piVar10 = *(int **)((int)this + uVar11 * 4 + 0xdbe4);
      if (piVar10 != (int *)0x0) {
        cVar6 = (char)piVar10[0xb] * (char)*(undefined4 *)((int)this + uVar11 * 4 + 0xdc08) +
                (char)*(undefined4 *)((int)this + uVar11 * 4 + 0xdbf8);
        uVar8 = (**(code **)(*piVar10 + 0x84))();
        FUN_10032490(this,uVar8,cVar6);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < 4);
    piVar10 = *(int **)((int)this + 0xdbf4);
    if (piVar10 != (int *)0x0) {
      cVar6 = (char)piVar10[0xb] * (char)*(undefined4 *)((int)this + 0xdc1c) +
              (char)*(undefined4 *)((int)this + 0xdc18);
      uVar11 = (**(code **)(*piVar10 + 0x84))();
      FUN_10032670(this,uVar11,cVar6);
      cVar6 = (**(code **)(**(int **)((int)this + 0xdbf4) + 0x44))();
      if (cVar6 != '\0') {
        piVar10 = *(int **)((int)this + 0xdbf4);
        cVar6 = ((char)*(undefined4 *)((int)this + 0xdc1c) + (char)piVar10[9]) * (char)piVar10[0xb]
                + (char)*(undefined4 *)((int)this + 0xdc18);
        uVar11 = (**(code **)(*piVar10 + 0x84))();
        FUN_10032670(this,uVar11,cVar6);
      }
    }
    *(undefined4 *)((int)this + 0xdbf0) = 0;
    *(undefined4 *)((int)this + 0xdbec) = 0;
    *(undefined4 *)((int)this + 0xdbe8) = 0;
    *(undefined4 *)((int)this + 0xdbe4) = 0;
    uVar2 = *(undefined4 *)((int)this + 0xda64);
    *(undefined4 *)((int)this + 0xdbd8) = uVar2;
    *(undefined4 *)((int)this + 0xdbd4) = uVar2;
    *(undefined4 *)((int)this + 0xdbd0) = uVar2;
    *(undefined4 *)((int)this + 0xdbcc) = uVar2;
    *(undefined4 *)((int)this + 0xdab8) = 0;
    *(undefined4 *)((int)this + 0xdab4) = 0;
    *(undefined4 *)((int)this + 0xdab0) = 0;
    *(undefined4 *)((int)this + 0xdaac) = 0;
    *(undefined4 *)((int)this + 0xdbf4) = 0;
    *(undefined4 *)((int)this + 0xdbdc) = uVar2;
    *(undefined4 *)((int)this + 0xdacc) = 0;
    *(undefined4 *)((int)this + 0x5888) = 0;
    *(undefined4 *)((int)this + 0x588c) = 0;
    *(undefined1 *)((int)this + 0x5958) = 1;
    *(undefined4 *)((int)this + 0x560) = 1;
    *(undefined1 *)((int)this + 0xde55) = 0;
    *(undefined1 *)((int)this + 0xd97a) = 1;
    return;
  }
  uVar11 = 0;
  local_18[0] = (int *)0x0;
  local_18[1] = (int *)0x0;
  local_18[2] = (int *)0x0;
  local_18[3] = (int *)0x0;
  if (param_1 != 0) {
    do {
      piVar10 = (int *)(param_3[uVar11 * 3] + -0xc0);
      if (param_3[uVar11 * 3] == 0) {
        piVar10 = (int *)0x0;
      }
      local_18[uVar11] = piVar10;
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_1);
  }
  local_28 = (int *)(*param_4 + -0xc0);
  if (*param_4 == 0) {
    local_28 = (int *)0x0;
  }
  local_2c = 0;
  if (param_1 != 0) {
    local_44 = (int)this + 0xdc08;
    local_3c = (byte *)((int)this + 0xde55);
    do {
      uVar11 = local_2c;
      local_30 = (int *)((int)this + 0xdaac);
      local_34 = (int)this + 0xdbcc;
      piVar10 = *(int **)((int)this + local_2c * 4 + 0xdbe4);
      if (piVar10 != (int *)0x0) {
        cVar6 = (char)piVar10[0xb] * (char)*(undefined4 *)(local_44 + local_2c * 4) +
                (char)*(undefined4 *)((int)this + local_2c * 4 + 0xdbf8);
        uVar8 = (**(code **)(*piVar10 + 0x84))();
        FUN_10032490(this,uVar8,cVar6);
        local_3c = (byte *)((int)this + 0xde55);
      }
      local_30 = (int *)((int)this + 0xdaac);
      local_34 = (int)this + 0xdbcc;
      if (local_18[uVar11] == (int *)0x0) {
        *(undefined4 *)(local_44 + uVar11 * 4) = 0;
        *(undefined4 *)((int)this + uVar11 * 4 + 0xdbe4) = 0;
        local_30[uVar11] = 0;
        *(undefined4 *)((int)this + uVar11 * 4 + 0xdbf8) = 0;
        *(undefined4 *)(local_34 + uVar11 * 4) = *(undefined4 *)((int)this + 0xda64);
        bVar7 = *local_3c & ~(byte)(1 << (uVar11 & 0x1f));
      }
      else {
        piVar10 = local_18[uVar11];
        piStack_24 = param_3 + uVar11 * 3;
        iVar3 = piVar10[0xb];
        iVar4 = piStack_24[2];
        iVar5 = piStack_24[1];
        *(int **)((int)this + uVar11 * 4 + 0xdbe4) = piVar10;
        uVar8 = (**(code **)(*piVar10 + 0x94))(iVar3 * iVar4 + iVar5);
        iVar3 = *(int *)(*(int *)((int)this + 0xd9b8) + 0x15dc);
        piVar10 = *(int **)(*(int *)(iVar3 + 0x34) + (uVar8 >> 0x10) * 8);
        (**(code **)(*piVar10 + 0x24))(piVar10,&local_3c);
        uVar11 = uStack_38;
        local_44 = local_44 + (uVar8 & 0xffff) * *(int *)(iVar3 + 0x18);
        *(int *)((int)this + uStack_38 * 4 + 0xdbf8) = local_44;
        *(int *)(local_3c + uStack_38 * 4) = (&piStack_24)[uStack_38][0x1f];
        *(int *)(iStack_4c + uStack_38 * 4) = local_30[1];
        *(int *)(unaff_EBX + uStack_38 * 4) = local_30[2];
        cVar6 = (char)(&piStack_24)[uStack_38][0xb] * (char)local_30[2] + (char)local_30[1];
        local_30 = (int *)(**(code **)(*(&piStack_24)[uStack_38] + 0x84))();
        local_2c = (int)local_30 >> 0x1f;
        piStack_24 = local_30;
        uVar8 = FUN_10038970((void *)((int)this + 0xdb38),(uint)local_30,local_2c);
        if ((((uVar8 == *(uint *)((int)this + 0xdb40)) ||
             (iVar3 = *(int *)((int)this + 0xdb3c), *(int **)(iVar3 + uVar8 * 0x18) != piStack_24))
            || (*(uint *)(iVar3 + 4 + uVar8 * 0x18) != local_2c)) ||
           (iVar3 = iVar3 + 0xc + uVar8 * 0x18, iVar3 == 0)) {
          uStack_20 = 0;
          uStack_1e = 0;
          cStack_1f = cVar6 + '\x01';
          uStack_1a = 1;
          FUN_10038740((void *)((int)this + 0xdb38),(uint *)&local_30,(uint *)&uStack_20);
        }
        else {
          uVar8 = 0;
          do {
            if (*(char *)(iVar3 + 1 + uVar8) == '\0') {
              *(char *)(iVar3 + uVar8 + 1) = cVar6 + '\x01';
              *(undefined1 *)(iVar3 + 6) = 1;
              goto LAB_10037200;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < 4);
          *(undefined1 *)(iVar3 + 6) = 1;
        }
LAB_10037200:
        bVar7 = *(byte *)((int)this + 0xde55) | (byte)(1 << (uVar11 & 0x1f));
        *(undefined1 *)((int)this + 0xde5b) = 1;
      }
      *local_3c = bVar7;
      local_2c = uVar11 + 1;
    } while (local_2c < param_1);
  }
  piVar10 = local_28;
  if (*(int **)((int)this + 0xdbe4) == (int *)0x0) {
    bVar12 = false;
  }
  else {
    cVar6 = (**(code **)(**(int **)((int)this + 0xdbe4) + 0x40))();
    bVar12 = cVar6 != '\0';
  }
  cVar6 = *(char *)((int)this + 0x5950);
  *(bool *)((int)this + 0x5950) = bVar12;
  bVar7 = bVar12 != (bool)cVar6 | *(byte *)((int)this + 0xd97c);
  *(byte *)((int)this + 0xd97c) = bVar7;
  if (param_2 != *(uint *)((int)this + 0x560)) {
    if (*(uint *)((int)this + 0x560) < 2) {
      local_2c = 0xffffffff;
    }
    else {
      local_2c = *(uint *)((int)this + 0x55c);
    }
    if (param_2 < 2) {
      uVar11 = 0xffffffff;
    }
    else {
      uVar11 = *(uint *)((int)this + 0x55c);
    }
    *(uint *)((int)this + 0x560) = param_2;
    uVar8 = (1 << ((byte)param_2 & 0x1f)) - 1;
    *(byte *)((int)this + 0xd97c) = (uVar8 & local_2c) != (uVar8 & uVar11) | bVar7;
  }
  if (piVar10 == (int *)0x0) {
    cVar6 = '\0';
  }
  else {
    cVar6 = (**(code **)(*piVar10 + 0x44))();
  }
  cVar1 = *(char *)((int)this + 0x5892);
  *(char *)((int)this + 0x5892) = cVar6;
  piVar9 = *(int **)((int)this + 0xdbf4);
  *(byte *)((int)this + 0xd97b) = *(byte *)((int)this + 0xd97b) | cVar6 != cVar1;
  if (piVar9 != (int *)0x0) {
    cVar6 = (char)piVar9[0xb] * (char)*(undefined4 *)((int)this + 0xdc1c) +
            (char)*(undefined4 *)((int)this + 0xdc18);
    uVar11 = (**(code **)(*piVar9 + 0x84))();
    FUN_10032670(this,uVar11,cVar6);
    cVar6 = (**(code **)(**(int **)((int)this + 0xdbf4) + 0x44))();
    if (cVar6 != '\0') {
      piVar9 = *(int **)((int)this + 0xdbf4);
      cVar6 = ((char)*(undefined4 *)((int)this + 0xdc1c) + (char)piVar9[9]) * (char)piVar9[0xb] +
              (char)*(undefined4 *)((int)this + 0xdc18);
      uVar11 = (**(code **)(*piVar9 + 0x84))();
      FUN_10032670(this,uVar11,cVar6);
    }
  }
  if (piVar10 == (int *)0x0) {
    *(undefined4 *)((int)this + 0xdbdc) = *(undefined4 *)((int)this + 0xda64);
    *(undefined4 *)((int)this + 0xdacc) = 0;
    *(byte *)((int)this + 0xd97b) =
         *(byte *)((int)this + 0xd97b) | *(int *)((int)this + 0xdbf4) != 0;
    piVar9 = (int *)0x0;
  }
  else {
    cVar6 = (char)piVar10[0xb] * (char)param_4[2] + (char)param_4[1];
    uVar11 = (**(code **)(*piVar10 + 0x84))();
    FUN_100325c0(this,uVar11,cVar6);
    cVar6 = (**(code **)(*piVar10 + 0x44))();
    if (cVar6 != '\0') {
      cVar6 = ((char)piVar10[9] + (char)param_4[2]) * (char)piVar10[0xb] + (char)param_4[1];
      uVar11 = (**(code **)(*piVar10 + 0x84))();
      FUN_100325c0(this,uVar11,cVar6);
    }
    uVar11 = (**(code **)(*piVar10 + 0x98))(piVar10[0xb] * param_4[2] + param_4[1]);
    iVar3 = *(int *)(*(int *)((int)this + 0xd9b8) + 0x15e0);
    piVar10 = *(int **)(*(int *)(iVar3 + 0x34) + (uVar11 >> 0x10) * 8);
    (**(code **)(*piVar10 + 0x24))(piVar10,&local_28);
    *(int **)((int)this + 0xdbdc) =
         (int *)((int)piStack_24 + (uVar11 & 0xffff) * *(int *)(iVar3 + 0x18));
    *(int *)((int)this + 0xdacc) = local_28[0x1f];
    *(int *)((int)this + 0xdc18) = param_4[1];
    *(int *)((int)this + 0xdc1c) = param_4[2];
    *(byte *)((int)this + 0xd97b) =
         *(byte *)((int)this + 0xd97b) | *(int *)((int)this + 0xdbf4) == 0;
    *(undefined1 *)((int)this + 0xde5b) = 1;
    piVar9 = local_28;
    piVar10 = local_28;
  }
  *(int **)((int)this + 0xdbf4) = piVar9;
  if (local_18[0] != (int *)0x0) {
    piVar10 = local_18[0];
  }
  FUN_10044b20(this,piVar10);
  FUN_10044cb0(this,piVar10);
  *(undefined1 *)((int)this + 0xd97a) = 1;
  return;
}

