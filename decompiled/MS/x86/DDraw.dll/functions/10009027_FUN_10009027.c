/*
 * FUN_10009027 at 10009027
 * undefined4 __thiscall FUN_10009027(void * this, void * param_1, int param_2, int param_3)
 * Address ranges: 10009027-100092f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10009027(void *this,void *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  HMODULE pHVar4;
  bool bVar5;
  WNDPROC pWVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 extraout_EAX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  iVar9 = param_2;
  pvVar3 = param_1;
  pHVar4 = DAT_1006c250;
  *(void **)((int)this + 4) = param_1;
  *(int *)((int)this + 8) = param_2;
  pWVar6 = FUN_10047784(pHVar4,&PTR_s_DGD3D11ROOT_1006ada8,0);
  *(WNDPROC *)((int)this + 0xcf00) = pWVar6;
  uVar10 = 0;
  if (pWVar6 != (WNDPROC)0x0) {
    *(WNDPROC *)((int)this + 0x10) = pWVar6;
    *(void **)((int)this + 4) = pvVar3;
    *(int *)((int)this + 8) = iVar9;
    FUN_1001f9f7(this,param_3);
    FUN_10048d82(*(void **)((int)this + 0xcf00),extraout_ECX,(int)this);
    piVar7 = (int *)FUN_10043b98(pvVar3,&local_2c);
    local_14 = *piVar7;
    local_10 = piVar7[1];
    local_c = piVar7[2];
    local_8 = (undefined4 *)piVar7[3];
    uVar8 = FUN_1004a2ee(*(void **)((int)this + 0xcf00),*(int *)((int)this + 0x14),local_14,local_c,
                         local_10,local_8);
    pHVar4 = DAT_1006c250;
    if ((char)uVar8 != '\0') {
      iVar9 = *(int *)((int)this + 0x14);
      pvVar3 = *(void **)((int)this + 0xcf00);
      *(int *)((int)this + 0x18) = iVar9 * 0x28 + 0x18 + (int)pvVar3;
      *(int *)((int)this + 0xcf04) = iVar9 * 0x1510 + 0x510 + (int)pvVar3;
      bVar5 = FUN_10046541(pvVar3,iVar9,pHVar4,0x28,0x100692a0,(int *)((int)this + 53000));
      if (bVar5) {
        bVar5 = FUN_1004664a(*(void **)((int)this + 0xcf00),*(int *)((int)this + 0x14),DAT_1006c250,
                             1,0x10069298,0x10069290,(int *)((int)this + 0xcfa8),(int)this + 0xcfac)
        ;
        uVar8 = extraout_ECX_00;
        if (bVar5) {
          local_2c = 4;
          local_34 = 0xd0;
          puVar1 = (undefined4 *)((int)this + 0xd1e0);
          local_20 = 0xd0;
          local_30 = 0;
          local_28 = 0;
          local_24 = 0;
          iVar9 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xcf04) + 0xc))
                            ((int *)**(undefined4 **)((int)this + 0xcf04),&local_34,0,puVar1);
          uVar8 = extraout_ECX_01;
          if (-1 < iVar9) {
            puVar2 = (undefined4 *)((int)this + 0xd1dc);
            local_1c = 0x4000;
            local_18 = 0;
            local_10 = 0;
            local_c = 0;
            local_14 = 1;
            local_8 = (undefined4 *)0x40;
            iVar9 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xcf04) + 0xc))
                              ((int *)**(undefined4 **)((int)this + 0xcf04),&local_1c,0,puVar2);
            if (-1 < iVar9) {
              uVar10 = FUN_100200ed(this);
              if ((char)uVar10 != '\0') {
                FUN_10020219(this);
                param_1 = (void *)0x0;
                (**(code **)(*(int *)**(undefined4 **)((int)this + 0xcf04) + 0x74))
                          ((int *)**(undefined4 **)((int)this + 0xcf04),0x1e,&param_1);
                *(int *)((int)this + 0xd1f4) = *(int *)((int)this + 0x14);
                *(int *)((int)this + 0xd1f0) = *(int *)((int)this + 0xcf00);
                *(int *)((int)this + 0xd1f8) =
                     *(int *)((int)this + 0x14) * 0x1510 + *(int *)((int)this + 0xcf00) + 0x510;
                *(undefined4 *)((int)this + 0xcfc0) = *(undefined4 *)((int)this + 0xcf00);
                *(undefined4 *)((int)this + 0xcfc4) = *(undefined4 *)((int)this + 0x14);
                FUN_10006b7f((void *)((int)this + 0xcfc8),*(int *)((int)this + 0xcf04),
                             *(char *)(*(int *)((int)this + 4) + 0x1f8));
                FUN_1004aa92(*(int *)((int)this + 0xcf00) + *(int *)((int)this + 0x14) * 0x28 + 0x30
                            );
                LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0xcf00) + 0x4a0));
                return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
              }
              FUN_10007710((int)this);
              (**(code **)(*(int *)*puVar2 + 8))((int *)*puVar2);
              *puVar2 = 0;
            }
            (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
            *puVar1 = 0;
            uVar8 = extraout_ECX_02;
          }
          FUN_1004675b(uVar8,1,(int)this + 0xcfa8,(int)this + 0xcfac);
          uVar8 = extraout_ECX_03;
        }
        FUN_1004661b(uVar8,0x28,(int)this + 53000);
      }
      FUN_1004a635(*(void **)((int)this + 0xcf00),*(int *)((int)this + 0x14));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0xcf00) + 0x4a0));
    *(undefined4 *)((int)this + 0x10) = 0;
    uVar10 = FUN_100461da(*(int **)((int)this + 0xcf00));
    *(undefined4 *)((int)this + 0xcf00) = 0;
  }
  return uVar10 & 0xffffff00;
}

