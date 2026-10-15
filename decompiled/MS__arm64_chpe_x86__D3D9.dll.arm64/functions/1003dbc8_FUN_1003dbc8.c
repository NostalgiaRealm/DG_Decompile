/*
 * FUN_1003dbc8 at 1003dbc8
 * undefined FUN_1003dbc8(void)
 * Address ranges: 1003dbc8-1003de9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003dbc8(undefined4 param_1,char param_2,char param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  code *pcVar7;
  undefined *puVar8;
  int iVar9;
  char cVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined1 uVar17;
  longlong lVar18;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined8 uVar19;
  uint *local_90;
  uint *puStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 auStack_78 [2];
  undefined1 auStack_68 [16];
  undefined8 auStack_58 [3];
  
  pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar11 = (*extraout_w11)(param_1);
  (*pcVar7)();
  cVar10 = (*extraout_w11_00)(param_1,auStack_78);
  iVar9 = DAT_10170ad0;
  if (cVar10 != '\0') {
    (*pcVar7)();
    uVar12 = (*extraout_w11_01)(param_1);
    puVar13 = (undefined4 *)FUN_1012f8a0(iVar9,uVar11);
    if (puVar13 != (undefined4 *)0x0) {
      puVar15 = auStack_78;
      if (*(char *)(iVar9 + 0x84a) == '\0') {
        puVar15 = auStack_58;
      }
      uVar19 = *puVar15;
      *(undefined8 *)(puVar13 + 0xe) = puVar15[1];
      *(undefined8 *)(puVar13 + 0xc) = uVar19;
      if (((*(int *)(iVar9 + 0x780) - 3U < 3) || (*(int *)(iVar9 + 0x780) - 7U < 2)) &&
         (iVar14 = (*(code *)PTR_FUN_1016c1a4)(auStack_68,auStack_78), iVar14 == 0)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      local_90 = (uint *)(iVar9 + 0x304);
      uVar4 = 1 << (ulonglong)(uVar12 & 0x1f);
      puStack_8c = (uint *)(iVar9 + 0x300);
      puVar1 = (uint *)(iVar9 + 0x2fc);
      *local_90 = uVar4 | *local_90;
      uVar3 = *puStack_8c & (uVar4 ^ 0xffffffff);
      if (param_3 != '\0') {
        uVar3 = uVar4 | *puStack_8c;
      }
      *puStack_8c = uVar3;
      uVar3 = *puVar1 & (uVar4 ^ 0xffffffff);
      if (param_2 != '\0') {
        uVar3 = uVar4 | *puVar1;
      }
      *puVar1 = uVar3;
      uVar19 = *(undefined8 *)(puVar13 + 0xc);
      iVar14 = iVar9 + uVar12 * 0x10;
      puVar15 = (undefined8 *)(iVar14 + 0xfc);
      *(undefined8 *)(iVar14 + 0x104) = *(undefined8 *)(puVar13 + 0xe);
      *puVar15 = uVar19;
      (*(code *)PTR_FUN_1016c228)(*puVar13,0,puVar15,2);
      if ((*(char *)(iVar9 + 0x787) == '\0') ||
         (puVar2 = (uint *)(*local_90 & *puStack_8c), ((uint)puVar2 & *puVar1) == 0)) {
        puVar15 = (undefined8 *)0x0;
      }
      else {
        uVar12 = ((uint)puVar2 & 0xaaaaaaaa) >> 1 | ((uint)puVar2 & 0x55555555) << 1;
        uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
        lVar16 = LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10);
        local_88 = 0;
        uStack_80 = 0;
        local_90 = puVar2;
        if ((1 - ((uint)lVar16 >> 5) & 0xff) != 0) {
          bVar5 = (byte)(1 << (ulonglong)((uint)lVar16 & 7));
          lVar18 = ((lVar16 << 0x20) >> 0x23) + ZEXT48(&local_90);
          while( true ) {
            puVar8 = PTR_FUN_1016c298;
            *(byte *)lVar18 = *(byte *)lVar18 & (bVar5 ^ 0xff);
            (*(code *)puVar8)(&local_88,&local_88,iVar9 + 0xfc + (int)lVar16 * 0x10);
            uVar12 = ((uint)local_90 & 0xaaaaaaaa) >> 1 | ((uint)local_90 & 0x55555555) << 1;
            uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
            uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
            uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
            lVar16 = LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10);
            if ((1 - ((uint)lVar16 >> 5) & 0xff) == 0) break;
            bVar5 = (byte)(1 << (ulonglong)((uint)lVar16 & 7));
            lVar18 = ((lVar16 << 0x20) >> 0x23) + ZEXT48(&local_90);
          }
        }
        puVar15 = &local_88;
      }
      (*(code *)PTR_FUN_1016c17c)(puVar15);
      if (((param_3 == '\0') || (param_2 == '\0')) || (!bVar6)) {
        uVar17 = 0;
      }
      else {
        uVar17 = 1;
      }
      *(undefined1 *)(puVar13 + 0x10) = uVar17;
    }
  }
  return;
}

