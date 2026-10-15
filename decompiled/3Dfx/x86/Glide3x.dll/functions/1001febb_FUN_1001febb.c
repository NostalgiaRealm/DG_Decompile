/*
 * FUN_1001febb at 1001febb
 * undefined __thiscall FUN_1001febb(void * this, int param_1)
 * Address ranges: 1001febb-1001ffe9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001febb(void *this,int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 local_30 [4];
  undefined4 *local_2c;
  int local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint local_1c;
  int *local_18;
  int local_14;
  undefined4 *local_10;
  uint local_c;
  undefined4 *local_8;
  
  local_18 = this;
  iVar3 = (**(code **)(**(int **)((int)this + 0x32dc) + 0x2c))(param_1);
  local_2c = (undefined4 *)0x0;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uVar6 = (uint)*(byte *)((int)this + 0x12d);
  local_1c = uVar6;
  uVar4 = FUN_10014f18(iVar3);
  if (((char)uVar4 == '\0') ||
     ((*(int *)(iVar3 + 0x60) == 0 && ((uVar6 == 0 || (*(char *)(iVar3 + 0x48) != '\0')))))) {
    *(undefined4 *)((int)this + 0x2c80) = 0;
    *(undefined1 *)((int)this + 0x32d0) = 1;
    cVar2 = FUN_10010a29(this,0,param_1,0xff,0,'\0',(int)local_30,'\x01',0,0,0);
    if (cVar2 != '\0') {
      puVar5 = (undefined4 *)(*(int *)((int)this + 0x318) + *(int *)(iVar3 + 0x18));
      local_8 = local_2c;
      iVar1 = (uint)(*(int *)(iVar3 + 0x10) == 5) * 2 + 2;
      local_c = 0;
      local_14 = iVar1;
      local_10 = puVar5;
      if (*(int *)(iVar3 + 0x24) != 0) {
        do {
          FUN_10052930(puVar5,local_8,*(int *)(iVar3 + 0x20) * iVar1);
          local_8 = (undefined4 *)((int)local_8 + local_28);
          puVar5 = (undefined4 *)((int)puVar5 + *(int *)(iVar3 + 0x20) * iVar1);
          local_c = local_c + 1;
          this = local_18;
          uVar6 = local_1c;
        } while (local_c < *(uint *)(iVar3 + 0x24));
      }
      FUN_10010b5e(this,0,param_1,0,0,0,0,0,0);
      (**(code **)(*(int *)this + 0x178))
                (local_10,*(undefined4 *)(iVar3 + 0x18),
                 *(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x18));
    }
    *(uint *)((int)this + 0x2c80) = uVar6;
    *(undefined1 *)((int)this + 0x32d0) = 1;
  }
  *(byte *)(iVar3 + 0x4a) = *(byte *)(iVar3 + 0x4a) & 0xfd;
  return;
}

