/*
 * FUN_1002cf25 at 1002cf25
 * undefined __thiscall FUN_1002cf25(void * this, int param_1, int param_2, int param_3, int param_4, undefined4 param_5, uint param_6, uint param_7, char param_8, byte param_9)
 * Address ranges: 1002cf25-1002d1dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002cf25(void *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            uint param_6,uint param_7,char param_8,byte param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *local_24;
  uint local_1c;
  uint local_18;
  int local_8;
  
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
    if (param_7 < 3) {
      return;
    }
    local_8 = 0;
    for (uVar11 = param_7 - 2; uVar11 != 0; uVar11 = uVar11 - uVar9) {
      iVar8 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
      if (0x1000U - iVar8 < 0x10) {
        FUN_1002a5f0(this,0,1,0);
        iVar8 = 0;
      }
      uVar5 = (0x1000U - iVar8) / 3;
      uVar9 = uVar11;
      if (uVar5 <= uVar11) {
        uVar9 = uVar5;
      }
      uVar5 = uVar9 * 3;
      if (param_3 == 0) {
        FUN_1002aa20(this,4,param_2,iVar3,*(int *)((int)this + 0xd9d0),iVar2,iVar1,0,uVar5,param_9);
      }
      else {
        FUN_1002c390(this,4,(void *)(param_3 + -0x18),iVar3,*(int *)((int)this + 0xd9d0),iVar2,iVar1
                     ,0,0,uVar5 != 0,'\0');
      }
      if (uVar9 != 0) {
        iVar8 = local_8 + param_6;
        local_24 = *(uint **)((int)this + 100);
        uVar10 = 0;
        do {
          if (param_8 == '\0') {
            local_18 = (uint)*(ushort *)(param_4 + 2 + uVar10 * 2 + iVar8 * 2);
            local_1c = (uint)*(ushort *)(param_4 + 4 + uVar10 * 2 + iVar8 * 2);
            uVar6 = (uint)*(ushort *)(param_4 + param_6 * 2);
          }
          else {
            local_18 = *(uint *)(param_4 + 4 + uVar10 * 4 + iVar8 * 4);
            local_1c = *(uint *)(param_4 + 8 + uVar10 * 4 + iVar8 * 4);
            uVar6 = *(uint *)(param_4 + param_6 * 4);
          }
          *local_24 = local_18;
          *(uint *)(*(int *)((int)this + 100) + 4) = local_1c;
          *(uint *)(*(int *)((int)this + 100) + 8) = uVar6;
          local_24 = (uint *)(*(int *)((int)this + 100) + 0xc);
          uVar10 = uVar10 + 1;
          *(uint **)((int)this + 100) = local_24;
        } while (uVar10 < uVar9);
      }
      local_8 = local_8 + uVar9;
      *(uint *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + uVar5;
      *(undefined4 *)((int)this + 0x70) = param_5;
    }
    FUN_1002a5f0(this,0,0,0);
    *(undefined4 *)((int)this + 0x70) = 0;
    return;
  }
  if (*(int *)((int)this + 0xdbdc) == 0) {
    return;
  }
  if (param_3 == 0) {
    FUN_1002aa20(this,param_1,param_2,iVar3,*(int *)((int)this + 0xdbd4),iVar2,iVar1,0,0,param_9);
  }
  else {
    FUN_1002c390(this,param_1,(void *)(param_3 + -0x18),iVar3,*(int *)((int)this + 0xdbd4),iVar2,
                 iVar1,0,0,'\0',*(char *)(param_3 + 0x10));
  }
  bVar4 = FUN_10027eb0((int)this);
  if (bVar4 != 0) {
    if (*(int *)((int)*(void **)((int)this + 0xdbdc) + 0x1c) == 1) {
      param_6 = FUN_1002d2a5(*(void **)((int)this + 0xdbdc),param_4,param_6,param_7);
      if (param_6 == 0xffffffff) goto LAB_1002d1cf;
      piVar7 = *(int **)(*(int *)((int)this + 0xd9b4) + 4);
    }
    else {
      piVar7 = *(int **)(*(int *)((int)this + 0xd9b4) + 4);
    }
    (**(code **)(*piVar7 + 0x30))(piVar7,param_7,param_6,param_5);
  }
LAB_1002d1cf:
  FUN_1002a3e0((int)this);
  return;
}

