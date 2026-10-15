/*
 * FUN_180055268 at 180055268
 * undefined __cdecl FUN_180055268(longlong * param_1, uint * param_2, longlong param_3, undefined8 param_4)
 * Address ranges: 180055268-180055493
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180055268(longlong *param_1,uint *param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 local_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  float local_98;
  float fStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  float local_88;
  float fStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  float local_78;
  float fStack_74;
  
  uVar2 = *(uint *)(param_3 + 0x20);
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1800552b4);
    (*pcVar4)();
  }
  uVar9 = 0;
  if (uVar2 != 0) {
    uVar9 = (param_2[6] - param_2[4]) / uVar2;
  }
  uVar2 = *(uint *)(param_3 + 0x24);
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1800552d0);
    (*pcVar4)();
  }
  uVar8 = 0;
  if (uVar2 != 0) {
    uVar8 = (param_2[7] - param_2[5]) / uVar2;
  }
  iVar3 = param_2[10] - param_2[8];
  bVar5 = (uint)(iVar3 * 2) <= uVar9;
  uVar2 = (param_2[0xb] - param_2[9]) * 2;
  bVar6 = uVar2 <= uVar8;
  if ((uint)(iVar3 * 2) <= uVar9 || uVar2 <= uVar8) {
    FUN_180056be8(param_1,param_3,2);
    if (*(uint *)(param_3 + 0x28) < 2) {
      return;
    }
    if ((uint)(iVar3 * 2) <= uVar9) goto LAB_18005532c;
  }
  if (uVar8 < uVar2) {
    return;
  }
LAB_18005532c:
  cVar7 = (**(code **)(*param_1 + 0x58))(param_1,param_4);
  if (cVar7 != '\0') {
    uVar2 = param_2[2];
    uVar1 = param_2[3];
    uVar10 = uVar2;
    uVar11 = uVar1;
    while ((bVar5 || (bVar6))) {
      local_98 = (float)uVar2;
      local_b0 = 0xbf800000;
      uStack_ac = 0x3f800000;
      fStack_84 = (float)uVar1;
      local_a0 = 0x3f800000;
      uStack_9c = 0x3f800000;
      local_90 = 0xbf800000;
      uStack_8c = 0xbf800000;
      local_80 = 0x3f800000;
      uStack_7c = 0xbf800000;
      local_a8 = 0.0 / local_98;
      fStack_a4 = 0.0 / fStack_84;
      local_98 = (((float)uVar10 - 0.5) + 0.5) / local_98;
      fStack_84 = (((float)uVar11 - 0.5) + 0.5) / fStack_84;
      fStack_94 = fStack_a4;
      local_88 = local_a8;
      local_78 = local_98;
      fStack_74 = fStack_84;
      (**(code **)(*param_1 + 0x60))(param_1,&local_b0,uVar10,uVar11,param_4);
      uVar9 = uVar9 >> 1;
      uVar8 = uVar8 >> 1;
      param_2[6] = (int)param_2[6] >> 1;
      param_2[7] = (int)param_2[7] >> 1;
      uVar10 = (int)*(undefined8 *)(param_2 + 2) >> 1;
      uVar11 = (uint)((longlong)*(undefined8 *)(param_2 + 2) >> 0x21);
      *(ulonglong *)(param_2 + 4) =
           CONCAT44((int)((longlong)*(undefined8 *)(param_2 + 4) >> 0x21),
                    (int)*(undefined8 *)(param_2 + 4) >> 1);
      *(ulonglong *)(param_2 + 2) = CONCAT44(uVar11,uVar10);
      bVar5 = (param_2[10] - param_2[8]) * 2 <= uVar9;
      bVar6 = (param_2[0xb] - param_2[9]) * 2 <= uVar8;
    }
    if ((param_2[10] - param_2[8] == param_2[6] - param_2[4]) ||
       (param_2[0xb] - param_2[9] == param_2[7] - param_2[5])) {
      *param_2 = *param_2 & 0xffffffc7;
    }
  }
  return;
}

