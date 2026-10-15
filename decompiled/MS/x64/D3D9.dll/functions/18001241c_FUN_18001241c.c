/*
 * FUN_18001241c at 18001241c
 * undefined __fastcall FUN_18001241c(longlong param_1, longlong param_2, int * param_3)
 * Address ranges: 18001241c-180012511
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001241c(longlong param_1,longlong param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  
  uVar6 = 0;
  param_3[0] = 0;
  param_3[1] = 0;
  if (*(int *)(param_2 + 8) != 0) {
    do {
      bVar1 = *(byte *)(param_2 + 0x214 + uVar6);
      uVar4 = (ulonglong)bVar1;
      param_3[uVar6 * 2 + 2] = -1;
      uVar7 = (ulonglong)bVar1;
      if ((*(char *)(param_2 + 0x14 + uVar4 * 8) == '\0') &&
         (uVar5 = (uint)*(byte *)(param_2 + 0x16 + uVar4 * 8) +
                  (uint)*(byte *)(param_2 + 0x17 + uVar4 * 8) * 4, (uint)param_3[1] < uVar5)) {
        param_3[1] = uVar5;
      }
      cVar2 = *(char *)(param_2 + 0x19 + uVar7 * 8);
      uVar4 = 0;
      do {
        uVar3 = *(undefined4 *)(param_1 + uVar4 * 4);
        cVar8 = -(cVar2 == (char)uVar3);
        cVar9 = -(cVar2 == (char)((uint)uVar3 >> 8));
        cVar10 = -(cVar2 == (char)((uint)uVar3 >> 0x10));
        cVar11 = -(cVar2 == (char)((uint)uVar3 >> 0x18));
        if (CONCAT13(cVar11,CONCAT12(cVar10,CONCAT11(cVar9,cVar8))) != 0) {
          *(undefined1 *)(param_3 + uVar6 * 2 + 3) = *(undefined1 *)(param_2 + 0x18 + uVar7 * 8);
          *(char *)((longlong)param_3 + uVar6 * 8 + 0xd) = (char)uVar4;
          *(byte *)((longlong)param_3 + uVar6 * 8 + 0xe) =
               -(cVar10 != '\0') & 4U | cVar8 != '\0' | -(cVar11 != '\0') & 8U |
               -(cVar9 != '\0') & 2U;
          param_3[uVar6 * 2 + 2] = (uint)*(byte *)(param_2 + 0x17 + uVar7 * 8);
          break;
        }
        uVar5 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar5;
      } while (uVar5 < 0xc);
      *param_3 = *param_3 + 1;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_2 + 8));
  }
  return;
}

