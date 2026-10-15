/*
 * FUN_100d9740 at 100d9740
 * undefined FUN_100d9740(void)
 * Address ranges: 100d9740-100d9987
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d9740(int param_1,int param_2,uint param_3,undefined8 *param_4,uint param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_50 [8];
  int local_48;
  int iStack_44;
  
  iVar9 = param_1 + param_3 * 0x10;
  puVar2 = (undefined8 *)(iVar9 + 0x12ac);
  uVar8 = 0;
  uVar3 = param_5 & 0x3fffffff;
  puVar10 = param_4;
  if (uVar3 != 0) {
    do {
      uVar11 = *puVar10;
      uVar8 = uVar8 + 1;
      puVar10 = puVar10 + 1;
      *puVar2 = uVar11;
      puVar2 = puVar2 + 1;
    } while (uVar8 < uVar3 << 1);
  }
  param_5 = param_3 + param_5;
  FUN_10157940(auStack_50);
  puVar10 = (undefined8 *)(iVar9 + 0x6ff0);
  uVar8 = 0;
  if (uVar3 != 0) {
    do {
      uVar11 = *param_4;
      uVar8 = uVar8 + 1;
      param_4 = param_4 + 1;
      *puVar10 = uVar11;
      puVar10 = puVar10 + 1;
    } while (uVar8 < uVar3 << 1);
  }
  if (param_2 != 0) {
    iVar9 = 0;
    if (*(short *)(param_2 + 0xc) != -1) {
      do {
        uVar6 = ((short *)(param_2 + 0xc))[iVar9];
        if (param_5 < uVar6) break;
        uVar7 = *(ushort *)(param_2 + iVar9 * 2 + 0xe);
        if (param_3 <= uVar7) {
          uVar8 = param_3;
          if (param_3 <= uVar6) {
            uVar8 = (uint)uVar6;
          }
          uVar3 = (uint)uVar7;
          if (param_5 <= uVar7) {
            uVar3 = param_5;
          }
          puVar10 = (undefined8 *)(*(int *)(param_2 + 8) + uVar8 * 0x10 + 0x850);
          uVar3 = uVar3 - uVar8 & 0x3fffffff;
          puVar2 = (undefined8 *)(param_1 + uVar8 * 0x10 + 0x6ff0);
          uVar8 = 0;
          if (uVar3 != 0) {
            do {
              uVar11 = *puVar10;
              uVar8 = uVar8 + 1;
              puVar10 = puVar10 + 1;
              *puVar2 = uVar11;
              puVar2 = puVar2 + 1;
            } while (uVar8 < uVar3 << 1);
          }
        }
        iVar9 = iVar9 + 2;
      } while (*(short *)(param_2 + iVar9 * 2 + 0xc) != -1);
    }
  }
  if ((*(char *)(param_1 + 0x11) == '\0') ||
     ((param_2 != 0 && (*(char *)(*(int *)(param_2 + 8) + 0x44e) != '\0')))) {
    iVar9 = 1;
  }
  else {
    iVar9 = 0;
  }
  piVar1 = (int *)(param_1 + 0x6698);
  uVar3 = *(uint *)(param_1 + 0x6690);
  iVar4 = *piVar1;
  uVar5 = *(uint *)(param_1 + 0x6694);
  uVar8 = param_3;
  local_48 = param_1;
  iStack_44 = param_2;
  if (iVar9 == iVar4) {
    if (uVar3 < uVar5) {
      if (uVar5 < param_3 || param_5 < uVar3) {
        FUN_100d43c0(param_1,iVar4,uVar3,uVar5);
        *piVar1 = iVar4;
      }
      else {
        uVar8 = uVar3;
        if (param_3 <= uVar3) {
          uVar8 = param_3;
        }
        if (param_5 < uVar5) {
          param_5 = uVar5;
        }
      }
    }
  }
  else {
    if (uVar3 < uVar5) {
      FUN_100d43c0(param_1,iVar4,uVar3,uVar5);
    }
    *piVar1 = iVar9;
  }
  *(uint *)(param_1 + 0x6690) = uVar8;
  *(uint *)(param_1 + 0x6694) = param_5;
  FUN_101579f0(auStack_50);
  return;
}

