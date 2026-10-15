/*
 * FUN_18012cfb8 at 18012cfb8
 * undefined FUN_18012cfb8(void)
 * Address ranges: 18012cfb8-18012d107
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18012cfb8(uint *param_1,uint *param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  
  uVar1 = param_2[3];
  uVar10 = *param_2;
  uVar8 = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  param_1[4] = 1;
  param_1[5] = 1;
  param_3 = param_3 & 0xffffffff;
  *param_1 = uVar10;
  param_1[1] = uVar8;
  uVar1 = *(uint *)(&DAT_18024e9b8 + param_3 * 0x4b);
  uVar2 = *(uint *)((longlong)&DAT_18024e9b8 + param_3 * 600 + 4);
  uVar9 = *(uint *)(DAT_18024d928 + 0x864);
  uVar7 = *(uint *)(DAT_18024d928 + 0x868);
  lVar5 = DAT_18024d928;
  local_48 = uVar1;
  uStack_44 = uVar2;
  if ((uVar9 < 0xfffffff8) || ((uVar9 != uVar7 || uVar9 == 0xfffffff9) && 0xff < uVar7)) {
    if ((uVar9 == 0) || (uVar7 == 0)) goto LAB_18012d06c;
  }
  else {
    local_50 = uVar10;
    uStack_4c = uVar8;
    FUN_18021fc70((&DAT_18024e840)[param_3 * 0x4b] + 8,&local_40,&local_48,&local_50);
    uVar9 = local_40;
    uVar7 = uStack_3c;
  }
  *param_1 = uVar9;
  param_1[1] = uVar7;
  uVar10 = uVar9;
  uVar8 = uVar7;
LAB_18012d06c:
  uVar9 = *(uint *)(*(longlong *)((&DAT_18024e840)[param_3 * 0x4b] + 8) + 0xa2);
  uVar7 = *(uint *)(*(longlong *)((&DAT_18024e840)[param_3 * 0x4b] + 8) + 0xa6);
  if ((uVar9 == 0) || (uVar6 = uVar7, uVar7 == 0)) {
    if (uVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18012d08c);
      (*pcVar4)();
    }
    uVar3 = 0;
    if (uVar10 != 0) {
      uVar3 = uVar1 / uVar10;
    }
    if (uVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18012d098);
      (*pcVar4)();
    }
    uVar10 = 0;
    if (uVar8 != 0) {
      uVar10 = uVar2 / uVar8;
    }
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    if (uVar10 == 0) {
      uVar10 = 1;
    }
    if (uVar9 == uVar7) {
      uVar9 = uVar3;
      uVar6 = uVar3;
      if (uVar10 <= uVar3) {
        uVar9 = uVar10;
        uVar6 = uVar10;
      }
    }
    else {
      uVar6 = uVar10;
      if (uVar9 == 0) {
        uVar9 = uVar3;
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

