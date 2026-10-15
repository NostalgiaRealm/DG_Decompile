/*
 * FUN_1800584f8 at 1800584f8
 * longlong __cdecl FUN_1800584f8(longlong param_1, uint param_2)
 * Address ranges: 1800584f8-180058773
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800584f8(longlong param_1,uint param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  LPVOID pvVar13;
  ulonglong uVar14;
  LPVOID local_80 [2];
  LPVOID local_70;
  ulonglong uStack_68;
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uVar8 = *(uint *)(param_1 + 0x2c);
  if (uVar8 < param_2 << 1) {
    iVar7 = 2;
    if (param_2 <= uVar8 * 3) {
      iVar7 = 3;
    }
    uVar8 = iVar7 * param_2;
  }
  uVar3 = *(uint *)(param_1 + 0x28);
  uVar8 = (uVar3 + uVar8) - 1 & -uVar3;
  uVar14 = (ulonglong)uVar8;
  if ((*(uint *)(param_1 + 0x30) != 0) &&
     (*(uint *)(param_1 + 0x30) < *(int *)(param_1 + 0x34) + uVar8)) {
    return 0;
  }
  uStack_68 = uVar14;
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18005856c);
    (*pcVar4)();
  }
  uVar12 = 0;
  if (uVar3 != 0) {
    uVar12 = uVar8 / uVar3;
  }
  lVar9 = -1L << ((ulonglong)uVar12 & 0x3f);
  if ((uVar12 & 0x3f) == 0) {
    lVar9 = 0;
  }
  uVar12 = uVar12 + 0x3f;
  uVar3 = uVar12 >> 6;
  uVar11 = (uVar12 & 0xffffffc0) >> 3;
  lVar10 = -1L << ((ulonglong)uVar3 & 0x3f);
  if ((uVar3 & 0x3f) == 0) {
    lVar10 = 0;
  }
  uVar2 = uVar3 + 0x3f >> 3 & 0x1ffffff8;
  puVar5 = (undefined1 *)thunk_FUN_1800636c0((ulonglong)uVar11);
  local_60 = puVar5;
  puVar6 = (undefined1 *)thunk_FUN_1800636c0((ulonglong)uVar2);
  uStack_48 = 0;
  local_58 = puVar6;
  local_50 = uVar11;
  uStack_4c = uVar2;
  if ((puVar5 == (undefined1 *)0x0) || (puVar6 == (undefined1 *)0x0)) goto LAB_180058748;
  FUN_180063e98(puVar5,0,(ulonglong)uVar11);
  FUN_180063e98(puVar6,0,(ulonglong)uVar2);
  *(longlong *)(puVar5 + (ulonglong)(uVar12 >> 6) * 8 + -8) = lVar9;
  *(longlong *)(puVar6 + (ulonglong)(uVar3 + 0x3f >> 6) * 8 + -8) = lVar10;
  local_70 = (LPVOID)thunk_FUN_1800636c0(uVar14);
  if (local_70 == (LPVOID)0x0) goto LAB_180058748;
  uVar3 = *(uint *)(param_1 + 0x48);
  uVar14 = 0;
  local_80[0] = local_70;
  if (uVar3 == 0) {
LAB_1800586a4:
    FUN_180058a00((longlong *)(param_1 + 0x38),(uint)uVar14,local_70,local_80,&local_70);
    puVar5 = local_60;
    puVar6 = local_58;
  }
  else {
    uVar12 = 0;
    uVar11 = uVar3;
    do {
      uVar2 = uVar11 + uVar12 >> 1;
      uVar14 = (ulonglong)uVar2;
      pvVar13 = *(LPVOID *)(*(longlong *)(param_1 + 0x40) + uVar14 * 0x40);
      if (pvVar13 <= local_70) {
        if (local_70 <= pvVar13) break;
        uVar12 = uVar2 + 1;
        uVar14 = (ulonglong)(uVar2 + 1);
        uVar2 = uVar11;
      }
      uVar11 = uVar2;
    } while (uVar11 != uVar12);
    if (((uint)uVar14 == uVar3) ||
       (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x40) + uVar14 * 0x40),
       (LPVOID)*puVar1 != local_70)) goto LAB_1800586a4;
    puVar1[3] = uStack_68;
    puVar1[2] = (ulonglong)local_70;
    puVar1[5] = (ulonglong)local_58;
    puVar1[4] = (ulonglong)local_60;
    puVar1[7] = CONCAT44(uStack_44,uStack_48);
    puVar1[6] = CONCAT44(uStack_4c,local_50);
  }
  uVar3 = *(uint *)(param_1 + 0x48);
  if (uVar3 != 0) {
    uVar12 = 0;
    uVar11 = uVar3;
    do {
      uVar2 = uVar11 + uVar12 >> 1;
      uVar14 = (ulonglong)uVar2;
      pvVar13 = *(LPVOID *)(*(longlong *)(param_1 + 0x40) + uVar14 * 0x40);
      if (pvVar13 <= local_80[0]) {
        if (local_80[0] <= pvVar13) break;
        uVar12 = uVar2 + 1;
        uVar14 = (ulonglong)(uVar2 + 1);
        uVar2 = uVar11;
      }
      uVar11 = uVar2;
    } while (uVar11 != uVar12);
    if ((uint)uVar14 != uVar3) {
      if ((*(LPVOID *)(*(longlong *)(param_1 + 0x40) + uVar14 * 0x40) == local_80[0]) &&
         (lVar9 = *(longlong *)(param_1 + 0x40) + (uVar14 * 0x40 | 0x10), lVar9 != 0)) {
        *(uint *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + uVar8;
        return lVar9;
      }
    }
  }
  thunk_FUN_180063700(local_70);
LAB_180058748:
  thunk_FUN_180063700(puVar5);
  thunk_FUN_180063700(puVar6);
  return 0;
}

