/*
 * FUN_1002001c at 1002001c
 * undefined __thiscall FUN_1002001c(void * this, int param_1, uint param_2, uint param_3)
 * Address ranges: 1002001c-100201ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002001c(void *this,int param_1,uint param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char cVar6;
  undefined4 extraout_EDX;
  uint uVar7;
  undefined1 local_34 [4];
  undefined4 *local_30;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_20;
  void *local_1c;
  int local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  uint local_c;
  char local_5;
  
  local_1c = this;
  iVar3 = (**(code **)(**(int **)((int)this + 0x32dc) + 0x2c))(param_1);
  bVar2 = FUN_1001ffea(this,param_1,param_2,param_3);
  if (bVar2) {
    local_5 = *(char *)(iVar3 + 0x48);
    iVar1 = *(int *)((int)this + 0x2a10);
    if ((local_5 == '\0') && (*(int *)(iVar3 + 0x10) != 5)) {
      cVar6 = '\x01';
    }
    else {
      cVar6 = '\0';
    }
    local_10 = (undefined4 *)CONCAT31(local_10._1_3_,cVar6);
    local_18 = (uint)(*(int *)(iVar3 + 0x10) == 5) * 2 + 2;
    local_c = 0;
    if (cVar6 != '\0') {
      local_c = (uint)(byte)(&DAT_1005b711)[*(int *)(iVar3 + 8) * 2];
    }
    local_20 = iVar1;
    uVar4 = FUN_10014f18(iVar3);
    if (((char)uVar4 == '\0') ||
       ((((*(int *)(&DAT_10054958 + *(int *)(iVar3 + 0x5c) * 4) == *(int *)(iVar3 + 8) &&
          (*(int *)(iVar3 + 0x60) == 0)) && (*(char *)(iVar3 + 0x7d) == '\0')) &&
        ((iVar1 == 0 || (local_5 != '\0')))))) {
      *(uint *)((int)this + 0x29e0) = *(uint *)((int)this + 0x29e0) | 0x80;
      *(undefined4 *)((int)this + 0x2c80) = 0;
      local_30 = (undefined4 *)0x0;
      *(undefined1 *)((int)this + 0x32d0) = 1;
      local_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      cVar6 = FUN_10010a29(this,1,param_1,0xff,0,'\0',(int)local_34,'\x01',(char)local_10,
                           extraout_EDX,local_c);
      if (cVar6 != '\0') {
        puVar5 = (undefined4 *)(*(int *)((int)this + 0x318) + param_2);
        local_c = param_3 - param_2;
        local_10 = local_30;
        local_14 = puVar5;
        if (local_c != 0) {
          do {
            uVar7 = *(int *)(iVar3 + 0x28) * local_18;
            if (local_c <= uVar7) {
              uVar7 = local_c;
            }
            FUN_10052930(local_10,puVar5,uVar7);
            puVar5 = (undefined4 *)((int)puVar5 + uVar7);
            local_10 = (undefined4 *)((int)local_10 + local_2c);
            local_c = local_c - uVar7;
          } while (local_c != 0);
          local_c = 0;
          this = local_1c;
        }
        if ((param_2 != *(uint *)(iVar3 + 0x18)) ||
           (param_2 = 0, param_3 != *(uint *)(iVar3 + 0x1c))) {
          param_2 = 1;
        }
        FUN_10010b5e(this,1,param_1,(char)param_2,0,0,*(LONG *)(iVar3 + 0x28),
                     *(LONG *)(iVar3 + 0x2c),0);
        (**(code **)(**(int **)((int)this + 0x32dc) + 0x20))(param_1,param_2,0);
      }
      *(uint *)((int)this + 0x29e0) = *(uint *)((int)this + 0x29e0) & 0x7f;
      *(int *)((int)this + 0x2c80) = local_20;
      *(undefined1 *)((int)this + 0x32d0) = 1;
    }
  }
  return;
}

