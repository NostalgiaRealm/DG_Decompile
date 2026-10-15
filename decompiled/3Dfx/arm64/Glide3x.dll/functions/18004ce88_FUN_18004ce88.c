/*
 * FUN_18004ce88 at 18004ce88
 * undefined8 __cdecl FUN_18004ce88(longlong param_1)
 * Address ranges: 18004ce88-18004d077
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18004ce88(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  SIZE_T SVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_70 [8];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_68 = *(undefined4 *)(param_1 + 0x2c);
  local_60 = *(undefined4 *)(param_1 + 0x30);
  uStack_64 = *(undefined4 *)(param_1 + 0x34);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  local_40 = (longlong *)0x0;
  uStack_28 = 0;
  local_30 = 0;
  uStack_5c = 0;
  plVar7 = *(longlong **)(*(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x10) * 0x20);
  iVar6 = (**(code **)(*plVar7 + 0x70))(plVar7,&local_68,&DAT_1800694f0,&local_40);
  if (iVar6 < 0) {
LAB_18004d064:
    uVar9 = 0;
  }
  else {
    puVar8 = (undefined8 *)(**(code **)(*local_40 + 0x50))(local_40,auStack_70);
    local_50 = *puVar8;
    puVar8 = (undefined8 *)(**(code **)(*local_40 + 0x48))(local_40,auStack_70);
    uStack_48 = *puVar8;
    iVar6 = *(int *)(param_1 + 0x24);
    if (*(int *)(param_1 + 0x20) == 0) {
      if (iVar6 == 0) {
        puVar8 = (undefined8 *)thunk_FUN_1800636c0(0x300);
        if (puVar8 == (undefined8 *)0x0) goto LAB_18004d054;
        thunk_FUN_1800010d8(puVar8,*(undefined8 **)(param_1 + 0x18),
                            (ulonglong)*(uint *)(param_1 + 0x24) * 0x30);
        thunk_FUN_180063700(*(LPVOID *)(param_1 + 0x18));
        *(undefined8 **)(param_1 + 0x18) = puVar8;
        *(undefined4 *)(param_1 + 0x24) = 0x10;
      }
      uVar4 = *(uint *)(param_1 + 0x20);
      lVar11 = *(longlong *)(param_1 + 0x18);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x20) == iVar6) {
        uVar4 = iVar6 << 1;
        if (iVar6 == 0) {
          uVar4 = 0x10;
        }
        SVar12 = CONCAT44(0,uVar4) * 0x30;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = CONCAT44(0,uVar4);
        if (SUB168(auVar5 * ZEXT816(0x30),8) != 0) {
          SVar12 = 0xffffffffffffffff;
        }
        puVar8 = (undefined8 *)thunk_FUN_1800636c0(SVar12);
        if (puVar8 == (undefined8 *)0x0) {
LAB_18004d054:
          (**(code **)(*local_40 + 0x10))();
          goto LAB_18004d064;
        }
        thunk_FUN_1800010d8(puVar8,*(undefined8 **)(param_1 + 0x18),
                            (ulonglong)*(uint *)(param_1 + 0x24) * 0x30);
        thunk_FUN_180063700(*(LPVOID *)(param_1 + 0x18));
        *(undefined8 **)(param_1 + 0x18) = puVar8;
        *(uint *)(param_1 + 0x24) = uVar4;
      }
      uVar3 = *(uint *)(param_1 + 0x20);
      uVar4 = iVar2 + 1;
      while (uVar10 = (ulonglong)uVar3, uVar4 < uVar3) {
        uVar3 = uVar3 - 1;
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar10 * 0x30);
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar3 * 0x30);
        uVar14 = *puVar1;
        uVar13 = puVar1[3];
        uVar9 = puVar1[2];
        puVar8[1] = puVar1[1];
        *puVar8 = uVar14;
        puVar8[3] = uVar13;
        puVar8[2] = uVar9;
        uVar9 = puVar1[4];
        puVar8[5] = puVar1[5];
        puVar8[4] = uVar9;
      }
      lVar11 = *(longlong *)(param_1 + 0x18);
    }
    puVar8 = (undefined8 *)(lVar11 + (ulonglong)uVar4 * 0x30);
    uVar9 = 1;
    puVar8[1] = uStack_48;
    *puVar8 = local_50;
    puVar8[3] = uStack_38;
    puVar8[2] = local_40;
    puVar8[5] = uStack_28;
    puVar8[4] = local_30;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  return uVar9;
}

