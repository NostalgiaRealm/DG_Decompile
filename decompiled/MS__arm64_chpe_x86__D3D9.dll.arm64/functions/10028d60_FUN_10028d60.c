/*
 * FUN_10028d60 at 10028d60
 * undefined FUN_10028d60(void)
 * Address ranges: 10028d60-10028ea7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10028d60(int param_1,uint param_2,int param_3)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint local_b0 [4];
  undefined1 auStack_a0 [128];
  
  local_b0[0] = param_2;
  if (*(char *)(param_1 + 0x3c4) == '\0') {
    uVar6 = FUN_10029720(param_1 + 0x2ec,local_b0,param_3);
    uVar5 = FUN_10029fe8(uVar6,auStack_a0,param_3);
    FUN_10029480(param_1 + 0x2fc,local_b0,uVar5);
    FUN_10026990(param_1,param_2,param_3);
    return;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x3b4) + *(int *)(param_1 + 0x3c0) * 4);
  *(undefined1 *)(param_3 + 0x6d) = 1;
  uVar3 = *(uint *)(iVar2 + 0x4ab4);
  if (uVar3 != 0) {
    uVar9 = 0;
    uVar7 = uVar3;
    do {
      uVar10 = uVar7 + uVar9 >> 1;
      uVar11 = *(ulonglong *)(*(int *)(iVar2 + 0x4ab0) + uVar10 * 0x80);
      uVar4 = uVar10;
      if (uVar11 <= param_2) {
        if (param_2 <= uVar11) break;
        uVar9 = uVar10 + 1;
        uVar10 = uVar9;
        uVar4 = uVar7;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar9);
    if (((uVar10 != uVar3) &&
        (puVar1 = (ulonglong *)(*(int *)(iVar2 + 0x4ab0) + uVar10 * 0x80),
        *puVar1 == (ulonglong)param_2)) && (puVar1 != (ulonglong *)0xfffffff4)) {
      uVar8 = (undefined1)puVar1[0xf];
      goto LAB_10028e40;
    }
  }
  uVar8 = 0;
LAB_10028e40:
  *(undefined1 *)(param_3 + 0x6c) = uVar8;
  FUN_100299d0(iVar2 + 0x4aac,local_b0,param_3);
  return;
}

