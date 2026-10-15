/*
 * FUN_10026bb0 at 10026bb0
 * undefined FUN_10026bb0(void)
 * Address ranges: 10026bb0-10026e53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10026bb0(int param_1,char param_2,char param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  undefined *puVar8;
  char cVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined1 uVar15;
  longlong lVar16;
  code *extraout_w11;
  undefined8 uVar17;
  uint *local_c0;
  undefined8 *local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x94);
  uVar10 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  cVar9 = (*extraout_w11)(uVar10,&local_70);
  if (cVar9 != '\0') {
    iVar4 = *(int *)(param_1 + 0x1c);
    uStack_98 = uStack_68;
    local_a0 = local_70;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    local_80 = local_50;
    puVar11 = (undefined4 *)FUN_10007848(iVar4,uVar3);
    if (puVar11 != (undefined4 *)0x0) {
      puVar13 = &local_a0;
      if (*(char *)(iVar4 + 0x84a) == '\0') {
        puVar13 = &local_80;
      }
      uVar17 = *puVar13;
      *(undefined8 *)(puVar11 + 0xe) = puVar13[1];
      *(undefined8 *)(puVar11 + 0xc) = uVar17;
      if (((*(int *)(iVar4 + 0x780) - 3U < 3) || (*(int *)(iVar4 + 0x780) - 7U < 2)) &&
         (iVar12 = (*(code *)PTR_FUN_1009d15c)(&uStack_90,&local_a0), iVar12 == 0)) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      local_c0 = (uint *)(iVar4 + 0x304);
      puVar1 = (uint *)(iVar4 + 0x300);
      puVar2 = (uint *)(iVar4 + 0x2fc);
      local_bc = (undefined8 *)(iVar4 + 0xfc);
      *local_c0 = *local_c0 | 1;
      uVar5 = *puVar1 & 0xfffffffe;
      if (param_3 != '\0') {
        uVar5 = *puVar1 | 1;
      }
      *puVar1 = uVar5;
      uVar5 = *puVar2 & 0xfffffffe;
      if (param_2 != '\0') {
        uVar5 = *puVar2 | 1;
      }
      *puVar2 = uVar5;
      uVar17 = *(undefined8 *)(puVar11 + 0xc);
      *(undefined8 *)(iVar4 + 0x104) = *(undefined8 *)(puVar11 + 0xe);
      *local_bc = uVar17;
      (*(code *)PTR_FUN_1009d1ac)(*puVar11,0,local_bc,2);
      puVar13 = local_bc;
      if ((*(char *)(iVar4 + 0x787) == '\0') ||
         (puVar1 = (uint *)(*local_c0 & *puVar1), (*puVar2 & (uint)puVar1) == 0)) {
        puVar13 = (undefined8 *)0x0;
      }
      else {
        uVar5 = ((uint)puVar1 & 0xaaaaaaaa) >> 1 | ((uint)puVar1 & 0x55555555) << 1;
        uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        lVar14 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
        local_b8 = 0;
        uStack_b0 = 0;
        local_c0 = puVar1;
        if ((1 - ((uint)lVar14 >> 5) & 0xff) != 0) {
          bVar6 = (byte)(1 << (ulonglong)((uint)lVar14 & 7));
          lVar16 = ((lVar14 << 0x20) >> 0x23) + ZEXT48(&local_c0);
          while( true ) {
            puVar8 = PTR_FUN_1009d208;
            *(byte *)lVar16 = *(byte *)lVar16 & (bVar6 ^ 0xff);
            (*(code *)puVar8)(&local_b8,&local_b8,puVar13 + (int)lVar14 * 2);
            uVar5 = ((uint)local_c0 & 0xaaaaaaaa) >> 1 | ((uint)local_c0 & 0x55555555) << 1;
            uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
            uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
            uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
            lVar14 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
            if ((1 - ((uint)lVar14 >> 5) & 0xff) == 0) break;
            bVar6 = (byte)(1 << (ulonglong)((uint)lVar14 & 7));
            lVar16 = ((lVar14 << 0x20) >> 0x23) + ZEXT48(&local_c0);
          }
        }
        puVar13 = &local_b8;
      }
      (*(code *)PTR_FUN_1009d140)(puVar13);
      if (((param_3 == '\0') || (param_2 == '\0')) || (!bVar7)) {
        uVar15 = 0;
      }
      else {
        uVar15 = 1;
      }
      *(undefined1 *)(puVar11 + 0x10) = uVar15;
    }
  }
  return;
}

