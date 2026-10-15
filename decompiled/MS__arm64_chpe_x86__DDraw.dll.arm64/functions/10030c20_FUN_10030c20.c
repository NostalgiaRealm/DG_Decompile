/*
 * FUN_10030c20 at 10030c20
 * undefined FUN_10030c20(void)
 * Address ranges: 10030c20-10030e0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10030c20(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  bool bVar6;
  code *pcVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  code *extraout_w11;
  int extraout_w15;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  undefined1 local_50 [8];
  undefined1 auStack_48 [8];
  
  iVar9 = FUN_10001280();
  iVar5 = extraout_w15 * -0x10;
  FUN_100917d0(auStack_48 + iVar5,0,0x1000);
  pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar12 = 0;
  do {
    (*pcVar7)();
    cVar8 = (*extraout_w11)(iVar9,uVar12,auStack_48 + iVar5);
    if (cVar8 == '\0') {
      bVar6 = false;
      goto LAB_10030cbc;
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 < 3);
  bVar6 = true;
LAB_10030cbc:
  uVar11 = 0;
  if (bVar6) {
    local_50[iVar5] = 1;
    iVar13 = 3;
    uVar12 = 0;
    do {
      iVar3 = iVar9 + uVar12 * 4;
      iVar1 = uVar12 * 8;
      pcVar2 = (char *)(iVar3 + 0x3c);
      puVar4 = &DAT_100bb710 + uVar12 * 2;
      cVar8 = (&DAT_100bb714)[iVar1];
      *pcVar2 = cVar8;
      if (cVar8 == -1) {
        uVar10 = FUN_10030900(iVar9,iVar13,*puVar4,0);
        if ((uVar10 & 1) == 0) {
          return 0;
        }
        *pcVar2 = (char)iVar13;
        iVar13 = iVar13 + 1;
      }
      cVar8 = (&DAT_100bb715)[iVar1];
      pcVar2 = (char *)(iVar3 + 0x3d);
      *pcVar2 = cVar8;
      if (cVar8 == -1) {
        uVar10 = FUN_10030900(iVar9,iVar13,*puVar4,8);
        if ((uVar10 & 1) == 0) {
          return 0;
        }
        *pcVar2 = (char)iVar13;
        iVar13 = iVar13 + 1;
      }
      pcVar2 = (char *)(iVar9 + uVar12 * 4 + 0x3e);
      cVar8 = (&DAT_100bb716)[iVar1];
      *pcVar2 = cVar8;
      if (cVar8 == -1) {
        uVar10 = FUN_10030900(iVar9,iVar13,*puVar4,0x10);
        if ((uVar10 & 1) == 0) {
          return 0;
        }
        *pcVar2 = (char)iVar13;
        iVar13 = iVar13 + 1;
      }
      pcVar2 = (char *)(iVar9 + uVar12 * 4 + 0x3f);
      cVar8 = (&DAT_100bb717)[uVar12 * 8];
      *pcVar2 = cVar8;
      if (cVar8 == -1) {
        uVar10 = FUN_10030900(iVar9,iVar13,(&DAT_100bb710)[uVar12 * 2],0x18);
        if ((uVar10 & 1) == 0) {
          return 0;
        }
        *pcVar2 = (char)iVar13;
        iVar13 = iVar13 + 1;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < 0xe);
    uVar11 = local_50[iVar5];
  }
  return uVar11;
}

