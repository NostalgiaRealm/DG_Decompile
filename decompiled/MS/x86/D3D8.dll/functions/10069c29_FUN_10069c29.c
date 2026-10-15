/*
 * FUN_10069c29 at 10069c29
 * undefined __thiscall FUN_10069c29(void * this, int param_1, int param_2, int param_3, uint param_4, float param_5, float param_6, float param_7, float param_8)
 * Address ranges: 10069c29-1006a245
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10069c29(void *this,int param_1,int param_2,int param_3,uint param_4,float param_5,float param_6
            ,float param_7,float param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  BOOL BVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  uint unaff_EDI;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  uint uStack_11c;
  float fStack_10c;
  int *piStack_104;
  int *piStack_100;
  void *pvStack_fc;
  int iStack_f8;
  int *piStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int aiStack_84 [4];
  RECT RStack_74;
  float afStack_64 [6];
  undefined1 auStack_4c [24];
  int iStack_34;
  
  piVar12 = (int *)(param_3 + -0xc0);
  if ((*(int *)(param_3 + 4) == 0) && (param_3 == 0)) {
    piVar12 = (int *)0x0;
  }
  (**(code **)(*piVar12 + 0x58))(param_1);
  fVar13 = (float10)(**(code **)(*piVar12 + 0x2c))();
  piStack_104 = (int *)(float)fVar13;
  fVar13 = (float10)(**(code **)(*piVar12 + 0x30))();
  fVar16 = (float)fVar13;
  iVar5 = piVar12[0xb] * param_2 + param_1;
  piStack_f4 = (int *)0x0;
  cVar4 = (**(code **)(*piVar12 + 0x54))();
  if (cVar4 == '\0') {
LAB_10069ce2:
    (**(code **)(*piVar12 + 4))(param_1,param_2,0);
    fStack_10c = 1.00893e-43;
    piVar10 = piStack_104;
  }
  else {
    cVar4 = FUN_100306bf(piVar12[0xd]);
    if ((cVar4 != '\0') || (piVar12[0x52] == 0)) goto LAB_10069ce2;
    BVar6 = IsRectEmpty((RECT *)(piVar12[0x54] + iVar5 * 0x20 + 0x10));
    if (BVar6 != 0) goto LAB_10069ce2;
    fVar16 = 1.0;
    fStack_10c = 4.4281e-43;
    piVar10 = (int *)0x3f800000;
    piStack_f4 = piVar12;
  }
  FUN_10076a4f(&RStack_74.right,param_7,param_8);
  pvStack_fc = (void *)((float)piVar10 * param_5);
  fVar14 = (float)piVar10 * param_7;
  piStack_100 = *(int **)((int)fStack_10c + 0x10 + (int)piVar12);
  fVar15 = fVar16 * param_6;
  piStack_104 = (int *)(fVar16 * param_8);
  if (piStack_100 == (int *)0x0) {
    piStack_100 = *(int **)((int)fStack_10c + 0xc + (int)piVar12);
  }
  (**(code **)(*piStack_100 + 0x28))(piStack_100,auStack_4c);
  if (((((iStack_34 == 0x1b) || (iStack_34 == 0x1c)) || (iStack_34 == 0x17)) ||
      (((iStack_34 == 0x18 || (iStack_34 == 0x38)) ||
       ((iStack_34 == 0x21 || ((iStack_34 == 0x23 || (iStack_34 == 9)))))))) ||
     (bVar2 = false, iStack_34 == 0xb)) {
    bVar2 = true;
  }
  bVar3 = false;
  if (((((iStack_34 == 0x29) || (iStack_34 == 0x10)) || (iStack_34 == 2)) ||
      ((iStack_34 == 0x36 || (iStack_34 == 0x22)))) || (iStack_34 == 10)) {
    bVar3 = true;
  }
  if (*(int *)(param_3 + 4) != 0) {
    piVar10 = (int *)(param_3 + -0x8c);
    if (param_3 == 0) {
      piVar10 = (int *)&DAT_00000034;
    }
    cVar4 = FUN_100306bf(*piVar10);
    bVar1 = true;
    if (cVar4 != '\0') goto LAB_10069e23;
  }
  bVar1 = false;
LAB_10069e23:
  *(void **)(*(int *)(*(int *)((int)this + 0x1cf04) + 0x1304) + 0x948) = this;
  piVar10 = (int *)(*(int *)(*(int *)((int)this + 0x1cf04) + 0x1304) + 0x634);
  *piVar10 = *piVar10 + 1;
  FUN_1009897c(*(void **)(*(int *)((int)this + 0x1cf04) + 0x1304),
               *(undefined4 *)((int)this + 0x1cf0c));
  FUN_10098fc3(*(int *)(*(int *)((int)this + 0x1cf04) + 0x1304),*(int *)((int)this + 0x1cf0c));
  uVar7 = 4;
  if (bVar1) {
    uVar7 = 0x10;
  }
  FUN_100989a6(*(void **)(*(int *)((int)this + 0x1cf04) + 0x1304),(uint)fVar15,unaff_EDI,0,uVar7);
  uVar11 = 0;
  FUN_10076a4f(aiStack_84,0.0,fStack_10c);
  if (bVar1) {
    FUN_10097b61(*(void **)(*(int *)((int)this + 0x1cf04) + 0x15e0),(int *)&piStack_104,
                 *(uint *)((int)fVar14 + 0x20 + (int)piVar12),unaff_EDI);
    FUN_10076c3e();
    uStack_11c = 0;
    cVar4 = (**(code **)(*piVar12 + 0x44))();
    if (cVar4 == '\0') {
      uVar8 = 1;
    }
    else {
      FUN_100989a6(*(void **)(*(int *)((int)this + 0x1cf04) + 0x1304),(uint)fVar15,
                   (piVar12[9] + param_2) * piVar12[0xb] + param_1,0,0x10);
      uStack_11c = FUN_10076c8d(piVar12[7],param_4);
      uStack_11c = uStack_11c & 0xff;
      uVar8 = 3;
    }
    FUN_10099aed(*(int *)(*(int *)((int)this + 0x1cf04) + 0x1304),piStack_104,uVar8,uVar11,
                 uStack_11c,1,aiStack_84);
  }
  else {
    FUN_10097b61(*(void **)(*(int *)((int)this + 0x1cf04) + 0x15dc),(int *)&piStack_100,
                 *(uint *)((int)fVar14 + 0x1c + (int)piVar12),unaff_EDI);
    if (*(int *)(param_3 + 4) == 0) {
      iVar9 = 0;
    }
    else {
      piVar10 = (int *)(param_3 + -0xb8);
      if (param_3 == 0) {
        piVar10 = (int *)&DAT_00000008;
      }
      iVar9 = *piVar10;
    }
    uVar17 = FUN_100774d8(piVar12[7],iVar9,param_4,'\x01' - (bVar2 || bVar3),afStack_64);
    if ((char)uVar17 == '\0') {
      iStack_f8 = 0x1cfe4;
      if (!bVar2 && !bVar3) {
        iStack_f8 = 0x1cfe8;
      }
      if (*(int *)(param_3 + 4) == 0) {
        iVar9 = 0;
      }
      else {
        piVar10 = (int *)(param_3 + -0xb8);
        if (param_3 == 0) {
          piVar10 = (int *)&DAT_00000008;
        }
        iVar9 = *piVar10;
      }
      FUN_10077601(this,piVar12[7],iVar9,param_4);
      uVar11 = FUN_10069a80((void *)(*(int *)((int)this + 0x1cf04) + 0x1600),(int *)&DAT_100b0db0);
      *(undefined4 *)((int)this + 0x1cf28) = uVar11;
      uVar11 = FUN_10038bc0((void *)(*(int *)((int)this + 0x1cf04) + 0x1620),(uint *)&DAT_100b0d84);
      *(undefined4 *)((int)this + 0x1cf30) = uVar11;
      *(undefined4 *)((int)this + 0x1cf38) = *(undefined4 *)((int)this + 0x1d028);
      iStack_d4 = param_1;
      piStack_f4 = piStack_104;
      iStack_d0 = param_2;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_9c = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_ec = 0;
      fStack_e8 = fStack_10c;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_d8 = 0;
      iStack_f0 = iVar5;
      FUN_10097b61(*(void **)(*(int *)((int)this + 0x1cf04) + 0x15dc),(int *)&piStack_100,
                   *(uint *)((int)fVar14 + 0x1c + (int)piVar12),unaff_EDI);
      FUN_100996f0(*(int *)(*(int *)((int)this + 0x1cf04) + 0x1304),1,(int *)&piStack_100,0,
                   (int *)0x0);
      uVar11 = FUN_10039100((void *)(*(int *)((int)this + 0x1cf04) + 0x15f0),(int *)&DAT_100b0d50);
      *(undefined4 *)((int)this + 0x1cf34) = uVar11;
      *(undefined4 *)((int)this + 0x1cf68) = 0;
      *(undefined4 *)((int)this + 0x1cf44) = 1;
      *(undefined4 *)((int)this + 0x1cf48) = *(undefined4 *)((int)fVar14 + 0x34 + (int)piVar12);
      *(undefined4 *)((int)this + 0x1cf4c) = 0;
      fStack_bc = fVar15;
      FUN_10066cef(this,&piStack_f4,*(undefined4 *)(iStack_f8 + (int)this));
    }
    else {
      FUN_10099ab1(*(int *)(*(int *)((int)this + 0x1cf04) + 0x1304),piStack_100,afStack_64,1,
                   aiStack_84);
    }
  }
  if (pvStack_fc == (void *)0x0) {
    (**(code **)(*piVar12 + 0xc))(unaff_EDI,&RStack_74);
  }
  else {
    FUN_10071134(pvStack_fc,unaff_EDI,&RStack_74);
  }
  (**(code **)(*piVar12 + 0x5c))(param_1,param_2);
  FUN_10098927((void *)(*(int *)(*(int *)((int)this + 0x1cf04) + 0x1304) + 4),'\0');
  return;
}

