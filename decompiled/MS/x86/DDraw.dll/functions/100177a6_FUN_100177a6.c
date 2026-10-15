/*
 * FUN_100177a6 at 100177a6
 * char __thiscall FUN_100177a6(void * this, char param_1, char param_2)
 * Address ranges: 100177a6-100179c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_100177a6(void *this,char param_1,char param_2)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint local_4c;
  uint local_48;
  uint local_40;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_20 [4];
  uint local_10;
  undefined4 local_c;
  
  local_48 = 1;
  cVar3 = '\x01';
  if (*(int *)((int)this + 0x54) == 0) {
    if (param_2 != '\0') {
      FUN_100600a0(*(int *)((int)this + 0x44) + 0x11c0);
    }
    FUN_100221f0(this,&local_34);
    uVar5 = 5;
    if (*(int *)((int)this + 0x34) == 0) {
      uVar5 = 7;
    }
    if (((uVar5 < *(uint *)(&DAT_10062820 + *(int *)((int)this + 0x1c) * 4)) ||
        (*(int *)((int)this + 0x28) != 0)) || (*(int *)((int)this + 0x24) == 1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    puVar8 = (uint *)((int)this + 0x24);
    uVar1 = *(undefined4 *)(&DAT_10062738 + *(int *)((int)this + 0x1c) * 4);
    cVar3 = FUN_10014f74((void *)((int)this + 0x48),*(uint *)((int)this + 0x14),
                         *(uint *)((int)this + 0x18),*(uint *)((int)this + 0x2c),*puVar8,1,local_34,
                         local_30,local_2c,uVar1,0,local_28,0,
                         (byte)(*(uint *)((int)this + 0x30) >> 1) & 1,'\x01',0,0);
    if (cVar3 != '\0') {
      uVar5 = extraout_ECX;
      if (*(int *)((int)this + 0xc) != 0) {
        uVar5 = *(uint *)(*(int *)((int)this + 0x44) + 0x1304);
        if (param_2 != '\0') {
          cVar4 = FUN_1005049e(*(void **)(*(int *)((int)this + 0x40) + 0x172c0));
          uVar5 = *(uint *)((int)this + 0x44);
          if (cVar4 == '\0') {
            FUN_100600a0(uVar5 + 0x11c0);
            uVar5 = extraout_ECX_00;
          }
        }
        local_4c = 0;
        if (*puVar8 != 0) {
          do {
            uVar6 = *(uint *)((int)this + 0x20);
            uVar5 = 0;
            local_40 = 0;
            if (uVar6 != 0) {
              do {
                local_c = 1;
                local_20[0] = 0;
                local_20[1] = 0;
                local_20[2] = 0;
                local_20[3] = *(uint *)((int)this + 0x14) >> ((byte)local_40 & 0x1f);
                if (local_20[3] == 0) {
                  local_20[3] = local_48;
                }
                local_10 = *(uint *)((int)this + 0x18) >> ((byte)local_40 & 0x1f);
                if (local_10 == 0) {
                  local_10 = local_48;
                }
                iVar7 = uVar6 * local_4c + local_40;
                FUN_10054ccb(*(int **)((int)this + 0x54),
                             *(int *)((int)this + 0x2c) * local_4c + local_40,
                             (void *)(*(int *)((int)this + 0x44) + 0x1430),local_20,
                             *(uint **)(*(int *)((int)this + 0xc) + iVar7 * 8),
                             *(uint *)(*(int *)((int)this + 0xc) + 4 + iVar7 * 8),0);
                uVar6 = *(uint *)((int)this + 0x20);
                uVar5 = local_40 + 1;
                local_40 = uVar5;
              } while (uVar5 < uVar6);
            }
            local_4c = local_4c + 1;
          } while (local_4c < *puVar8);
        }
      }
      if ((param_1 != '\0') && (bVar2)) {
        uVar5 = FUN_1001529e((void *)((int)this + 0xf0),*(int **)((int)this + 0x54),local_30,uVar5,
                             uVar1,uVar5,0,1);
        cVar3 = (char)uVar5;
        FUN_10015d96(this);
        if (cVar3 == '\0') {
          FUN_1001540f((void *)((int)this + 0x48),1,1);
        }
      }
    }
  }
  return cVar3;
}

