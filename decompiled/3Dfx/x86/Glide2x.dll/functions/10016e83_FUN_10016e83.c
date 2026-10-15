/*
 * FUN_10016e83 at 10016e83
 * uint __thiscall FUN_10016e83(void * this, int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10016e83-100170d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10016e83(void *this,int *param_1,undefined4 param_2,undefined4 param_3)

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
  
  uVar6 = DAT_1005974c;
  *(int **)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  pWVar3 = FUN_100422ab(uVar6,&PTR_s_DGD3D12ROOT_10059328,0);
  *(WNDPROC *)((int)this + 0x3180) = pWVar3;
  uVar4 = 0;
  if (pWVar3 == (WNDPROC)0x0) goto LAB_10017098;
  piVar1 = (int *)((int)this + 0x31bc);
  FUN_100501d1(piVar1,0,0x80);
  uVar4 = 0xb000;
  if ((*param_1 != 5) && (*param_1 == 6)) {
    uVar4 = 0xc000;
  }
  uVar4 = FUN_1003aa98(*(void **)((int)this + 0x3180),*(int *)((int)this + 0x3184),uVar4);
  if ((char)uVar4 == '\0') goto LAB_10017098;
  *(int *)((int)this + 0x3188) =
       *(int *)((int)this + 0x3180) + *(int *)((int)this + 0x3184) * 0x16c0 + 0x6c0;
  iVar5 = FUN_100155e2((int)this);
  *piVar1 = iVar5;
  if (iVar5 != 0) {
    uVar6 = FUN_10015862(this,*(uint *)((int)this + 0xd8));
    if ((((char)uVar6 != '\0') && (uVar6 = FUN_10015a0b((int)this), (char)uVar6 != '\0')) &&
       (uVar6 = FUN_10015be1((int)this), (char)uVar6 != '\0')) {
      FUN_10015ca4((int)this);
      FUN_1001d3ec(this,*(undefined4 *)((int)this + 0x3180),(int)param_1,param_3);
      *(undefined4 *)((int)this + 0xca60) = *(undefined4 *)((int)this + 0x98);
      *(undefined4 *)((int)this + 0xca64) = *(undefined4 *)((int)this + 0x9c);
      *(undefined4 *)((int)this + 0xca58) = 0;
      *(undefined4 *)((int)this + 0xca5c) = 0;
      FUN_1003cef0((void *)(*(int *)(*(int *)((int)this + 0x3188) + 0x130c) + 4),'\0');
      FUN_1003d12e(*(void **)(*(int *)((int)this + 0x3188) + 0x1304),*(uint *)((int)this + 0x3198),0
                   ,1,0x80);
      uVar6 = FUN_1001bb19((int *)((int)this + 0x3440));
      if ((char)uVar6 != '\0') {
        uVar6 = FUN_100271ee((void *)((int)this + 0x3950));
        if ((char)uVar6 != '\0') {
          iVar5 = *(int *)((int)param_1 + 0x33);
          if (iVar5 == 1) {
LAB_100170c5:
            bVar2 = FUN_10026c8b((int)this + 0x39e0);
            uVar7 = extraout_var_01;
            if (bVar2) {
LAB_100170d4:
              return CONCAT31(uVar7,1);
            }
          }
          else if (iVar5 == 2) {
            bVar2 = FUN_10026c8b((int)this + 0x39e0);
            if (bVar2) {
              bVar2 = FUN_10026c8b((int)this + 0x6a04);
              uVar7 = extraout_var_00;
              if (bVar2) goto LAB_100170d4;
LAB_10017055:
              FUN_10026d50((int)this + 0x39e0);
            }
          }
          else {
            if (iVar5 != 3) goto LAB_100170c5;
            bVar2 = FUN_10026c8b((int)this + 0x39e0);
            if (bVar2) {
              bVar2 = FUN_10026c8b((int)this + 0x6a04);
              if (bVar2) {
                bVar2 = FUN_10026c8b((int)this + 0x9a28);
                uVar7 = extraout_var;
                if (bVar2) goto LAB_100170d4;
                FUN_10026d50((int)this + 0x6a04);
              }
              goto LAB_10017055;
            }
          }
          FUN_10026ecb((int)this + 0x3950);
        }
        FUN_1001bc90((int *)((int)this + 0x3440));
      }
      FUN_10015d7a((int)this);
    }
    (**(code **)(*(int *)*piVar1 + 8))((int *)*piVar1);
    *piVar1 = 0;
  }
  uVar4 = FUN_1003ad9d(*(void **)((int)this + 0x3180),*(int *)((int)this + 0x3184));
LAB_10017098:
  return uVar4 & 0xffffff00;
}

