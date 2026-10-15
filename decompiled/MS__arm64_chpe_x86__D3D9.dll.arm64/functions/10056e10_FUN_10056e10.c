/*
 * FUN_10056e10 at 10056e10
 * undefined FUN_10056e10(void)
 * Address ranges: 10056e10-10056f93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10056e10(int param_1,int param_2,char param_3)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *extraout_w11;
  ulonglong uVar9;
  char *pcVar10;
  int extraout_w14;
  int extraout_w15;
  undefined1 auVar11 [12];
  
  uVar1 = *(uint *)(param_1 + 0xf8f8);
  if (uVar1 != 0) {
    uVar7 = 0;
    uVar5 = uVar1;
    do {
      uVar8 = uVar5 + uVar7 >> 1;
      uVar9 = *(ulonglong *)(*(int *)(param_1 + 0xf8f4) + uVar8 * 0x18);
      uVar4 = uVar8;
      if (uVar9 <= (ulonglong)(longlong)param_2) {
        if ((ulonglong)(longlong)param_2 <= uVar9) break;
        uVar7 = uVar8 + 1;
        uVar8 = uVar7;
        uVar4 = uVar5;
      }
      uVar5 = uVar4;
    } while (uVar5 != uVar7);
    if ((uVar8 != uVar1) &&
       (plVar2 = (longlong *)(*(int *)(param_1 + 0xf8f4) + uVar8 * 0x18),
       *plVar2 == (longlong)param_2)) {
      iVar6 = (int)plVar2 + 0xc;
      goto LAB_10056ea0;
    }
  }
  iVar6 = 0;
LAB_10056ea0:
  pcVar10 = (char *)(iVar6 + 2);
  if ((*pcVar10 == (char)(param_3 + '\x01')) ||
     (pcVar10 = (char *)(iVar6 + 3), *pcVar10 == (char)(param_3 + '\x01'))) {
    *pcVar10 = '\0';
  }
  *(undefined1 *)(iVar6 + 7) = 1;
  auVar11 = FUN_10054490(iVar6);
  iVar6 = auVar11._8_4_;
  if (((auVar11._0_8_ & 1) != 0) && (uVar1 = *(uint *)(extraout_w15 + 0x38f8), uVar1 != 0)) {
    uVar7 = 0;
    uVar5 = uVar1;
    do {
      uVar8 = uVar5 + uVar7 >> 1;
      uVar9 = *(ulonglong *)(*extraout_w11 + uVar8 * extraout_w14);
      uVar4 = uVar8;
      if (uVar9 <= (ulonglong)(longlong)iVar6) {
        if ((ulonglong)(longlong)iVar6 <= uVar9) break;
        uVar7 = uVar8 + 1;
        uVar8 = uVar7;
        uVar4 = uVar5;
      }
      uVar5 = uVar4;
    } while (uVar5 != uVar7);
    if ((uVar8 != uVar1) && (*(longlong *)(*extraout_w11 + uVar8 * extraout_w14) == (longlong)iVar6)
       ) {
      uVar8 = uVar8 + 1;
      if (uVar8 < uVar1) {
        do {
          puVar3 = (undefined8 *)(*extraout_w11 + uVar8 * extraout_w14);
          uVar8 = uVar8 + 1;
          puVar3[-2] = puVar3[1];
          puVar3[-3] = *puVar3;
          puVar3[-1] = puVar3[2];
        } while (uVar8 < *(uint *)(extraout_w15 + 0x38f8));
      }
      *(int *)(extraout_w15 + 0x38f8) = *(int *)(extraout_w15 + 0x38f8) + -1;
    }
  }
  return;
}

