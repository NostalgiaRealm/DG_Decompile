/*
 * FUN_10041740 at 10041740
 * undefined FUN_10041740(void)
 * Address ranges: 10041740-100418d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10041740(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 auStack_50 [16];
  
  iVar6 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar6 == 0) {
    FUN_10001c10(0);
  }
  FUN_100a9d50(auStack_50);
  uVar8 = 0x80070057;
  if ((param_3 < 0x100 && param_2 == 0) && (param_3 + param_4 < 0x101)) {
    bVar5 = false;
    uVar7 = 0;
    if (param_4 != 0) {
      if (param_5 == 0) {
        do {
          piVar4 = (int *)(param_1 + (param_3 + 5) * 4 + uVar7 * 4);
          uVar7 = uVar7 + 1;
          iVar6 = *piVar4;
          *piVar4 = -0x1000000;
          bVar5 = (bool)(iVar6 != -0x1000000 | bVar5);
        } while (uVar7 < param_4);
      }
      else {
        do {
          iVar6 = uVar7 * 4;
          piVar4 = (int *)(param_1 + (param_3 + 5) * 4 + uVar7 * 4);
          iVar1 = uVar7 * 4;
          iVar2 = uVar7 * 4;
          iVar3 = uVar7 * 4;
          uVar7 = uVar7 + 1;
          iVar6 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_5 + 3 + iVar6),
                                             *(undefined1 *)(param_5 + iVar1)),
                                    *(undefined1 *)(param_5 + 1 + iVar2)),
                           *(undefined1 *)(param_5 + 2 + iVar3));
          iVar1 = *piVar4;
          *piVar4 = iVar6;
          bVar5 = (bool)(iVar1 != iVar6 | bVar5);
        } while (uVar7 < param_4);
      }
    }
    if ((*(uint *)(param_1 + 0x10) >> 6 & 1) == 0) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xff000000;
      *(uint *)(param_1 + 0x410) = *(uint *)(param_1 + 0x410) | 0xffffff;
    }
    if (bVar5) {
      FUN_10039698(*(undefined4 *)(param_1 + 0xc),param_1);
      FUN_10041288(param_1);
    }
    uVar8 = 0;
  }
  FUN_100a9ca0(auStack_50);
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar8;
}

