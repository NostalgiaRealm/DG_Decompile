/*
 * FUN_1002cd25 at 1002cd25
 * undefined __thiscall FUN_1002cd25(void * this, int param_1, int param_2, int param_3, int param_4, uint param_5, byte param_6)
 * Address ranges: 1002cd25-1002cf24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002cd25(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5,byte param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (*(int **)((int)this + 0xdacc) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xdacc) + 4))
              (*(undefined4 *)((int)this + 0xdae0),*(undefined4 *)((int)this + 0xdaf0),0);
  }
  if (*(int **)((int)this + 0xdadc) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xdadc) + 4))
              (*(undefined4 *)((int)this + 0xdb00),*(undefined4 *)((int)this + 0xdb04),0);
  }
  FUN_1002a5f0(this,0,0,0);
  iVar1 = *(int *)((int)this + 0x6e8);
  iVar2 = *(int *)((int)this + 0x72c);
  iVar3 = *(int *)((int)this + 0xdbd0);
  if (param_1 == 6) {
    if (2 < param_5) {
      param_1 = 0;
      for (uVar10 = param_5 - 2; uVar10 != 0; uVar10 = uVar10 - uVar8) {
        iVar7 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
        if (0x1000U - iVar7 < 0x10) {
          FUN_1002a5f0(this,0,1,0);
          iVar7 = 0;
        }
        uVar6 = (0x1000U - iVar7) / 3;
        uVar8 = uVar10;
        if (uVar6 <= uVar10) {
          uVar8 = uVar6;
        }
        uVar6 = uVar8 * 3;
        if (param_3 == 0) {
          FUN_1002aa20(this,4,param_2,iVar3,*(int *)((int)this + 0xd9d0),iVar2,iVar1,0,uVar6,param_6
                      );
        }
        else {
          FUN_1002c390(this,4,(void *)(param_3 + -0x18),iVar3,*(int *)((int)this + 0xd9d0),iVar2,
                       iVar1,0,uVar6,'\0','\0');
        }
        if (uVar8 != 0) {
          uVar9 = 0;
          do {
            **(int **)((int)this + 100) = param_1 + 1 + param_4 + uVar9;
            *(uint *)(*(int *)((int)this + 100) + 4) = param_1 + 2 + param_4 + uVar9;
            *(int *)(*(int *)((int)this + 100) + 8) = param_4;
            *(int *)((int)this + 100) = *(int *)((int)this + 100) + 0xc;
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar8);
        }
        param_1 = param_1 + uVar8;
        *(uint *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + uVar6;
      }
      FUN_1002a5f0(this,0,0,0);
    }
  }
  else {
    if (param_3 == 0) {
      FUN_1002aa20(this,param_1,param_2,iVar3,*(int *)((int)this + 0xdbd4),iVar2,iVar1,0,0,param_6);
    }
    else {
      FUN_1002c390(this,param_1,(void *)(param_3 + -0x18),iVar3,*(int *)((int)this + 0xdbd4),iVar2,
                   iVar1,0,0,'\0',*(char *)(param_3 + 0x10));
    }
    bVar5 = FUN_10027eb0((int)this);
    if (bVar5 != 0) {
      piVar4 = *(int **)(*(int *)((int)this + 0xd9b4) + 4);
      (**(code **)(*piVar4 + 0x34))(piVar4,param_5,param_4);
    }
    FUN_1002a3e0((int)this);
  }
  return;
}

