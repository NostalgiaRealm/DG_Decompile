/*
 * FUN_10029761 at 10029761
 * undefined4 __stdcall FUN_10029761(uint param_1, int param_2, uint param_3, uint param_4, int param_5)
 * Address ranges: 10029761-100298d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_10029761(uint param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 local_c;
  undefined4 *local_8;
  
  uVar3 = param_1;
  BVar4 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar4 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  local_8 = &local_c;
  uVar8 = 0x80070057;
  if (((param_2 == 0) && (param_3 < 0x100)) && (param_3 + param_4 < 0x101)) {
    bVar2 = false;
    if (param_5 == 0) {
      uVar7 = 0;
      if (param_4 != 0) {
        do {
          iVar5 = param_3 * 4 + 0x14 + uVar7 * 4;
          iVar1 = *(int *)(param_1 + iVar5);
          *(undefined4 *)(param_1 + iVar5) = 0xff000000;
          bVar2 = (bool)(bVar2 | iVar1 != -0x1000000);
          uVar7 = uVar7 + 1;
        } while (uVar7 < param_4);
      }
    }
    else {
      param_1 = 0;
      if (param_4 != 0) {
        do {
          iVar5 = param_1 * 4;
          iVar6 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_5 + 3 + iVar5),
                                             *(undefined1 *)(param_5 + iVar5)),
                                    *(undefined1 *)(param_5 + 1 + iVar5)),
                           *(undefined1 *)(param_5 + 2 + iVar5));
          iVar5 = iVar5 + param_3 * 4;
          iVar1 = *(int *)(uVar3 + 0x14 + iVar5);
          *(int *)(uVar3 + 0x14 + iVar5) = iVar6;
          bVar2 = (bool)(bVar2 | iVar1 != iVar6);
          param_1 = param_1 + 1;
        } while (param_1 < param_4);
      }
    }
    if ((*(byte *)(uVar3 + 0x10) & 0x40) == 0) {
      *(uint *)(uVar3 + 0x14) = *(uint *)(uVar3 + 0x14) & 0xff000000;
      *(uint *)(uVar3 + 0x410) = *(uint *)(uVar3 + 0x410) | 0xffffff;
    }
    if (bVar2) {
      FUN_1002598e(*(void **)(uVar3 + 0xc),uVar3);
      FUN_1002958e(uVar3);
    }
    uVar8 = 0;
  }
  LeaveCriticalSection(DAT_1006c254);
  return uVar8;
}

