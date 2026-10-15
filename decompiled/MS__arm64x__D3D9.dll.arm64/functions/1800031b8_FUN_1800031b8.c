/*
 * FUN_1800031b8 at 1800031b8
 * undefined FUN_1800031b8(void)
 * Address ranges: 1800031b8-1800032e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800031b8(longlong param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  char *pcVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  uVar2 = (ulonglong)param_2;
  lVar7 = uVar2 * 600;
  if (((&DAT_180253a5e)[lVar7] == '\0') &&
     (uVar3 = FUN_180020640((int)param_1,param_2,(&DAT_180253870)[uVar2 * 0x96]), (uVar3 & 1) != 0))
  {
    uVar1 = *(uint *)((longlong)&DAT_1802539f0 + lVar7 + 4);
    uVar3 = 0x20;
    if (uVar1 != 8) {
      uVar3 = uVar1;
    }
    if (uVar3 == 8) {
      uVar6 = 0x29;
    }
    else {
      uVar6 = 0;
      pcVar5 = (char *)(&DAT_180248e88)[(ulonglong)*(uint *)(param_1 + 0x10) * 0x36];
      if (*pcVar5 != -1) {
        uVar4 = 0;
        do {
          if ((byte)(&DAT_180229a68)[(byte)pcVar5[uVar4]] == uVar3) {
            uVar6 = *(undefined4 *)(&DAT_180229aa0 + (ulonglong)(byte)pcVar5[uVar4] * 4);
            break;
          }
          uVar4 = (ulonglong)((int)uVar4 + 1);
        } while (pcVar5[uVar4] != -1);
      }
    }
    *(undefined4 *)(&DAT_180253340 + (ulonglong)param_2 * 0x28) = uVar6;
  }
  *param_3 = *(undefined4 *)(&DAT_1802539e0 + uVar2 * 0x4b);
  param_3[1] = *(undefined4 *)((longlong)&DAT_1802539e0 + lVar7 + 4);
  param_3[2] = *(undefined4 *)(&DAT_1802539f0 + uVar2 * 0x4b);
  param_3[3] = *(undefined4 *)(&DAT_180253340 + (ulonglong)param_2 * 0x28);
  return;
}

