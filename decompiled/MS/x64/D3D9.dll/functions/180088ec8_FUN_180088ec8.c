/*
 * FUN_180088ec8 at 180088ec8
 * undefined8 __fastcall FUN_180088ec8(longlong * param_1, uint param_2)
 * Address ranges: 180088ec8-180089091
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180088ec8(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  LPVOID pvVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint local_res10 [2];
  undefined8 local_res18;
  longlong local_res20;
  LPVOID local_58;
  LPVOID local_50;
  undefined8 local_48;
  undefined1 local_40;
  
  local_res18 = 0;
  if (-1 < (int)param_2) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 2);
  uVar13 = (ulonglong)param_2;
  if (uVar2 != 0) {
    uVar10 = 0;
    uVar9 = uVar2;
    do {
      uVar8 = uVar9 + uVar10 >> 1;
      uVar3 = *(ulonglong *)(param_1[1] + (ulonglong)uVar8 * 0x18);
      uVar6 = uVar8;
      if (uVar3 <= uVar13) {
        if (uVar13 <= uVar3) break;
        uVar8 = uVar8 + 1;
        uVar6 = uVar9;
        uVar10 = uVar8;
      }
      uVar9 = uVar6;
    } while (uVar9 != uVar10);
    if (uVar8 != uVar2) {
      if ((*(ulonglong *)(param_1[1] + (ulonglong)uVar8 * 0x18) == uVar13) &&
         (puVar1 = (undefined8 *)(param_1[1] + 0x10 + (ulonglong)uVar8 * 0x18),
         puVar1 != (undefined8 *)0x0)) {
        return *puVar1;
      }
    }
  }
  uVar2 = *(uint *)(param_1 + 4);
  lVar12 = param_1[3];
  local_48 = 0x100;
  local_40 = 1;
  local_res10[0] = param_2;
  local_res20 = lVar12;
  local_58 = (LPVOID)thunk_FUN_1800fbccc(0x100);
  uVar11 = 0x40;
  if (0xafff < *(int *)(lVar12 + 0x6cc + (ulonglong)uVar2 * 0x18c0)) {
    uVar11 = 0x50;
  }
  local_50 = local_58;
  cVar7 = FUN_1800a9214(param_2,uVar11,'\0',(longlong *)&local_58);
  pvVar5 = local_58;
  if (cVar7 != '\0') {
    lVar12 = (longlong)local_50 - (longlong)local_58;
    FUN_1800ec7d0(param_1[3],local_58,lVar12);
    plVar4 = *(longlong **)(local_res20 + 0x6b0 + (ulonglong)uVar2 * 0x18c0);
    (**(code **)(*plVar4 + 0x78))(plVar4,pvVar5,lVar12,0,&local_res18);
    uVar2 = *(uint *)(param_1 + 2);
    uVar9 = 0;
    if (uVar2 != 0) {
      uVar10 = 0;
      uVar8 = uVar2;
      do {
        uVar9 = uVar8 + uVar10 >> 1;
        uVar3 = *(ulonglong *)(param_1[1] + (ulonglong)uVar9 * 0x18);
        uVar6 = uVar9;
        if (uVar3 <= uVar13) {
          if (uVar13 <= uVar3) break;
          uVar10 = uVar9 + 1;
          uVar6 = uVar8;
          uVar9 = uVar10;
        }
        uVar8 = uVar6;
      } while (uVar8 != uVar10);
      if (uVar9 != uVar2) {
        lVar12 = param_1[1];
        if (*(ulonglong *)(lVar12 + (ulonglong)uVar9 * 0x18) == uVar13) {
          *(undefined8 *)(lVar12 + 0x10 + (ulonglong)uVar9 * 0x18) = local_res18;
          goto LAB_18008906b;
        }
      }
    }
    FUN_18008d9b4(param_1,uVar9,uVar13,local_res10,&local_res18);
  }
LAB_18008906b:
  FUN_1800fbcf0(pvVar5);
  return local_res18;
}

