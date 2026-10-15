/*
 * FUN_100936c7 at 100936c7
 * undefined4 __thiscall FUN_100936c7(void * this, int param_1, int param_2, undefined4 param_3, int param_4, undefined4 * param_5)
 * Address ranges: 100936c7-10093a0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_100936c7(void *this,int param_1,int param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar5;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar3 = FUN_10093522(this,param_1,param_2,param_3,param_4,(char)param_5);
  uVar4 = 0;
  if (iVar3 != 0) {
    if (iVar3 != 1) {
LAB_10093997:
      return CONCAT31((int3)((uint)iVar3 >> 8),1);
    }
    iVar6 = param_1 * 0x1510;
    piVar1 = *(int **)(iVar6 + 0x510 + (int)this);
    (**(code **)(*piVar1 + 4))(piVar1);
    piVar1 = *(int **)(iVar6 + 0x510 + (int)this);
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = *(int **)(iVar6 + 0x510 + (int)this);
    local_1c = 0x1050;
    local_8 = 0x1050;
    local_18 = 2;
    local_14 = 4;
    local_10 = 0x10000;
    local_c = 0;
    iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,&local_1c,0,iVar6 + 0x998 + (int)this);
    if (-1 < iVar3) {
      piVar1 = *(int **)(iVar6 + 0x510 + (int)this);
      (**(code **)(*piVar1 + 0x84))(piVar1,4,&param_4,4);
      *(bool *)((int)this + 0x4e4) = param_4 != 0;
      param_5 = (undefined4 *)((int)this + 0x298);
      if ((param_4 == 0) ||
         (bVar2 = FUN_1009284f(this,param_1,(HMODULE)*param_5,param_5,param_5,
                               (undefined4 *)((int)this + iVar6 + 0x8c0)), bVar2)) {
        bVar2 = FUN_10092416(this,param_1,*(HMODULE *)((int)this + 0x298),0x2b,0x100b8f28,
                             (int *)((int)this + iVar6 + 0x8d0));
        uVar5 = extraout_ECX;
        if (bVar2) {
          bVar2 = FUN_1009251f(this,param_1,(HMODULE)*param_5,2,0x100b8fbc,0x100b8f80,
                               (int *)((int)this + iVar6 + 0x97c),(int)this + iVar6 + 0x984);
          uVar5 = extraout_ECX_00;
          if (bVar2) {
            piVar1 = *(int **)(iVar6 + 0x510 + (int)this);
            local_34 = 0x4000;
            local_30 = 2;
            local_2c = 1;
            local_28 = 0x10000;
            local_24 = 0;
            local_20 = 0x10;
            iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,&local_34,0,(int)this + iVar6 + 0x990);
            uVar5 = extraout_ECX_01;
            if (-1 < iVar3) {
              piVar1 = *(int **)(iVar6 + 0x510 + (int)this);
              iVar3 = (**(code **)(*piVar1 + 0x5c))(piVar1,&DAT_100b0a64,(int)this + iVar6 + 0x98c);
              if (-1 < iVar3) {
                *(undefined4 *)(iVar6 + 0x538 + (int)this) = 0xffffffff;
                *(undefined4 *)(iVar6 + 0x530 + (int)this) = 0;
                *(undefined4 *)(iVar6 + 0x534 + (int)this) = 0;
                puVar7 = (undefined4 *)((int)this + iVar6 + 0x7fc);
                *(undefined4 *)(iVar6 + 0x53c + (int)this) = 0;
                *(undefined4 *)(iVar6 + 0x550 + (int)this) = 0;
                *puVar7 = 0;
                puVar7[1] = 0;
                puVar7[2] = 0;
                puVar7[3] = 0;
                FUN_100ada8e((int *)((int)this + iVar6 + 0x594),0,0x40);
                FUN_100ada8e((int *)((int)this + iVar6 + 0x604),0,0x100);
                puVar7 = (undefined4 *)((int)this + iVar6 + 2000);
                for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *puVar7 = 0;
                  puVar7 = puVar7 + 1;
                }
                *(undefined4 *)(iVar6 + 0x7e8 + (int)this) = 0;
                *(undefined4 *)(iVar6 + 0x7ec + (int)this) = 0;
                *(undefined4 *)(iVar6 + 0x7f0 + (int)this) = 0;
                *(undefined4 *)(iVar6 + 0x7f4 + (int)this) = 0;
                *(undefined4 *)(iVar6 + 0x7f8 + (int)this) = 0;
                *(undefined4 *)(iVar6 + 0x80c + (int)this) = 0;
                *(undefined4 *)(iVar6 + 0x994 + (int)this) = 0;
                *(void **)(iVar6 + 0x82c + (int)this) = this;
                *(int *)(iVar6 + 0x830 + (int)this) = param_1;
                *(void **)(iVar6 + 0x840 + (int)this) = this;
                *(int *)(iVar6 + 0x844 + (int)this) = param_1;
                *(void **)(iVar6 + 0x854 + (int)this) = this;
                *(int *)(iVar6 + 0x858 + (int)this) = param_1;
                *(void **)(iVar6 + 0x868 + (int)this) = this;
                *(int *)(iVar6 + 0x86c + (int)this) = param_1;
                *(void **)(iVar6 + 0x87c + (int)this) = this;
                *(int *)(iVar6 + 0x880 + (int)this) = param_1;
                *(void **)(iVar6 + 0x890 + (int)this) = this;
                *(int *)(iVar6 + 0x894 + (int)this) = param_1;
                *(void **)(iVar6 + 0x8a4 + (int)this) = this;
                *(int *)(iVar6 + 0x8a8 + (int)this) = param_1;
                *(void **)(iVar6 + 0x8b8 + (int)this) = this;
                *(int *)(iVar6 + 0x8bc + (int)this) = param_1;
                iVar3 = param_1;
                goto LAB_10093997;
              }
              FUN_10092a37(this,param_1,*(int **)(iVar6 + 0x990 + (int)this));
              *(undefined4 *)(iVar6 + 0x990 + (int)this) = 0;
              uVar5 = extraout_ECX_02;
            }
            FUN_10092630(uVar5,2,(int)this + iVar6 + 0x97c,(int)this + iVar6 + 0x984);
            uVar5 = extraout_ECX_03;
          }
          FUN_100924f0(uVar5,0x2b,(int)this + iVar6 + 0x8d0);
          uVar5 = extraout_ECX_04;
        }
        FUN_100928f5(uVar5,uVar5,(int)this + iVar6 + 0x8c0);
      }
      piVar1 = *(int **)(iVar6 + 0x998 + (int)this);
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    uVar4 = FUN_10093647(this,param_1);
  }
  return uVar4 & 0xffffff00;
}

