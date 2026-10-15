/*
 * FUN_18012eda8 at 18012eda8
 * undefined FUN_18012eda8(void)
 * Address ranges: 18012eda8-18012effb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18012eda8(undefined8 param_1,byte param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 uVar13;
  longlong lVar14;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  uint local_90 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 auStack_78 [2];
  undefined1 auStack_68 [16];
  undefined8 local_58 [3];
  
  puVar5 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  uVar10 = (*extraout_x11)();
  (*(code *)puVar5)(0x180224000);
  cVar7 = (*extraout_x11_00)(param_1,auStack_78);
  lVar6 = DAT_18024d928;
  if (cVar7 == '\0') {
    return;
  }
  (*(code *)puVar5)(0x180224000);
  uVar8 = (*extraout_x11_01)(param_1);
  puVar11 = (undefined8 *)FUN_180220598(lVar6,uVar10);
  if (puVar11 != (undefined8 *)0x0) {
    puVar12 = auStack_78;
    if (*(char *)(lVar6 + 0x8e6) == '\0') {
      puVar12 = local_58;
    }
    uVar10 = *puVar12;
    puVar11[10] = puVar12[1];
    puVar11[9] = uVar10;
    if (((*(int *)(lVar6 + 0x81c) - 3U < 3) || (*(int *)(lVar6 + 0x81c) - 7U < 2)) &&
       (iVar9 = thunk_FUN_180223c48(auStack_68,auStack_78), iVar9 == 0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    uVar3 = 1 << (ulonglong)(uVar8 & 0x1f);
    *(uint *)(lVar6 + 0x36c) = *(uint *)(lVar6 + 0x36c) | uVar3;
    uVar1 = *(uint *)(lVar6 + 0x368) & (uVar3 ^ 0xffffffff);
    if (param_3 != 0) {
      uVar1 = *(uint *)(lVar6 + 0x368) | uVar3;
    }
    uVar2 = *(uint *)(lVar6 + 0x364) & (uVar3 ^ 0xffffffff);
    if (param_2 != 0) {
      uVar2 = *(uint *)(lVar6 + 0x364) | uVar3;
    }
    *(uint *)(lVar6 + 0x364) = uVar2;
    *(uint *)(lVar6 + 0x368) = uVar1;
    uVar10 = puVar11[9];
    lVar14 = lVar6 + (ulonglong)uVar8 * 0x10;
    puVar12 = (undefined8 *)(lVar14 + 0x164);
    *(undefined8 *)(lVar14 + 0x16c) = puVar11[10];
    *puVar12 = uVar10;
    thunk_FUN_180223f7c(*puVar11,0,puVar12,2);
    if ((*(char *)(lVar6 + 0x823) == '\0') ||
       (uVar8 = *(uint *)(lVar6 + 0x36c) & *(uint *)(lVar6 + 0x368),
       (*(uint *)(lVar6 + 0x364) & uVar8) == 0)) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      local_90[0] = uVar8;
      uVar8 = (uVar8 & 0xaaaaaaaa) >> 1 | (uVar8 & 0x55555555) << 1;
      uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
      lVar14 = LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
      local_88 = 0;
      uStack_80 = 0;
      uVar8 = (uint)lVar14;
      if ((1 - (uVar8 >> 5) & 0xff) != 0) {
        *(byte *)((longlong)local_90 + (longlong)((int)uVar8 >> 3)) =
             *(byte *)((longlong)local_90 + (longlong)((int)uVar8 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
        while( true ) {
          thunk_FUN_180223c70(&local_88,&local_88,lVar6 + 0x164 + lVar14 * 0x10);
          uVar8 = (local_90[0] & 0xaaaaaaaa) >> 1 | (local_90[0] & 0x55555555) << 1;
          uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
          lVar14 = LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
          uVar8 = (uint)lVar14;
          if ((1 - (uVar8 >> 5) & 0xff) == 0) break;
          *(byte *)((longlong)local_90 + (longlong)((int)uVar8 >> 3)) =
               *(byte *)((longlong)local_90 + (longlong)((int)uVar8 >> 3)) &
               ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
        }
      }
      puVar12 = &local_88;
    }
    thunk_FUN_180224198(puVar12);
    if ((((param_3 & 1) == 0) || ((param_2 & 1) == 0)) || (!bVar4)) {
      uVar13 = 0;
    }
    else {
      uVar13 = 1;
    }
    *(undefined1 *)(puVar11 + 0xb) = uVar13;
    return;
  }
  return;
}

