/*
 * FUN_10020cb8 at 10020cb8
 * undefined FUN_10020cb8(void)
 * Address ranges: 10020cb8-1002106b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_10020cb8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  ulonglong extraout_x1;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint extraout_w11;
  uint extraout_w11_00;
  uint extraout_w12;
  uint extraout_w12_00;
  uint uVar10;
  int *piVar11;
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
    uVar7 = (uint)*(ushort *)(param_1 + 0x30);
    if ((*(uint *)(param_1 + 0x54) & 0x400) != 0) {
      uVar7 = 1;
    }
    uVar8 = (uint)*(ushort *)(param_2 + 0x30);
    if ((*(uint *)(param_2 + 0x54) & 0x400) != 0) {
      uVar8 = 1;
    }
    piVar11 = (int *)(uVar8 - uVar7);
    if (uVar8 < uVar7) {
      piVar11 = (int *)0x0;
    }
    uVar10 = uVar7 - uVar8;
    if (uVar8 >= uVar7) {
      uVar10 = 0;
    }
    FUN_10020668(param_2,piVar11,&local_70,&local_74);
    FUN_10020668(param_1,uVar10,&local_78,&local_7c);
    uVar7 = extraout_w11;
    uVar8 = extraout_w12;
    if ((local_70 != local_78 || local_74 != local_7c) && ((piVar11 != (int *)0x0 || (uVar10 != 0)))
       ) {
      uVar10 = 0;
      piVar11 = (int *)0x0;
      FUN_10020668(param_2,0,&local_70,&local_74);
      FUN_10020668(param_1,extraout_x1 & 0xffffffff,&local_78,&local_7c);
      uVar7 = extraout_w11_00;
      uVar8 = extraout_w12_00;
    }
    if (uVar8 < uVar7) {
      uVar7 = uVar8;
    }
    local_70 = (1 << (ulonglong)((uint)piVar11 & 0x1f)) - 1;
    local_80 = 1;
    uVar8 = 0;
    if (*(int *)(param_1 + 100) != 0) {
      local_80 = 1;
      uVar4 = local_7c;
      local_74 = local_78;
      do {
        local_78 = uVar4;
        local_7c = uVar10;
        if (local_80 == 0) {
          return 0;
        }
        piVar9 = (int *)(*(int *)(param_2 + 0x3c) + uVar8 * 0x10);
        iVar6 = piVar9[3] >> ((uint)piVar11 & 0x1f);
        if ((piVar9[3] & local_70) != 0) {
          iVar6 = iVar6 + 1;
        }
        iVar2 = piVar9[2] >> ((uint)piVar11 & 0x1f);
        if ((piVar9[2] & local_70) != 0) {
          iVar2 = iVar2 + 1;
        }
        (*(code *)PTR_FUN_1016c26c)
                  (local_60,*piVar9 >> ((uint)piVar11 & 0x1f),piVar9[1] >> ((uint)piVar11 & 0x1f),
                   iVar2,iVar6);
        local_50 = 0;
        local_48 = local_74;
        uStack_44 = local_78;
        iVar6 = (*(code *)PTR_FUN_1016c208)(local_60,local_60,&local_50);
        if (iVar6 != 0) {
          uVar10 = 0;
          if (uVar7 == 0) {
            piVar9 = (int *)(param_2 + 0x38);
          }
          else {
            piVar1 = (int *)(param_2 + 0x38);
            iVar6 = (int)piVar11 + uVar8 * 0x10;
            iVar2 = local_7c + uVar8 * 0x10;
            local_6c = piVar11;
            local_68 = piVar1;
            local_64 = param_2;
            do {
              FUN_1001d710(*(undefined4 *)(uVar10 * 4 + iVar2 * 4 + *(int *)(param_1 + 0x38)),
                           *(undefined4 *)(uVar10 * 4 + iVar6 * 4 + *piVar1));
              uVar10 = uVar10 + 1;
              param_2 = local_64;
              piVar11 = local_6c;
              piVar9 = local_68;
            } while (uVar10 < uVar7);
          }
          iVar6 = *(int *)(*piVar9 + ((int)piVar11 + uVar8 * 0x10) * 4);
          local_6c = (int *)(param_1 + 0x38);
          iVar2 = *(int *)(*local_6c + (local_7c + uVar8 * 0x10) * 4);
          uVar3 = *(undefined4 *)(iVar6 + 0x28);
          local_68 = (int *)FUN_100036b0(uVar3);
          FUN_100035f0(uVar3);
          bVar5 = FUN_100405d0(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x50),
                               *(undefined4 *)(*(int *)(iVar6 + 4) + 0x50),
                               *(undefined4 *)(param_1 + 0x40),uVar8,uVar8,piVar11,local_7c,uVar7,
                               *(undefined4 *)(iVar6 + 0x50));
          piVar9 = local_6c;
          uVar10 = 0;
          local_80 = bVar5 & local_80;
          if (uVar7 != 0) {
            iVar6 = local_7c + uVar8 * 0x10;
            do {
              FUN_1001d7e0(*(undefined4 *)(*piVar9 + uVar10 * 4 + iVar6 * 4));
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar7);
          }
        }
        (*(code *)PTR_FUN_1016c270)(*(int *)(param_2 + 0x3c) + uVar8 * 0x10);
        uVar8 = uVar8 + 1;
        uVar10 = local_7c;
        uVar4 = local_78;
      } while (uVar8 < *(uint *)(param_1 + 100));
    }
  }
  return local_80;
}

