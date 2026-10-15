/*
 * FUN_100193a6 at 100193a6
 * undefined __thiscall FUN_100193a6(void * this, int param_1, uint * param_2, int param_3, int param_4, uint param_5, byte param_6)
 * Address ranges: 100193a6-10019535
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100193a6(void *this,int param_1,uint *param_2,int param_3,int param_4,uint param_5,byte param_6)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if (*(int **)((int)this + 0x1e58) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x1e58) + 4))
              (*(undefined4 *)((int)this + 0x1e6c),*(undefined4 *)((int)this + 0x1e7c),0);
  }
  if (*(int **)((int)this + 0x1e68) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x1e68) + 4))
              (*(undefined4 *)((int)this + 0x1e8c),*(undefined4 *)((int)this + 0x1e90),0);
  }
  iVar1 = *(int *)(param_3 + 0xc);
  uVar2 = param_2[3];
  if (param_1 == 6) {
    if (2 < param_5) {
      param_1 = 0;
      for (uVar8 = param_5 - 2; uVar8 != 0; uVar8 = uVar8 - uVar7) {
        iVar6 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
        if (0x1000U - iVar6 < 0x10) {
          FUN_10017820(this,0,1,0);
          iVar6 = 0;
        }
        uVar4 = (0x1000U - iVar6) / 3;
        uVar7 = uVar8;
        if (uVar4 <= uVar8) {
          uVar7 = uVar4;
        }
        FUN_10017c50(this,4,param_2,iVar1,*(int *)((int)this + 0x1d70),0,uVar2,0,uVar7 * 3,param_6);
        if (uVar7 != 0) {
          uVar4 = 0;
          do {
            **(int **)((int)this + 100) = param_1 + 1 + param_4 + uVar4;
            *(uint *)(*(int *)((int)this + 100) + 4) = param_1 + 2 + param_4 + uVar4;
            *(int *)(*(int *)((int)this + 100) + 8) = param_4;
            *(int *)((int)this + 100) = *(int *)((int)this + 100) + 0xc;
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar7);
        }
        param_1 = param_1 + uVar7;
        *(uint *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + uVar7 * 3;
      }
      FUN_10017820(this,0,0,0);
    }
  }
  else {
    FUN_10017c50(this,param_1,param_2,iVar1,*(int *)((int)this + 8000),0,uVar2,0,0,param_6);
    uVar5 = FUN_100151d0(this);
    if ((char)uVar5 != '\0') {
      piVar3 = *(int **)(*(int *)((int)this + 0x1d54) + 4);
      (**(code **)(*piVar3 + 0x34))(piVar3,param_5,param_4);
    }
    FUN_10017640((int)this);
  }
  return;
}

