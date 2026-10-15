/*
 * FUN_10096ec2 at 10096ec2
 * byte __fastcall FUN_10096ec2(uint param_1)
 * Address ranges: 10096ec2-100971a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_10096ec2(uint param_1)

{
  undefined4 uVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 local_504 [149];
  undefined4 local_2b0 [149];
  undefined4 local_5c;
  uint local_58 [16];
  int local_18;
  uint local_14;
  char local_d;
  uint local_c;
  byte local_5;
  
  if (*(char *)(param_1 + 0xc2ee) == '\0') {
    return *(byte *)(param_1 + 0xc2e9);
  }
  iVar4 = *(int *)(param_1 + 0xc28c);
  local_5 = 0;
  if (iVar4 == 0) goto LAB_10097197;
  *(undefined4 **)(param_1 + 0xc2d8) = (undefined4 *)(iVar4 + 0x14);
  puVar10 = (undefined4 *)(iVar4 + 0x14);
  puVar7 = (undefined4 *)(param_1 + 0x44);
  for (iVar6 = 0x95; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar10 = (undefined4 *)(iVar4 + 0x14);
  if (*(char *)(iVar4 + 0x27b) == '\0') {
    puVar7 = puVar10;
    if (*(undefined4 **)(iVar4 + 0x268) != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)(iVar4 + 0x268);
    }
    *(undefined4 **)(param_1 + 0xc2dc) = puVar7;
    puVar7 = (undefined4 *)(param_1 + 0x44);
    for (iVar6 = 0x95; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar7 = puVar7 + 1;
    }
    if ((*(int *)(param_1 + 0x48) == 4) || (*(int *)(param_1 + 0x48) == 3)) {
      local_5 = 0;
    }
    else {
      local_5 = 1;
    }
  }
  else {
    *(undefined4 **)(param_1 + 0xc2dc) = puVar10;
    if ((*(int *)(param_1 + 0x48) == 4) ||
       ((*(int *)(param_1 + 0x48) == 3 && (*(int *)(param_1 + 0xc288) == 0)))) {
      local_5 = 0;
    }
    else {
      local_5 = 1;
    }
  }
  bVar3 = 1;
  if ((*(char *)(param_1 + 0x669f) == '\0') && (*(char *)(iVar4 + 0x27a) != '\0')) {
    bVar3 = 0;
  }
  local_5 = local_5 & bVar3;
  if (local_5 == 0) goto LAB_10097197;
  local_c = *(uint *)(param_1 + 0xc288);
  *(undefined4 *)(param_1 + 0x6654) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xc2ec) = 0;
  if ((local_c == 0) || (*(int *)(iVar4 + 0x18) == 0)) {
    *(undefined4 *)(param_1 + 0xc2e0) = 0;
    if (*(char *)(iVar4 + 0x27b) == '\0') {
      local_5 = *(byte *)(iVar4 + 0x278);
    }
    goto LAB_10097197;
  }
  local_14 = param_1;
  iVar6 = FUN_1009c1d2((void *)(param_1 + 0x672c),&local_c);
  if (iVar6 == 0) goto LAB_10097197;
  local_18 = iVar6;
  iVar4 = (**(code **)(**(int **)(iVar6 + 4) + 4))(iVar4 + 0x14);
  *(int *)(param_1 + 0x6654) = iVar4;
  if (iVar4 == -1) {
    iVar4 = *(int *)(param_1 + 0xc2d8);
    uVar9 = 0;
    *(undefined4 *)(param_1 + 0x6654) = 0;
    if (iVar4 != 0) {
      for (; uVar9 < 0x10; uVar9 = uVar9 + 1) {
        if (((*(char *)(uVar9 + 0x10 + *(int *)(iVar6 + 8)) != '\0') &&
            (local_d = *(char *)(uVar9 + *(int *)(iVar6 + 8)), local_d != -1)) &&
           (uVar5 = 0, *(int *)(iVar4 + 8) != 0)) {
          do {
            uVar8 = (uint)*(byte *)(iVar4 + 0x214 + uVar5);
            param_1 = local_14;
            if (*(char *)(iVar4 + 0x19 + uVar8 * 8) == local_d) {
              *(uint *)(local_14 + 0x6654) =
                   *(uint *)(local_14 + 0x6654) |
                   1 << ((int)*(char *)(iVar4 + 0x14 + uVar8 * 8) & 0x1fU);
              break;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(uint *)(iVar4 + 8));
        }
      }
    }
  }
  FUN_100cfed0((int *)local_58,0,0x40);
  if (*(char *)(param_1 + 0x669f) == '\0') {
    local_c = *(uint *)(param_1 + 0x6654);
    uVar9 = 0;
    if (local_c != 0) {
      for (; (local_c >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
      }
    }
    if (local_c == 0) {
      uVar9 = 0xffffffff;
    }
    else {
      pbVar2 = (byte *)((int)&local_c + ((int)uVar9 >> 3));
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar9 & 7));
      uVar9 = uVar9 & 0xff;
    }
    if (uVar9 != 0xffffffff) {
      while( true ) {
        uVar5 = *(uint *)(param_1 + 0xc290 + uVar9 * 4);
        if ((int)uVar5 < 0) {
          local_58[uVar9] = uVar5 & 0x3fffffff;
        }
        uVar9 = 0;
        if (local_c != 0) {
          for (; (local_c >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
          }
        }
        if (local_c == 0) break;
        pbVar2 = (byte *)((int)&local_c + ((int)uVar9 >> 3));
        *pbVar2 = *pbVar2 & ~('\x01' << (uVar9 & 7));
        uVar9 = uVar9 & 0xff;
      }
    }
    uVar9 = *(uint *)(param_1 + 0xc290) & 0x3fffffff;
    local_14 = uVar9;
  }
  else {
    if (*(char *)(*(int *)(iVar6 + 0x85c) + 1) == '\x03') {
      local_c = *(uint *)(param_1 + 0x6654);
      uVar5 = 0;
      if (local_c != 0) {
        for (; (local_c >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      if (local_c != 0) {
        pbVar2 = (byte *)((int)&local_c + ((int)uVar5 >> 3));
        *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
        uVar9 = 1;
        while ((*(uint *)(param_1 + 0xc290 + (uVar5 & 0xff) * 4) & 0x3fffffff) == 1) {
          uVar5 = 0;
          if (local_c != 0) {
            for (; (local_c >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          if (local_c == 0) goto LAB_10097122;
          pbVar2 = (byte *)((int)&local_c + ((int)uVar5 >> 3));
          *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
        }
        *(undefined1 *)(param_1 + 0xc2ec) = 1;
        goto LAB_10097122;
      }
    }
    uVar9 = 1;
  }
LAB_10097122:
  puVar10 = *(undefined4 **)(param_1 + 0xc2d8);
  puVar7 = local_504;
  for (iVar4 = 0x95; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x6654);
  puVar10 = *(undefined4 **)(param_1 + 0xc2dc);
  puVar7 = local_2b0;
  for (iVar4 = 0x95; iVar6 = local_18, iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar7 = puVar7 + 1;
  }
  local_5c = uVar1;
  bVar3 = (**(code **)(**(int **)(local_18 + 4) + 8))(local_504,local_58,uVar9);
  local_5 = local_5 & bVar3;
  *(undefined4 *)(param_1 + 0xc2e0) = *(undefined4 *)(iVar6 + 4);
LAB_10097197:
  *(byte *)(param_1 + 0xc2e9) = local_5;
  *(undefined1 *)(param_1 + 0xc2ee) = 0;
  return local_5;
}

