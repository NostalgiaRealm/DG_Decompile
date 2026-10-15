/*
 * FUN_180020b90 at 180020b90
 * undefined FUN_180020b90(void)
 * Address ranges: 180020b90-180020cd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180020b90(uint *param_1,uint *param_2,ulonglong param_3)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  
  uVar3 = param_2[3];
  uVar10 = *param_2;
  uVar8 = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  param_1[4] = 1;
  param_1[5] = 1;
  param_3 = param_3 & 0xffffffff;
  *param_1 = uVar10;
  param_1[1] = uVar8;
  uVar3 = *(uint *)(&DAT_1802539c8 + param_3 * 0x4b);
  uVar4 = *(uint *)((longlong)&DAT_1802539c8 + param_3 * 600 + 4);
  uVar9 = *(uint *)(DAT_18024de60 + 0x864);
  uVar7 = *(uint *)(DAT_18024de60 + 0x868);
  lVar5 = DAT_18024de60;
  local_38 = uVar3;
  uStack_34 = uVar4;
  if ((uVar9 < 0xfffffff8) || ((uVar9 != uVar7 || uVar9 == 0xfffffff9) && 0xff < uVar7)) {
    if ((uVar9 == 0) || (uVar7 == 0)) goto LAB_180020c40;
  }
  else {
    local_40 = uVar10;
    uStack_3c = uVar8;
    FUN_180100380((&DAT_180253850)[param_3 * 0x4b] + 8,&local_30,&local_38,&local_40);
    uVar9 = local_30;
    uVar7 = uStack_2c;
  }
  *param_1 = uVar9;
  param_1[1] = uVar7;
  uVar10 = uVar9;
  uVar8 = uVar7;
LAB_180020c40:
  uVar9 = *(uint *)(*(longlong *)((&DAT_180253850)[param_3 * 0x4b] + 8) + 0xa2);
  uVar7 = *(uint *)(*(longlong *)((&DAT_180253850)[param_3 * 0x4b] + 8) + 0xa6);
  if ((uVar9 == 0) || (uVar6 = uVar7, uVar7 == 0)) {
    if (uVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x180020c60);
      (*pcVar2)();
    }
    uVar1 = 0;
    if (uVar10 != 0) {
      uVar1 = uVar3 / uVar10;
    }
    if (uVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x180020c6c);
      (*pcVar2)();
    }
    uVar10 = 0;
    if (uVar8 != 0) {
      uVar10 = uVar4 / uVar8;
    }
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    if (uVar10 == 0) {
      uVar10 = 1;
    }
    if (uVar9 == uVar7) {
      uVar9 = uVar1;
      uVar6 = uVar1;
      if (uVar10 <= uVar1) {
        uVar9 = uVar10;
        uVar6 = uVar10;
      }
    }
    else {
      uVar6 = uVar10;
      if (uVar9 == 0) {
        uVar9 = uVar1;
        uVar6 = uVar7;
      }
    }
  }
  param_1[4] = uVar9;
  param_1[5] = uVar6;
  if (((*(char *)(lVar5 + 0x822) != '\0') && (*(uint *)(lVar5 + 0x870) != 0)) &&
     (uVar10 = *(uint *)(lVar5 + 0x874), uVar10 != 0)) {
    param_1[2] = *(uint *)(lVar5 + 0x870);
    param_1[3] = uVar10;
  }
  return;
}

