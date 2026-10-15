/*
 * FUN_10056b68 at 10056b68
 * undefined FUN_10056b68(void)
 * Address ranges: 10056b68-10056d0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10056b68(int param_1,int param_2,char param_3)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  ulonglong uVar11;
  int extraout_w13;
  int extraout_w14;
  int extraout_w15;
  undefined1 auVar12 [12];
  
  iVar7 = 0xf8f4;
  uVar1 = *(uint *)(param_1 + 0xf8f8);
  if (uVar1 != 0) {
    uVar9 = 0;
    uVar8 = uVar1;
    do {
      uVar5 = uVar8 + uVar9 >> 1;
      uVar11 = *(ulonglong *)(*(int *)(param_1 + 0xf8f4) + uVar5 * 0x18);
      uVar4 = uVar5;
      if (uVar11 <= (ulonglong)(longlong)param_2) {
        if ((ulonglong)(longlong)param_2 <= uVar11) break;
        uVar9 = uVar5 + 1;
        uVar5 = uVar9;
        uVar4 = uVar8;
      }
      uVar8 = uVar4;
    } while (uVar8 != uVar9);
    if ((uVar5 != uVar1) &&
       (plVar2 = (longlong *)(*(int *)(param_1 + 0xf8f4) + uVar5 * 0x18), iVar6 = (int)plVar2 + 0xc,
       *plVar2 == (longlong)param_2)) goto LAB_10056bf0;
  }
  iVar6 = 0;
LAB_10056bf0:
  pcVar10 = (char *)(iVar6 + 2);
  param_3 = param_3 + '\x01';
  if ((((*pcVar10 == param_3) || (pcVar10 = (char *)(iVar6 + 3), *pcVar10 == param_3)) ||
      (pcVar10 = (char *)(iVar6 + 4), *pcVar10 == param_3)) ||
     (pcVar10 = (char *)(iVar6 + 5), *pcVar10 == param_3)) {
    *pcVar10 = '\0';
  }
  *(undefined1 *)(iVar6 + 7) = 1;
  auVar12 = FUN_10054490(iVar6);
  iVar6 = auVar12._8_4_;
  if (((auVar12._0_8_ & 1) != 0) && (uVar1 = *(uint *)(extraout_w15 + 0x38f8), uVar1 != 0)) {
    uVar9 = 0;
    uVar8 = uVar1;
    do {
      uVar5 = uVar8 + uVar9 >> 1;
      uVar11 = *(ulonglong *)(*(int *)(extraout_w14 + iVar7) + uVar5 * extraout_w13);
      uVar4 = uVar5;
      if (uVar11 <= (ulonglong)(longlong)iVar6) {
        if ((ulonglong)(longlong)iVar6 <= uVar11) break;
        uVar9 = uVar5 + 1;
        uVar5 = uVar9;
        uVar4 = uVar8;
      }
      uVar8 = uVar4;
    } while (uVar8 != uVar9);
    if ((uVar5 != uVar1) &&
       (*(longlong *)(*(int *)(extraout_w14 + iVar7) + uVar5 * extraout_w13) == (longlong)iVar6)) {
      uVar5 = uVar5 + 1;
      if (uVar5 < uVar1) {
        do {
          puVar3 = (undefined8 *)(*(int *)(extraout_w14 + iVar7) + uVar5 * extraout_w13);
          uVar5 = uVar5 + 1;
          puVar3[-2] = puVar3[1];
          puVar3[-3] = *puVar3;
          puVar3[-1] = puVar3[2];
        } while (uVar5 < *(uint *)(extraout_w15 + 0x38f8));
      }
      *(int *)(extraout_w15 + 0x38f8) = *(int *)(extraout_w15 + 0x38f8) + -1;
    }
  }
  return;
}

