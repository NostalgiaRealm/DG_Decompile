/*
 * FUN_1004ee50 at 1004ee50
 * undefined FUN_1004ee50(void)
 * Address ranges: 1004ee50-1004f1ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004ee50(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  byte bVar11;
  undefined4 *extraout_w8;
  code *extraout_w11;
  undefined4 uVar12;
  undefined4 local_4e0;
  uint *local_4dc;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  undefined1 auStack_4c8 [16];
  undefined4 local_4b8 [5];
  int local_4a4 [23];
  undefined1 auStack_448 [1032];
  
  iVar6 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar6 == 0) {
    FUN_10001c10(0);
  }
  uVar12 = 0x80070057;
  if (param_2 == (int *)0x0) goto LAB_1004f1c8;
  piVar1 = (int *)(param_1 + 4);
  iVar6 = *piVar1;
  uVar12 = 0x8876026c;
  piVar2 = (int *)(iVar6 + 0x94);
  if ((*piVar2 != 0) || (uVar12 = 0x887601c2, *(char *)(param_1 + 8) != '\0')) goto LAB_1004f1c8;
  local_4dc = (uint *)(param_1 + 0x1b8);
  uVar12 = 0x88760249;
  if (((*local_4dc >> 0x11 & 1) != 0) || ((*(uint *)(param_1 + 0x19c) >> 2 & 1) != 0))
  goto LAB_1004f1c8;
  uVar12 = 0x80004005;
  if (((*(int *)(iVar6 + 0x90) == 0) || (*(int *)(param_1 + 0x1a4) != 8)) ||
     (*(int *)(param_1 + 0x108) != 0)) {
    bVar11 = 0;
  }
  else {
    bVar11 = 1;
  }
  *(byte *)(iVar6 + 0xaf) = *(byte *)(iVar6 + 0xaf) | bVar11;
  FUN_100917d0(auStack_448,0,0x400);
  if ((*(int *)(param_1 + 0x1a4) == 8) &&
     ((*(int *)(*piVar1 + 0x90) == 0 || (*(char *)(*piVar1 + 0xaf) != '\0')))) {
    FUN_1004ff20(param_1,auStack_448);
  }
  iVar9 = *piVar1;
  FUN_10008d08(iVar9);
  iVar3 = *(int *)(iVar9 + 0x90);
  uVar7 = FUN_10007df0(iVar9 + 0x4c,*(int *)(iVar9 + 0xc4),
                       *(int *)(iVar9 + 0x10) * 0x40 + 0xfffU & 0xfffff000,auStack_448,
                       *(undefined1 *)(iVar9 + 0xaf));
  *(undefined1 *)(iVar9 + 0xaf) = 0;
  if ((*(int *)(iVar9 + 0xc4) == 0) && ((*(uint *)(iVar9 + 0x34) >> 5 & 1) != 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (((iVar3 == 0) && ((uVar7 & 1) != 0)) && (bVar4)) {
    puVar10 = (undefined4 *)(iVar9 + 0x70);
    uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar5 = (*extraout_w11)(uVar8,*extraout_w8,*puVar10);
    if (cVar5 != '\0') goto LAB_1004f05c;
    bVar11 = 1;
  }
  else {
LAB_1004f05c:
    bVar11 = 0;
  }
  *(byte *)(iVar9 + 0xae) = *(byte *)(iVar9 + 0xae) | bVar11;
  if ((uVar7 & 1) != 0) {
    iVar9 = (*(code *)PTR_FUN_100ba008)(0);
    *piVar2 = iVar9;
    if (iVar9 != 0) {
      uVar8 = (*(code *)PTR_FUN_100ba058)(iVar9,*(int *)(iVar6 + 0x90));
      local_4d8 = 0;
      *(undefined4 *)(iVar6 + 0x98) = uVar8;
      local_4d0 = *(undefined4 *)(param_1 + 0x15c);
      uStack_4cc = *(undefined4 *)(param_1 + 0x158);
      iVar6 = FUN_1004d890(param_1,0,auStack_4c8,&local_4e0,&local_4d8,0,1,1);
      if (iVar6 == -0x7789fe52) {
        iVar6 = FUN_1004e270(param_1,0,1,local_4a4,local_4b8,1);
        if (iVar6 < 0) goto LAB_1004f1c8;
        iVar6 = *piVar1;
        *(int *)(iVar6 + 0x9c) = local_4a4[0];
        *(undefined4 *)(iVar6 + 0xa0) = local_4b8[0];
        *param_2 = *piVar2;
        FUN_10009138(*piVar1);
        *(uint *)(*piVar1 + 200) = *(uint *)(*piVar1 + 200) | 0x80;
      }
      else {
        if (iVar6 != 0) goto LAB_1004f1c8;
        iVar6 = *piVar1;
        *(undefined4 *)(iVar6 + 0x9c) = local_4e0;
        *(undefined4 *)(iVar6 + 0xa0) = local_4b8[0];
        *param_2 = *piVar2;
        if (local_4a4[0] != 0) {
          FUN_10009138(*piVar1);
        }
        *(uint *)(*piVar1 + 0x34) = *(uint *)(*piVar1 + 0x34) & 0xfffffffb;
        if ((*local_4dc >> 0xb & 1) != 0) {
          FUN_10007450(*piVar1,0,0);
        }
      }
      uVar12 = 0;
    }
  }
LAB_1004f1c8:
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar12;
}

