/*
 * FUN_180201970 at 180201970
 * undefined FUN_180201970(void)
 * Address ranges: 180201970-180201bcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180201970(undefined8 param_1,uint *param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
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
  undefined4 local_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  
  uVar2 = *(uint *)(param_3 + 0x20);
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1802019b8);
    (*pcVar5)();
  }
  uVar10 = 0;
  if (uVar2 != 0) {
    uVar10 = (param_2[6] - param_2[4]) / uVar2;
  }
  uVar2 = *(uint *)(param_3 + 0x24);
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1802019d4);
    (*pcVar5)();
  }
  uVar9 = 0;
  if (uVar2 != 0) {
    uVar9 = (param_2[7] - param_2[5]) / uVar2;
  }
  iVar3 = param_2[10] - param_2[8];
  bVar6 = (uint)(iVar3 * 2) <= uVar10;
  uVar2 = (param_2[0xb] - param_2[9]) * 2;
  bVar7 = uVar2 <= uVar9;
  if ((uint)(iVar3 * 2) <= uVar10 || uVar2 <= uVar9) {
    FUN_180203380(param_1,param_3,2);
    if (*(uint *)(param_3 + 0x28) < 2) {
      return;
    }
    if ((uint)(iVar3 * 2) <= uVar10) goto LAB_180201a40;
  }
  if (uVar9 < uVar2) {
    return;
  }
LAB_180201a40:
  puVar4 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  cVar8 = (*extraout_x11)(param_1,param_4);
  if (cVar8 != '\0') {
    uVar2 = param_2[2];
    uVar1 = param_2[3];
    uVar11 = uVar2;
    uVar12 = uVar1;
    while( true ) {
      if ((!bVar6) && (!bVar7)) break;
      local_a0 = 0xbf800000;
      uStack_9c = 0x3f800000;
      fStack_74 = (float)uVar1;
      local_90 = 0x3f800000;
      uStack_8c = 0x3f800000;
      local_80 = 0xbf800000;
      uStack_7c = 0xbf800000;
      local_70 = 0x3f800000;
      uStack_6c = 0xbf800000;
      local_88 = (float)uVar2;
      fStack_94 = 0.0 / fStack_74;
      local_98 = 0.0 / local_88;
      local_88 = (((float)uVar11 - 0.5) + 0.5) / local_88;
      fStack_74 = (((float)uVar12 - 0.5) + 0.5) / fStack_74;
      fStack_84 = fStack_94;
      local_78 = local_98;
      local_68 = local_88;
      fStack_64 = fStack_74;
      (*(code *)puVar4)(0x180225000);
      (*extraout_x11_00)(param_1,&local_a0);
      uVar10 = uVar10 >> 1;
      uVar9 = uVar9 >> 1;
      param_2[6] = (int)param_2[6] >> 1;
      param_2[7] = (int)param_2[7] >> 1;
      uVar11 = (int)*(undefined8 *)(param_2 + 2) >> 1;
      uVar12 = (uint)((longlong)*(undefined8 *)(param_2 + 2) >> 0x21);
      *(ulonglong *)(param_2 + 4) =
           CONCAT44((int)((longlong)*(undefined8 *)(param_2 + 4) >> 0x21),
                    (int)*(undefined8 *)(param_2 + 4) >> 1);
      *(ulonglong *)(param_2 + 2) = CONCAT44(uVar12,uVar11);
      bVar6 = (param_2[10] - param_2[8]) * 2 <= uVar10;
      bVar7 = (param_2[0xb] - param_2[9]) * 2 <= uVar9;
    }
    if ((param_2[10] - param_2[8] == param_2[6] - param_2[4]) ||
       (param_2[0xb] - param_2[9] == param_2[7] - param_2[5])) {
      *param_2 = *param_2 & 0xffffffc7;
    }
  }
  return;
}

