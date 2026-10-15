/*
 * FUN_10019a99 at 10019a99
 * int __thiscall FUN_10019a99(void * this, uint param_1, uint param_2)
 * Address ranges: 10019a99-10019b66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10019a99(void *this,uint param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar4;
  uint uVar5;
  uint local_20;
  uint local_1c;
  undefined8 local_18;
  uint local_c;
  
  uVar5 = param_1 & *(uint *)((int)this + 8);
  uVar4 = param_2 & *(uint *)((int)this + 0xc);
  local_18 = 0;
  local_20 = uVar5;
  local_1c = uVar4;
  local_c = uVar5;
  uVar2 = FUN_10019c31((void *)((int)this + 0x10),&local_20);
  if (uVar2 != *(uint *)((int)this + 0x18)) {
    uVar2 = FUN_1001990a((void *)(uVar2 * 0x18 + *(int *)((int)this + 0x14)),local_20,local_1c,
                         (uint)local_18,local_18._4_4_);
    uVar5 = local_c;
    if (((char)uVar2 != '\0') && ((int *)(extraout_ECX + 0x10) != (int *)0x0)) {
      return *(int *)(extraout_ECX + 0x10);
    }
  }
  iVar3 = *(int *)(*(int *)((int)this + 0x24) * 0x1510 + 0x520 + *(int *)((int)this + 0x20));
  if (iVar3 < 0xb000) {
    cVar1 = (0xa0ff < iVar3) + '@';
  }
  else {
    cVar1 = 'P';
  }
  iVar3 = (*(code *)**(undefined4 **)this)
                    (*(undefined4 *)((int)this + 0x20),*(undefined4 *)((int)this + 0x24),uVar5,uVar4
                     ,0,0,cVar1);
  if (iVar3 != 0) {
    FUN_100199fa((void *)((int)this + 0x10),uVar5,uVar4,extraout_ECX_00,extraout_ECX_00,iVar3);
  }
  return iVar3;
}

