/*
 * FUN_1801577a8 at 1801577a8
 * undefined FUN_1801577a8(void)
 * Address ranges: 1801577a8-1801579a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801577a8(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  
  lVar15 = *param_1;
  uVar3 = *(uint *)(param_1 + 1);
  uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
  lVar14 = param_1[2];
  lVar7 = param_1[3];
  uVar5 = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar8 = param_1[4];
  cVar6 = *(char *)((longlong)param_1 + 0x24);
  FUN_18014e9a0(lVar15,0,0,0);
  lVar1 = lVar15 + (ulonglong)uVar3 * 8;
  lVar11 = lVar1 + 0x8000;
  FUN_180147330(lVar15,*(undefined8 *)(lVar1 + 0xfe10));
  *(undefined8 *)(lVar11 + 0x7e10) = 0;
  lVar11 = lVar15 + 0xffcc;
  iVar2 = (int)uVar3 >> 3;
  *(byte *)(lVar11 + iVar2) =
       *(byte *)(lVar11 + iVar2) & ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
  puVar9 = __hybrid_os_arm64x_dispatch_icall;
  if (lVar14 == 0) {
    FUN_1801667b0(lVar15,uVar3,uVar4,0,0,(int)lVar7,uVar5,(char)lVar8,cVar6,0);
    *(undefined8 *)(lVar1 + 0xfd10) = 0;
    *(undefined8 *)(lVar1 + 0xfd90) = 0;
    return;
  }
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  iVar10 = (*extraout_x11)(lVar14);
  if (iVar10 == 1) {
    lVar16 = lVar14 + -0x20;
    lVar12 = 0;
    *(undefined8 *)(lVar1 + 0xfd10) = 0;
    *(longlong *)(lVar1 + 0xfd90) = lVar16;
    goto LAB_18015791c;
  }
  lVar12 = lVar14 + -0x100;
  lVar16 = 0;
  if (cVar6 == '\0') {
LAB_1801578d4:
    uVar13 = 0;
  }
  else {
    (*(code *)puVar9)(0x180224000);
    iVar10 = (*extraout_x11_00)(lVar14);
    if ((iVar10 != 1) || (uVar13 = 1, *(int *)(lVar14 + -0xcc) != 1)) goto LAB_1801578d4;
  }
  *(undefined1 *)(lVar14 + 0x92) = uVar13;
  *(longlong *)(lVar1 + 0xfd10) = lVar12;
  *(undefined8 *)(lVar1 + 0xfd90) = 0;
  if (*(int *)(lVar14 + -0xbc) - 3U < 3) {
    *(byte *)(lVar11 + iVar2) = *(byte *)(lVar11 + iVar2) | (byte)(1 << (ulonglong)(uVar3 & 7));
  }
LAB_18015791c:
  FUN_1801667b0(lVar15,uVar3,uVar4,lVar12,lVar16,(int)lVar7,uVar5,(char)lVar8,cVar6,0);
  *(undefined1 *)(lVar15 + 0x1018b) = 1;
  return;
}

