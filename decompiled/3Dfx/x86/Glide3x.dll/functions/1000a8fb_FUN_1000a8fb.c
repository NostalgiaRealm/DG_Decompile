/*
 * FUN_1000a8fb at 1000a8fb
 * uint __thiscall FUN_1000a8fb(void * this, int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1000a8fb-1000ab4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1000a8fb(void *this,int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  bool bVar2;
  WNDPROC pWVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 uVar7;
  
  uVar6 = DAT_1005b820;
  *(int **)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  pWVar3 = FUN_10044d93(uVar6,&PTR_s_DGD3D12ROOT_1005b3e0,0);
  *(WNDPROC *)((int)this + 0x3300) = pWVar3;
  uVar4 = 0;
  if (pWVar3 == (WNDPROC)0x0) goto LAB_1000ab10;
  piVar1 = (int *)((int)this + 0x333c);
  FUN_10052de1(piVar1,0,0x80);
  uVar4 = 0xb000;
  if ((*param_1 != 5) && (*param_1 == 6)) {
    uVar4 = 0xc000;
  }
  uVar4 = FUN_1003d57d(*(void **)((int)this + 0x3300),*(int *)((int)this + 0x3304),uVar4);
  if ((char)uVar4 == '\0') goto LAB_1000ab10;
  *(int *)((int)this + 0x3308) =
       *(int *)((int)this + 0x3300) + *(int *)((int)this + 0x3304) * 0x16c0 + 0x6c0;
  iVar5 = FUN_1000914c((int)this);
  *piVar1 = iVar5;
  if (iVar5 != 0) {
    uVar6 = FUN_100093cc(this,*(uint *)((int)this + 0xd8));
    if ((((char)uVar6 != '\0') && (uVar6 = FUN_10009575((int)this), (char)uVar6 != '\0')) &&
       (uVar6 = FUN_1000974b((int)this), (char)uVar6 != '\0')) {
      FUN_1000980e((int)this);
      FUN_1000d80f(this,*(undefined4 *)((int)this + 0x3300),(int)param_1,param_3);
      *(undefined4 *)((int)this + 0xd350) = *(undefined4 *)((int)this + 0x98);
      *(undefined4 *)((int)this + 0xd354) = *(undefined4 *)((int)this + 0x9c);
      *(undefined4 *)((int)this + 0xd348) = 0;
      *(undefined4 *)((int)this + 0xd34c) = 0;
      FUN_1003f9d5((void *)(*(int *)(*(int *)((int)this + 0x3308) + 0x130c) + 4),'\0');
      FUN_1003fc13(*(void **)(*(int *)((int)this + 0x3308) + 0x1304),*(uint *)((int)this + 0x3318),0
                   ,1,0x80);
      uVar6 = FUN_1000fc9b((int *)((int)this + 0x35c0));
      if ((char)uVar6 != '\0') {
        uVar6 = FUN_1001a9ee((void *)((int)this + 0x3f50));
        if ((char)uVar6 != '\0') {
          iVar5 = *(int *)((int)param_1 + 0x33);
          if (iVar5 == 1) {
LAB_1000ab3d:
            bVar2 = FUN_1001a307((int)this + 0x42d0);
            uVar7 = extraout_var_01;
            if (bVar2) {
LAB_1000ab4c:
              return CONCAT31(uVar7,1);
            }
          }
          else if (iVar5 == 2) {
            bVar2 = FUN_1001a307((int)this + 0x42d0);
            if (bVar2) {
              bVar2 = FUN_1001a307((int)this + 0x72f4);
              uVar7 = extraout_var_00;
              if (bVar2) goto LAB_1000ab4c;
LAB_1000aacd:
              FUN_1001a3cc((int)this + 0x42d0);
            }
          }
          else {
            if (iVar5 != 3) goto LAB_1000ab3d;
            bVar2 = FUN_1001a307((int)this + 0x42d0);
            if (bVar2) {
              bVar2 = FUN_1001a307((int)this + 0x72f4);
              if (bVar2) {
                bVar2 = FUN_1001a307((int)this + 0xa318);
                uVar7 = extraout_var;
                if (bVar2) goto LAB_1000ab4c;
                FUN_1001a3cc((int)this + 0x72f4);
              }
              goto LAB_1000aacd;
            }
          }
          FUN_1001a56c((int)this + 0x3f50);
        }
        FUN_1000fe12((int *)((int)this + 0x35c0));
      }
      FUN_100098e4((int)this);
    }
    (**(code **)(*(int *)*piVar1 + 8))((int *)*piVar1);
    *piVar1 = 0;
  }
  uVar4 = FUN_1003d882(*(void **)((int)this + 0x3300),*(int *)((int)this + 0x3304));
LAB_1000ab10:
  return uVar4 & 0xffffff00;
}

