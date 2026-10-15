/*
 * FUN_10042570 at 10042570
 * undefined __thiscall FUN_10042570(void * this, int * param_1, uint param_2, int * param_3, int * param_4)
 * Address ranges: 10042570-10042e2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10042570(void *this,int *param_1,uint param_2,int *param_3,int *param_4)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  byte *pbVar13;
  int *piVar14;
  int unaff_EBX;
  int unaff_ESI;
  uint uVar15;
  float10 fVar16;
  int *local_50;
  int local_48;
  undefined1 auStack_44 [4];
  int iStack_40;
  int iStack_3c;
  byte *pbStack_38;
  int *local_34;
  void *local_30;
  longlong lStack_2c;
  byte *pbStack_24;
  int iStack_20;
  int *piStack_1c;
  int *local_18 [5];
  
  FUN_10042220(this,0,0,0);
  if ((*param_3 == 0) && (*param_4 == 0)) {
    uVar15 = 0;
    do {
      piVar14 = *(int **)((int)this + uVar15 * 4 + 0xfa80);
      if (piVar14 != (int *)0x0) {
        cVar8 = (char)piVar14[0xb] * (char)*(undefined4 *)((int)this + uVar15 * 4 + 0xfaa4) +
                (char)*(undefined4 *)((int)this + uVar15 * 4 + 0xfa94);
        uVar10 = (**(code **)(*piVar14 + 0x84))();
        FUN_1003cee0(this,uVar10,cVar8);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < 4);
    piVar14 = *(int **)((int)this + 0xfa90);
    if (piVar14 != (int *)0x0) {
      cVar8 = (char)piVar14[0xb] * (char)*(undefined4 *)((int)this + 0xfab8) +
              (char)*(undefined4 *)((int)this + 0xfab4);
      uVar15 = (**(code **)(*piVar14 + 0x84))();
      FUN_1003d0c0(this,uVar15,cVar8);
      cVar8 = (**(code **)(**(int **)((int)this + 0xfa90) + 0x44))();
      if (cVar8 != '\0') {
        piVar14 = *(int **)((int)this + 0xfa90);
        cVar8 = ((char)*(undefined4 *)((int)this + 0xfab8) + (char)piVar14[9]) * (char)piVar14[0xb]
                + (char)*(undefined4 *)((int)this + 0xfab4);
        uVar15 = (**(code **)(*piVar14 + 0x84))();
        FUN_1003d0c0(this,uVar15,cVar8);
      }
    }
    *(undefined4 *)((int)this + 0xfa8c) = 0;
    *(undefined4 *)((int)this + 0xfa88) = 0;
    *(undefined4 *)((int)this + 0xfa84) = 0;
    *(undefined4 *)((int)this + 0xfa80) = 0;
    uVar3 = *(undefined4 *)((int)this + 0xf7f8);
    *(undefined4 *)((int)this + 0xf9f0) = uVar3;
    *(undefined4 *)((int)this + 0xf9ec) = uVar3;
    *(undefined4 *)((int)this + 0xf9e8) = uVar3;
    *(undefined4 *)((int)this + 0xf9e4) = uVar3;
    *(undefined4 *)((int)this + 0xf850) = 0;
    *(undefined4 *)((int)this + 0xf84c) = 0;
    *(undefined4 *)((int)this + 0xf848) = 0;
    *(undefined4 *)((int)this + 0xf844) = 0;
    *(undefined4 *)((int)this + 0xfa90) = 0;
    *(undefined4 *)((int)this + 0xfa78) = uVar3;
    *(undefined4 *)((int)this + 0xf864) = 0;
    *(undefined4 *)((int)this + 0x7578) = 0;
    *(undefined4 *)((int)this + 0x757c) = 0;
    *(undefined1 *)((int)this + 0x7645) = 1;
    *(undefined4 *)((int)this + 0xe3c) = 1;
    *(undefined4 *)((int)this + 0xfa70) = 0;
    *(undefined4 *)((int)this + 0xfa6c) = 0;
    *(undefined1 *)((int)this + 0xf6a1) = 1;
    *(undefined1 *)((int)this + 0xfd95) = 0;
    *(undefined1 *)((int)this + 0xf66a) = 1;
    return;
  }
  piVar14 = (int *)0x0;
  local_18[0] = (int *)0x0;
  local_18[1] = (int *)0x0;
  local_18[2] = (int *)0x0;
  local_18[3] = (int *)0x0;
  if (param_1 != (int *)0x0) {
    do {
      piVar11 = (int *)(param_3[(int)piVar14 * 3] + -0xc0);
      if (param_3[(int)piVar14 * 3] == 0) {
        piVar11 = (int *)0x0;
      }
      local_18[(int)piVar14] = piVar11;
      piVar14 = (int *)((int)piVar14 + 1);
    } while (piVar14 < param_1);
  }
  local_34 = (int *)(*param_4 + -0xc0);
  if (*param_4 == 0) {
    local_34 = (int *)0x0;
  }
  local_50 = (int *)0x0;
  if (param_1 != (int *)0x0) {
    local_30 = (void *)((int)this + 0xf8f0);
    iVar12 = (int)this + 0xf9e4;
    piVar14 = (int *)((int)this + 0xfa94);
    do {
      piVar11 = *(int **)((int)this + (int)local_50 * 4 + 0xfa80);
      local_48 = iVar12;
      if (piVar11 != (int *)0x0) {
        cVar8 = (char)piVar11[0xb] * (char)*(undefined4 *)((int)this + (int)local_50 * 4 + 0xfaa4) +
                (char)piVar14[(int)local_50];
        uVar15 = (**(code **)(*piVar11 + 0x84))();
        FUN_1003cee0(this,uVar15,cVar8);
        local_48 = (int)this + 0xf9e4;
      }
      pbStack_38 = (byte *)((int)this + 0xfd95);
      piStack_1c = local_18[(int)local_50];
      if (piStack_1c == (int *)0x0) {
        *(undefined4 *)((int)this + (int)local_50 * 4 + 0xfa80) = 0;
        *(undefined4 *)((int)this + (int)local_50 * 4 + 0xf844) = 0;
        piVar14[(int)local_50] = 0;
        *(undefined4 *)((int)this + (int)local_50 * 4 + 0xfaa4) = 0;
        uVar15 = *(uint *)((int)this + 0xf7f0);
        iVar12 = *(int *)(*(int *)((int)this + 0xf6b8) + 0x15dc);
        piVar11 = *(int **)(*(int *)(iVar12 + 0x34) + (uVar15 >> 0x10) * 8);
        (**(code **)(*piVar11 + 0x24))(piVar11,&iStack_3c);
        iStack_3c = iStack_3c + (uVar15 & 0xffff) * *(int *)(iVar12 + 0x18);
        *(int *)(local_48 + (int)local_50 * 4) = iStack_3c;
        *(int *)((int)this + (int)local_50 * 4 + 0xfa5c) = iStack_3c;
        pbVar13 = pbStack_38;
        if (local_50 == (int *)0x0) {
          *(undefined4 *)((int)this + 0xfa70) = 0;
          *(undefined4 *)((int)this + 0xfa6c) = 0;
          pbVar13 = (byte *)((int)this + 0xfd95);
        }
        bVar9 = *pbVar13 & ~(byte)(1 << ((uint)local_50 & 0x1f));
        iVar12 = local_48;
      }
      else {
        iStack_20 = piStack_1c[0xb] * param_3[(int)local_50 * 3 + 2] +
                    param_3[(int)local_50 * 3 + 1];
        *(int **)((int)this + (int)local_50 * 4 + 0xfa80) = piStack_1c;
        uVar15 = (**(code **)(*piStack_1c + 0x94))(iStack_20);
        iVar12 = *(int *)(*piVar14 + 0x15dc);
        piVar11 = *(int **)(*(int *)(iVar12 + 0x34) + (uVar15 >> 0x10) * 8);
        (**(code **)(*piVar11 + 0x24))(piVar11,&local_48);
        pbVar13 = (&pbStack_24)[(int)piVar14];
        piVar11 = (int *)((int)local_50 + (uVar15 & 0xffff) * *(int *)(iVar12 + 0x18));
        *(int **)((int)this + (int)piVar14 * 4 + 0xf844) = piVar11;
        *(int *)((int)this + (int)piVar14 * 4 + 0xfaa4) = *(int *)(pbVar13 + 0x7c);
        *(int *)(unaff_EBX + (int)piVar14 * 4) = param_3[(int)local_50 * 3 + 1];
        *(int *)(unaff_ESI + (int)piVar14 * 4) = param_3[(int)local_50 * 3 + 2];
        iVar12 = *(int *)(pbVar13 + 0x2c);
        iVar4 = param_3[(int)local_50 * 3 + 2];
        iVar5 = param_3[(int)local_50 * 3 + 1];
        pbStack_38 = (byte *)(**(code **)(*(int *)pbVar13 + 0x84))();
        lStack_2c = CONCAT44(lStack_2c._4_4_,(int)pbStack_38 >> 0x1f);
        pbStack_24 = pbStack_38;
        uVar15 = FUN_10043ff0(local_30,(uint)pbStack_38,(int)pbStack_38 >> 0x1f);
        if ((((uVar15 == *(uint *)((int)this + 0xf8f8)) ||
             (iVar6 = *(int *)((int)this + 0xf8f4), *(byte **)(iVar6 + uVar15 * 0x18) != pbStack_38)
             ) || (*(uint *)(iVar6 + 4 + uVar15 * 0x18) != (uint)lStack_2c)) ||
           (iVar6 = iVar6 + uVar15 * 0x18, iVar6 == -0xc)) {
          lStack_2c = (ulonglong)CONCAT51(0x100000000,(char)local_48 + '\x01') << 0x10;
          FUN_10043dd0((void *)((int)this + 0xf8f0),(uint *)&pbStack_24,(uint *)&lStack_2c);
        }
        else {
          uVar15 = 0;
          do {
            if (*(char *)(iVar6 + 0xe + uVar15) == '\0') {
              *(char *)(iVar6 + 0xe + uVar15) = (char)local_48 + '\x01';
              *(undefined1 *)(iVar6 + 0x13) = 1;
              goto LAB_10042980;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < 4);
          *(undefined1 *)(iVar6 + 0x13) = 1;
        }
LAB_10042980:
        if (piVar14 == (int *)0x0) {
          uVar15 = (**(code **)(*piStack_1c + 0x9c))(iStack_20);
          iVar6 = *(int *)(iRam00000000 + 0x15dc);
          piVar7 = *(int **)(*(int *)(iVar6 + 0x34) + (uVar15 >> 0x10) * 8);
          (**(code **)(*piVar7 + 0x24))(piVar7,auStack_44);
          iStack_40 = iStack_40 + (uVar15 & 0xffff) * *(int *)(iVar6 + 0x18);
          *(int *)((int)this + 0xfa5c) = iStack_40;
          iVar12 = *(int *)(iVar12 * iVar4 + iVar5);
          *(int *)((int)this + 0xfa6c) = iVar12;
          if (iVar12 == 0x1c) {
            iVar12 = 0x1d;
          }
          *(int *)((int)this + 0xfa70) = iVar12;
          local_50 = piVar11;
        }
        else {
          *(undefined4 *)((int)this + (int)piVar14 * 4 + 0xfa5c) =
               *(undefined4 *)((int)this + (int)piVar14 * 4 + 0xf844);
          local_50 = piVar14;
        }
        *(undefined1 *)((int)this + 0xfd9b) = 1;
        bVar9 = *(byte *)((int)this + 0xfd95) | (byte)(1 << ((uint)local_50 & 0x1f));
        iVar12 = (int)this + 0xf9e4;
      }
      *(byte *)((int)this + 0xfd95) = bVar9;
      local_50 = (int *)((int)local_50 + 1);
    } while (local_50 < param_1);
  }
  piVar14 = local_34;
  if (*(int **)((int)this + 0xfa80) == (int *)0x0) {
    bVar9 = false;
  }
  else {
    cVar8 = (**(code **)(**(int **)((int)this + 0xfa80) + 0x40))();
    bVar9 = cVar8 != '\0';
  }
  uVar15 = 1;
  do {
    piVar11 = *(int **)((int)this + uVar15 * 4 + 0xfa80);
    if (piVar11 != (int *)0x0) {
      piStack_1c = (int *)CONCAT31(piStack_1c._1_3_,bVar9);
      cVar8 = (**(code **)(*piVar11 + 0x40))();
      if (cVar8 == '\0') {
        bVar9 = (byte)piStack_1c;
      }
      else {
        bVar9 = bVar9 | (byte)(1 << (uVar15 & 0x1f));
      }
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 < 4);
  bVar1 = *(byte *)((int)this + 0x763c);
  *(byte *)((int)this + 0x763c) = bVar9;
  bVar9 = bVar9 != bVar1 | *(byte *)((int)this + 0xf66c);
  *(byte *)((int)this + 0xf66c) = bVar9;
  if (param_2 != *(uint *)((int)this + 0xe3c)) {
    if (*(uint *)((int)this + 0xe3c) < 2) {
      pbStack_38 = (byte *)0xffffffff;
    }
    else {
      pbStack_38 = *(byte **)((int)this + 0xe38);
    }
    if (param_2 < 2) {
      uVar15 = 0xffffffff;
    }
    else {
      uVar15 = *(uint *)((int)this + 0xe38);
    }
    *(uint *)((int)this + 0xe3c) = param_2;
    uVar10 = (1 << ((byte)param_2 & 0x1f)) - 1;
    *(byte *)((int)this + 0xf66c) = (uVar10 & (uint)pbStack_38) != (uVar10 & uVar15) | bVar9;
  }
  if (piVar14 == (int *)0x0) {
    cVar8 = '\0';
  }
  else {
    cVar8 = (**(code **)(*piVar14 + 0x44))();
  }
  cVar2 = *(char *)((int)this + 0x7582);
  *(char *)((int)this + 0x7582) = cVar8;
  piVar11 = *(int **)((int)this + 0xfa90);
  *(byte *)((int)this + 0xf66b) = *(byte *)((int)this + 0xf66b) | cVar8 != cVar2;
  if (piVar11 != (int *)0x0) {
    cVar8 = (char)piVar11[0xb] * (char)*(undefined4 *)((int)this + 0xfab8) +
            (char)*(undefined4 *)((int)this + 0xfab4);
    uVar15 = (**(code **)(*piVar11 + 0x84))();
    FUN_1003d0c0(this,uVar15,cVar8);
    cVar8 = (**(code **)(**(int **)((int)this + 0xfa90) + 0x44))();
    if (cVar8 != '\0') {
      piVar11 = *(int **)((int)this + 0xfa90);
      cVar8 = ((char)*(undefined4 *)((int)this + 0xfab8) + (char)piVar11[9]) * (char)piVar11[0xb] +
              (char)*(undefined4 *)((int)this + 0xfab4);
      uVar15 = (**(code **)(*piVar11 + 0x84))();
      FUN_1003d0c0(this,uVar15,cVar8);
    }
  }
  if (piVar14 == (int *)0x0) {
    *(undefined4 *)((int)this + 0xfa78) = *(undefined4 *)((int)this + 0xf7f8);
    *(undefined4 *)((int)this + 0xf864) = 0;
    *(byte *)((int)this + 0xf66b) =
         *(byte *)((int)this + 0xf66b) | *(int *)((int)this + 0xfa90) != 0;
    piVar11 = (int *)0x0;
  }
  else {
    cVar8 = (char)piVar14[0xb] * (char)param_4[2] + (char)param_4[1];
    uVar15 = (**(code **)(*piVar14 + 0x84))();
    FUN_1003d010(this,uVar15,cVar8);
    cVar8 = (**(code **)(*piVar14 + 0x44))();
    if (cVar8 != '\0') {
      cVar8 = ((char)piVar14[9] + (char)param_4[2]) * (char)piVar14[0xb] + (char)param_4[1];
      uVar15 = (**(code **)(*piVar14 + 0x84))();
      FUN_1003d010(this,uVar15,cVar8);
    }
    if ((*(int *)((int)this + 0xfa90) == 0) ||
       (*(int *)(&DAT_100d2658 + *(int *)(*(int *)((int)this + 0xfa90) + 0x1c) * 4) !=
        *(int *)(&DAT_100d2658 + piVar14[7] * 4))) {
      bVar9 = 1;
    }
    else {
      bVar9 = 0;
    }
    *(byte *)((int)this + 0xf66d) = *(byte *)((int)this + 0xf66d) | bVar9;
    uVar15 = (**(code **)(*piVar14 + 0x98))(piVar14[0xb] * param_4[2] + param_4[1]);
    iVar12 = *(int *)(*(int *)((int)this + 0xf6b8) + 0x15e0);
    piVar14 = *(int **)(*(int *)(iVar12 + 0x34) + (uVar15 >> 0x10) * 8);
    (**(code **)(*piVar14 + 0x24))(piVar14,&iStack_20);
    *(int **)((int)this + 0xfa78) =
         (int *)((int)piStack_1c + (uVar15 & 0xffff) * *(int *)(iVar12 + 0x18));
    *(int *)((int)this + 0xf864) = local_34[0x1f];
    *(int *)((int)this + 0xfab4) = param_4[1];
    *(int *)((int)this + 0xfab8) = param_4[2];
    *(byte *)((int)this + 0xf66b) =
         *(byte *)((int)this + 0xf66b) | *(int *)((int)this + 0xfa90) == 0;
    *(undefined1 *)((int)this + 0xfd9b) = 1;
    piVar11 = local_34;
    piVar14 = local_34;
  }
  *(int **)((int)this + 0xfa90) = piVar11;
  if (local_18[0] != (int *)0x0) {
    piVar14 = local_18[0];
  }
  FUN_10053080(this,piVar14);
  FUN_10053210(this,piVar14);
  fVar16 = (float10)(**(code **)(*piVar14 + 0x2c))();
  piStack_1c = (int *)(float)fVar16;
  fVar16 = (float10)(**(code **)(*piVar14 + 0x30))();
  if (((float)piStack_1c != *(float *)((int)this + 0x6900)) ||
     ((float)fVar16 != *(float *)((int)this + 0x6904))) {
    *(undefined4 *)((int)this + 0x6908) = 0x3f800000;
    *(undefined4 *)((int)this + 0x690c) = 0x3f800000;
    *(undefined1 *)((int)this + 0xf6a3) = 1;
    *(float *)((int)this + 0x6900) = 1.0 / (float)piStack_1c;
    *(float *)((int)this + 0x6904) = 1.0 / (float)fVar16;
  }
  *(undefined1 *)((int)this + 0xf66a) = 1;
  return;
}

