/*
 * FUN_1007ae49 at 1007ae49
 * undefined4 __thiscall FUN_1007ae49(void * this, char param_1)
 * Address ranges: 1007ae49-1007b050
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1007ae49(void *this,char param_1)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined4 local_30;
  int local_2c;
  void *local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  uVar9 = 0;
  local_1c = this;
  if (*(int *)((int)this + 0x134) == 0) {
    FUN_1008f5b4(this,&local_30);
    if (*(char *)((int)this + 0x150) != '\0') {
      bVar10 = *(int *)((int)this + 0x1c) != 0x15;
      iVar7 = 0x2c;
      if (bVar10) {
        iVar7 = 0x1c;
      }
      local_30 = *(undefined4 *)(iVar7 + *(int *)((int)this + 4));
      iVar7 = 0x34;
      if (bVar10) {
        iVar7 = 0x24;
      }
      local_2c = *(int *)(iVar7 + *(int *)((int)this + 4));
    }
    uVar5 = *(uint *)((int)this + 0x28);
    if (uVar5 == 0) {
      uVar5 = *(uint *)((int)this + 0x20);
    }
    FUN_100777a5(*(undefined4 *)((int)this + 0xdc),*(undefined4 *)((int)this + 0xe0),uVar5,
                 *(uint *)((int)this + 0x24),1,local_30,local_2c,0,0,0,8,0,
                 -(uint)(*(int *)((int)this + 0x24) != 1) & 4,0,*(int *)((int)this + 0x24) != 1,'\0'
                );
    *(undefined1 *)((int)this + 0xdb) = 0;
    *(undefined4 *)((int)this + 0xcc) = 0;
    *(undefined4 *)((int)this + 0xd0) = 0;
    *(undefined4 *)((int)this + 0xd4) = 0;
  }
  local_10 = (int)this + 0xcc;
  if (*(int *)((int)this + 0x134) == 0) goto LAB_1007b026;
  if (*(char *)((int)this + 0xdb) == '\0') {
    uVar5 = *(uint *)((int)this + 0x24);
    local_8 = 0;
    uVar8 = 0;
    local_18 = uVar5 & 0x1f;
    local_c = uVar5;
    if (uVar5 == 0) {
LAB_1007afcf:
      piVar3 = *(int **)(*(int *)((int)this + 0x44) + 4);
      (**(code **)(*piVar3 + 0xbc))
                (piVar3,*(undefined4 *)((int)this + 0x134),*(undefined4 *)((int)this + 0x54));
      if (uVar5 != 0) {
        local_18 = 0xffffffff >> (0x20U - (char)local_18 & 0x1f);
        uVar8 = 0;
        do {
          uVar1 = uVar8 + 0x20;
          uVar6 = 0xffffffff;
          if (uVar5 < uVar1) {
            uVar6 = local_18;
          }
          puVar2 = (uint *)(local_10 + (uVar8 >> 5) * 4);
          *puVar2 = *puVar2 | uVar6;
          uVar8 = uVar1;
          this = local_1c;
        } while (uVar1 < uVar5);
      }
    }
    else {
      local_14 = 0xffffffff >> (0x20U - (char)local_18 & 0x1f);
      do {
        if (uVar8 != 0) goto LAB_1007af7d;
        uVar1 = local_8 + 0x20;
        uVar8 = 0xffffffff;
        if (uVar5 < uVar1) {
          uVar8 = local_14;
        }
        uVar8 = *(uint *)((int)this + (local_8 >> 5) * 4 + 0xcc) & uVar8;
        local_8 = uVar1;
      } while (uVar1 < uVar5);
      if (uVar8 == 0) goto LAB_1007afcf;
LAB_1007af7d:
      uVar8 = 0;
      do {
        local_14 = uVar8 & 0x1f;
        if ((*(byte *)((int)this + ((int)local_14 >> 3) + (uVar8 >> 5) * 4 + 0xcc) >> (uVar8 & 7) &
            1) == 0) {
          piVar3 = *(int **)(*(int *)((int)this + 0x44) + 4);
          (**(code **)(*piVar3 + 0xb8))
                    (piVar3,*(undefined4 *)((int)this + 0x134),uVar8,0,0,0,
                     *(undefined4 *)((int)this + 0x54),uVar8,0);
          pbVar4 = (byte *)((int)this + ((int)local_14 >> 3) + (uVar8 >> 5) * 4 + 0xcc);
          *pbVar4 = *pbVar4 | '\x01' << (local_14 & 7);
          uVar5 = local_c;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5);
    }
    *(undefined1 *)((int)this + 0xdb) = 1;
  }
  uVar9 = *(undefined4 *)((int)this + 0x13c);
LAB_1007b026:
  if ((param_1 != '\0') && (*(int *)((int)this + 0x13c) != 0)) {
    FUN_10077aad((void *)((int)this + 0x128),0);
    uVar9 = *(undefined4 *)((int)this + 0x144);
  }
  return uVar9;
}

