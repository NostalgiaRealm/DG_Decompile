/*
 * FUN_1004551b at 1004551b
 * undefined __thiscall FUN_1004551b(void * this, int param_1, undefined * param_2, int param_3, int param_4, uint param_5, byte param_6, char param_7)
 * Address ranges: 1004551b-1004579e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1004551b(void *this,int param_1,undefined *param_2,int param_3,int param_4,uint param_5,
            byte param_6,char param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint local_28;
  int local_24;
  
  FUN_10040dc0((int)this);
  uVar9 = FUN_100bb1bd(*(int *)(*(int *)((int)this + 0xf6b8) + 0x1304));
  iVar1 = *(int *)((int)this + 0xfbc8);
  iVar2 = *(int *)((int)this + 0x104c);
  *(undefined8 *)((int)this + 0xfc30) = uVar9;
  uVar3 = *(uint *)((int)this + 0x1008);
  if (param_1 == 6) {
    if (2 < param_5) {
      local_28 = param_5 - 2;
      local_24 = 0;
      if (local_28 != 0) {
        while( true ) {
          iVar6 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
          if (0x1000U - iVar6 < 0x10) {
            FUN_10042220(this,0,1,0);
            iVar6 = 0;
          }
          uVar5 = (0x1000U - iVar6) / 3;
          uVar7 = local_28;
          if (uVar5 <= local_28) {
            uVar7 = uVar5;
          }
          uVar5 = uVar7 * 3;
          if (param_3 == 0) {
            FUN_10040e20(this,4,param_2,iVar1,*(int *)((int)this + 0xf6d0),iVar2,uVar3,0,uVar5,
                         param_6);
          }
          else {
            FUN_10044eb6(this,4,(void *)(param_3 + -0x18),iVar1,*(int *)((int)this + 0xf6d0),iVar2,
                         uVar3,0,uVar5,'\0','\0');
          }
          *(byte *)((int)this + 0xf66f) =
               *(byte *)((int)this + 0xf66f) |
               (*(uint *)((int)this + 0xfd90) & *(uint *)(param_2 + 0x10)) !=
               *(uint *)(param_2 + 0x10);
          *(undefined4 *)((int)this + 0xfd90) = *(undefined4 *)(param_2 + 0x10);
          *(undefined1 *)((int)this + 0xfd94) = 1;
          if (uVar7 != 0) {
            uVar8 = 0;
            do {
              **(int **)((int)this + 100) = local_24 + 1 + param_4 + uVar8;
              *(uint *)(*(int *)((int)this + 100) + 4) = param_4 + 2 + local_24 + uVar8;
              *(int *)(*(int *)((int)this + 100) + 8) = param_4;
              *(int *)((int)this + 100) = *(int *)((int)this + 100) + 0xc;
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar7);
          }
          local_24 = local_24 + uVar7;
          *(uint *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + uVar5;
          local_28 = local_28 - uVar7;
          if (local_28 == 0) break;
          FUN_10042530(this,(uint)param_2);
        }
      }
      FUN_10042220(this,0,0,0);
    }
  }
  else {
    if (param_3 == 0) {
      FUN_10040e20(this,param_1,param_2,iVar1,*(int *)((int)this + 0xfbcc),iVar2,uVar3,0,0,param_6);
    }
    else {
      FUN_10044eb6(this,param_1,(void *)(param_3 + -0x18),iVar1,*(int *)((int)this + 0xfbcc),iVar2,
                   uVar3,0,0,'\0',*(char *)(param_3 + 0x10));
    }
    *(byte *)((int)this + 0xf66f) =
         *(byte *)((int)this + 0xf66f) |
         (*(uint *)((int)this + 0xfd90) & *(uint *)(param_2 + 0x10)) != *(uint *)(param_2 + 0x10);
    *(undefined4 *)((int)this + 0xfd90) = *(undefined4 *)(param_2 + 0x10);
    *(undefined1 *)((int)this + 0xfd94) = 0;
    bVar4 = FUN_1003fdb0(this);
    if (bVar4 != 0) {
      FUN_100bc10f(*(int *)(*(int *)((int)this + 0xf6b8) + 0x1304),param_5,1,param_4,0);
    }
    FUN_10040d90((int)this);
  }
  if (param_7 != '\0') {
    FUN_100bb1dc(*(void **)(*(int *)((int)this + 0xf6b8) + 0x1304),
                 *(undefined4 *)((int)this + 0xfc30),*(undefined4 *)((int)this + 0xfc34));
  }
  return;
}

