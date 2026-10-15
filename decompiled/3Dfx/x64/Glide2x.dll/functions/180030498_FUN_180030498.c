/*
 * FUN_180030498 at 180030498
 * longlong * __fastcall FUN_180030498(longlong param_1, longlong param_2, uint param_3)
 * Address ranges: 180030498-180030715
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_180030498(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  uint *puVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  plVar12 = (longlong *)0x0;
  if (*(char *)(param_1 + 4) != '\0') {
    FUN_180037228(param_1,&local_58,param_2,param_3);
    puVar11 = (uint *)&local_58;
    uVar5 = FUN_180030718((longlong *)(param_1 + 0x20),puVar11);
    uVar14 = 0x10;
    if (uVar5 < *(uint *)(param_1 + 0x40)) {
      uVar13 = 0;
      plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x38) + (ulonglong)uVar5 * 8);
      uVar1 = *(uint *)(plVar10 + 1);
      if (uVar1 != 0) {
        lVar4 = *plVar10;
        do {
          puVar11 = (uint *)&local_58;
          lVar2 = *(longlong *)(lVar4 + (longlong)plVar12 * 8);
          iVar6 = FUN_18005f350((byte *)(lVar2 + 8),(byte *)puVar11,0x20);
          if (iVar6 == 0) {
            return *(longlong **)(lVar2 + 0x28);
          }
          uVar13 = (int)plVar12 + 1;
          plVar12 = (longlong *)(ulonglong)uVar13;
        } while (uVar13 < uVar1);
      }
      if (uVar13 != uVar1) {
        return (longlong *)0x0;
      }
    }
    else {
      puVar7 = (undefined8 *)FUN_18005d6fc(0x10);
      if (puVar7 == (undefined8 *)0x0) {
        return (longlong *)0x0;
      }
      *puVar7 = 0;
      puVar7[1] = 0;
      iVar6 = *(int *)(param_1 + 0x44);
      if (*(int *)(param_1 + 0x40) == iVar6) {
        uVar1 = uVar14;
        if (iVar6 != 0) {
          uVar1 = iVar6 * 2;
        }
        uVar8 = SUB168(ZEXT816(8) * ZEXT416(uVar1),0);
        if (SUB168(ZEXT816(8) * ZEXT416(uVar1),8) != 0) {
          uVar8 = 0xffffffffffffffff;
        }
        puVar9 = (undefined8 *)thunk_FUN_18005d6fc(uVar8);
        if (puVar9 == (undefined8 *)0x0) {
          return (longlong *)0x0;
        }
        puVar11 = *(uint **)(param_1 + 0x38);
        FUN_18005ed10(puVar9,(undefined8 *)puVar11,(ulonglong)*(uint *)(param_1 + 0x44) << 3);
        FUN_18005d720(*(LPVOID *)(param_1 + 0x38));
        *(undefined8 **)(param_1 + 0x38) = puVar9;
        *(uint *)(param_1 + 0x44) = uVar1;
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x40) * 8) =
           puVar7;
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    }
    puVar3 = *(uint **)(param_1 + 0x10);
    lVar4 = *(longlong *)(param_1 + 8);
    local_68 = 0x100;
    local_60 = 1;
    local_78 = (undefined8 *)thunk_FUN_18005d6fc(0x100);
    plVar10 = (longlong *)0x0;
    local_70 = local_78;
    uVar8 = FUN_18003f28c(param_2,(longlong *)puVar11,param_3,lVar4,*puVar3,(longlong *)&local_78);
    puVar7 = local_78;
    if ((char)uVar8 != '\0') {
      plVar10 = FUN_1800538d8(param_2,(longlong)local_70 - (longlong)local_78,local_78);
    }
    FUN_18005d720(puVar7);
    plVar12 = (longlong *)0x0;
    if (plVar10 != (longlong *)0x0) {
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
      plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x38) + (ulonglong)uVar5 * 8);
      iVar6 = *(int *)((longlong)plVar12 + 0xc);
      if ((int)plVar12[1] == iVar6) {
        if (iVar6 != 0) {
          uVar14 = iVar6 * 2;
        }
        uVar8 = SUB168(ZEXT816(8) * ZEXT416(uVar14),0);
        if (SUB168(ZEXT816(8) * ZEXT416(uVar14),8) != 0) {
          uVar8 = 0xffffffffffffffff;
        }
        puVar9 = (undefined8 *)thunk_FUN_18005d6fc(uVar8);
        if (puVar9 == (undefined8 *)0x0) {
          return (longlong *)0x0;
        }
        FUN_18005ed10(puVar9,(undefined8 *)*plVar12,
                      (ulonglong)*(uint *)((longlong)plVar12 + 0xc) << 3);
        FUN_18005d720((LPVOID)*plVar12);
        *plVar12 = (longlong)puVar9;
        *(uint *)((longlong)plVar12 + 0xc) = uVar14;
      }
      *(undefined8 **)(*plVar12 + (ulonglong)*(uint *)(plVar12 + 1) * 8) = puVar7;
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      puVar7[5] = plVar10;
      plVar12 = plVar10;
    }
  }
  return plVar12;
}

