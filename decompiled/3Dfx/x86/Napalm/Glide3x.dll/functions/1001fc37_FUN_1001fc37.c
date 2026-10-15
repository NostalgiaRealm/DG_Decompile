/*
 * FUN_1001fc37 at 1001fc37
 * undefined __thiscall FUN_1001fc37(void * this, int param_1, uint param_2, uint param_3)
 * Address ranges: 1001fc37-1001fe14
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001fc37(void *this,int param_1,uint param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  char extraout_DL;
  char extraout_DH;
  uint uVar9;
  undefined1 local_30 [4];
  undefined4 *local_2c;
  int local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int local_1c;
  void *local_18;
  int local_14;
  undefined4 *local_10;
  uint local_c;
  undefined4 *local_8;
  
  local_18 = this;
  iVar5 = (**(code **)(**(int **)((int)this + 0x365c) + 0x2c))(param_1);
  bVar2 = FUN_1001fc05(this,param_1,param_2,param_3);
  if (bVar2) {
    iVar1 = *(int *)((int)this + 0x2b4c);
    local_1c = iVar1;
    if ((*(char *)(iVar5 + 0x48) == '\0') && (cVar3 = FUN_100165de(iVar5), cVar3 == '\0')) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    local_10 = (undefined4 *)CONCAT31(local_10._1_3_,uVar8);
    bVar4 = FUN_100165de(iVar5);
    local_c = 0;
    local_8 = (undefined4 *)0x0;
    local_14 = (uint)bVar4 * 2 + 2;
    if (extraout_DL != '\0') {
      local_c = (uint)(byte)(&DAT_1005f8e8)[*(int *)(iVar5 + 8) * 2];
      local_8 = (undefined4 *)(uint)(byte)(&DAT_1005f8e9)[*(int *)(iVar5 + 8) * 2];
    }
    uVar6 = FUN_100165a9(iVar5);
    if (((char)uVar6 == '\0') ||
       ((((*(int *)(&DAT_10057c78 + *(int *)(iVar5 + 0x5c) * 4) == *(int *)(iVar5 + 8) &&
          (*(int *)(iVar5 + 0x60) == 0)) && (*(char *)(iVar5 + 0x7d) == '\0')) &&
        ((iVar1 == 0 || (extraout_DH != '\0')))))) {
      *(uint *)((int)this + 0x2b1c) = *(uint *)((int)this + 0x2b1c) | 0x80;
      *(undefined4 *)((int)this + 0x2dd0) = 0;
      local_2c = (undefined4 *)0x0;
      *(undefined1 *)((int)this + 0x3650) = 1;
      local_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      cVar3 = FUN_10011d92(this,1,param_1,0xff,0,'\0',(int)local_30,'\x01',(char)local_10,local_c,
                           local_8);
      if (cVar3 != '\0') {
        puVar7 = (undefined4 *)(*(int *)((int)this + 0x454) + param_2);
        local_c = param_3 - param_2;
        local_10 = local_2c;
        local_8 = puVar7;
        if (local_c != 0) {
          do {
            uVar9 = *(int *)(iVar5 + 0x28) * local_14;
            if (local_c <= uVar9) {
              uVar9 = local_c;
            }
            FUN_10055d40(local_10,puVar7,uVar9);
            puVar7 = (undefined4 *)((int)puVar7 + uVar9);
            local_10 = (undefined4 *)((int)local_10 + local_28);
            local_c = local_c - uVar9;
          } while (local_c != 0);
          local_c = 0;
          this = local_18;
        }
        if ((param_2 != *(uint *)(iVar5 + 0x18)) ||
           (param_2 = 0, param_3 != *(uint *)(iVar5 + 0x1c))) {
          param_2 = 1;
        }
        FUN_10011ec7(this,1,param_1,(char)param_2,0,0,*(LONG *)(iVar5 + 0x28),
                     *(LONG *)(iVar5 + 0x2c),0);
        (**(code **)(**(int **)((int)this + 0x365c) + 0x20))(param_1,param_2,0);
      }
      *(uint *)((int)this + 0x2b1c) = *(uint *)((int)this + 0x2b1c) & 0x7f;
      *(int *)((int)this + 0x2dd0) = local_1c;
      *(undefined1 *)((int)this + 0x3650) = 1;
    }
  }
  return;
}

