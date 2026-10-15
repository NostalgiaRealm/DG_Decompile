/*
 * FUN_1000b168 at 1000b168
 * uint __thiscall FUN_1000b168(void * this, int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1000b168-1000b3bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1000b168(void *this,int *param_1,undefined4 param_2,undefined4 param_3)

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
  
  uVar6 = DAT_1005fa00;
  *(int **)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  pWVar3 = FUN_1004819c(uVar6,&PTR_s_DGD3D12ROOT_1005f5b8,0);
  *(WNDPROC *)((int)this + 0x3680) = pWVar3;
  uVar4 = 0;
  if (pWVar3 == (WNDPROC)0x0) goto LAB_1000b37d;
  piVar1 = (int *)((int)this + 0x36bc);
  FUN_100561f1(piVar1,0,0x80);
  uVar4 = 0xb000;
  if ((*param_1 != 5) && (*param_1 == 6)) {
    uVar4 = 0xc000;
  }
  uVar4 = FUN_10040986(*(void **)((int)this + 0x3680),*(int *)((int)this + 0x3684),uVar4);
  if ((char)uVar4 == '\0') goto LAB_1000b37d;
  *(int *)((int)this + 0x3688) =
       *(int *)((int)this + 0x3680) + *(int *)((int)this + 0x3684) * 0x16c0 + 0x6c0;
  iVar5 = FUN_10009998((int)this);
  *piVar1 = iVar5;
  if (iVar5 != 0) {
    uVar6 = FUN_10009c3d(this,*(uint *)((int)this + 0xdc));
    if ((((char)uVar6 != '\0') && (uVar6 = FUN_10009de6((int)this), (char)uVar6 != '\0')) &&
       (uVar6 = FUN_10009fbc((int)this), (char)uVar6 != '\0')) {
      FUN_1000a07f((int)this);
      FUN_1000eaa3(this,*(undefined4 *)((int)this + 0x3680),(int)param_1,param_3);
      *(undefined4 *)((int)this + 0xd6e8) = *(undefined4 *)((int)this + 0x98);
      *(undefined4 *)((int)this + 0xd6ec) = *(undefined4 *)((int)this + 0x9c);
      *(undefined4 *)((int)this + 0xd6e0) = 0;
      *(undefined4 *)((int)this + 0xd6e4) = 0;
      FUN_10042dde((void *)(*(int *)(*(int *)((int)this + 0x3688) + 0x130c) + 4),'\0');
      FUN_1004301c(*(void **)(*(int *)((int)this + 0x3688) + 0x1304),*(uint *)((int)this + 0x3698),0
                   ,1,0x80);
      uVar6 = FUN_10010f7d((int *)((int)this + 0x3940));
      if ((char)uVar6 != '\0') {
        uVar6 = FUN_1001cb97((void *)((int)this + 0x42e8));
        if ((char)uVar6 != '\0') {
          iVar5 = *(int *)((int)param_1 + 0x33);
          if (iVar5 == 1) {
LAB_1000b3aa:
            bVar2 = FUN_1001c4b0((int)this + 0x4668);
            uVar7 = extraout_var_01;
            if (bVar2) {
LAB_1000b3b9:
              return CONCAT31(uVar7,1);
            }
          }
          else if (iVar5 == 2) {
            bVar2 = FUN_1001c4b0((int)this + 0x4668);
            if (bVar2) {
              bVar2 = FUN_1001c4b0((int)this + 0x768c);
              uVar7 = extraout_var_00;
              if (bVar2) goto LAB_1000b3b9;
LAB_1000b33a:
              FUN_1001c575((int)this + 0x4668);
            }
          }
          else {
            if (iVar5 != 3) goto LAB_1000b3aa;
            bVar2 = FUN_1001c4b0((int)this + 0x4668);
            if (bVar2) {
              bVar2 = FUN_1001c4b0((int)this + 0x768c);
              if (bVar2) {
                bVar2 = FUN_1001c4b0((int)this + 0xa6b0);
                uVar7 = extraout_var;
                if (bVar2) goto LAB_1000b3b9;
                FUN_1001c575((int)this + 0x768c);
              }
              goto LAB_1000b33a;
            }
          }
          FUN_1001c715((int)this + 0x42e8);
        }
        FUN_10011162((int *)((int)this + 0x3940));
      }
      FUN_1000a155((int)this);
    }
    (**(code **)(*(int *)*piVar1 + 8))((int *)*piVar1);
    *piVar1 = 0;
  }
  uVar4 = FUN_10040c8b(*(void **)((int)this + 0x3680),*(int *)((int)this + 0x3684));
LAB_1000b37d:
  return uVar4 & 0xffffff00;
}

