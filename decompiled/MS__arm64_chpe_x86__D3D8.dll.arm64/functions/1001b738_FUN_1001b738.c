/*
 * FUN_1001b738 at 1001b738
 * undefined FUN_1001b738(void)
 * Address ranges: 1001b738-1001bacb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1001b738(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  ulonglong extraout_x1;
  int *piVar8;
  uint uVar9;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar10;
  uint extraout_w12;
  uint extraout_w12_00;
  uint uVar11;
  int *piVar12;
  byte local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  int *local_6c;
  int *local_68;
  int local_64;
  undefined1 local_60 [16];
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  
  local_80 = 0;
  if (((*(int *)(param_1 + 0x58) == *(int *)(param_2 + 0x58)) && (*(int *)(param_1 + 0x60) == 0)) &&
     (*(int *)(param_2 + 0x60) == 2)) {
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    uVar4 = *(ushort *)(param_2 + 0x30);
    uVar10 = (uint)*(ushort *)(param_1 + 0x30);
    uVar9 = (uint)uVar4;
    piVar12 = (int *)(uVar9 - uVar10);
    if (uVar9 < uVar10) {
      piVar12 = (int *)0x0;
    }
    uVar11 = uVar10 - uVar4;
    if (uVar9 >= uVar10) {
      uVar11 = 0;
    }
    FUN_1001b158(param_2,piVar12,&local_70,&local_74);
    FUN_1001b158(param_1,uVar11,&local_78,&local_7c);
    uVar10 = extraout_w11;
    uVar9 = extraout_w12;
    if ((local_70 != local_78 || local_74 != local_7c) && ((piVar12 != (int *)0x0 || (uVar11 != 0)))
       ) {
      uVar11 = 0;
      piVar12 = (int *)0x0;
      FUN_1001b158(param_2,0,&local_70,&local_74);
      FUN_1001b158(param_1,extraout_x1 & 0xffffffff,&local_78,&local_7c);
      uVar10 = extraout_w11_00;
      uVar9 = extraout_w12_00;
    }
    if (uVar10 < uVar9) {
      uVar9 = uVar10;
    }
    local_70 = (1 << (ulonglong)((uint)piVar12 & 0x1f)) - 1;
    local_80 = 1;
    uVar10 = 0;
    if (*(int *)(param_1 + 100) != 0) {
      local_80 = 1;
      uVar5 = local_7c;
      local_74 = local_78;
      do {
        local_78 = uVar5;
        local_7c = uVar11;
        if (local_80 == 0) {
          return 0;
        }
        piVar8 = (int *)(*(int *)(param_2 + 0x3c) + uVar10 * 0x10);
        iVar7 = piVar8[3] >> ((uint)piVar12 & 0x1f);
        if ((piVar8[3] & local_70) != 0) {
          iVar7 = iVar7 + 1;
        }
        iVar2 = piVar8[2] >> ((uint)piVar12 & 0x1f);
        if ((piVar8[2] & local_70) != 0) {
          iVar2 = iVar2 + 1;
        }
        (*(code *)PTR_FUN_1013426c)
                  (local_60,*piVar8 >> ((uint)piVar12 & 0x1f),piVar8[1] >> ((uint)piVar12 & 0x1f),
                   iVar2,iVar7);
        local_50 = 0;
        local_48 = local_74;
        uStack_44 = local_78;
        iVar7 = (*(code *)PTR_FUN_10134208)(local_60,local_60,&local_50);
        if (iVar7 != 0) {
          uVar11 = 0;
          if (uVar9 == 0) {
            piVar8 = (int *)(param_2 + 0x38);
          }
          else {
            piVar1 = (int *)(param_2 + 0x38);
            iVar7 = (int)piVar12 + uVar10 * 0x10;
            iVar2 = local_7c + uVar10 * 0x10;
            local_6c = piVar12;
            local_68 = piVar1;
            local_64 = param_2;
            do {
              FUN_100183a0(*(undefined4 *)(uVar11 * 4 + iVar2 * 4 + *(int *)(param_1 + 0x38)),
                           *(undefined4 *)(*piVar1 + iVar7 * 4 + uVar11 * 4));
              uVar11 = uVar11 + 1;
              param_2 = local_64;
              piVar12 = local_6c;
              piVar8 = local_68;
            } while (uVar11 < uVar9);
          }
          iVar7 = *(int *)(*piVar8 + ((int)piVar12 + uVar10 * 0x10) * 4);
          local_6c = (int *)(param_1 + 0x38);
          iVar2 = *(int *)(*local_6c + (local_7c + uVar10 * 0x10) * 4);
          uVar3 = *(undefined4 *)(iVar7 + 0x28);
          local_68 = (int *)FUN_10003360(uVar3);
          FUN_100032d0(uVar3);
          bVar6 = FUN_100366d0(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x50),
                               *(undefined4 *)(*(int *)(iVar7 + 4) + 0x50),
                               *(undefined4 *)(param_1 + 0x40),uVar10,uVar10,piVar12,local_7c,uVar9,
                               *(undefined4 *)(iVar7 + 0x50));
          piVar8 = local_6c;
          uVar11 = 0;
          local_80 = bVar6 & local_80;
          if (uVar9 != 0) {
            iVar7 = local_7c + uVar10 * 0x10;
            do {
              FUN_10018470(*(undefined4 *)(*piVar8 + uVar11 * 4 + iVar7 * 4));
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar9);
          }
        }
        (*(code *)PTR_FUN_10134270)(*(int *)(param_2 + 0x3c) + uVar10 * 0x10);
        uVar10 = uVar10 + 1;
        uVar11 = local_7c;
        uVar5 = local_78;
      } while (uVar10 < *(uint *)(param_1 + 100));
    }
  }
  return local_80;
}

