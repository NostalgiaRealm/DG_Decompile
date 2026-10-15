/*
 * FUN_1800090b0 at 1800090b0
 * undefined FUN_1800090b0(void)
 * Address ranges: 1800090b0-1800091c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800090b0(longlong param_1,longlong param_2,int *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  
  param_3[0] = 0;
  param_3[1] = 0;
  uVar7 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    do {
      bVar5 = *(byte *)(param_2 + 0x214 + uVar7);
      param_3[uVar7 * 2 + 2] = -1;
      lVar8 = (ulonglong)bVar5 * 8;
      lVar2 = param_2 + lVar8;
      if ((*(char *)(lVar2 + 0x14) == '\0') &&
         (uVar1 = (uint)*(byte *)(lVar2 + 0x16) + (uint)*(byte *)(lVar2 + 0x17) * 4,
         (uint)param_3[1] < uVar1)) {
        param_3[1] = uVar1;
      }
      bVar5 = *(byte *)(param_2 + 0x19 + lVar8);
      uVar6 = 0;
      do {
        uVar3 = *(undefined4 *)(param_1 + uVar6 * 4);
        cVar9 = -(bVar5 <= (byte)uVar3);
        cVar10 = -(bVar5 <= (byte)((uint)uVar3 >> 8));
        cVar11 = -(bVar5 <= (byte)((uint)uVar3 >> 0x10));
        cVar12 = -(bVar5 <= (byte)((uint)uVar3 >> 0x18));
        if (CONCAT13(cVar12,CONCAT12(cVar11,CONCAT11(cVar10,cVar9))) != 0) {
          uVar4 = *(undefined1 *)(lVar2 + 0x18);
          *(char *)((longlong)param_3 + uVar7 * 8 + 0xd) = (char)uVar6;
          *(undefined1 *)(param_3 + uVar7 * 2 + 3) = uVar4;
          *(char *)((longlong)param_3 + uVar7 * 8 + 0xe) =
               cVar9 != '\0' | (cVar11 != '\0') << 2 | (cVar12 != '\0') << 3 | (cVar10 != '\0') << 1
          ;
          param_3[uVar7 * 2 + 2] = (uint)*(byte *)(param_2 + 0x17 + lVar8);
          break;
        }
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar1;
      } while (uVar1 < 0xc);
      uVar1 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar1;
      *param_3 = *param_3 + 1;
    } while (uVar1 < *(uint *)(param_2 + 8));
  }
  return;
}

