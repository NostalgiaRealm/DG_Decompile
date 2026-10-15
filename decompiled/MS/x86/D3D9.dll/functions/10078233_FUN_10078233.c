/*
 * FUN_10078233 at 10078233
 * char __thiscall FUN_10078233(void * this, char param_1)
 * Address ranges: 10078233-100783fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_10078233(void *this,char param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar10;
  uint local_4c4;
  uint local_4bc;
  int local_4b8;
  undefined4 local_49c;
  int local_498;
  int local_490;
  undefined4 local_488 [289];
  
  cVar6 = '\x01';
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_1008f5b4(this,&local_49c);
    iVar7 = FUN_10077c40((int)this);
    if (((char)iVar7 == '\0') &&
       ((cVar6 = FUN_10077be8(extraout_ECX), cVar6 == '\0' || (*(int *)((int)this + 0x28) != 0)))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    uVar1 = *(uint *)(&DAT_100d2658 + *(int *)((int)this + 0x1c) * 4);
    if ((bVar5) && (*(int *)((int)this + 0x24) != 1)) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    local_4b8 = local_498;
    if ((*(int *)(*(int *)((int)this + 0x10) * 0x1510 + 0x520 + *(int *)((int)this + 0x40)) ==
         0xa000) && (local_4b8 = 0, (char)uVar4 == '\0')) {
      local_4b8 = local_498;
    }
    iVar7 = *(int *)((int)this + 0xc);
    if ((iVar7 != 0) && (local_4bc = 0, *(int *)((int)this + 0x24) != 0)) {
      uVar2 = *(uint *)((int)this + 0x2c);
      do {
        local_4c4 = 0;
        if (uVar2 != 0) {
          uVar3 = *(uint *)((int)this + 0x20);
          do {
            iVar8 = uVar2 * local_4bc + local_4c4;
            iVar10 = (-(uint)(local_4c4 < uVar3) & local_4c4) + uVar3 * local_4bc;
            local_488[iVar8 * 3] = *(undefined4 *)(iVar7 + iVar10 * 8);
            local_488[iVar8 * 3 + 1] = *(undefined4 *)(iVar7 + 4 + iVar10 * 8);
            local_488[iVar8 * 3 + 2] = 0;
            local_4c4 = local_4c4 + 1;
          } while (local_4c4 < uVar2);
        }
        local_4bc = local_4bc + 1;
      } while (local_4bc < *(uint *)((int)this + 0x24));
      iVar7 = *(int *)((int)this + 0xc);
    }
    puVar9 = local_488;
    if (iVar7 == 0) {
      puVar9 = (undefined4 *)0x0;
    }
    cVar6 = FUN_100777a5(*(undefined4 *)((int)this + 0x14),*(undefined4 *)((int)this + 0x18),
                         *(uint *)((int)this + 0x2c),*(uint *)((int)this + 0x24),1,local_49c,
                         local_4b8,local_490,0,0,(-(uint)(uVar1 < 8) & 0xffffffe0) + 0x28,0,
                         (uint)uVar4 << 2,puVar9,'\0','\0');
    if (((cVar6 != '\0') && (param_1 != '\0')) && ((char)uVar4 != '\0')) {
      cVar6 = FUN_100778a3((void *)((int)this + 0xac),*(int **)((int)this + 0x54),local_498,
                           extraout_ECX_00,0,'\x01');
      FUN_1007817e(this);
      if (!(bool)cVar6) {
        FUN_10077958((void *)((int)this + 0x48),1,1);
      }
    }
  }
  return cVar6;
}

