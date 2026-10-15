/*
 * FUN_1003a026 at 1003a026
 * undefined __thiscall FUN_1003a026(void * this, int param_1, uint param_2, int param_3, int param_4, undefined4 param_5, int param_6, uint param_7, char param_8, byte param_9, char param_10)
 * Address ranges: 1003a026-1003a333
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1003a026(void *this,int param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
            int param_6,uint param_7,char param_8,byte param_9,char param_10)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint local_20;
  int local_1c;
  uint local_18;
  uint *local_10;
  
  FUN_10035800((int)this);
  uVar8 = FUN_10098be5(*(int *)(*(int *)((int)this + 0xd9b8) + 0x1304));
  *(undefined8 *)((int)this + 0xdcf0) = uVar8;
  if ((param_1 == 6) && (*(char *)(*(int *)((int)this + 0xd9bc) + 0x13) == '\0')) {
    if (2 < param_7) {
      local_20 = param_7 - 2;
      local_1c = 0;
      if (local_20 != 0) {
        while( true ) {
          iVar4 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
          if (0x1000U - iVar4 < 0x10) {
            FUN_10036ae0(this,0,1,0);
            iVar4 = 0;
          }
          uVar2 = (0x1000U - iVar4) / 3;
          uVar6 = local_20;
          if (uVar2 <= local_20) {
            uVar6 = uVar2;
          }
          uVar2 = uVar6 * 3;
          if (param_3 == 0) {
            FUN_10035840(this,4,param_2,*(int *)((int)this + 0xdc90),*(int *)((int)this + 0xd9d0),
                         *(int *)((int)this + 0x72c),*(uint *)((int)this + 0x6e8),0,uVar2,param_9);
          }
          else {
            FUN_10039794(this,4,(void *)(param_3 + -0x18),*(int *)((int)this + 0xdc90),
                         *(int *)((int)this + 0xd9d0),*(int *)((int)this + 0x72c),
                         *(uint *)((int)this + 0x6e8),0,uVar2,'\0','\0');
          }
          *(byte *)((int)this + 0xd97f) =
               *(byte *)((int)this + 0xd97f) |
               (*(uint *)((int)this + 0xde50) & *(uint *)(param_2 + 0x10)) !=
               *(uint *)(param_2 + 0x10);
          *(undefined4 *)((int)this + 0xde50) = *(undefined4 *)(param_2 + 0x10);
          *(undefined1 *)((int)this + 0xde54) = 1;
          if (uVar6 != 0) {
            local_10 = *(uint **)((int)this + 100);
            iVar4 = local_1c + param_6;
            uVar7 = 0;
            do {
              if (param_8 == '\0') {
                local_18 = (uint)*(ushort *)(param_4 + 2 + uVar7 * 2 + iVar4 * 2);
                uVar5 = (uint)*(ushort *)(param_4 + 4 + uVar7 * 2 + iVar4 * 2);
                uVar3 = (uint)*(ushort *)(param_4 + param_6 * 2);
              }
              else {
                local_18 = *(uint *)(param_4 + 4 + uVar7 * 4 + iVar4 * 4);
                uVar5 = *(uint *)(param_4 + 8 + uVar7 * 4 + iVar4 * 4);
                uVar3 = *(uint *)(param_4 + param_6 * 4);
              }
              *local_10 = local_18;
              *(uint *)(*(int *)((int)this + 100) + 4) = uVar5;
              *(uint *)(*(int *)((int)this + 100) + 8) = uVar3;
              local_10 = (uint *)(*(int *)((int)this + 100) + 0xc);
              uVar7 = uVar7 + 1;
              *(uint **)((int)this + 100) = local_10;
            } while (uVar7 < uVar6);
          }
          local_1c = local_1c + uVar6;
          *(uint *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + uVar2;
          local_20 = local_20 - uVar6;
          if (local_20 == 0) break;
          FUN_10036df0(this,param_2);
          *(undefined4 *)((int)this + 0x70) = param_5;
        }
        *(undefined4 *)((int)this + 0x70) = param_5;
      }
      FUN_10036ae0(this,0,0,0);
      *(undefined4 *)((int)this + 0x70) = 0;
    }
  }
  else {
    iVar4 = *(int *)((int)this + 0xdc94);
    if (iVar4 != 0) {
      if (param_3 == 0) {
        FUN_10035840(this,param_1,param_2,*(int *)((int)this + 0xdc90),iVar4,
                     *(int *)((int)this + 0x72c),*(uint *)((int)this + 0x6e8),0,0,param_9);
      }
      else {
        FUN_10039794(this,param_1,(void *)(param_3 + -0x18),*(int *)((int)this + 0xdc90),iVar4,
                     *(int *)((int)this + 0x72c),*(uint *)((int)this + 0x6e8),0,0,'\0',
                     *(char *)(param_3 + 0x10));
      }
      *(byte *)((int)this + 0xd97f) =
           *(byte *)((int)this + 0xd97f) |
           (*(uint *)((int)this + 0xde50) & *(uint *)(param_2 + 0x10)) != *(uint *)(param_2 + 0x10);
      *(undefined4 *)((int)this + 0xde50) = *(undefined4 *)(param_2 + 0x10);
      *(undefined1 *)((int)this + 0xde54) = 1;
      bVar1 = FUN_10034840(this);
      if ((bVar1 != 0) && (param_6 != -1)) {
        FUN_10099b70(*(int *)(*(int *)((int)this + 0xd9b8) + 0x1304),param_7,1,param_6,param_5,0);
      }
      FUN_100357d0((int)this);
    }
  }
  if (param_10 != '\0') {
    FUN_10098c04(*(void **)(*(int *)((int)this + 0xd9b8) + 0x1304),
                 *(undefined4 *)((int)this + 0xdcf0),*(undefined4 *)((int)this + 0xdcf4));
  }
  return;
}

