/*
 * FUN_14000af60 at 14000af60
 * undefined __cdecl FUN_14000af60(ulonglong param_1, undefined8 * param_2, ulonglong param_3, ulonglong param_4, undefined8 param_5, int * param_6, longlong param_7, undefined4 * param_8)
 * Address ranges: 14000af60-14000b0b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000af60(ulonglong param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4,
                  undefined8 param_5,int *param_6,longlong param_7,undefined4 *param_8)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  LPWSTR pWVar4;
  LPWSTR pWVar5;
  undefined8 extraout_x1;
  undefined8 uVar6;
  undefined8 extraout_x1_00;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if (param_3 == 0) {
    uVar2 = *(uint *)(param_1 + 0x1b40);
    uVar9 = 0;
    uVar7 = param_4;
    if (uVar2 != 0) {
      do {
        uVar3 = FUN_14000fd78(param_1,0x402,uVar9);
        iVar8 = (int)uVar9;
        if (uVar3 < uVar2) {
          uVar10 = 0;
          lVar11 = *(longlong *)(param_1 + 0x1b38) + (ulonglong)uVar3 * 0x218;
          puVar1 = (undefined2 *)(lVar11 + 0x10);
          pWVar4 = CharUpperW((LPWSTR)*puVar1);
          pWVar5 = CharUpperW((LPWSTR)*(undefined2 *)param_2);
          if (pWVar4 == pWVar5) {
            do {
              if (puVar1[uVar10] == 0) break;
              uVar10 = (ulonglong)((int)uVar10 + 1);
              pWVar4 = CharUpperW((LPWSTR)puVar1[uVar10]);
              pWVar5 = CharUpperW((LPWSTR)*(undefined2 *)((longlong)param_2 + uVar10 * 2));
            } while (pWVar4 == pWVar5);
          }
          if ((*(short *)(lVar11 + uVar10 * 2 + 0x10) == 0) &&
             (*(short *)((longlong)param_2 + uVar10 * 2) == 0)) {
            if (iVar8 != -1) {
              if ((param_4 & 1) == 0) {
                return;
              }
              FUN_14000fff0(param_1,0x402,iVar8);
              uVar6 = extraout_x1_00;
              goto LAB_14000b06c;
            }
            break;
          }
        }
        uVar9 = (ulonglong)(iVar8 + 1U);
      } while (iVar8 + 1U < uVar2);
    }
  }
  uVar7 = (ulonglong)((uint)param_4 & 0xff);
  FUN_14000ad30(param_1,param_2,param_3,(char)param_4);
  uVar6 = extraout_x1;
  uVar9 = param_3;
  if ((param_4 & 1) != 0) {
LAB_14000b06c:
    FUN_14000a740(param_1,uVar6,uVar9,uVar7,param_5,param_6,param_7,param_8);
  }
  return;
}

