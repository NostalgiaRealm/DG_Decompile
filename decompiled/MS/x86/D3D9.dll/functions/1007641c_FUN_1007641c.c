/*
 * FUN_1007641c at 1007641c
 * undefined1 __thiscall FUN_1007641c(void * this, int param_1, int param_2, int param_3, uint param_4, float param_5, float param_6, float param_7, float param_8)
 * Address ranges: 1007641c-100768d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_1007641c(void *this,int param_1,int param_2,int param_3,uint param_4,float param_5,float param_6
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
  int *piVar12;
  undefined4 extraout_ECX;
  uint extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined1 uVar13;
  undefined4 unaff_EBX;
  undefined4 uVar14;
  uint unaff_ESI;
  int *piVar15;
  float10 fVar16;
  float fVar17;
  undefined8 uVar18;
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
  
  FUN_100b8667(*(void **)((int)this + 0x1cf00),this,(int)this);
  piVar15 = (int *)(param_3 + -0x88);
  if ((*(int *)(param_3 + 4) == 0) && (param_3 == 0)) {
    piVar15 = (int *)0x0;
  }
  (**(code **)(*piVar15 + 0x58))(param_1,param_2);
  fVar16 = (float10)(**(code **)(*piVar15 + 0x2c))();
  fVar1 = (float)fVar16;
  fVar16 = (float10)(**(code **)(*piVar15 + 0x30))();
  iVar9 = piVar15[0xb];
  pvStack_bc = (void *)(float)fVar16;
  RStack_b8.top = 0;
  piStack_c0 = piVar15 + 0x12;
  cVar4 = (**(code **)(*piVar15 + 0x54))();
  RStack_b8.left = (LONG)fVar1;
  if ((((cVar4 == '\0') || (cVar4 = FUN_1003a4d0(piVar15[0xd]), cVar4 != '\0')) ||
      (piVar15[0x3d] == 0)) ||
     (BVar6 = IsRectEmpty((RECT *)(piVar15[0x40] + (iVar9 * param_2 + param_1) * 0x1c + 0xc)),
     BVar6 != 0)) {
LAB_1007650d:
    (**(code **)(*piVar15 + 4))(param_1,param_2,0);
  }
  else {
    piStack_c0 = piVar15 + 0x3a;
    pvStack_bc = (void *)0x3f800000;
    RStack_b8.left = 0x3f800000;
    RStack_b8.top = (LONG)piVar15;
    if (piVar15 == (int *)0x0) goto LAB_1007650d;
  }
  fVar17 = param_7;
  FUN_1008cc0c(&RStack_b8.right,param_7,param_8);
  piVar12 = (int *)piStack_c0[4];
  if (piVar12 == (int *)0x0) {
    piVar12 = (int *)piStack_c0[3];
  }
  (**(code **)(*piVar12 + 0x28))(piVar12,auStack_3c);
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
LAB_100765f7:
    cVar4 = '\0';
  }
  else {
    piVar10 = (int *)(param_3 + -0x54);
    if (param_3 == 0) {
      piVar10 = (int *)&DAT_00000034;
    }
    cVar5 = FUN_1003a4d0(*piVar10);
    cVar4 = (char)extraout_EDX;
    uVar8 = extraout_EDX;
    if (cVar5 == '\0') goto LAB_100765f7;
  }
  if (((float)RStack_b8.left == 0.0) && ((int *)RStack_b8.top == (int *)0x0)) {
    uVar7 = (uint)piVar15[5] >> ((byte)param_1 & 0x1f);
    if (uVar7 == 0) {
      uVar7 = uVar8;
    }
    if (RStack_b8.right != uVar7) goto LAB_10076736;
    uVar7 = (uint)piVar15[6] >> ((byte)param_1 & 0x1f);
    if (uVar7 == 0) {
      uVar7 = uVar8;
    }
    if (RStack_b8.bottom != uVar7) goto LAB_10076736;
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
      uVar18 = FUN_1008d688(piVar15[7],iVar9,param_4,'\x01' - (bVar2 || bVar3),afStack_54);
      if (((char)uVar18 != '\0') && (*(int *)(*(int *)((int)this + 0x1cf04) + 0x14) != 0x1002)) {
        piVar10 = *(int **)(*(int *)((int)this + 0x1cf04) + 4);
        (**(code **)(*piVar10 + 200))
                  (piVar10,*(undefined4 *)(piVar12[6] + unaff_ESI * 0x1c),afStack_54);
        goto LAB_10076881;
      }
      goto LAB_10076747;
    }
    FUN_1008cdf4();
    uVar8 = 0;
    cVar4 = (**(code **)(*piVar15 + 0x44))();
    uVar14 = extraout_EDX_00;
    if (cVar4 != '\0') {
      uVar8 = FUN_1008ce43(piVar15[7],param_4);
      uVar8 = uVar8 & 0xff;
      uVar14 = 3;
    }
    iVar9 = *(int *)(piVar12[6] + 4 + unaff_ESI * 0x1c);
    if (iVar9 == 0) {
      uVar13 = 0;
      goto LAB_10076888;
    }
    piVar12 = *(int **)(*(int *)((int)this + 0x1cf04) + 4);
    (**(code **)(*piVar12 + 0xd4))(piVar12,iVar9,uVar14,fVar17,uVar8);
  }
  else {
LAB_10076736:
    if (cVar4 == '\0') {
LAB_10076747:
      iStack_cc = 0x1cf68;
      if (!bVar2 && !bVar3) {
        iStack_cc = 0x1cf6c;
      }
    }
    else {
      iStack_cc = 0x1cf70;
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
    FUN_1008d7b1(this,piVar15[7],iVar9,param_4);
    FUN_100b4d9e(*(void **)((int)this + 0x1cf00),*(int *)((int)this + 0x14),(uint *)&DAT_100d3da8,
                 (int *)0x0,-1,'\0');
    FUN_100b4ef1(*(void **)((int)this + 0x1cf00),*(int *)((int)this + 0x14),(uint *)&DAT_100d3f18);
    fStack_a8 = (float)piStack_c0 * param_5;
    fStack_a0 = (float)piStack_c0 * param_7;
    uStack_80 = 0;
    fStack_a4 = fVar1 * param_6;
    uStack_7c = 0;
    fStack_9c = fVar1 * param_8;
    iStack_88 = param_1;
    puVar11 = (undefined4 *)(unaff_ESI * 0x1c + piVar12[6]);
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
      piVar12 = (int *)&DAT_100d3f40;
      uStack_78 = unaff_EBX;
    }
    else {
      uStack_5c = puVar11[1];
      piVar12 = (int *)&DAT_100d3eb0;
      uStack_60 = unaff_EBX;
    }
    FUN_100b4e84(*(void **)((int)this + 0x1cf00),*(int *)((int)this + 0x14),piVar12,0);
    FUN_100742ba(this,&fStack_a8,*(int *)(iStack_cc + (int)this),extraout_ECX,0);
  }
LAB_10076881:
  uVar13 = 1;
LAB_10076888:
  if (pvStack_bc == (void *)0x0) {
    (**(code **)(*piVar15 + 0xc))(unaff_ESI,&RStack_b8);
  }
  else {
    FUN_1007b1a2(pvStack_bc,unaff_ESI,&RStack_b8);
  }
  (**(code **)(*piVar15 + 0x5c))(param_1,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0x1cf00) + 0x4a0));
  return uVar13;
}

