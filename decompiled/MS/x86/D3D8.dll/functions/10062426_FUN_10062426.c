/*
 * FUN_10062426 at 10062426
 * char __thiscall FUN_10062426(void * this, char param_1)
 * Address ranges: 10062426-1006260a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_10062426(void *this,char param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 extraout_ECX;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint local_4c8;
  uint local_4b8;
  int local_4b4;
  undefined4 local_49c;
  int local_498;
  int local_490;
  undefined4 local_488 [289];
  
  cVar4 = '\x01';
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_1007923c(this,&local_49c);
    uVar1 = *(uint *)(&DAT_100b04f0 + *(int *)((int)this + 0x1c) * 4);
    uVar5 = 5;
    if (*(int *)((int)this + 0x34) == 0) {
      uVar5 = 7;
    }
    if (((uVar5 < uVar1) || (*(int *)((int)this + 0x28) != 0)) || (*(int *)((int)this + 0x24) == 1))
    {
      bVar3 = 0;
    }
    else {
      bVar3 = 1;
    }
    puVar10 = (uint *)((int)this + 0x24);
    local_4b4 = local_498;
    if ((*(int *)(*(int *)((int)this + 0x10) * 0x1510 + 0x520 + *(int *)((int)this + 0x40)) ==
         0xa000) && (local_4b4 = 0, bVar3 == 0)) {
      local_4b4 = local_498;
    }
    iVar9 = *(int *)((int)this + 0xc);
    if ((iVar9 != 0) && (local_4b8 = 0, *puVar10 != 0)) {
      uVar5 = *(uint *)((int)this + 0x2c);
      do {
        local_4c8 = 0;
        if (uVar5 != 0) {
          uVar2 = *(uint *)((int)this + 0x20);
          do {
            iVar6 = local_4c8 + uVar5 * local_4b8;
            iVar8 = (-(uint)(local_4c8 < uVar2) & local_4c8) + uVar2 * local_4b8;
            local_488[iVar6 * 3] = *(undefined4 *)(iVar9 + iVar8 * 8);
            local_488[iVar6 * 3 + 1] = *(undefined4 *)(iVar9 + 4 + iVar8 * 8);
            local_4c8 = local_4c8 + 1;
            local_488[iVar6 * 3 + 2] = 0;
          } while (local_4c8 < uVar5);
        }
        local_4b8 = local_4b8 + 1;
      } while (local_4b8 < *puVar10);
      iVar9 = *(int *)((int)this + 0xc);
    }
    puVar7 = local_488;
    if (iVar9 == 0) {
      puVar7 = (undefined4 *)0x0;
    }
    cVar4 = FUN_10061b08(*(undefined4 *)((int)this + 0x14),*(undefined4 *)((int)this + 0x18),
                         *(uint *)((int)this + 0x2c),*puVar10,1,local_49c,local_4b4,local_490,0,0,
                         (-(uint)(uVar1 < 8) & 0xffffffe0) + 0x28,0,(uint)bVar3 << 2,puVar7,'\0',
                         '\0');
    if (((cVar4 != '\0') && (param_1 != '\0')) && (bVar3 != 0)) {
      cVar4 = FUN_10061c06((void *)((int)this + 0xac),*(int **)((int)this + 0x54),local_498,
                           extraout_ECX,0,'\x01');
      FUN_10062371(this);
      if (!(bool)cVar4) {
        FUN_10061cbb((void *)((int)this + 0x48),1,1);
      }
    }
  }
  return cVar4;
}

