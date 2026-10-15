/*
 * FUN_10039da2 at 10039da2
 * undefined __thiscall FUN_10039da2(void * this, int param_1, uint param_2, int param_3, int param_4, uint param_5, byte param_6, char param_7)
 * Address ranges: 10039da2-1003a025
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10039da2(void *this,int param_1,uint param_2,int param_3,int param_4,uint param_5,byte param_6,
            char param_7)

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
  
  FUN_10035800((int)this);
  uVar9 = FUN_10098be5(*(int *)(*(int *)((int)this + 0xd9b8) + 0x1304));
  iVar1 = *(int *)((int)this + 0xdc90);
  iVar2 = *(int *)((int)this + 0x72c);
  *(undefined8 *)((int)this + 0xdcf0) = uVar9;
  uVar3 = *(uint *)((int)this + 0x6e8);
  if (param_1 == 6) {
    if (2 < param_5) {
      local_28 = param_5 - 2;
      local_24 = 0;
      if (local_28 != 0) {
        while( true ) {
          iVar6 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
          if (0x1000U - iVar6 < 0x10) {
            FUN_10036ae0(this,0,1,0);
            iVar6 = 0;
          }
          uVar5 = (0x1000U - iVar6) / 3;
          uVar7 = local_28;
          if (uVar5 <= local_28) {
            uVar7 = uVar5;
          }
          uVar5 = uVar7 * 3;
          if (param_3 == 0) {
            FUN_10035840(this,4,param_2,iVar1,*(int *)((int)this + 0xd9d0),iVar2,uVar3,0,uVar5,
                         param_6);
          }
          else {
            FUN_10039794(this,4,(void *)(param_3 + -0x18),iVar1,*(int *)((int)this + 0xd9d0),iVar2,
                         uVar3,0,uVar5,'\0','\0');
          }
          *(byte *)((int)this + 0xd97f) =
               *(byte *)((int)this + 0xd97f) |
               (*(uint *)((int)this + 0xde50) & *(uint *)(param_2 + 0x10)) !=
               *(uint *)(param_2 + 0x10);
          *(undefined4 *)((int)this + 0xde50) = *(undefined4 *)(param_2 + 0x10);
          *(undefined1 *)((int)this + 0xde54) = 1;
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
          FUN_10036df0(this,param_2);
        }
      }
      FUN_10036ae0(this,0,0,0);
    }
  }
  else {
    if (param_3 == 0) {
      FUN_10035840(this,param_1,param_2,iVar1,*(int *)((int)this + 0xdc94),iVar2,uVar3,0,0,param_6);
    }
    else {
      FUN_10039794(this,param_1,(void *)(param_3 + -0x18),iVar1,*(int *)((int)this + 0xdc94),iVar2,
                   uVar3,0,0,'\0',*(char *)(param_3 + 0x10));
    }
    *(byte *)((int)this + 0xd97f) =
         *(byte *)((int)this + 0xd97f) |
         (*(uint *)((int)this + 0xde50) & *(uint *)(param_2 + 0x10)) != *(uint *)(param_2 + 0x10);
    *(undefined4 *)((int)this + 0xde50) = *(undefined4 *)(param_2 + 0x10);
    *(undefined1 *)((int)this + 0xde54) = 0;
    bVar4 = FUN_10034840(this);
    if (bVar4 != 0) {
      FUN_10099b37(*(int *)(*(int *)((int)this + 0xd9b8) + 0x1304),param_5,1,param_4,0);
    }
    FUN_100357d0((int)this);
  }
  if (param_7 != '\0') {
    FUN_10098c04(*(void **)(*(int *)((int)this + 0xd9b8) + 0x1304),
                 *(undefined4 *)((int)this + 0xdcf0),*(undefined4 *)((int)this + 0xdcf4));
  }
  return;
}

