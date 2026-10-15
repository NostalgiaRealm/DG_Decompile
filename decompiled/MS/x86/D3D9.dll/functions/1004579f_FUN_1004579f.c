/*
 * FUN_1004579f at 1004579f
 * undefined __thiscall FUN_1004579f(void * this, int param_1, undefined * param_2, int param_3, int param_4, undefined4 param_5, int param_6, uint param_7, char param_8, byte param_9, char param_10)
 * Address ranges: 1004579f-10045ac3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1004579f(void *this,int param_1,undefined *param_2,int param_3,int param_4,undefined4 param_5,
            int param_6,uint param_7,char param_8,byte param_9,char param_10)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  uint local_1c;
  int local_18;
  uint local_14;
  uint *local_c;
  
  FUN_10040dc0((int)this);
  uVar9 = FUN_100bb1bd(*(int *)(*(int *)((int)this + 0xf6b8) + 0x1304));
  *(undefined8 *)((int)this + 0xfc30) = uVar9;
  if ((param_1 == 6) && (*(char *)(*(int *)((int)this + 0xf6bc) + 0x13) == '\0')) {
    if (2 < param_7) {
      local_1c = param_7 - 2;
      local_18 = 0;
      if (local_1c != 0) {
        while( true ) {
          iVar4 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
          if (0x1000U - iVar4 < 0x10) {
            FUN_10042220(this,0,1,0);
            iVar4 = 0;
          }
          uVar2 = (0x1000U - iVar4) / 3;
          uVar6 = local_1c;
          if (uVar2 <= local_1c) {
            uVar6 = uVar2;
          }
          uVar2 = uVar6 * 3;
          if (param_3 == 0) {
            FUN_10040e20(this,4,param_2,*(int *)((int)this + 0xfbc8),*(int *)((int)this + 0xf6d0),
                         *(int *)((int)this + 0x104c),*(uint *)((int)this + 0x1008),0,uVar2,param_9)
            ;
          }
          else {
            FUN_10044eb6(this,4,(void *)(param_3 + -0x18),*(int *)((int)this + 0xfbc8),
                         *(int *)((int)this + 0xf6d0),*(int *)((int)this + 0x104c),
                         *(uint *)((int)this + 0x1008),0,uVar2,'\0','\0');
          }
          *(byte *)((int)this + 0xf66f) =
               *(byte *)((int)this + 0xf66f) |
               (*(uint *)((int)this + 0xfd90) & *(uint *)(param_2 + 0x10)) !=
               *(uint *)(param_2 + 0x10);
          *(undefined4 *)((int)this + 0xfd90) = *(undefined4 *)(param_2 + 0x10);
          *(undefined1 *)((int)this + 0xfd94) = 1;
          if (uVar6 != 0) {
            local_c = *(uint **)((int)this + 100);
            iVar4 = local_18 + param_6;
            uVar7 = 0;
            do {
              if (param_8 == '\0') {
                local_14 = (uint)*(ushort *)(param_4 + 2 + uVar7 * 2 + iVar4 * 2);
                uVar5 = (uint)*(ushort *)(param_4 + 4 + uVar7 * 2 + iVar4 * 2);
                uVar3 = (uint)*(ushort *)(param_4 + param_6 * 2);
              }
              else {
                local_14 = *(uint *)(param_4 + 4 + uVar7 * 4 + iVar4 * 4);
                uVar5 = *(uint *)(param_4 + 8 + uVar7 * 4 + iVar4 * 4);
                uVar3 = *(uint *)(param_4 + param_6 * 4);
              }
              *local_c = local_14;
              *(uint *)(*(int *)((int)this + 100) + 4) = uVar5;
              *(uint *)(*(int *)((int)this + 100) + 8) = uVar3;
              local_c = (uint *)(*(int *)((int)this + 100) + 0xc);
              uVar7 = uVar7 + 1;
              *(uint **)((int)this + 100) = local_c;
            } while (uVar7 < uVar6);
          }
          local_18 = local_18 + uVar6;
          *(uint *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + uVar2;
          local_1c = local_1c - uVar6;
          if (local_1c == 0) break;
          FUN_10042530(this,(uint)param_2);
          *(undefined4 *)((int)this + 0x70) = param_5;
        }
        *(undefined4 *)((int)this + 0x70) = param_5;
      }
      FUN_10042220(this,0,0,0);
      *(undefined4 *)((int)this + 0x70) = 0;
    }
  }
  else {
    iVar4 = *(int *)((int)this + 0xfbcc);
    if (iVar4 != 0) {
      if (param_3 == 0) {
        FUN_10040e20(this,param_1,param_2,*(int *)((int)this + 0xfbc8),iVar4,
                     *(int *)((int)this + 0x104c),*(uint *)((int)this + 0x1008),0,0,param_9);
        uVar8 = 1;
      }
      else {
        FUN_10044eb6(this,param_1,(void *)(param_3 + -0x18),*(int *)((int)this + 0xfbc8),iVar4,
                     *(int *)((int)this + 0x104c),*(uint *)((int)this + 0x1008),0,0,'\0',
                     *(char *)(param_3 + 0x10));
        uVar8 = 1;
        if (*(int *)(param_3 + 0x20) != 0) {
          uVar8 = *(undefined4 *)(param_3 + 0x20);
        }
      }
      *(byte *)((int)this + 0xf66f) =
           *(byte *)((int)this + 0xf66f) |
           (*(uint *)((int)this + 0xfd90) & *(uint *)(param_2 + 0x10)) != *(uint *)(param_2 + 0x10);
      *(undefined4 *)((int)this + 0xfd90) = *(undefined4 *)(param_2 + 0x10);
      *(undefined1 *)((int)this + 0xfd94) = 1;
      bVar1 = FUN_1003fdb0(this);
      if ((bVar1 != 0) && (param_6 != -1)) {
        FUN_100bc148(*(int *)(*(int *)((int)this + 0xf6b8) + 0x1304),param_7,uVar8,param_6,param_5,0
                    );
      }
      FUN_10040d90((int)this);
    }
  }
  if (param_10 != '\0') {
    FUN_100bb1dc(*(void **)(*(int *)((int)this + 0xf6b8) + 0x1304),
                 *(undefined4 *)((int)this + 0xfc30),*(undefined4 *)((int)this + 0xfc34));
  }
  return;
}

