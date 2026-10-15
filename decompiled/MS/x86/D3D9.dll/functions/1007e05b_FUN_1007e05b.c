/*
 * FUN_1007e05b at 1007e05b
 * undefined4 __thiscall FUN_1007e05b(void * this, int * param_1, int param_2, int param_3)
 * Address ranges: 1007e05b-1007e301
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1007e05b(void *this,int *param_1,int param_2,int param_3)

{
  WNDPROC pWVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  HANDLE pvVar5;
  undefined4 extraout_EAX;
  uint uVar6;
  undefined4 extraout_ECX;
  
  uVar3 = DAT_100dea9c;
  *(int **)((int)this + 4) = param_1;
  *(int *)((int)this + 8) = param_2;
  pWVar1 = FUN_100b7069(uVar3,&PTR_s_DGD3D12ROOT_100dd578,0);
  *(WNDPROC *)((int)this + 0x1cf00) = pWVar1;
  if (pWVar1 != (WNDPROC)0x0) {
    *(WNDPROC *)((int)this + 0x10) = pWVar1;
    *(int **)((int)this + 4) = param_1;
    *(int *)((int)this + 8) = param_2;
    FUN_1008cb71(this,param_3);
    FUN_100b8667(*(void **)((int)this + 0x1cf00),extraout_ECX,(int)this);
    iVar2 = 0xb000;
    if ((*param_1 != 5) && (*param_1 == 6)) {
      iVar2 = 0xc000;
    }
    uVar3 = FUN_100c6d06(*(void **)((int)this + 0x1cf00),*(int *)((int)this + 0x14),iVar2);
    if ((char)uVar3 != '\0') {
      *(int *)((int)this + 0x18) =
           *(int *)((int)this + 0x14) * 0x28 + 0x18 + *(int *)((int)this + 0x1cf00);
      *(int *)((int)this + 0x1cf04) =
           *(int *)((int)this + 0x14) * 0x16c0 + *(int *)((int)this + 0x1cf00) + 0x6c0;
      uVar3 = FUN_1007c86c((int)this);
      if ((char)uVar3 != '\0') {
        iVar2 = FUN_1007c647((int)this);
        *(int *)((int)this + 0x1cf0c) = iVar2;
        if (iVar2 != 0) {
          *(undefined4 *)((int)this + 0x1cf2c) = 0xffffffff;
          *(undefined4 *)((int)this + 0x1cf3c) = 0;
          *(undefined4 *)((int)this + 0x1cf74) = 1;
          *(undefined4 *)((int)this + 0x1cf78) = 0;
          *(undefined4 *)((int)this + 0x1cf40) = 3;
          puVar4 = (undefined4 *)FUN_100cfd55(8);
          *(undefined4 **)((int)this + 0x1d028) = puVar4;
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = &PTR_s_POSITION_100de8a4;
            *(undefined4 *)(*(int *)((int)this + 0x1d028) + 4) = 2;
            uVar3 = FUN_1007c7e2(this);
            if ((char)uVar3 != '\0') {
              puVar4 = FUN_100bf645(-(uint)(*(int *)((int)this + 0x1cf00) != 0) &
                                    *(int *)((int)this + 0x1cf00) + 0x520U,
                                    *(undefined4 *)((int)this + 0x14),
                                    *(int *)((int)this + 0x1cf04) + 0x1310,0xc0,0);
              *(undefined4 **)((int)this + 0x1cf80) = puVar4;
              if (puVar4 != (undefined4 *)0x0) {
                iVar2 = *(int *)((int)this + 0x1cf00);
                puVar4 = FUN_100bf645(iVar2 + 0x520U & -(uint)(iVar2 != 0),
                                      *(undefined4 *)((int)this + 0x14),
                                      *(int *)((int)this + 0x1cf04) + 0x1370,0x4000,
                                      -(uint)(iVar2 != 0) & iVar2 + 0x508U);
                *(undefined4 **)((int)this + 0x1cf7c) = puVar4;
                if (puVar4 != (undefined4 *)0x0) {
                  FUN_1008d3b5(this);
                  *(undefined4 *)((int)this + 0x1d03c) = *(undefined4 *)((int)this + 0x1cf00);
                  *(undefined4 *)((int)this + 0x1d040) = *(undefined4 *)((int)this + 0x14);
                  *(undefined4 *)((int)this + 0x1d05c) = 0;
                  pvVar5 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
                  *(HANDLE *)((int)this + 0x1d060) = pvVar5;
                  FUN_100c46f9(*(int *)((int)this + 0x1cf00) +
                               *(int *)((int)this + 0x14) * 0x28 + 0x30);
                  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0x1cf00) + 0x4a0));
                  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
                }
                if (*(void **)((int)this + 0x1cf80) != (void *)0x0) {
                  FUN_1003c2e0(*(void **)((int)this + 0x1cf80),1);
                }
                *(undefined4 *)((int)this + 0x1cf80) = 0;
              }
            }
            FUN_100cfd6c(*(LPVOID *)((int)this + 0x1cf08));
            *(undefined4 *)((int)this + 0x1cf08) = 0;
          }
          (**(code **)(**(int **)((int)this + 0x1cf0c) + 8))(*(int **)((int)this + 0x1cf0c));
          *(undefined4 *)((int)this + 0x1cf0c) = 0;
        }
        FUN_1007c8b8((int)this);
      }
      FUN_100c703c(*(void **)((int)this + 0x1cf00),*(int *)((int)this + 0x14));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0x1cf00) + 0x4a0));
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar6 = FUN_100b42a6(*(int **)((int)this + 0x1cf00));
  *(undefined4 *)((int)this + 0x1cf00) = 0;
  return uVar6 & 0xffffff00;
}

