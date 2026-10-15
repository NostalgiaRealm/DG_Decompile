/*
 * FUN_100115b9 at 100115b9
 * undefined4 __thiscall FUN_100115b9(void * this, int * param_1, int param_2, int param_3)
 * Address ranges: 100115b9-10011894
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100115b9(void *this,int *param_1,int param_2,int param_3)

{
  WNDPROC pWVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  HANDLE pvVar5;
  undefined4 extraout_EAX;
  uint uVar6;
  undefined4 extraout_ECX;
  
  uVar3 = DAT_1006c250;
  *(int **)((int)this + 4) = param_1;
  *(int *)((int)this + 8) = param_2;
  pWVar1 = FUN_10047784(uVar3,&PTR_s_DGD3D12ROOT_1006adf0,0);
  *(WNDPROC *)((int)this + 0xcf00) = pWVar1;
  if (pWVar1 != (WNDPROC)0x0) {
    *(WNDPROC *)((int)this + 0x10) = pWVar1;
    *(int **)((int)this + 4) = param_1;
    *(int *)((int)this + 8) = param_2;
    FUN_1001f9f7(this,param_3);
    FUN_10048d82(*(void **)((int)this + 0xcf00),extraout_ECX,(int)this);
    iVar2 = 0xb000;
    if ((*param_1 != 5) && (*param_1 == 6)) {
      iVar2 = 0xc000;
    }
    uVar3 = FUN_100516bf(*(void **)((int)this + 0xcf00),*(int *)((int)this + 0x14),iVar2);
    if ((char)uVar3 != '\0') {
      *(int *)((int)this + 0x18) =
           *(int *)((int)this + 0x14) * 0x28 + 0x18 + *(int *)((int)this + 0xcf00);
      *(int *)((int)this + 0xcf04) =
           *(int *)((int)this + 0x14) * 0x16c0 + *(int *)((int)this + 0xcf00) + 0x6c0;
      uVar3 = FUN_1000fa87((int)this);
      if ((char)uVar3 != '\0') {
        iVar2 = FUN_1000f862((int)this);
        *(int *)((int)this + 0xcf0c) = iVar2;
        if (iVar2 != 0) {
          *(undefined4 *)((int)this + 0xcf2c) = 0xffffffff;
          *(undefined4 *)((int)this + 0xcf3c) = 0;
          *(undefined4 *)((int)this + 0xcf74) = 1;
          *(undefined4 *)((int)this + 0xcf78) = 0;
          *(undefined4 *)((int)this + 0xcf40) = 3;
          puVar4 = (undefined4 *)FUN_10060bca(8);
          *(undefined4 **)((int)this + 0xd028) = puVar4;
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = &PTR_s_POSITION_1006c044;
            *(undefined4 *)(*(int *)((int)this + 0xd028) + 4) = 2;
            uVar3 = FUN_1000f9fd(this);
            if ((char)uVar3 != '\0') {
              puVar4 = FUN_1004f4aa(-(uint)(*(int *)((int)this + 0xcf00) != 0) &
                                    *(int *)((int)this + 0xcf00) + 0x520U,
                                    *(undefined4 *)((int)this + 0x14),
                                    *(int *)((int)this + 0xcf04) + 0x1310,0xc0,0);
              *(undefined4 **)((int)this + 0xcf80) = puVar4;
              if (puVar4 != (undefined4 *)0x0) {
                iVar2 = *(int *)((int)this + 0xcf00);
                puVar4 = FUN_1004f4aa(iVar2 + 0x520U & -(uint)(iVar2 != 0),
                                      *(undefined4 *)((int)this + 0x14),
                                      *(int *)((int)this + 0xcf04) + 0x1370,0x4000,
                                      -(uint)(iVar2 != 0) & iVar2 + 0x508U);
                *(undefined4 **)((int)this + 0xcf7c) = puVar4;
                if (puVar4 != (undefined4 *)0x0) {
                  FUN_10020219(this);
                  uVar3 = *(undefined4 *)(*(int *)((int)this + 0xcf04) + 0x15d8);
                  *(undefined4 *)((int)this + 0xd070) = *(undefined4 *)((int)this + 0xcf00);
                  *(undefined4 *)((int)this + 0xd074) = *(undefined4 *)((int)this + 0x14);
                  *(undefined4 *)((int)this + 0xd078) = uVar3;
                  *(undefined4 *)((int)this + 0xd03c) = *(undefined4 *)((int)this + 0xcf00);
                  *(undefined4 *)((int)this + 0xd040) = *(undefined4 *)((int)this + 0x14);
                  *(undefined4 *)((int)this + 0xd05c) = 0;
                  pvVar5 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
                  *(HANDLE *)((int)this + 0xd060) = pvVar5;
                  FUN_1004aa92(*(int *)((int)this + 0xcf00) +
                               *(int *)((int)this + 0x14) * 0x28 + 0x30);
                  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0xcf00) + 0x4a0));
                  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
                }
                puVar4 = *(undefined4 **)((int)this + 0xcf80);
                if (puVar4 != (undefined4 *)0x0) {
                  FUN_1004f425(puVar4);
                  FUN_10060be1(puVar4);
                }
                *(undefined4 *)((int)this + 0xcf80) = 0;
              }
            }
            FUN_10060be1(*(LPVOID *)((int)this + 53000));
            *(undefined4 *)((int)this + 53000) = 0;
          }
          (**(code **)(**(int **)((int)this + 0xcf0c) + 8))(*(int **)((int)this + 0xcf0c));
          *(undefined4 *)((int)this + 0xcf0c) = 0;
        }
        FUN_1000fad3((int)this);
      }
      FUN_100519f5(*(void **)((int)this + 0xcf00),*(int *)((int)this + 0x14));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0xcf00) + 0x4a0));
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar6 = FUN_100461da(*(int **)((int)this + 0xcf00));
  *(undefined4 *)((int)this + 0xcf00) = 0;
  return uVar6 & 0xffffff00;
}

