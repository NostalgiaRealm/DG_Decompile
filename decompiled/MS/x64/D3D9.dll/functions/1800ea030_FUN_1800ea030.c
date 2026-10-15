/*
 * FUN_1800ea030 at 1800ea030
 * char __fastcall FUN_1800ea030(longlong param_1, ulonglong param_2, undefined * param_3, char param_4)
 * Address ranges: 1800ea030-1800ea1cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800ea030(longlong param_1,ulonglong param_2,undefined *param_3,char param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  cVar7 = '\x01';
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  uVar10 = *(uint *)(param_1 + 0x20);
  if (uVar10 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar13 = 0;
    uVar12 = uVar10;
    do {
      uVar8 = uVar12 + (int)uVar13 >> 1;
      uVar11 = (ulonglong)uVar8;
      uVar9 = *(ulonglong *)(lVar4 + (ulonglong)uVar8 * 0x28);
      if (uVar9 <= param_2) {
        if (param_2 <= uVar9) break;
        uVar11 = (ulonglong)(uVar8 + 1);
        uVar13 = uVar11;
        uVar8 = uVar12;
      }
      uVar12 = uVar8;
    } while (uVar12 != (uint)uVar13);
    if ((((uint)uVar11 != uVar10) && (*(ulonglong *)(lVar4 + uVar11 * 0x28) == param_2)) &&
       (plVar1 = (longlong *)(lVar4 + 0x10 + uVar11 * 0x28), plVar1 != (longlong *)0x0)) {
      if ((param_4 == '\0') || (cVar7 = FUN_1800e9ce8(uVar11,plVar1,'\x01'), cVar7 != '\0')) {
        uVar10 = *(uint *)(param_1 + 0x20);
        if (uVar10 != 0) {
          uVar12 = 0;
          do {
            uVar8 = uVar10 + uVar12 >> 1;
            uVar13 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar8 * 0x28);
            uVar6 = uVar8;
            if (uVar13 <= param_2) {
              if (param_2 <= uVar13) break;
              uVar12 = uVar8 + 1;
              uVar6 = uVar10;
              uVar8 = uVar12;
            }
            uVar10 = uVar6;
          } while (uVar10 != uVar12);
          if ((uVar8 != *(uint *)(param_1 + 0x20)) &&
             (*(ulonglong *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar8 * 0x28) == param_2)) {
            while( true ) {
              uVar10 = uVar8 + 1;
              uVar13 = (ulonglong)uVar10;
              if (*(uint *)(param_1 + 0x20) <= uVar10) break;
              lVar4 = *(longlong *)(param_1 + 0x18);
              uVar9 = (ulonglong)uVar8;
              puVar2 = (undefined8 *)(lVar4 + uVar13 * 0x28);
              uVar5 = puVar2[1];
              puVar3 = (undefined8 *)(lVar4 + uVar9 * 0x28);
              *puVar3 = *puVar2;
              puVar3[1] = uVar5;
              puVar2 = (undefined8 *)(lVar4 + 0x10 + uVar13 * 0x28);
              uVar5 = puVar2[1];
              puVar3 = (undefined8 *)(lVar4 + 0x10 + uVar9 * 0x28);
              *puVar3 = *puVar2;
              puVar3[1] = uVar5;
              *(undefined8 *)(lVar4 + 0x20 + uVar9 * 0x28) =
                   *(undefined8 *)(lVar4 + 0x20 + uVar13 * 0x28);
              uVar8 = uVar10;
            }
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
          }
        }
        if (param_3 != (undefined *)0x0) {
          (*(code *)param_3)(param_2);
        }
      }
      else {
        lVar4 = *(longlong *)(lVar4 + 0x18 + uVar11 * 0x28);
        if (*(longlong *)(lVar4 + 0xb10) != 0) {
          *(ulonglong *)(lVar4 + ((ulonglong)*(uint *)(lVar4 + 0xb58) + 0x91) * 0x10) = param_2;
          *(undefined **)(lVar4 + 0x918 + (ulonglong)*(uint *)(lVar4 + 0xb58) * 0x10) = param_3;
          *(int *)(lVar4 + 0xb58) = *(int *)(lVar4 + 0xb58) + 1;
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return cVar7;
}

