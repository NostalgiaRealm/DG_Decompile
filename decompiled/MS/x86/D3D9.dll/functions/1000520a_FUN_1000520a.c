/*
 * FUN_1000520a at 1000520a
 * int __thiscall FUN_1000520a(void * this, uint param_1)
 * Address ranges: 1000520a-100054ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1000520a(void *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_c = FUN_10018e45(this,param_1);
  if (local_c < 0) {
    return local_c;
  }
  iVar1 = *(int *)(*(int *)((int)this + 0x3b4) + -4 + param_1 * 4);
  local_14 = *(uint *)(iVar1 + 0xac18);
  local_10 = 0;
  while( true ) {
    uVar5 = 0;
    if (local_14 != 0) {
      for (; (local_14 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (local_14 != 0) goto LAB_100052aa;
    local_10 = local_10 + 0x20;
    if (0xf < local_10) break;
    local_14 = *(uint *)(iVar1 + 0xac18 + (local_10 >> 5) * 4);
  }
LAB_100052ba:
  if (*(char *)(iVar1 + 0xac1e) != '\0') {
    FUN_10006899(this,*(int **)(iVar1 + 0xaae0));
  }
  local_14 = *(uint *)(iVar1 + 0xac0c);
  local_10 = 0;
  while( true ) {
    uVar5 = 0;
    if (local_14 != 0) {
      for (; (local_14 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (local_14 != 0) goto LAB_100054b9;
    local_10 = local_10 + 0x20;
    if (0xf < local_10) break;
    local_14 = *(uint *)(iVar1 + 0xac0c + (local_10 >> 5) * 4);
  }
LAB_100054cd:
  if (*(char *)(iVar1 + 0xac1f) != '\0') {
    FUN_10006a82(this,*(int *)(iVar1 + 0xaba4));
  }
  return local_c;
LAB_100052aa:
  while( true ) {
    pbVar3 = (byte *)((int)&local_14 + ((int)uVar5 >> 3));
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar5 & 7));
    uVar9 = local_10;
    uVar5 = uVar5 + local_10;
    if (uVar5 == 0xffffffff) break;
    FUN_10006709(this,uVar5,*(int **)(iVar1 + 0xaae4 + uVar5 * 4),
                 *(int *)(iVar1 + 0xab24 + uVar5 * 4),*(int *)(iVar1 + 0xab64 + uVar5 * 4));
    uVar5 = 0;
    if (local_14 != 0) {
      for (; (local_14 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (local_14 == 0) {
      do {
        uVar9 = uVar9 + 0x20;
        local_10 = uVar9;
        if (0xf < uVar9) goto LAB_100052ba;
        local_14 = ((uint *)(iVar1 + 0xac18))[uVar9 >> 5];
        uVar5 = 0;
        if (local_14 != 0) {
          for (; (local_14 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
      } while (local_14 == 0);
    }
  }
  goto LAB_100052ba;
LAB_100054b9:
  while( true ) {
    pbVar3 = (byte *)((int)&local_14 + ((int)uVar5 >> 3));
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar5 & 7));
    uVar9 = local_10 + uVar5;
    if (uVar9 == 0xffffffff) break;
    local_8 = *(int *)(iVar1 + 0x52d8 + uVar9 * 4);
    param_1 = 0;
    if (local_8 == 0) {
      (**(code **)(**(int **)((int)this + 0x14) + 0x6c))(uVar9,0,0,0,0,0,0);
    }
    else if (local_8 != *(int *)((int)this + uVar9 * 4 + 0x1258)) {
      iVar8 = *(int *)(local_8 + 0x18);
      if (iVar8 == 3) {
        (**(code **)(**(int **)((int)this + 0x14) + 0x6c))
                  (uVar9,0,*(undefined4 *)(local_8 + 0x44),0,0,0,0);
        param_1 = *(uint *)(local_8 + 0x58);
      }
      else if (iVar8 == 4) {
        (**(code **)(**(int **)((int)this + 0x14) + 0x6c))
                  (uVar9,0,*(undefined4 *)(local_8 + 0x94),0,0,0,0);
        param_1 = *(uint *)(local_8 + 0xa8);
      }
      else if (iVar8 == 5) {
        (**(code **)(**(int **)((int)this + 0x14) + 0x6c))
                  (uVar9,0,*(undefined4 *)(local_8 + 0x44),0,0,0,0);
        param_1 = *(uint *)(local_8 + 0x58);
      }
    }
    piVar2 = *(int **)(iVar1 + 0x52d8 + uVar9 * 4);
    piVar6 = *(int **)((int)this + uVar9 * 4 + 0x1258);
    if (piVar2 != piVar6) {
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
        iVar8 = *(int *)(iVar1 + 0x52d8 + uVar9 * 4);
        *(uint *)(iVar8 + 0x2c) = *(uint *)(iVar8 + 0x2c) | 1 << (uVar9 & 0x1f);
      }
      iVar8 = *(int *)((int)this + uVar9 * 4 + 0x1258);
      if (iVar8 != 0) {
        *(uint *)(iVar8 + 0x2c) = *(uint *)(iVar8 + 0x2c) & ~(1 << (uVar9 & 0x1f));
        (**(code **)(**(int **)((int)this + uVar9 * 4 + 0x1258) + 8))();
      }
      piVar6 = *(int **)(iVar1 + 0x52d8 + uVar9 * 4);
      *(int **)((int)this + uVar9 * 4 + 0x1258) = piVar6;
    }
    *(uint *)((int)this + 0xcc8) =
         *(uint *)((int)this + 0xcc8) |
         (uint)((piVar6 != (int *)0x0) != (bool)*(char *)((int)this + uVar9 + 0xc78)) <<
         ((byte)uVar9 & 0x1f);
    *(bool *)((int)this + uVar9 + 0xc78) = piVar6 != (int *)0x0;
    if ((*(int *)((int)this + uVar9 * 4 + 0x1258) == 0) || ((param_1 != 0x28 && (param_1 != 0x29))))
    {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar5 = *(uint *)((int)this + 0x667c) | 1 << (uVar9 & 0x1f);
      uVar7 = *(uint *)((int)this + 0x6678) | 1 << (uVar9 & 0x1f);
    }
    else {
      uVar5 = *(uint *)((int)this + 0x667c) & ~(1 << (uVar9 & 0x1f));
      uVar7 = *(uint *)((int)this + 0x6678) & ~(1 << (uVar9 & 0x1f));
    }
    *(uint *)((int)this + 0x6678) = uVar7;
    *(uint *)((int)this + 0x667c) = uVar5;
    iVar8 = *(int *)((int)this + uVar9 * 4 + 0x1258);
    if ((iVar8 == 0) || (*(char *)(iVar8 + 0x32) == '\0')) {
      iVar8 = 0;
    }
    else {
      iVar8 = 1;
    }
    uVar5 = 0;
    if (local_14 != 0) {
      for (; (local_14 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    *(uint *)((int)this + 0xccc) =
         iVar8 << ((byte)uVar9 & 0x1f) | *(uint *)((int)this + 0xccc) & ~(1 << (uVar9 & 0x1f));
    if (local_14 == 0) {
      do {
        local_10 = local_10 + 0x20;
        if (0xf < local_10) goto LAB_100054cd;
        local_14 = ((uint *)(iVar1 + 0xac0c))[local_10 >> 5];
        uVar5 = 0;
        if (local_14 != 0) {
          for (; (local_14 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
      } while (local_14 == 0);
    }
  }
  goto LAB_100054cd;
}

