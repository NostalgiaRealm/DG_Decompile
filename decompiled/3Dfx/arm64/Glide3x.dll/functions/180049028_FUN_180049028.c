/*
 * FUN_180049028 at 180049028
 * int __cdecl FUN_180049028(longlong param_1)
 * Address ranges: 180049028-18004927f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180049028(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  SIZE_T SVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_88;
  longlong *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60 [2];
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  
  local_30 = 0;
  local_60[0] = 1;
  uStack_88 = 0;
  uStack_78 = 0;
  local_80 = (longlong *)0x0;
  uStack_68 = 0;
  local_70 = 0;
  lStack_50 = ((ulonglong)(*(int *)(param_1 + 0x30) + 0xffU & 0xffffff00) & 0x3fffff) << 10;
  local_58 = 0x10000;
  local_38 = 0x100000000;
  local_48 = 0x1000100000001;
  uStack_40 = 0x100000000;
  plVar7 = *(longlong **)(*(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x10) * 0x20);
  iVar6 = (**(code **)(*plVar7 + 0xd8))
                    (plVar7,&DAT_180069108,0,local_60,0xac3,0,&DAT_1800669f8,&local_80);
  if (iVar6 < 0) {
    return 0;
  }
  uVar8 = (**(code **)(*local_80 + 0x58))();
  iVar6 = (**(code **)(*local_80 + 0x40))(local_80,0,0,&uStack_88);
  if (iVar6 < 0) goto LAB_1800491e8;
  iVar6 = *(int *)(param_1 + 100);
  if (*(int *)(param_1 + 0x60) == 0) {
    if (iVar6 == 0) {
      puVar9 = (undefined8 *)thunk_FUN_1800636c0(0x300);
      if (puVar9 == (undefined8 *)0x0) goto LAB_1800491e8;
      thunk_FUN_1800010d8(puVar9,*(undefined8 **)(param_1 + 0x58),
                          (ulonglong)*(uint *)(param_1 + 100) * 0x30);
      thunk_FUN_180063700(*(LPVOID *)(param_1 + 0x58));
      *(undefined8 **)(param_1 + 0x58) = puVar9;
      *(undefined4 *)(param_1 + 100) = 0x10;
    }
    puVar9 = (undefined8 *)
             (*(longlong *)(param_1 + 0x58) + (ulonglong)*(uint *)(param_1 + 0x60) * 0x30);
    puVar9[1] = uStack_88;
    *puVar9 = uVar8;
    puVar9[3] = uStack_78;
    puVar9[2] = local_80;
    puVar9[5] = uStack_68;
    puVar9[4] = local_70;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    return 1;
  }
  iVar2 = *(int *)(param_1 + 0x68);
  if (*(int *)(param_1 + 0x60) == iVar6) {
    uVar4 = iVar6 << 1;
    if (iVar6 == 0) {
      uVar4 = 0x10;
    }
    SVar11 = CONCAT44(0,uVar4) * 0x30;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = CONCAT44(0,uVar4);
    if (SUB168(auVar5 * ZEXT816(0x30),8) != 0) {
      SVar11 = 0xffffffffffffffff;
    }
    puVar9 = (undefined8 *)thunk_FUN_1800636c0(SVar11);
    if (puVar9 != (undefined8 *)0x0) {
      thunk_FUN_1800010d8(puVar9,*(undefined8 **)(param_1 + 0x58),
                          (ulonglong)*(uint *)(param_1 + 100) * 0x30);
      thunk_FUN_180063700(*(LPVOID *)(param_1 + 0x58));
      *(undefined8 **)(param_1 + 0x58) = puVar9;
      *(uint *)(param_1 + 100) = uVar4;
      goto LAB_180049168;
    }
    iVar6 = 0;
  }
  else {
LAB_180049168:
    uVar3 = *(uint *)(param_1 + 0x60);
    uVar4 = iVar2 + 1;
    while (uVar10 = (ulonglong)uVar3, uVar4 < uVar3) {
      uVar3 = uVar3 - 1;
      puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + uVar10 * 0x30);
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar3 * 0x30);
      uVar14 = *puVar1;
      uVar13 = puVar1[3];
      uVar12 = puVar1[2];
      puVar9[1] = puVar1[1];
      *puVar9 = uVar14;
      puVar9[3] = uVar13;
      puVar9[2] = uVar12;
      uVar12 = puVar1[4];
      puVar9[5] = puVar1[5];
      puVar9[4] = uVar12;
    }
    iVar6 = 1;
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar4 * 0x30);
    puVar9[1] = uStack_88;
    *puVar9 = uVar8;
    puVar9[3] = uStack_78;
    puVar9[2] = local_80;
    puVar9[5] = uStack_68;
    puVar9[4] = local_70;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  }
  if (iVar6 != 0) {
    return iVar6;
  }
LAB_1800491e8:
  (**(code **)(*local_80 + 0x10))();
  return 0;
}

