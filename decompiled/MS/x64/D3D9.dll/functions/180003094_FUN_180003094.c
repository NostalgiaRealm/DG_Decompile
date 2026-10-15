/*
 * FUN_180003094 at 180003094
 * ulonglong __fastcall FUN_180003094(longlong param_1, uint param_2, int param_3, int param_4, undefined8 param_5, uint param_6, uint param_7, byte param_8)
 * Address ranges: 180003094-180003251
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180003094(longlong param_1,uint param_2,int param_3,int param_4,undefined8 param_5,
                       uint param_6,uint param_7,byte param_8)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char *pcVar11;
  ulonglong uVar12;
  
  uVar8 = (ulonglong)param_2;
  uVar12 = 0x8876086c;
  if ((param_3 - 1U < 4) && ((int)param_6 < 0x11)) {
    uVar4 = FUN_1800028ec(param_1,param_3);
    if ((char)uVar4 == '\0') {
      uVar12 = 0x8876086b;
    }
    else {
      uVar6 = (ulonglong)(param_8 ^ 1 | 0x8876086a);
      if (param_3 == 2) {
        puVar10 = &DAT_18010e280;
        puVar9 = &DAT_18010e290;
        pcVar11 = &DAT_18010e2b0;
      }
      else {
        lVar5 = (ulonglong)*(uint *)(param_1 + 0x10) * 0x1b0;
        puVar10 = (undefined8 *)(&DAT_18010e430 + lVar5);
        puVar9 = (undefined8 *)(&DAT_18010e440 + lVar5);
        pcVar11 = &DAT_18010e460 + lVar5;
      }
      uVar3 = FUN_18000223c(param_4);
      pcVar2 = (char *)*puVar10;
      uVar7 = 0;
      cVar1 = *pcVar2;
      while (uVar12 = uVar6, cVar1 != -1) {
        if ((byte)pcVar2[uVar7] == uVar3) goto LAB_180003184;
        uVar7 = (ulonglong)((int)uVar7 + 1);
        cVar1 = pcVar2[uVar7];
      }
      pcVar2 = (char *)*puVar9;
      uVar7 = 0;
      cVar1 = *pcVar2;
      while (cVar1 != -1) {
        if ((byte)pcVar2[uVar7] == uVar3) goto LAB_180003184;
        uVar7 = (ulonglong)((int)uVar7 + 1);
        cVar1 = pcVar2[uVar7];
      }
    }
  }
  goto LAB_180003244;
LAB_180003184:
  if ((param_6 != 0) && ((param_6 != 1 || (param_7 != 0)))) {
    if (*(int *)(DAT_180111f20 + 0x86c) != 0) goto LAB_180003244;
    if (param_6 == 1) {
      puVar9 = &DAT_1801123e0;
      if (param_3 == 2) {
        puVar9 = &DAT_1801123f0;
      }
      uVar12 = 0;
      if (*(uint *)(puVar9 + uVar8 * 5) <= param_7) {
        uVar12 = uVar6 & 0xffffffff;
      }
    }
    if ((int)uVar12 != 0) {
      if (param_7 == 0) {
        uVar6 = 0;
        cVar1 = *pcVar11;
        while (cVar1 != '\0') {
          if (pcVar11[uVar6] == (char)param_6) {
            if (*(uint *)(&DAT_180112b30 + uVar8 * 0x4b) != 0) {
              uVar6 = 0;
              goto LAB_18000322b;
            }
            break;
          }
          uVar6 = (ulonglong)((int)uVar6 + 1);
          cVar1 = pcVar11[uVar6];
        }
      }
      goto LAB_180003244;
    }
  }
LAB_180003239:
  uVar12 = 0;
  goto LAB_180003244;
  while (uVar3 = (int)uVar6 + 1, uVar6 = (ulonglong)uVar3,
        uVar3 < *(uint *)(&DAT_180112b30 + uVar8 * 0x4b)) {
LAB_18000322b:
    if (*(uint *)((&DAT_180112b28)[uVar8 * 0x4b] + uVar6 * 4) == (param_6 & 0xff))
    goto LAB_180003239;
  }
LAB_180003244:
  return uVar12 & 0xffffffff;
}

