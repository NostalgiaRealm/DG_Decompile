/*
 * FUN_10035ef9 at 10035ef9
 * undefined __thiscall FUN_10035ef9(void * this, int param_1, int param_2, int param_3, int param_4, uint param_5, byte param_6)
 * Address ranges: 10035ef9-10036105
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10035ef9(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5,byte param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = 0;
  do {
    piVar1 = *(int **)((int)this + uVar8 * 4 + 0xf830);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))
                (*(undefined4 *)((int)this + uVar8 * 4 + 0xf844),
                 *(undefined4 *)((int)this + uVar8 * 4 + 0xf854),0);
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  if (*(int **)((int)this + 0xf840) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xf840) + 4))
              (*(undefined4 *)((int)this + 0xf864),*(undefined4 *)((int)this + 0xf868),0);
  }
  FUN_10032e50(this,0,0,0);
  iVar2 = *(int *)((int)this + 0x1008);
  iVar3 = *(int *)((int)this + 0x104c);
  iVar4 = *(int *)((int)this + 0xfa1c);
  if (param_1 == 6) {
    if (2 < param_5) {
      param_1 = 0;
      for (uVar8 = param_5 - 2; uVar8 != 0; uVar8 = uVar8 - uVar7) {
        iVar6 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
        if (0x1000U - iVar6 < 0x10) {
          FUN_10032e50(this,0,1,0);
          iVar6 = 0;
        }
        uVar5 = (0x1000U - iVar6) / 3;
        uVar7 = uVar8;
        if (uVar5 <= uVar8) {
          uVar7 = uVar5;
        }
        uVar5 = uVar7 * 3;
        if (param_3 == 0) {
          FUN_10033280(this,4,param_2,iVar4,*(int *)((int)this + 0xf6d0),iVar3,iVar2,0,uVar5,param_6
                      );
        }
        else {
          FUN_100354f1(this,4,(void *)(param_3 + -0x18),iVar4,*(int *)((int)this + 0xf6d0),iVar3,
                       iVar2,0,uVar5,'\0','\0');
        }
        if (uVar7 != 0) {
          uVar9 = 0;
          do {
            **(int **)((int)this + 100) = param_1 + 1 + param_4 + uVar9;
            *(uint *)(*(int *)((int)this + 100) + 4) = param_1 + 2 + param_4 + uVar9;
            *(int *)(*(int *)((int)this + 100) + 8) = param_4;
            *(int *)((int)this + 100) = *(int *)((int)this + 100) + 0xc;
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar7);
        }
        param_1 = param_1 + uVar7;
        *(uint *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + uVar5;
      }
      FUN_10032e50(this,0,0,0);
    }
  }
  else {
    if (param_3 == 0) {
      FUN_10033280(this,param_1,param_2,iVar4,*(int *)((int)this + 0xfa20),iVar3,iVar2,0,0,param_6);
    }
    else {
      FUN_100354f1(this,param_1,(void *)(param_3 + -0x18),iVar4,*(int *)((int)this + 0xfa20),iVar3,
                   iVar2,0,0,'\0',*(char *)(param_3 + 0x10));
    }
    uVar8 = FUN_1002fb10(this);
    if ((char)uVar8 != '\0') {
      piVar1 = *(int **)(*(int *)((int)this + 0xf6b4) + 4);
      (**(code **)(*piVar1 + 0x34))(piVar1,param_5,param_4);
    }
    FUN_10032c40((int)this);
  }
  return;
}

