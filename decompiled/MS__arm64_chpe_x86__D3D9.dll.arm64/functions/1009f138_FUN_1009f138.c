/*
 * FUN_1009f138 at 1009f138
 * undefined FUN_1009f138(void)
 * Address ranges: 1009f138-1009f34b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1009f138(undefined8 param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  char cVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  int extraout_w1;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int local_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  ulonglong local_a0;
  undefined8 uStack_98;
  uint local_90;
  char local_8c;
  undefined1 local_8b;
  undefined2 local_8a;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  local_a0 = 0x4e475349;
  uStack_98 = 0x800000000;
  local_a4 = 1;
  local_a8 = 0x210;
  bVar7 = true;
  local_b0 = FUN_101322b0(0x210);
  iStack_ac = local_b0;
  uVar10 = FUN_10122c50(&local_b0,&local_a0,0x10);
  piVar1 = param_3 + 4;
  iVar14 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uVar13 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  do {
    if ((((char *)(*piVar1 + uVar13))[0x10] != '\0') &&
       (cVar8 = *(char *)(*piVar1 + uVar13), cVar8 != -1)) {
      iVar4 = *param_3;
      uVar11 = 0;
      uVar12 = 0xffffffff;
      if (*(uint *)(iVar4 + 8) != 0) {
        do {
          uVar12 = (uint)*(byte *)(iVar4 + 0x214 + uVar11);
          if (*(char *)(iVar4 + 0x19 + uVar12 * 8) == cVar8) break;
          uVar11 = uVar11 + 1;
          uVar12 = 0xffffffff;
        } while (uVar11 < *(uint *)(iVar4 + 8));
      }
      puVar2 = (undefined1 *)((int)param_3 + uVar13 + 0xda);
      puVar3 = (undefined1 *)((int)param_3 + uVar13 + 0xca);
      if (uVar12 == 0xffffffff) {
        *puVar2 = 0xff;
        *puVar3 = 0xff;
      }
      else {
        iVar4 = iVar4 + uVar12 * 8;
        local_a0 = (ulonglong)CONCAT14(cVar8,(undefined4)local_a0) & 0xfffffffff;
        uStack_98 = uStack_98 & 0xffffffff00000000;
        uVar5 = *(undefined1 *)(iVar4 + 0x1a);
        uVar6 = *(undefined1 *)(iVar4 + 0x18);
        *puVar2 = uVar5;
        *puVar3 = uVar6;
        local_90 = uVar13 & 0xff;
        cVar8 = FUN_10094bf0(uVar10,uVar5,(int)&uStack_98 + 4);
        if ((extraout_w1 + 0xfbU & 0xff) < 2) {
          local_8b = 1;
        }
        else {
          local_8b = *(undefined1 *)(*piVar1 + uVar13 + 0x10);
        }
        local_8a = 0;
        local_8c = cVar8;
        uVar9 = FUN_100a33c8(*(undefined1 *)(*piVar1 + uVar13));
        uVar9 = FUN_10122d90(&local_80,uVar9);
        bVar7 = cVar8 != '\0';
        local_a0 = CONCAT44(local_a0._4_4_,uVar9);
        iVar14 = iVar14 + 1;
        uVar10 = FUN_10122c50(&local_b0,&local_a0,0x18);
      }
    }
    uVar13 = uVar13 + 1;
    if (0xf < uVar13) {
      FUN_101230e0(&local_b0,iVar14,&local_80);
      iVar14 = local_b0;
      FUN_10122c50(param_2,local_b0,iStack_ac - local_b0);
      FUN_101322d0(iVar14);
      return bVar7;
    }
  } while( true );
}

