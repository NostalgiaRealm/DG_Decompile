/*
 * FUN_180034ca4 at 180034ca4
 * longlong __fastcall FUN_180034ca4(longlong param_1, longlong param_2, uint param_3)
 * Address ranges: 180034ca4-180034f4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180034ca4(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  LPVOID pvVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar13;
  uint uVar14;
  ulonglong local_res8;
  longlong local_res10;
  uint local_res18;
  LPVOID local_78;
  LPVOID local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong uVar12;
  
  uVar12 = 0;
  if (*(char *)(param_1 + 4) == '\0') {
    return 0;
  }
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_180037228(param_1,&local_58,param_2,param_3);
  puVar10 = (uint *)&local_58;
  uVar5 = FUN_180030718((longlong *)(param_1 + 0x20),puVar10);
  uVar14 = 0x10;
  if (uVar5 < *(uint *)(param_1 + 0x40)) {
    uVar11 = 0;
    puVar10 = *(uint **)(*(longlong *)(param_1 + 0x38) + (ulonglong)uVar5 * 8);
    uVar13 = puVar10[2];
    if (uVar13 != 0) {
      lVar2 = *(longlong *)puVar10;
      do {
        puVar10 = (uint *)&local_58;
        lVar1 = *(longlong *)(lVar2 + uVar12 * 8);
        iVar6 = FUN_18005f350((byte *)(lVar1 + 8),(byte *)puVar10,0x20);
        if (iVar6 == 0) {
          return *(longlong *)(lVar1 + 0x28);
        }
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
        param_3 = local_res18;
      } while (uVar11 < uVar13);
    }
    if (uVar11 != uVar13) {
      return 0;
    }
  }
  else {
    puVar7 = (undefined8 *)FUN_18005d6fc(0x10);
    if (puVar7 == (undefined8 *)0x0) {
      return 0;
    }
    *puVar7 = 0;
    puVar7[1] = 0;
    iVar6 = *(int *)(param_1 + 0x44);
    if (*(int *)(param_1 + 0x40) == iVar6) {
      uVar13 = uVar14;
      if (iVar6 != 0) {
        uVar13 = iVar6 * 2;
      }
      uVar8 = SUB168(ZEXT816(8) * ZEXT416(uVar13),0);
      if (SUB168(ZEXT816(8) * ZEXT416(uVar13),8) != 0) {
        uVar8 = 0xffffffffffffffff;
      }
      puVar9 = (undefined8 *)thunk_FUN_18005d6fc(uVar8);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
      puVar10 = *(uint **)(param_1 + 0x38);
      FUN_18005ed10(puVar9,(undefined8 *)puVar10,(ulonglong)*(uint *)(param_1 + 0x44) << 3);
      FUN_18005d720(*(LPVOID *)(param_1 + 0x38));
      *(undefined8 **)(param_1 + 0x38) = puVar9;
      *(uint *)(param_1 + 0x44) = uVar13;
      param_3 = local_res18;
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x40) * 8) =
         puVar7;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  }
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 8);
  local_68 = 0x100;
  local_60 = 1;
  local_78 = (LPVOID)thunk_FUN_18005d6fc(0x100);
  local_70 = local_78;
  uVar8 = FUN_18003f28c(local_res10,(longlong *)puVar10,param_3,lVar2,
                        *(uint *)((longlong)puVar7 + 0x1c),(longlong *)&local_78);
  pvVar4 = local_78;
  if ((char)uVar8 != '\0') {
    plVar3 = (longlong *)*puVar7;
    local_res8 = 0;
    iVar6 = (**(code **)(*plVar3 + 0x78))
                      (plVar3,local_78,(longlong)local_70 - (longlong)local_78,0,&local_res8);
    uVar12 = local_res8;
    if (-1 < iVar6) {
      FUN_18005d720(pvVar4);
      if (uVar12 == 0) {
        return 0;
      }
      puVar7 = (undefined8 *)FUN_18005d6fc(0x30);
      if (puVar7 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        puVar7[5] = 0;
        puVar7[1] = local_58;
        puVar7[2] = uStack_50;
        puVar7[3] = local_48;
        puVar7[4] = uStack_40;
        *puVar7 = &PTR_FUN_180063a60;
      }
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x38) + (ulonglong)uVar5 * 8);
      iVar6 = *(int *)((longlong)plVar3 + 0xc);
      if ((int)plVar3[1] == iVar6) {
        if (iVar6 != 0) {
          uVar14 = iVar6 * 2;
        }
        uVar8 = SUB168(ZEXT816(8) * ZEXT416(uVar14),0);
        if (SUB168(ZEXT816(8) * ZEXT416(uVar14),8) != 0) {
          uVar8 = 0xffffffffffffffff;
        }
        puVar9 = (undefined8 *)thunk_FUN_18005d6fc(uVar8);
        if (puVar9 == (undefined8 *)0x0) {
          return 0;
        }
        FUN_18005ed10(puVar9,(undefined8 *)*plVar3,(ulonglong)*(uint *)((longlong)plVar3 + 0xc) << 3
                     );
        FUN_18005d720((LPVOID)*plVar3);
        *plVar3 = (longlong)puVar9;
        *(uint *)((longlong)plVar3 + 0xc) = uVar14;
      }
      *(undefined8 **)(*plVar3 + (ulonglong)*(uint *)(plVar3 + 1) * 8) = puVar7;
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      puVar7[5] = uVar12;
      return uVar12;
    }
  }
  FUN_18005d720(pvVar4);
  return 0;
}

