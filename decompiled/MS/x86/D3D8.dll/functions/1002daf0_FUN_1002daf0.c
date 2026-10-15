/*
 * FUN_1002daf0 at 1002daf0
 * int __thiscall FUN_1002daf0(void * this, uint param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 1002daf0-1002dbc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1002daf0(void *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int extraout_ECX;
  uint uVar4;
  uint uVar5;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_c;
  
  local_18 = param_3;
  uVar4 = param_2 & *(uint *)((int)this + 0xc);
  uVar5 = param_1 & *(uint *)((int)this + 8);
  local_14 = param_4;
  local_20 = uVar5;
  local_1c = uVar4;
  local_c = uVar5;
  uVar2 = FUN_1002dc92((void *)((int)this + 0x10),&local_20);
  if (((uVar2 == *(uint *)((int)this + 0x18)) ||
      (uVar2 = FUN_1002d917((void *)(uVar2 * 0x18 + *(int *)((int)this + 0x14)),local_20,local_1c,
                            local_18,local_14), uVar5 = local_c, (char)uVar2 == '\0')) ||
     ((int *)(extraout_ECX + 0x10) == (int *)0x0)) {
    iVar3 = *(int *)(*(int *)((int)this + 0x24) * 0x1510 + 0x520 + *(int *)((int)this + 0x20));
    if (iVar3 < 0xb000) {
      cVar1 = (0xa0ff < iVar3) + '@';
    }
    else {
      cVar1 = 'P';
    }
    iVar3 = (*(code *)**(undefined4 **)this)
                      (*(undefined4 *)((int)this + 0x20),*(undefined4 *)((int)this + 0x24),uVar5,
                       uVar4,param_3,param_4,cVar1);
    if (iVar3 != 0) {
      FUN_1002da07((void *)((int)this + 0x10),uVar5,uVar4,param_3,param_4,iVar3);
    }
  }
  else {
    iVar3 = *(int *)(extraout_ECX + 0x10);
  }
  return iVar3;
}

