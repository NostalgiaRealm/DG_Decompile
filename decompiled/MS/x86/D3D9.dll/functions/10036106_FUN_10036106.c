/*
 * FUN_10036106 at 10036106
 * undefined __thiscall FUN_10036106(void * this, int param_1, int param_2, int param_3, int param_4, undefined4 param_5, int param_6, uint param_7, char param_8, byte param_9)
 * Address ranges: 10036106-100363ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10036106(void *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            int param_6,uint param_7,char param_8,byte param_9)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *local_20;
  uint local_18;
  int local_8;
  
  uVar11 = 0;
  do {
    piVar1 = *(int **)((int)this + uVar11 * 4 + 0xf830);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))
                (*(undefined4 *)((int)this + uVar11 * 4 + 0xf844),
                 *(undefined4 *)((int)this + uVar11 * 4 + 0xf854),0);
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 4);
  if (*(int **)((int)this + 0xf840) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xf840) + 4))
              (*(undefined4 *)((int)this + 0xf864),*(undefined4 *)((int)this + 0xf868),0);
  }
  FUN_10032e50(this,0,0,0);
  iVar2 = *(int *)((int)this + 0x1008);
  iVar3 = *(int *)((int)this + 0x104c);
  iVar4 = *(int *)((int)this + 0xfa1c);
  if (param_1 == 6) {
    if (2 < param_7) {
      local_8 = 0;
      for (uVar11 = param_7 - 2; uVar11 != 0; uVar11 = uVar11 - uVar7) {
        iVar8 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
        if (0x1000U - iVar8 < 0x10) {
          FUN_10032e50(this,0,1,0);
          iVar8 = 0;
        }
        uVar5 = (0x1000U - iVar8) / 3;
        uVar7 = uVar11;
        if (uVar5 <= uVar11) {
          uVar7 = uVar5;
        }
        uVar5 = uVar7 * 3;
        if (param_3 == 0) {
          FUN_10033280(this,4,param_2,iVar4,*(int *)((int)this + 0xf6d0),iVar3,iVar2,0,uVar5,param_9
                      );
        }
        else {
          FUN_100354f1(this,4,(void *)(param_3 + -0x18),iVar4,*(int *)((int)this + 0xf6d0),iVar3,
                       iVar2,0,0,uVar5 != 0,'\0');
        }
        if (uVar7 != 0) {
          iVar8 = local_8 + param_6;
          local_20 = *(uint **)((int)this + 100);
          uVar10 = 0;
          do {
            if (param_8 == '\0') {
              local_18 = (uint)*(ushort *)(param_4 + 2 + uVar10 * 2 + iVar8 * 2);
              uVar9 = (uint)*(ushort *)(param_4 + 4 + uVar10 * 2 + iVar8 * 2);
              uVar6 = (uint)*(ushort *)(param_4 + param_6 * 2);
            }
            else {
              local_18 = *(uint *)(param_4 + 4 + uVar10 * 4 + iVar8 * 4);
              uVar9 = *(uint *)(param_4 + 8 + uVar10 * 4 + iVar8 * 4);
              uVar6 = *(uint *)(param_4 + param_6 * 4);
            }
            *local_20 = local_18;
            *(uint *)(*(int *)((int)this + 100) + 4) = uVar9;
            *(uint *)(*(int *)((int)this + 100) + 8) = uVar6;
            local_20 = (uint *)(*(int *)((int)this + 100) + 0xc);
            uVar10 = uVar10 + 1;
            *(uint **)((int)this + 100) = local_20;
          } while (uVar10 < uVar7);
        }
        *(uint *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + uVar5;
        local_8 = local_8 + uVar7;
        *(undefined4 *)((int)this + 0x70) = param_5;
      }
      FUN_10032e50(this,0,0,0);
      *(undefined4 *)((int)this + 0x70) = 0;
    }
  }
  else if (*(int *)((int)this + 0xfa28) != 0) {
    uVar11 = 1;
    if (param_3 == 0) {
      FUN_10033280(this,param_1,param_2,iVar4,*(int *)((int)this + 0xfa20),iVar3,iVar2,0,0,param_9);
    }
    else {
      FUN_100354f1(this,param_1,(void *)(param_3 + -0x18),iVar4,*(int *)((int)this + 0xfa20),iVar3,
                   iVar2,0,0,'\0',*(char *)(param_3 + 0x10));
      uVar11 = *(uint *)(param_3 + 0x20);
    }
    uVar7 = FUN_1002fb10(this);
    if ((char)uVar7 != '\0') {
      if (*(int *)((int)*(void **)((int)this + 0xfa28) + 0x1c) == 1) {
        uVar7 = FUN_1003693a(*(void **)((int)this + 0xfa28),param_4,param_6,param_7);
        if (uVar7 != 0xffffffff) {
          piVar1 = *(int **)(*(int *)((int)this + 0xf6b4) + 4);
          if (uVar11 < 2) {
            (**(code **)(*piVar1 + 0x30))(piVar1,param_7,uVar7,param_5);
          }
          else {
            (**(code **)(*piVar1 + 0x50))(piVar1,param_7,uVar11,uVar7,param_5,0);
          }
        }
      }
      else {
        piVar1 = *(int **)(*(int *)((int)this + 0xf6b4) + 4);
        if (uVar11 < 2) {
          (**(code **)(*piVar1 + 0x30))(piVar1,param_7,param_6,param_5);
        }
        else {
          (**(code **)(*piVar1 + 0x50))(piVar1,param_7,uVar11,param_6,param_5,0);
        }
      }
    }
    FUN_10032c40((int)this);
  }
  return;
}

