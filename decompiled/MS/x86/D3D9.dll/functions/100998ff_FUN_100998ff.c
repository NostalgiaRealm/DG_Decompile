/*
 * FUN_100998ff at 100998ff
 * uint __stdcall FUN_100998ff(int param_1, int param_2, undefined4 * param_3)
 * Address ranges: 100998ff-10099c2c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100998ff(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint local_14;
  undefined4 *local_10;
  uint local_c;
  char local_5;
  
  FUN_10003e40(&local_5,(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  local_10 = (undefined4 *)0xffffffff;
  local_c = 0;
  local_14 = FUN_10004daf((void *)(param_1 + -0x66b4),param_2,(int *)&local_10,(int *)&local_c);
  uVar6 = local_c;
  if (((int)local_14 < 0) ||
     (puVar3 = FUN_1008fa43((void *)(param_1 + -0x66b4),local_10,local_c), local_10 = puVar3,
     puVar3 == (undefined4 *)0x0)) goto LAB_10099c1c;
  local_14 = FUN_1009cf1a((int)puVar3,0x100d13d0,param_3);
  if (((int)local_14 < 0) ||
     (uVar4 = FUN_10003d8f((void *)(param_1 + 0xdc),&local_10), puVar3 = local_10,
     (char)uVar4 == '\0')) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = &PTR_FUN_100d7074;
      FUN_100cfd6c(puVar3);
    }
    goto LAB_10099c1c;
  }
  if (param_2 == 1) {
    uVar7 = 0;
    do {
      if ((&DAT_100de748)[uVar7 * 8] != '\0') {
        local_10 = (undefined4 *)(param_1 + uVar7 * 4);
        uVar8 = 0;
        do {
          *(undefined4 *)(uVar8 * 0x38 + uVar7 * 4 + 0x4abc + local_c) =
               local_10[uVar8 * 0xe + 0x8d];
          uVar6 = uVar8 * 0xe + uVar7;
          pbVar2 = (byte *)(local_c + 0xac24 + (uVar6 >> 5) * 4 + ((int)(uVar6 & 0x1f) >> 3));
          *pbVar2 = *pbVar2 | '\x01' << (uVar6 & 7);
          uVar8 = uVar8 + 1;
          uVar6 = local_c;
        } while (uVar8 < 0x10);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0xe);
    *(undefined4 *)(uVar6 + 0x4fb8) = *(undefined4 *)(param_1 + 0x6cc);
    *(undefined4 *)(uVar6 + 0x4fbc) = *(undefined4 *)(param_1 + 0x6d0);
    *(undefined4 *)(uVar6 + 0x4fc0) = *(undefined4 *)(param_1 + 0x6d4);
    *(undefined4 *)(uVar6 + 0x4fc4) = *(undefined4 *)(param_1 + 0x6d8);
    *(undefined1 *)(uVar6 + 0xac22) = 1;
LAB_10099aaf:
    puVar3 = (undefined4 *)(param_1 + 0xf4);
    puVar9 = (undefined4 *)(uVar6 + 0x4fc8);
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar9 = puVar9 + 1;
    }
    *(undefined2 *)(uVar6 + 0x5248) = 0;
    *(undefined2 *)(uVar6 + 0x524a) = 0x10;
    *(undefined2 *)(uVar6 + 0x524c) = 0xffff;
    puVar3 = (undefined4 *)(param_1 + 0x134);
    puVar9 = (undefined4 *)(uVar6 + 0x5008);
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar9 = puVar9 + 1;
    }
    *(undefined2 *)(uVar6 + 0x526c) = 0;
    *(undefined2 *)(uVar6 + 0x526e) = 0x10;
    *(undefined2 *)(uVar6 + 0x5270) = 0xffff;
    *(undefined4 *)(uVar6 + 0x4f98) = *(undefined4 *)(param_1 + 0x5bd4);
    if (*(int *)(param_1 + 0x5bd4) != 0) {
      FUN_1009c9da(*(int *)(param_1 + 0x5bd4));
    }
    *(undefined4 *)(uVar6 + 0x4f9c) = *(undefined4 *)(param_1 + 0x5bd8);
    *(undefined1 *)(uVar6 + 0xac20) = 1;
    if (*(int *)(param_1 + 0x5bd8) != 0) {
      LOCK();
      piVar1 = (int *)(*(int *)(param_1 + 0x5bd8) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    uVar7 = 0;
    do {
      *(undefined4 *)(uVar6 + 0x4f54 + uVar7 * 4) = *(undefined4 *)(param_1 + 0x5bdc + uVar7 * 4);
      pbVar2 = (byte *)(uVar6 + 0xac4c + (uVar7 >> 5) * 4 + ((int)(uVar7 & 0x1f) >> 3));
      *pbVar2 = *pbVar2 | '\x01' << (uVar7 & 7);
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0x10);
  }
  else {
    puVar3 = &DAT_100d6dd8;
    if (param_2 != 3) {
      puVar3 = &DAT_100d6da8;
    }
    local_c = 0xc;
    if (param_2 == 3) {
      local_c = 1;
    }
    uVar7 = 0;
    do {
      if ((&DAT_100de748)[puVar3[uVar7] * 8] != '\0') {
        local_10 = (undefined4 *)0x0;
        do {
          iVar5 = puVar3[uVar7] + (int)local_10 * 0xe;
          *(undefined4 *)(uVar6 + 0x4abc + iVar5 * 4) = *(undefined4 *)(param_1 + 0x234 + iVar5 * 4)
          ;
          uVar8 = puVar3[uVar7] + (int)local_10 * 0xe;
          pbVar2 = (byte *)(uVar6 + 0xac24 + (uVar8 >> 5) * 4 + ((int)(uVar8 & 0x1f) >> 3));
          *pbVar2 = *pbVar2 | '\x01' << (uVar8 & 7);
          local_10 = (undefined4 *)((int)local_10 + 1);
        } while (local_10 < &DAT_00000010);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_c);
    if (param_2 == 3) goto LAB_10099aaf;
  }
  if ((param_2 == 2) || (param_2 == 1)) {
    puVar3 = (undefined4 *)(param_1 + 0x174);
    puVar9 = (undefined4 *)(uVar6 + 0x5108);
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar9 = puVar9 + 1;
    }
    *(undefined2 *)(uVar6 + 0x5290) = 0;
    *(undefined2 *)(uVar6 + 0x5292) = 0x10;
    *(undefined2 *)(uVar6 + 0x5294) = 0xffff;
    puVar3 = (undefined4 *)(param_1 + 0x1b4);
    puVar9 = (undefined4 *)(uVar6 + 0x5148);
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar9 = puVar9 + 1;
    }
    *(undefined2 *)(uVar6 + 0x52b4) = 0;
    *(undefined2 *)(uVar6 + 0x52b6) = 0x10;
    *(undefined2 *)(uVar6 + 0x52b8) = 0xffff;
    *(undefined4 *)(uVar6 + 0x4f94) = *(undefined4 *)(param_1 + 0x5bd0);
    if (*(int *)(param_1 + 0x5bd0) != 0) {
      FUN_1009c9da(*(int *)(param_1 + 0x5bd0));
    }
  }
LAB_10099c1c:
  FUN_10003e89(&local_5);
  return local_14;
}

