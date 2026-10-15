/*
 * FUN_1002d11a at 1002d11a
 * uint __thiscall FUN_1002d11a(void * param_1, RECT * param_2, uint param_3, int param_4)
 * Address ranges: 1002d11a-1002d4e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1002d11a(void *param_1,RECT *param_2,uint param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined1 *puVar13;
  RECT local_44;
  void *local_34;
  uint local_30;
  int *local_2c;
  int *local_28;
  int local_20;
  uint uVar14;
  undefined1 local_18;
  
  uVar14 = 1;
  piVar1 = (int *)(param_4 + 0x10);
  local_28 = (int *)(param_4 + 0x14);
  local_34 = param_1;
  local_2c = piVar1;
  if (*piVar1 == 0) {
    local_44.left = 0;
    local_44.top = 0;
    local_44.right = *(LONG *)((int)param_1 + 0x15c);
    local_44.bottom = *(LONG *)((int)param_1 + 0x158);
    BVar3 = EqualRect(&local_44,param_2);
    local_30 = CONCAT31(local_30._1_3_,'\x01' - (BVar3 != 1));
    FUN_10006569(*(void **)((int)param_1 + 4));
    uVar14 = FUN_1003277e(param_1,2,local_30,piVar1,local_28,'\0');
    uVar14 = uVar14 >> 0x1f ^ 1;
    if ((char)uVar14 == '\0') {
      return uVar14;
    }
  }
  iVar2 = *(int *)((int)param_1 + 4);
  local_20 = param_2->top;
  uVar10 = (uint)*(byte *)(iVar2 + 0x1e);
  puVar11 = (uint *)(local_20 * *local_28 + uVar10 * param_2->left + *local_2c);
  iVar4 = param_2->right - param_2->left;
  if (uVar10 == 1) {
    uVar5 = param_3 & 0xff;
    uVar7 = ((param_3 << 8 | uVar5) << 8 | uVar5) << 8;
  }
  else {
    if (uVar10 != 2) goto LAB_1002d21f;
    uVar7 = param_3 << 0x10;
    uVar5 = param_3 & 0xffff;
  }
  param_3 = uVar7 | uVar5;
LAB_1002d21f:
  local_18 = (undefined1)param_3;
  if ((iVar4 == *(int *)((int)local_34 + 0x15c)) && (uVar10 * iVar4 - *local_28 == 0)) {
    uVar10 = uVar10 * (param_2->bottom - local_20) * iVar4;
    if (0xf < uVar10) {
      uVar7 = (uint)(byte)(&DAT_1006469c)[(uint)puVar11 & 3];
      puVar9 = puVar11;
      for (uVar5 = uVar7; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = param_3;
        puVar9 = puVar9 + 1;
      }
      uVar10 = uVar10 + uVar7 * -4;
      uVar5 = uVar10 >> 4;
      if (uVar5 != 0) {
        uVar6 = 0;
        do {
          uVar8 = uVar6 + 1;
          puVar9 = puVar11 + uVar7 + uVar6 * 4;
          *puVar9 = param_3;
          puVar9[1] = param_3;
          puVar9[2] = param_3;
          puVar9[3] = param_3;
          uVar6 = uVar8;
        } while (uVar8 < uVar5);
      }
      puVar11 = puVar11 + uVar7 + uVar5 * 4;
      uVar10 = uVar10 + uVar5 * -0x10;
    }
    puVar9 = puVar11;
    for (uVar5 = uVar10 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = param_3;
      puVar9 = puVar9 + 1;
    }
    puVar13 = (undefined1 *)((int)puVar11 + (uVar10 & 0xfffffffc));
    for (uVar5 = uVar10 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar13 = local_18;
      puVar13 = puVar13 + 1;
    }
  }
  else if (uVar10 == 1) {
    if (local_20 < param_2->bottom) {
      do {
        uVar10 = (uint)*(byte *)(iVar2 + 0x1e) * iVar4;
        puVar9 = puVar11;
        if (0xf < uVar10) {
          uVar7 = (uint)(byte)(&DAT_100646a8)[(uint)puVar11 & 0xf];
          for (uVar5 = uVar7; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar9 = local_18;
            puVar9 = (uint *)((int)puVar9 + 1);
          }
          uVar5 = uVar10 - uVar7 >> 4;
          if (uVar5 != 0) {
            uVar6 = 0;
            do {
              uVar8 = uVar6 + 1;
              puVar9 = (uint *)((int)puVar11 + uVar6 * 0x10 + uVar7);
              *puVar9 = param_3;
              puVar9[1] = param_3;
              puVar9[2] = param_3;
              puVar9[3] = param_3;
              uVar6 = uVar8;
            } while (uVar8 < uVar5);
          }
          uVar10 = (uVar10 - uVar7) + uVar5 * -0x10;
          puVar9 = (uint *)((int)puVar11 + uVar5 * 0x10 + uVar7);
        }
        for (; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar9 = local_18;
          puVar9 = (uint *)((int)puVar9 + 1);
        }
        puVar11 = (uint *)((int)puVar11 + *local_28);
        local_20 = local_20 + 1;
      } while (local_20 < param_2->bottom);
    }
  }
  else if (uVar10 == 2) {
    if (local_20 < param_2->bottom) {
      do {
        uVar10 = (uint)*(byte *)(iVar2 + 0x1e) * iVar4;
        puVar9 = puVar11;
        if (0xf < uVar10) {
          uVar7 = (uint)(byte)(&DAT_100646a0)[(uint)puVar11 & 7];
          for (uVar5 = uVar7; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(short *)puVar9 = (short)param_3;
            puVar9 = (uint *)((int)puVar9 + 2);
          }
          uVar10 = uVar10 + uVar7 * -2;
          uVar6 = uVar10 >> 4;
          uVar5 = 0;
          if (uVar6 != 0) {
            do {
              uVar8 = uVar5 + 1;
              puVar9 = (uint *)((int)puVar11 + uVar5 * 0x10 + uVar7 * 2);
              *puVar9 = param_3;
              puVar9[1] = param_3;
              puVar9[2] = param_3;
              puVar9[3] = param_3;
              uVar5 = uVar8;
            } while (uVar8 < uVar6);
          }
          puVar9 = (uint *)((int)puVar11 + uVar6 * 0x10 + uVar7 * 2);
          uVar10 = uVar10 + uVar6 * -0x10;
        }
        for (uVar10 = uVar10 >> 1; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(short *)puVar9 = (short)param_3;
          puVar9 = (uint *)((int)puVar9 + 2);
        }
        puVar11 = (uint *)((int)puVar11 + *local_28);
        local_20 = local_20 + 1;
      } while (local_20 < param_2->bottom);
    }
  }
  else if ((uVar10 == 4) && (local_20 < param_2->bottom)) {
    do {
      uVar10 = (uint)*(byte *)(iVar2 + 0x1e) * iVar4;
      puVar9 = puVar11;
      if (0xf < uVar10) {
        uVar7 = (uint)(byte)(&DAT_1006469c)[(uint)puVar11 & 3];
        for (uVar5 = uVar7; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = param_3;
          puVar9 = puVar9 + 1;
        }
        uVar10 = uVar10 + uVar7 * -4;
        uVar5 = uVar10 >> 4;
        if (uVar5 != 0) {
          uVar6 = 0;
          do {
            uVar8 = uVar6 + 1;
            puVar9 = puVar11 + uVar7 + uVar6 * 4;
            *puVar9 = param_3;
            puVar9[1] = param_3;
            puVar9[2] = param_3;
            puVar9[3] = param_3;
            uVar6 = uVar8;
          } while (uVar8 < uVar5);
        }
        uVar10 = uVar10 + uVar5 * -0x10;
        puVar9 = puVar11 + uVar7 + uVar5 * 4;
      }
      puVar12 = puVar9;
      for (uVar5 = uVar10 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar12 = param_3;
        puVar12 = puVar12 + 1;
      }
      puVar13 = (undefined1 *)((int)puVar9 + (uVar10 & 0xfffffffc));
      for (uVar5 = uVar10 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar13 = local_18;
        puVar13 = puVar13 + 1;
      }
      puVar11 = (uint *)((int)puVar11 + *local_28);
      local_20 = local_20 + 1;
    } while (local_20 < param_2->bottom);
  }
  return uVar14;
}

