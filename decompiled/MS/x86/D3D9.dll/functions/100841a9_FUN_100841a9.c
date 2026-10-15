/*
 * FUN_100841a9 at 100841a9
 * char __thiscall FUN_100841a9(void * this, char param_1, char param_2)
 * Address ranges: 100841a9-100843d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_100841a9(void *this,char param_1,char param_2)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint uVar6;
  uint uVar7;
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
      FUN_100cef50(*(int *)((int)this + 0x44) + 0x11c0);
    }
    FUN_1008f5b4(this,&local_34);
    iVar5 = FUN_10077c40((int)this);
    if ((((char)iVar5 == '\0') &&
        ((cVar3 = FUN_10077be8(extraout_ECX), cVar3 == '\0' || (*(int *)((int)this + 0x28) != 0))))
       || (*(int *)((int)this + 0x24) == 1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    puVar8 = (uint *)((int)this + 0x24);
    uVar1 = *(undefined4 *)(&DAT_100d2550 + *(int *)((int)this + 0x1c) * 4);
    cVar3 = FUN_10081718((void *)((int)this + 0x48),*(uint *)((int)this + 0x14),
                         *(uint *)((int)this + 0x18),*(uint *)((int)this + 0x2c),*puVar8,1,local_34,
                         local_30,local_2c,uVar1,0,local_28,0,
                         (byte)(*(uint *)((int)this + 0x30) >> 1) & 1,'\x01',0,0);
    if (cVar3 != '\0') {
      uVar6 = extraout_ECX_00;
      if (*(int *)((int)this + 0xc) != 0) {
        uVar6 = *(uint *)(*(int *)((int)this + 0x44) + 0x1304);
        if (param_2 != '\0') {
          cVar4 = FUN_100c1776(*(void **)(*(int *)((int)this + 0x40) + 0x172c0));
          uVar6 = *(uint *)((int)this + 0x44);
          if (cVar4 == '\0') {
            FUN_100cef50(uVar6 + 0x11c0);
            uVar6 = extraout_ECX_01;
          }
        }
        local_4c = 0;
        if (*puVar8 != 0) {
          do {
            uVar7 = *(uint *)((int)this + 0x20);
            uVar6 = 0;
            local_40 = 0;
            if (uVar7 != 0) {
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
                iVar5 = uVar7 * local_4c + local_40;
                FUN_100bd0a6(*(int **)((int)this + 0x54),
                             *(int *)((int)this + 0x2c) * local_4c + local_40,
                             (void *)(*(int *)((int)this + 0x44) + 0x1430),local_20,
                             *(uint **)(*(int *)((int)this + 0xc) + iVar5 * 8),
                             *(uint *)(*(int *)((int)this + 0xc) + 4 + iVar5 * 8),0);
                uVar7 = *(uint *)((int)this + 0x20);
                uVar6 = local_40 + 1;
                local_40 = uVar6;
              } while (uVar6 < uVar7);
            }
            local_4c = local_4c + 1;
          } while (local_4c < *puVar8);
        }
      }
      if ((param_1 != '\0') && (bVar2)) {
        uVar6 = FUN_10081a42((void *)((int)this + 0xf0),*(int **)((int)this + 0x54),local_30,0,uVar1
                             ,uVar6,0,1);
        cVar3 = (char)uVar6;
        FUN_100827eb(this);
        if (cVar3 == '\0') {
          FUN_10081bba((void *)((int)this + 0x48),1,1);
        }
      }
    }
  }
  return cVar3;
}

