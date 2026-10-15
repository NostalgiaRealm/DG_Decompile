/*
 * FUN_1001fade at 1001fade
 * undefined __thiscall FUN_1001fade(void * this, int param_1)
 * Address ranges: 1001fade-1001fc04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001fade(void *this,int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 local_2c [4];
  undefined4 *local_28;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_18;
  int *local_14;
  int local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_14 = this;
  iVar3 = (**(code **)(**(int **)((int)this + 0x365c) + 0x2c))(param_1);
  local_28 = (undefined4 *)0x0;
  local_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uVar6 = (uint)*(byte *)((int)this + 0x150);
  local_18 = uVar6;
  uVar4 = FUN_100165a9(iVar3);
  if (((char)uVar4 == '\0') ||
     ((*(int *)(iVar3 + 0x60) == 0 && ((uVar6 == 0 || (*(char *)(iVar3 + 0x48) != '\0')))))) {
    *(undefined4 *)((int)this + 0x2dd0) = 0;
    *(undefined1 *)((int)this + 0x3650) = 1;
    cVar1 = FUN_10011d92(this,0,param_1,0xff,0,'\0',(int)local_2c,'\x01',0,0,0);
    if (cVar1 != '\0') {
      local_c = (undefined4 *)(*(int *)((int)this + 0x454) + *(int *)(iVar3 + 0x18));
      bVar2 = FUN_100165de(iVar3);
      local_10 = (uint)bVar2 * 2 + 2;
      local_8 = 0;
      puVar5 = local_28;
      puVar7 = local_c;
      if (*(int *)(iVar3 + 0x24) != 0) {
        do {
          FUN_10055d40(puVar7,puVar5,*(int *)(iVar3 + 0x20) * local_10);
          local_8 = local_8 + 1;
          this = local_14;
          puVar5 = (undefined4 *)((int)puVar5 + local_24);
          uVar6 = local_18;
          puVar7 = (undefined4 *)((int)puVar7 + *(int *)(iVar3 + 0x20) * local_10);
        } while (local_8 < *(uint *)(iVar3 + 0x24));
      }
      FUN_10011ec7(this,0,param_1,0,0,0,0,0,0);
      (**(code **)(*(int *)this + 0x1a0))
                (local_c,*(undefined4 *)(iVar3 + 0x18),
                 *(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x18));
    }
    *(uint *)((int)this + 0x2dd0) = uVar6;
    *(undefined1 *)((int)this + 0x3650) = 1;
  }
  *(byte *)(iVar3 + 0x4a) = *(byte *)(iVar3 + 0x4a) & 0xfd;
  return;
}

