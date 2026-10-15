/*
 * FUN_100097de at 100097de
 * undefined1 __thiscall FUN_100097de(void * this, int param_1, int param_2, int param_3, uint param_4, float param_5, float param_6, float param_7, float param_8)
 * Address ranges: 100097de-10009c8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_100097de(void *this,int param_1,int param_2,int param_3,uint param_4,float param_5,float param_6
            ,float param_7,float param_8)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 extraout_ECX;
  uint extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined1 uVar12;
  undefined4 unaff_EBX;
  undefined4 uVar13;
  uint unaff_ESI;
  int *piVar14;
  float10 fVar15;
  float fVar16;
  undefined8 uVar17;
  int *piVar18;
  int iStack_cc;
  int *piStack_c0;
  void *pvStack_bc;
  RECT RStack_b8;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float afStack_54 [6];
  undefined1 auStack_3c [8];
  int iStack_34;
  
  FUN_10048d82(*(void **)((int)this + 0xcf00),this,(int)this);
  piVar14 = (int *)(param_3 + -0x88);
  if ((*(int *)(param_3 + 4) == 0) && (param_3 == 0)) {
    piVar14 = (int *)0x0;
  }
  (**(code **)(*piVar14 + 0x58))(param_1,param_2);
  fVar15 = (float10)(**(code **)(*piVar14 + 0x2c))();
  fVar1 = (float)fVar15;
  fVar15 = (float10)(**(code **)(*piVar14 + 0x30))();
  iVar9 = piVar14[0xb];
  pvStack_bc = (void *)(float)fVar15;
  RStack_b8.top = 0;
  piStack_c0 = piVar14 + 0x12;
  cVar4 = (**(code **)(*piVar14 + 0x54))();
  RStack_b8.left = (LONG)fVar1;
  if ((((cVar4 == '\0') || (cVar4 = FUN_10006992(piVar14[0xd]), cVar4 != '\0')) ||
      (piVar14[0x3d] == 0)) ||
     (BVar6 = IsRectEmpty((RECT *)(piVar14[0x40] + (iVar9 * param_2 + param_1) * 0x1c + 0xc)),
     BVar6 != 0)) {
LAB_100098cf:
    (**(code **)(*piVar14 + 4))(param_1,param_2,0);
  }
  else {
    piStack_c0 = piVar14 + 0x3a;
    pvStack_bc = (void *)0x3f800000;
    RStack_b8.left = 0x3f800000;
    RStack_b8.top = (LONG)piVar14;
    if (piVar14 == (int *)0x0) goto LAB_100098cf;
  }
  fVar16 = param_7;
  FUN_1001fa92(&RStack_b8.right,param_7,param_8);
  piVar18 = (int *)piStack_c0[4];
  if (piVar18 == (int *)0x0) {
    piVar18 = (int *)piStack_c0[3];
  }
  (**(code **)(*piVar18 + 0x28))(piVar18,auStack_3c);
  if ((((iStack_34 == 0x1b) || (iStack_34 == 0x1c)) ||
      ((iStack_34 == 0x17 || ((iStack_34 == 0x18 || (iStack_34 == 0x38)))))) ||
     ((iStack_34 == 0x21 || (((iStack_34 == 0x23 || (iStack_34 == 9)) || (iStack_34 == 0xb)))))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  bVar3 = false;
  uVar8 = 1;
  if (((iStack_34 == 0x29) || (iStack_34 == 0x10)) ||
     (((iStack_34 == 2 || ((iStack_34 == 0x36 || (iStack_34 == 0x22)))) || (iStack_34 == 10)))) {
    bVar3 = true;
  }
  if (*(int *)(param_3 + 4) == 0) {
LAB_100099b9:
    cVar4 = '\0';
  }
  else {
    piVar10 = (int *)(param_3 + -0x54);
    if (param_3 == 0) {
      piVar10 = (int *)&DAT_00000034;
    }
    cVar5 = FUN_10006992(*piVar10);
    cVar4 = (char)extraout_EDX;
    uVar8 = extraout_EDX;
    if (cVar5 == '\0') goto LAB_100099b9;
  }
  if (((float)RStack_b8.left == 0.0) && ((int *)RStack_b8.top == (int *)0x0)) {
    uVar7 = (uint)piVar14[5] >> ((byte)param_1 & 0x1f);
    if (uVar7 == 0) {
      uVar7 = uVar8;
    }
    if (RStack_b8.right != uVar7) goto LAB_10009af8;
    uVar7 = (uint)piVar14[6] >> ((byte)param_1 & 0x1f);
    if (uVar7 == 0) {
      uVar7 = uVar8;
    }
    if (RStack_b8.bottom != uVar7) goto LAB_10009af8;
    if (cVar4 == '\0') {
      if (*(int *)(param_3 + 4) == 0) {
        iVar9 = 0;
      }
      else {
        piVar10 = (int *)(param_3 + -0x80);
        if (param_3 == 0) {
          piVar10 = (int *)&DAT_00000008;
        }
        iVar9 = *piVar10;
      }
      uVar17 = FUN_100204ec(piVar14[7],iVar9,param_4,'\x01' - (bVar2 || bVar3),afStack_54);
      if (((char)uVar17 != '\0') && (*(int *)(*(int *)((int)this + 0xcf04) + 0x14) != 0x1002)) {
        piVar10 = *(int **)(*(int *)((int)this + 0xcf04) + 4);
        (**(code **)(*piVar10 + 200))
                  (piVar10,*(undefined4 *)(piVar18[6] + unaff_ESI * 0x1c),afStack_54);
        goto LAB_10009c3a;
      }
      goto LAB_10009b09;
    }
    FUN_1001fca8();
    uVar8 = 0;
    cVar4 = (**(code **)(*piVar14 + 0x44))();
    uVar13 = extraout_EDX_00;
    if (cVar4 != '\0') {
      uVar8 = FUN_1001fcf7(piVar14[7],param_4);
      uVar8 = uVar8 & 0xff;
      uVar13 = 3;
    }
    iVar9 = *(int *)(piVar18[6] + 4 + unaff_ESI * 0x1c);
    if (iVar9 == 0) {
      uVar12 = 0;
      goto LAB_10009c41;
    }
    piVar18 = *(int **)(*(int *)((int)this + 0xcf04) + 4);
    (**(code **)(*piVar18 + 0xd4))(piVar18,iVar9,uVar13,fVar16,uVar8);
  }
  else {
LAB_10009af8:
    if (cVar4 == '\0') {
LAB_10009b09:
      iStack_cc = 0xcf68;
      if (!bVar2 && !bVar3) {
        iStack_cc = 0xcf6c;
      }
    }
    else {
      iStack_cc = 0xcf70;
    }
    if (*(int *)(param_3 + 4) == 0) {
      iVar9 = 0;
    }
    else {
      piVar10 = (int *)(param_3 + -0x80);
      if (param_3 == 0) {
        piVar10 = (int *)&DAT_00000008;
      }
      iVar9 = *piVar10;
    }
    FUN_10020615(this,piVar14[7],iVar9,param_4);
    FUN_10046a34(*(void **)((int)this + 0xcf00),*(int *)((int)this + 0x14),(int *)&DAT_10062d88);
    FUN_10046b04(*(void **)((int)this + 0xcf00),*(int *)((int)this + 0x14));
    fStack_a8 = (float)piStack_c0 * param_5;
    fStack_a0 = (float)piStack_c0 * param_7;
    uStack_80 = 0;
    fStack_a4 = fVar1 * param_6;
    uStack_7c = 0;
    fStack_9c = fVar1 * param_8;
    iStack_88 = param_1;
    puVar11 = (undefined4 *)(unaff_ESI * 0x1c + piVar18[6]);
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    iStack_84 = param_2;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    if (cVar4 == '\0') {
      uStack_74 = *puVar11;
      piVar18 = (int *)&DAT_10062f20;
      uStack_78 = unaff_EBX;
    }
    else {
      uStack_5c = puVar11[1];
      piVar18 = (int *)&DAT_10062e90;
      uStack_60 = unaff_EBX;
    }
    FUN_10046a9d(*(void **)((int)this + 0xcf00),*(int *)((int)this + 0x14),piVar18);
    FUN_10007760(this,&fStack_a8,*(int *)(iStack_cc + (int)this),extraout_ECX,0);
  }
LAB_10009c3a:
  uVar12 = 1;
LAB_10009c41:
  if (pvStack_bc == (void *)0x0) {
    (**(code **)(*piVar14 + 0xc))(unaff_ESI,&RStack_b8);
  }
  else {
    FUN_1000e4be(pvStack_bc,unaff_ESI,&RStack_b8);
  }
  (**(code **)(*piVar14 + 0x5c))(param_1,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0xcf00) + 0x4a0));
  return uVar12;
}

