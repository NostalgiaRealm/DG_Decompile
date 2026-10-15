/*
 * FUN_18004cf30 at 18004cf30
 * undefined FUN_18004cf30(void)
 * Address ranges: 18004cf30-18004d177
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004cf30(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  char *pcVar8;
  char cVar9;
  bool bVar10;
  undefined1 uVar11;
  longlong extraout_x15;
  longlong *plVar12;
  longlong lVar13;
  longlong local_60 [2];
  
  uVar5 = (int)param_1[1] - 1;
  if (3 < uVar5) {
    return;
  }
  lVar13 = *param_1;
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  plVar12 = (longlong *)param_1[2];
  lVar6 = param_1[3];
  FUN_18003feb0(lVar13,0,0,0);
  lVar1 = lVar13 + (ulonglong)uVar5 * 8;
  local_60[0] = *(longlong *)(lVar1 + 0xfee8);
  if (local_60[0] == 0) goto LAB_18004d02c;
  pcVar8 = (char *)FUN_180041a50(lVar13 + 64000,local_60);
  cVar2 = pcVar8[1] + -1;
  pcVar8[1] = cVar2;
  pcVar8[7] = cVar2 == '\0' | pcVar8[7];
  if (*pcVar8 == '\0') {
    if (pcVar8[6] == '\0') {
      if (((pcVar8[2] == '\0') && (pcVar8[3] == '\0')) && (pcVar8[4] == '\0')) {
        cVar9 = pcVar8[5];
        goto LAB_18004d004;
      }
      goto LAB_18004d018;
    }
    if (pcVar8[2] != '\0') goto LAB_18004d018;
    cVar9 = pcVar8[3];
LAB_18004d004:
    if (cVar9 != '\0' || cVar2 != '\0') goto LAB_18004d018;
    bVar10 = true;
  }
  else {
LAB_18004d018:
    bVar10 = false;
  }
  if (bVar10) {
    FUN_180041ad0(lVar13 + extraout_x15,local_60);
  }
LAB_18004d02c:
  *(undefined8 *)(lVar1 + 0xfee8) = 0;
  iVar3 = (int)uVar5 >> 3;
  *(byte *)(lVar13 + 0xffd4 + (longlong)iVar3) =
       *(byte *)(lVar13 + 0xffd4 + (longlong)iVar3) & ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
  if (plVar12 == (longlong *)0x0) {
    *(undefined8 *)(lVar1 + 0xfe98) = 0;
    *(undefined8 *)(lVar1 + 0xfec0) = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar12 + 8))(plVar12);
    if (iVar7 == 1) {
      *(undefined8 *)(lVar1 + 0xfe98) = 0;
      *(longlong **)(lVar1 + 0xfec0) = plVar12 + -4;
    }
    else {
      if ((((char)lVar6 == '\0') || (iVar7 = (**(code **)(*plVar12 + 0x48))(plVar12), iVar7 != 1))
         || (uVar11 = 1, *(int *)((longlong)plVar12 + -0xcc) != 1)) {
        uVar11 = 0;
      }
      *(undefined1 *)((longlong)plVar12 + 0x92) = uVar11;
      *(longlong **)(lVar1 + 0xfe98) = plVar12 + -0x20;
      *(undefined8 *)(lVar1 + 0xfec0) = 0;
      if (*(int *)((longlong)plVar12 + -0xbc) - 3U < 3) {
        *(byte *)(lVar13 + 0xffcc + (longlong)iVar3) =
             *(byte *)(lVar13 + 0xffcc + (longlong)iVar3) | (byte)(1 << (ulonglong)(uVar5 & 7));
      }
    }
    if (*(int *)(lVar1 + 0x81c) != iVar4) {
      *(int *)(lVar1 + 0x81c) = iVar4;
      *(byte *)(lVar13 + 0xf6bc + (longlong)iVar3) =
           *(byte *)(lVar13 + 0xf6bc + (longlong)iVar3) | (byte)(1 << (ulonglong)(uVar5 & 7));
    }
    *(undefined1 *)(lVar13 + 0x1018b) = 1;
  }
  *(undefined1 *)(lVar13 + 0xf6c0) = 1;
  *(byte *)(lVar13 + 0xf6b8 + (longlong)iVar3) =
       *(byte *)(lVar13 + 0xf6b8 + (longlong)iVar3) | (byte)(1 << (ulonglong)(uVar5 & 7));
  return;
}

