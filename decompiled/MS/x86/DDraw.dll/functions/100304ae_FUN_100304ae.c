/*
 * FUN_100304ae at 100304ae
 * undefined1 __thiscall FUN_100304ae(void * this, undefined4 param_1)
 * Address ranges: 100304ae-100305b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_100304ae(void *this,undefined4 param_1)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  tagRECT local_38;
  HDC__ local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  uVar3 = FUN_1002fae1((int)this);
  uVar5 = *(uint *)((int)this + 0x1b8) >> 0xc;
  local_18 = CONCAT31(local_18._1_3_,(char)(*(uint *)((int)this + 0x1b8) >> 0xb)) & 0xffffff01;
  bVar7 = (*(uint *)((int)this + 0x1bc) & 0x20010) != 0;
  local_10 = CONCAT31(local_10._1_3_,bVar7);
  local_14 = CONCAT31(local_14._1_3_,(char)uVar5) & 0xffffff01;
  if ((((*(int *)(DAT_1006c210 + 0x7e0) != 2) && (*(int *)(DAT_1006c210 + 0x7e0) != 3)) ||
      ((uVar5 & 1) == 0)) || (local_c = CONCAT31(local_c._1_3_,1), uVar3 != 1)) {
    local_c = local_c & 0xffffff00;
  }
  if ((*(byte *)((int)this + 0x1b8) & 8) == 0) {
    uVar4 = FUN_10030238(this,(byte)local_18,(char)local_14,local_10,(byte)local_c);
    uVar1 = (undefined1)uVar4;
  }
  else {
    uVar1 = FUN_1002fbe1(this,param_1,uVar3,(byte)local_18,(char)local_14,bVar7,(byte)local_c);
  }
  if (*(int *)(*(int *)((int)this + 4) + 0xcc) == 0) {
    FUN_10031dbb((uint)this);
    FUN_100310b8((int)this);
  }
  if (((*(uint *)((int)this + 0x1b8) & 0x200) != 0) &&
     ((*(uint *)(*(int *)((int)this + 0xfc) + 0x104) >> 4 & 1) == 0)) {
    cVar2 = FUN_10004193((int *)(*(int *)((int)this + 0xfc) + 0x10));
    if (cVar2 == '\0') {
      iVar6 = *(int *)(*(int *)((int)this + 0xfc) + 0x11c) * 0x228;
      local_28.unused = *(int *)(&DAT_1006c470 + iVar6);
      uStack_24 = *(undefined4 *)(&DAT_1006c474 + iVar6);
      uStack_20 = *(undefined4 *)(&DAT_1006c478 + iVar6);
      uStack_1c = *(undefined4 *)(&DAT_1006c47c + iVar6);
      FUN_1002c865(this,&local_38,this,&local_28);
    }
  }
  return uVar1;
}

