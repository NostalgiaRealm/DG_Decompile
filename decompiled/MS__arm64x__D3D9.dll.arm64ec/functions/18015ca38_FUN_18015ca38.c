/*
 * FUN_18015ca38 at 18015ca38
 * undefined FUN_18015ca38(void)
 * Address ranges: 18015ca38-18015ccaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18015ca38(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  char *pcVar8;
  longlong lVar9;
  char cVar10;
  bool bVar11;
  undefined1 uVar12;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar13;
  longlong lVar14;
  code *local_60;
  longlong local_58;
  longlong local_50;
  
  uVar5 = (int)param_1[1] - 1;
  if (3 < uVar5) {
    return;
  }
  lVar14 = *param_1;
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  lVar13 = param_1[2];
  lVar6 = param_1[3];
  FUN_18014e9a0(lVar14,0,0,0);
  lVar1 = lVar14 + (ulonglong)uVar5 * 8;
  local_60 = *(code **)(lVar1 + 0xfee8);
  local_50 = lVar1;
  if (local_60 != (code *)0x0) {
    lVar9 = 64000;
    pcVar8 = (char *)FUN_1801508e0(lVar14 + 64000,&local_60);
    cVar2 = pcVar8[1] + -1;
    pcVar8[1] = cVar2;
    pcVar8[7] = cVar2 == '\0' | pcVar8[7];
    if (*pcVar8 == '\0') {
      if (pcVar8[6] == '\0') {
        if (((pcVar8[2] == '\0') && (pcVar8[3] == '\0')) && (pcVar8[4] == '\0')) {
          cVar10 = pcVar8[5];
          goto LAB_18015cb0c;
        }
        goto LAB_18015cb20;
      }
      if (pcVar8[2] != '\0') goto LAB_18015cb20;
      cVar10 = pcVar8[3];
LAB_18015cb0c:
      if (cVar10 != '\0' || cVar2 != '\0') goto LAB_18015cb20;
      bVar11 = true;
    }
    else {
LAB_18015cb20:
      bVar11 = false;
    }
    if (bVar11) {
      FUN_180150960(lVar14 + lVar9,&local_60);
    }
  }
  *(undefined8 *)(lVar1 + 0xfee8) = 0;
  iVar3 = (int)uVar5 >> 3;
  *(byte *)(lVar14 + 0xffd4 + (longlong)iVar3) =
       *(byte *)(lVar14 + 0xffd4 + (longlong)iVar3) & ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
  if (lVar13 == 0) {
    *(undefined8 *)(lVar1 + 0xfe98) = 0;
    *(undefined8 *)(lVar1 + 0xfec0) = 0;
    goto LAB_18015cc70;
  }
  local_60 = (code *)__hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  iVar7 = (*extraout_x11)(lVar13);
  if (iVar7 == 1) {
    *(undefined8 *)(lVar1 + 0xfe98) = 0;
    *(longlong *)(lVar1 + 0xfec0) = lVar13 + -0x20;
  }
  else {
    local_58 = lVar13 + -0x100;
    if ((char)lVar6 == '\0') {
LAB_18015cbe4:
      uVar12 = 0;
    }
    else {
      (*local_60)(0x180224000);
      iVar7 = (*extraout_x11_00)(lVar13);
      if ((iVar7 != 1) || (uVar12 = 1, *(int *)(lVar13 + -0xcc) != 1)) goto LAB_18015cbe4;
    }
    *(undefined1 *)(lVar13 + 0x92) = uVar12;
    *(undefined8 *)(lVar1 + 0xfec0) = 0;
    *(longlong *)(lVar1 + 0xfe98) = local_58;
    if (*(int *)(lVar13 + -0xbc) - 3U < 3) {
      *(byte *)(lVar14 + 0xffcc + (longlong)iVar3) =
           *(byte *)(lVar14 + 0xffcc + (longlong)iVar3) | (byte)(1 << (ulonglong)(uVar5 & 7));
    }
  }
  if (*(int *)(local_50 + 0x81c) != iVar4) {
    *(int *)(local_50 + 0x81c) = iVar4;
    *(byte *)(lVar14 + 0xf6bc + (longlong)iVar3) =
         *(byte *)(lVar14 + 0xf6bc + (longlong)iVar3) | (byte)(1 << (ulonglong)(uVar5 & 7));
  }
  *(undefined1 *)(lVar14 + 0x1018b) = 1;
LAB_18015cc70:
  *(undefined1 *)(lVar14 + 0xf6c0) = 1;
  *(byte *)(lVar14 + 0xf6b8 + (longlong)iVar3) =
       *(byte *)(lVar14 + 0xf6b8 + (longlong)iVar3) | (byte)(1 << (ulonglong)(uVar5 & 7));
  return;
}

