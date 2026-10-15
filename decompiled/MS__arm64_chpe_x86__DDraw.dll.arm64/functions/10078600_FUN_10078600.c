/*
 * FUN_10078600 at 10078600
 * undefined FUN_10078600(void)
 * Address ranges: 10078600-10078797
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_10078600(int *param_1,int param_2,char param_3)

{
  uint *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int local_50 [4];
  
  cVar6 = '\x01';
  local_50[0] = param_2;
  (*(code *)PTR_FUN_100ba0a0)(param_1 + 7);
  uVar7 = FUN_10079050(param_1,local_50);
  if ((((uVar7 & 1) != 0) && (uVar7 = FUN_10078e68(param_1,local_50), (int)uVar7 != 0)) &&
     ((param_3 == '\0' || (cVar6 = FUN_10078140(uVar7,uVar7 & 0xffffffff,0xffffffff), cVar6 != '\0')
      ))) {
    puVar1 = (uint *)(param_1 + 2);
    uVar10 = *puVar1;
    if (uVar10 != 0) {
      uVar9 = 0;
      uVar8 = uVar10;
      do {
        uVar11 = uVar8 + uVar9 >> 1;
        uVar7 = *(ulonglong *)(*param_1 + uVar11 * 0x10);
        uVar5 = uVar11;
        if (uVar7 <= (ulonglong)(longlong)param_2) {
          if ((ulonglong)(longlong)param_2 <= uVar7) break;
          uVar9 = uVar11 + 1;
          uVar11 = uVar9;
          uVar5 = uVar8;
        }
        uVar8 = uVar5;
      } while (uVar8 != uVar9);
      if ((uVar11 != uVar10) &&
         (plVar2 = (longlong *)(*param_1 + uVar11 * 0x10), *plVar2 == (longlong)param_2)) {
        iVar4 = *(int *)((int)plVar2 + 0xc);
        if (iVar4 != 0) {
          FUN_100914d0(*(undefined4 *)(iVar4 + 4));
          *(undefined8 *)(iVar4 + 4) = 0;
          *(undefined4 *)(iVar4 + 0x10) = 0;
          *(undefined4 *)(iVar4 + 0xc) = 0;
          FUN_10091460(iVar4,0x14);
        }
        uVar10 = *puVar1;
        uVar11 = uVar11 + 1;
        if (uVar11 < uVar10) {
          do {
            puVar3 = (undefined8 *)(*param_1 + uVar11 * 0x10);
            uVar11 = uVar11 + 1;
            puVar3[-1] = puVar3[1];
            puVar3[-2] = *puVar3;
            uVar10 = *puVar1;
          } while (uVar11 < uVar10);
        }
        *puVar1 = uVar10 - 1;
      }
    }
  }
  (*(code *)PTR_FUN_100ba0f0)(param_1 + 7);
  return cVar6;
}

