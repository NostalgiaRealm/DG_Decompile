/*
 * FUN_1801083e8 at 1801083e8
 * undefined FUN_1801083e8(void)
 * Address ranges: 1801083e8-180108517
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801083e8(longlong param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char *pcVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  uVar3 = (ulonglong)param_2;
  lVar7 = uVar3 * 600;
  if (((&DAT_18024ea4e)[lVar7] == '\0') &&
     (uVar4 = FUN_18012ca90(param_1,param_2,(&DAT_18024e860)[uVar3 * 0x96]), (uVar4 & 1) != 0)) {
    uVar2 = *(uint *)((longlong)&DAT_18024e9e0 + lVar7 + 4);
    uVar1 = 0x20;
    if (uVar2 != 8) {
      uVar1 = uVar2;
    }
    if (uVar1 == 8) {
      uVar6 = 0x29;
    }
    else {
      uVar6 = 0;
      pcVar5 = (char *)(&DAT_180246578)[(ulonglong)*(uint *)(param_1 + 0x10) * 0x36];
      if (*pcVar5 != -1) {
        uVar4 = 0;
        do {
          if ((byte)(&DAT_180229a68)[(byte)pcVar5[uVar4]] == uVar1) {
            uVar6 = *(undefined4 *)(&DAT_180229aa0 + (ulonglong)(byte)pcVar5[uVar4] * 4);
            break;
          }
          uVar4 = (ulonglong)((int)uVar4 + 1);
        } while (pcVar5[uVar4] != -1);
      }
    }
    *(undefined4 *)(&DAT_18024e330 + (ulonglong)param_2 * 0x28) = uVar6;
  }
  *param_3 = *(undefined4 *)(&DAT_18024e9d0 + uVar3 * 0x4b);
  param_3[1] = *(undefined4 *)((longlong)&DAT_18024e9d0 + lVar7 + 4);
  param_3[2] = *(undefined4 *)(&DAT_18024e9e0 + uVar3 * 0x4b);
  param_3[3] = *(undefined4 *)(&DAT_18024e330 + (ulonglong)param_2 * 0x28);
  return;
}

