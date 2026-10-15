/*
 * FUN_10017211 at 10017211
 * uint __thiscall FUN_10017211(void * this, int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10017211-10017465
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10017211(void *this,int *param_1,undefined4 param_2,undefined4 param_3)

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
  pWVar3 = FUN_1004263b(uVar6,&PTR_s_DGD3D12ROOT_10059328,0);
  *(WNDPROC *)((int)this + 0x3180) = pWVar3;
  uVar4 = 0;
  if (pWVar3 == (WNDPROC)0x0) goto LAB_10017426;
  piVar1 = (int *)((int)this + 0x31bc);
  FUN_10050561(piVar1,0,0x80);
  uVar4 = 0xb000;
  if ((*param_1 != 5) && (*param_1 == 6)) {
    uVar4 = 0xc000;
  }
  uVar4 = FUN_1003ae28(*(void **)((int)this + 0x3180),*(int *)((int)this + 0x3184),uVar4);
  if ((char)uVar4 == '\0') goto LAB_10017426;
  *(int *)((int)this + 0x3188) =
       *(int *)((int)this + 0x3180) + *(int *)((int)this + 0x3184) * 0x16c0 + 0x6c0;
  iVar5 = FUN_10015970((int)this);
  *piVar1 = iVar5;
  if (iVar5 != 0) {
    uVar6 = FUN_10015bf0(this,*(uint *)((int)this + 0xd8));
    if ((((char)uVar6 != '\0') && (uVar6 = FUN_10015d99((int)this), (char)uVar6 != '\0')) &&
       (uVar6 = FUN_10015f6f((int)this), (char)uVar6 != '\0')) {
      FUN_10016032((int)this);
      FUN_1001d778(this,*(undefined4 *)((int)this + 0x3180),(int)param_1,param_3);
      *(undefined4 *)((int)this + 0xca60) = *(undefined4 *)((int)this + 0x98);
      *(undefined4 *)((int)this + 0xca64) = *(undefined4 *)((int)this + 0x9c);
      *(undefined4 *)((int)this + 0xca58) = 0;
      *(undefined4 *)((int)this + 0xca5c) = 0;
      FUN_1003d280((void *)(*(int *)(*(int *)((int)this + 0x3188) + 0x130c) + 4),'\0');
      FUN_1003d4be(*(void **)(*(int *)((int)this + 0x3188) + 0x1304),*(uint *)((int)this + 0x3198),0
                   ,1,0x80);
      uVar6 = FUN_1001bea5((int *)((int)this + 0x3440));
      if ((char)uVar6 != '\0') {
        uVar6 = FUN_10027578((void *)((int)this + 0x3950));
        if ((char)uVar6 != '\0') {
          iVar5 = *(int *)((int)param_1 + 0x33);
          if (iVar5 == 1) {
LAB_10017453:
            bVar2 = FUN_10027015((int)this + 0x39e0);
            uVar7 = extraout_var_01;
            if (bVar2) {
LAB_10017462:
              return CONCAT31(uVar7,1);
            }
          }
          else if (iVar5 == 2) {
            bVar2 = FUN_10027015((int)this + 0x39e0);
            if (bVar2) {
              bVar2 = FUN_10027015((int)this + 0x6a04);
              uVar7 = extraout_var_00;
              if (bVar2) goto LAB_10017462;
LAB_100173e3:
              FUN_100270da((int)this + 0x39e0);
            }
          }
          else {
            if (iVar5 != 3) goto LAB_10017453;
            bVar2 = FUN_10027015((int)this + 0x39e0);
            if (bVar2) {
              bVar2 = FUN_10027015((int)this + 0x6a04);
              if (bVar2) {
                bVar2 = FUN_10027015((int)this + 0x9a28);
                uVar7 = extraout_var;
                if (bVar2) goto LAB_10017462;
                FUN_100270da((int)this + 0x6a04);
              }
              goto LAB_100173e3;
            }
          }
          FUN_10027255((int)this + 0x3950);
        }
        FUN_1001c01c((int *)((int)this + 0x3440));
      }
      FUN_10016108((int)this);
    }
    (**(code **)(*(int *)*piVar1 + 8))((int *)*piVar1);
    *piVar1 = 0;
  }
  uVar4 = FUN_1003b12d(*(void **)((int)this + 0x3180),*(int *)((int)this + 0x3184));
LAB_10017426:
  return uVar4 & 0xffffff00;
}

