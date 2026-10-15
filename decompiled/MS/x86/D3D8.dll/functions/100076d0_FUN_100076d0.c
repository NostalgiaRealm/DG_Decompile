/*
 * FUN_100076d0 at 100076d0
 * int __thiscall FUN_100076d0(void * this, int * param_1)
 * Address ranges: 100076d0-10007aa6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_100076d0(void *this,int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  SIZE_T SVar6;
  BOOL BVar7;
  int iVar8;
  int iVar9;
  undefined4 **ppuVar10;
  int *piVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 uStack_118;
  undefined4 *puStack_114;
  uint uStack_110;
  uint uStack_10c;
  int iStack_108;
  undefined4 *puStack_104;
  int *local_100;
  LPVOID pvStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 *puStack_ec;
  int aiStack_e8 [13];
  int iStack_b4;
  uint auStack_b0 [28];
  int aiStack_40 [6];
  int iStack_28;
  
  if (*(char *)((int)this + 0x58c0) != '\0') {
    return 0;
  }
  if (param_1 == (int *)0x0) {
    return -0x7789f794;
  }
  FUN_1000ef03((int)&uStack_118 + 3);
  piVar3 = (int *)((int)this + 0x58be);
  *(undefined1 *)((int)this + 0x58c0) = 1;
  local_100 = piVar3;
  if ((*(char *)((int)this + 0x58bd) != '\0') && (*(char *)piVar3 == '\0')) {
    iVar9 = -0x7789f798;
    goto LAB_10007a8c;
  }
  cVar2 = (**(code **)(*(int *)this + 0x14))();
  if (cVar2 == '\0') {
    uStack_118._0_3_ = CONCAT12(1,(ushort)uStack_118);
    uStack_110 = 0;
    puStack_114 = (undefined4 *)0x0;
    uStack_10c = 0;
    pvStack_fc = (LPVOID)0x0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_118 = (int *)CONCAT13(1,(uint3)uStack_118);
    iVar9 = 0;
    for (iStack_108 = 0; puVar13 = puStack_114, iStack_108 == 0; iStack_108 = iStack_108 + 1) {
      iVar9 = -0x7789f794;
      iStack_b4 = **(int **)((int)this + 0xad0);
      puStack_104 = *(undefined4 **)(iStack_b4 + 0xa4);
      puStack_ec = puStack_104;
      if ((param_1[6] != 0) || (*(HWND *)((int)this + 0xb08) != (HWND)0x0)) {
        piVar3 = FUN_10002fe2(aiStack_40 + 1,param_1,*(HWND *)((int)this + 0xb08));
        piVar11 = aiStack_e8;
        for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar11 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar11 = piVar11 + 1;
        }
        iVar9 = 0;
      }
      puVar13 = puStack_114;
      if (iVar9 < 0) goto LAB_10007a5d;
      auStack_b0[1] = 0;
      auStack_b0[2] = 0;
      auStack_b0[3] = 0;
      auStack_b0[4] = 0;
      auStack_b0[5] = 0;
      auStack_b0[6] = 0;
      iVar9 = FUN_10003e23(this,(int)puStack_ec,aiStack_e8,'\x01',(int *)auStack_b0);
      iStack_f0 = iVar9;
      uVar4 = FUN_1000f99b(*(void **)(*(int *)((int)this + 0xad0) + iStack_108 * 4),auStack_b0);
      uStack_118 = (int *)CONCAT13(uStack_118._3_1_ & (byte)uVar4,(uint3)uStack_118);
      if (iVar9 < 0) goto LAB_10007a5d;
      uVar5 = FUN_10007aa7(&pvStack_fc,auStack_b0);
      if ((char)uVar5 == '\0') goto LAB_10007a50;
      if (uStack_110 == uStack_10c) {
        if (uStack_10c == 0) {
          uVar4 = 0x10;
        }
        else {
          uVar4 = uStack_10c * 2;
        }
        SVar6 = (SIZE_T)((ulonglong)uVar4 * 0x3c);
        if ((int)((ulonglong)uVar4 * 0x3c >> 0x20) != 0) {
          SVar6 = 0xffffffff;
        }
        puStack_104 = (undefined4 *)FUN_100ad4a9(SVar6);
        if (puStack_104 == (undefined4 *)0x0) goto LAB_10007a50;
        FUN_100adac0(puStack_104,puVar13,uStack_10c * 0x3c);
        thunk_FUN_100ad48c(puVar13);
        puStack_114 = puStack_104;
        uStack_10c = uVar4;
      }
      iVar1 = uStack_110 * 0xf;
      uStack_110 = uStack_110 + 1;
      ppuVar10 = &puStack_ec;
      puVar13 = puStack_114 + iVar1;
      for (iVar9 = 0xf; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar13 = *ppuVar10;
        ppuVar10 = ppuVar10 + 1;
        puVar13 = puVar13 + 1;
      }
      iVar9 = iStack_f0;
    }
    if (-1 < iVar9) {
      (**(code **)(*(int *)this + 0x18))();
      FUN_100057e0((int)this);
      if (uStack_118._3_1_ == '\0') {
        FUN_10003aa0(this,1);
        iVar9 = FUN_100039f8(this,uStack_110,(int)puVar13);
        if (iVar9 < 0) {
LAB_10007a50:
          iVar9 = -0x7fffbffb;
          goto LAB_10007a5d;
        }
      }
      else {
        (**(code **)(*(int *)this + 0x1c))(**(undefined4 **)((int)this + 0xad0));
        BVar7 = IsIconic((HWND)puVar13[7]);
        if (BVar7 != 0) {
          ShowWindow((HWND)puVar13[7],1);
        }
        piVar3 = local_100;
        piVar11 = local_100;
        if ((*(char *)((int)local_100 + 0x6d) == '\0') &&
           ((*(char *)(DAT_100ba2b4 + 0x7e5) != '\0' || (*(char *)(DAT_100ba2b4 + 0x784) == '\0'))))
        {
          piVar11 = (int *)**(undefined4 **)((int)this + 0xad0);
          cVar2 = FUN_10024920(piVar11);
          if (cVar2 == '\0') {
            FUN_1002483e(piVar11,'\0');
          }
          piVar11 = local_100;
          piVar12 = aiStack_40;
          for (iVar9 = 6; piVar3 = piVar3 + 1, iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar12 = *piVar3;
            piVar12 = piVar12 + 1;
          }
          iStack_28 = local_100[0x11];
          FUN_100030d5(*(void **)((int)this + 0xacc),*uStack_118,aiStack_40,(uint *)(local_100 + 7))
          ;
        }
        uVar5 = FUN_1000313f(*(void **)((int)this + 0xacc),*(int *)((int)this + 0xb2c));
        *(undefined4 *)((int)this + 0xb1c) = uVar5;
        (**(code **)(*(int *)this + 0xc))(local_100[1],local_100[2]);
        if (*(int *)((int)this + 0xb04) == 1) {
          iVar9 = FUN_1000faa5((int)piVar11);
        }
        else {
          iVar9 = 0;
        }
        iVar1 = **(int **)((int)this + 0xad0);
        piVar3 = (int *)(iVar1 + 0x48);
        for (iVar8 = 0x1c; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar3 = *piVar11;
          piVar11 = piVar11 + 1;
          piVar3 = piVar3 + 1;
        }
        *(int *)(iVar1 + 0xcc) = iVar9;
        *(undefined1 *)(iVar1 + 0xd4) = 0;
        puVar13 = puStack_114;
      }
      *(undefined1 *)((int)this + 0x58bd) = 0;
      (**(code **)(*(int *)this + 0x20))();
      *(undefined1 *)((int)this + 0xa01) = 0;
      iVar9 = 0;
      uStack_118._0_3_ = (uint3)(ushort)uStack_118;
    }
LAB_10007a5d:
    thunk_FUN_100ad48c(pvStack_fc);
    thunk_FUN_100ad48c(puVar13);
    piVar3 = local_100;
    if (uStack_118._2_1_ == '\0') goto LAB_10007a8c;
  }
  else {
    iVar9 = -0x7789f798;
  }
  if (*(char *)((int)this + 0x58bd) == '\0') {
    FUN_10006cd0((int)this);
    *(char *)piVar3 = '\x01';
  }
LAB_10007a8c:
  *(undefined1 *)((int)this + 0x58c0) = 0;
  FUN_1000ef6a();
  return iVar9;
}

