/*
 * FUN_1012ce48 at 1012ce48
 * undefined FUN_1012ce48(void)
 * Address ranges: 1012ce48-1012cf67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1012ce48(uint *param_1,undefined1 *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 auStack_80 [16];
  
  uVar4 = *param_1;
  puVar1 = param_1 + 1;
  uVar2 = uVar4 + param_3 * 8;
  uVar10 = uVar4 >> 3 & 0x3f;
  if (uVar2 < uVar4) {
    *puVar1 = *puVar1 + 1;
  }
  *param_1 = uVar2;
  *puVar1 = *puVar1 + (param_3 >> 0x1d);
  if (param_3 != 0) {
    do {
      uVar5 = *param_2;
      iVar11 = uVar10 + 0x18;
      uVar10 = uVar10 + 1;
      param_3 = param_3 - 1;
      param_2 = param_2 + 1;
      *(undefined1 *)((int)param_1 + iVar11) = uVar5;
      if (uVar10 == 0x40) {
        iVar11 = 0;
        uVar10 = 0;
        do {
          iVar7 = iVar11 + 0x1b;
          iVar8 = iVar11 + 0x1a;
          iVar9 = iVar11 + 0x19;
          iVar6 = iVar11 + 0x18;
          iVar11 = iVar11 + 4;
          puVar3 = auStack_80 + uVar10;
          uVar10 = uVar10 + 1;
          *puVar3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)param_1 + iVar7),
                                               *(undefined1 *)((int)param_1 + iVar8)),
                                      *(undefined1 *)((int)param_1 + iVar9)),
                             *(undefined1 *)((int)param_1 + iVar6));
        } while (uVar10 < 0x10);
        FUN_1012c3c8(param_1 + 2,auStack_80);
        uVar10 = 0;
      }
    } while (param_3 != 0);
  }
  return;
}

