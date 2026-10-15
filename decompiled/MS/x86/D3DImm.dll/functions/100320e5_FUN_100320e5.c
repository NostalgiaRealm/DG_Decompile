/*
 * FUN_100320e5 at 100320e5
 * undefined __stdcall FUN_100320e5(int param_1, uint param_2)
 * Address ranges: 100320e5-100325ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100320e5(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar2 = param_2;
  *(undefined2 *)(param_2 + 0x2d0) = 0x30;
  local_14 = 0;
  *(undefined4 *)(param_2 + 0x2d2) = 0x80;
  *(undefined2 *)(param_2 + 0x2d6) = 0;
  *(undefined4 *)(param_2 + 0x2d8) = 0x1800130;
  FUN_1005c9cc((int *)(param_2 + 0xe4),0,0x114);
  do {
    *(undefined2 *)(param_2 + 0x2dc) = *(undefined2 *)(param_2 + 0x2d0);
    *(undefined2 *)(param_2 + 0x2de) = *(undefined2 *)(param_2 + 0x2d2);
    if (((byte)*(undefined4 *)(param_1 + local_14 * 4) & 0x1f) < 2) break;
    FUN_10031aab(param_1,local_14,param_2,0);
    FUN_10031aab(param_1,local_14,param_2,1);
    local_14 = local_14 + 1;
  } while (local_14 < 8);
  param_2 = 0;
  local_8 = 0;
  local_10 = 0;
  local_1c = 0xffffffff;
  local_c = local_14;
  local_18 = local_10;
  if (local_14 != 0) {
    do {
      uVar6 = local_c - 1;
      if ((*(byte *)(uVar2 + 0xd4 + local_c * 0x10) & 0xf0) == 0x10) {
        param_2 = 1 << ((byte)uVar6 & 0x1f);
        local_8 = param_2;
        local_1c = uVar6;
        if (local_c != 0) {
          do {
            if ((param_2 & 1 << ((char)local_c - 1U & 0x1f)) != 0) {
              iVar8 = local_c << 3;
              iVar9 = 3;
              do {
                FUN_10031f0f(uVar2,(ushort *)(uVar2 + 0xd6 + iVar8 * 2),&local_8,&local_10);
                iVar8 = iVar8 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
              iVar9 = local_c * 0x10;
              if ((*(short *)(uVar2 + 0xdc + iVar9) == 0x90) ||
                 (*(short *)(uVar2 + 0xde + iVar9) == 0x90)) {
                local_8 = local_8 | 1 << (local_c - 2 & 0x1f);
              }
              psVar3 = (short *)(uVar2 + 0xe2 + iVar9);
              param_2 = local_8;
              if (((*(short *)(uVar2 + 0xe0 + iVar9) != 0) || (*psVar3 != 0)) &&
                 (((local_8 & 1 << ((byte)local_c & 0x1f)) == 0 ||
                  ((*(short *)(uVar2 + 0xec + iVar9) == 0 && (*(short *)(uVar2 + 0xee + iVar9) == 0)
                   ))))) {
                *psVar3 = 0;
                *(undefined2 *)(uVar2 + 0xe0 + iVar9) = 0;
                *(undefined2 *)(uVar2 + 0xd8 + iVar9) = 0;
              }
            }
            local_c = local_c - 1;
          } while (local_c != 0);
          local_c = 0;
        }
        break;
      }
      local_c = uVar6;
      local_1c = 0xffffffff;
    } while (uVar6 != 0);
LAB_100322c1:
    uVar6 = local_14 - 1;
    if ((*(byte *)(uVar2 + 0x154 + local_14 * 0x10) & 0xf0) != 0x10) {
      local_18 = local_10;
      if ((local_10 & 1 << ((byte)uVar6 & 0x1f)) != 0) goto LAB_10032324;
      local_14 = uVar6;
      if (uVar6 == 0) goto LAB_100322ea;
      goto LAB_100322c1;
    }
    local_18 = local_10 | 1 << (uVar6 & 0x1f);
    local_10 = local_18;
LAB_10032324:
    do {
      if ((local_18 & 1 << ((char)local_14 - 1U & 0x1f)) != 0) {
        iVar8 = local_14 << 3;
        iVar9 = 3;
        do {
          FUN_10031f0f(uVar2,(ushort *)(uVar2 + 0x156 + iVar8 * 2),&local_8,&local_10);
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + -1;
          local_18 = local_10;
        } while (iVar9 != 0);
      }
      local_14 = local_14 - 1;
    } while (local_14 != 0);
    param_2 = local_8;
  }
LAB_100322ea:
  uVar7 = 0;
  uVar6 = 0xffffffff;
  do {
    uVar1 = 1 << ((byte)uVar7 & 0x1f);
    if ((uVar1 & param_2) == 0) {
      *(undefined2 *)(uVar2 + 0xe4 + uVar7 * 0x10) = 0;
    }
    uVar10 = uVar7;
    if ((uVar1 & local_18) == 0) {
      *(undefined2 *)(uVar2 + 0x164 + uVar7 * 0x10) = 0;
      uVar10 = uVar6;
    }
    uVar7 = uVar7 + 1;
    uVar6 = uVar10;
  } while (uVar7 < 8);
  uVar4 = FUN_10031f7d(uVar2 + 0xe4,param_2,local_1c,*(uint *)(param_1 + local_1c * 4) & 0x1f,0);
  uVar5 = FUN_10031f7d(uVar2 + 0x164,local_18,uVar10,*(uint *)(param_1 + uVar10 * 4) >> 5 & 0x1f,1);
  if ((char)uVar4 != '\0') {
    uVar6 = 0;
    do {
      uVar7 = uVar6 + 1;
      *(undefined2 *)(uVar2 + 0xe4 + uVar6 * 0x10) = 0;
      uVar6 = uVar7;
    } while (uVar7 < 8);
    local_1c = 0xffffffff;
  }
  if ((char)uVar5 != '\0') {
    uVar6 = 0;
    do {
      uVar7 = uVar6 + 1;
      *(undefined2 *)(uVar2 + 0x164 + uVar6 * 0x10) = 0;
      uVar6 = uVar7;
    } while (uVar7 < 8);
    uVar10 = 0xffffffff;
  }
  if (local_1c != 0xffffffff) {
    iVar9 = local_1c * 4;
    if (((((byte)*(undefined4 *)(iVar9 + param_1) & 0x1f) == 2) &&
        ((*(uint *)(param_1 + 0x24) >> ((byte)iVar9 & 0x1f) & 0xf) == 0)) &&
       (*(short *)(uVar2 + 0xe4 + local_1c * 0x10) == *(short *)(uVar2 + 0xe8 + local_1c * 0x10))) {
      *(undefined2 *)(uVar2 + 0xe4 + local_1c * 0x10) = 0;
    }
    if (((((byte)*(undefined4 *)(iVar9 + param_1) & 0x1f) == 3) &&
        ((*(uint *)(param_1 + 0x28) >> ((byte)iVar9 & 0x1f) & 0xf) == 0)) &&
       (*(short *)(uVar2 + 0xe4 + local_1c * 0x10) == *(short *)(uVar2 + 0xea + local_1c * 0x10))) {
      *(undefined2 *)(uVar2 + 0xe4 + local_1c * 0x10) = 0;
    }
  }
  if (uVar10 != 0xffffffff) {
    uVar6 = *(uint *)(param_1 + uVar10 * 4) >> 5 & 0x1f;
    if (((uVar6 == 2) || (uVar6 == 1)) &&
       (*(short *)(uVar2 + 0x164 + uVar10 * 0x10) == *(short *)(uVar2 + 0x168 + uVar10 * 0x10))) {
      *(undefined2 *)(uVar2 + 0x164 + uVar10 * 0x10) = 0;
    }
    if (((*(uint *)(param_1 + uVar10 * 4) & 0x3e0) == 0x60) &&
       (*(short *)(uVar2 + 0x164 + uVar10 * 0x10) == *(short *)(uVar2 + 0x16a + uVar10 * 0x10))) {
      *(undefined2 *)(uVar2 + 0x164 + uVar10 * 0x10) = 0;
    }
  }
  uVar6 = 0;
  do {
    iVar9 = uVar6 * 0x10;
    FUN_1003202b(uVar2,uVar6,(uint)*(ushort *)(uVar2 + 0xe4 + iVar9));
    FUN_1003202b(uVar2,uVar6,(uint)*(ushort *)(uVar2 + 0x164 + iVar9));
    if (*(short *)(uVar2 + 0xe4 + iVar9) != 0) {
      uVar7 = 0;
      do {
        FUN_1003202b(uVar2,uVar6,(uint)*(ushort *)(uVar2 + uVar6 * 0x10 + 0xe6 + uVar7 * 2));
        uVar7 = uVar7 + 1;
      } while (uVar7 < 3);
      FUN_1003202b(uVar2,uVar6,(uint)*(ushort *)(uVar2 + 0xec + iVar9));
      FUN_1003202b(uVar2,uVar6,(uint)*(ushort *)(uVar2 + 0xee + iVar9));
    }
    if (*(short *)(uVar2 + 0x164 + iVar9) != 0) {
      uVar7 = 0;
      do {
        FUN_1003202b(uVar2,uVar6,(uint)*(ushort *)(uVar2 + uVar6 * 0x10 + 0x166 + uVar7 * 2));
        uVar7 = uVar7 + 1;
      } while (uVar7 < 3);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 8);
  return;
}

