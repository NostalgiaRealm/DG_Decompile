/*
 * FUN_180043480 at 180043480
 * undefined4 __fastcall FUN_180043480(longlong * param_1, ulonglong param_2, ulonglong param_3, undefined4 param_4, longlong param_5, longlong param_6, undefined4 param_7, longlong param_8)
 * Address ranges: 180043480-1800435ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_180043480(longlong *param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4,
             longlong param_5,longlong param_6,undefined4 param_7,longlong param_8)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint local_res8 [2];
  ulonglong local_res10;
  uint local_res18 [4];
  longlong local_58;
  longlong local_50;
  uint local_48;
  undefined4 local_44;
  longlong local_40;
  
  uVar10 = (uint)param_3;
  local_res10 = param_2;
  local_res18[0] = uVar10;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  uVar11 = 0;
  if ((char)param_1[10] == '\0') {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    param_3 = (ulonglong)uVar2;
    uVar5 = 0;
    if (uVar2 == 0) goto LAB_1800435d0;
    uVar9 = 0;
    do {
      uVar4 = (int)param_3 + uVar9 >> 1;
      uVar3 = *(ulonglong *)(*param_1 + (ulonglong)uVar4 * 0x18);
      if (param_2 < uVar3) {
        param_3 = (ulonglong)uVar4;
      }
      else {
        if (param_2 <= uVar3) break;
        uVar9 = uVar4 + 1;
        uVar4 = uVar9;
      }
    } while ((uint)param_3 != uVar9);
    uVar5 = uVar11;
    if ((uVar4 == uVar2) || (*(ulonglong *)(*param_1 + (ulonglong)uVar4 * 0x18) != param_2))
    goto LAB_1800435d0;
  }
  puVar6 = (undefined4 *)FUN_18004379c(param_1,&local_res10);
  uVar5 = uVar11;
  if (puVar6 != (undefined4 *)0x0) {
    plVar1 = (longlong *)(puVar6 + 2);
    *puVar6 = param_4;
    plVar8 = plVar1;
    plVar7 = (longlong *)FUN_18004381c((longlong)plVar1,local_res18);
    if (plVar7 == (longlong *)0x0) {
      local_res8[0] = 0xffffffff;
      plVar8 = plVar1;
      plVar7 = (longlong *)FUN_18004381c((longlong)plVar1,local_res8);
      uVar5 = 0;
      if (plVar7 != (longlong *)0x0) {
        uVar5 = FUN_18004320c(plVar8,plVar7,param_3,param_5,param_6);
      }
      local_44 = param_7;
      local_40 = param_8;
      local_58 = param_5;
      local_50 = param_6;
      local_48 = uVar10;
      FUN_180043888(plVar1,local_res18,&local_58);
    }
    else {
      uVar5 = FUN_18004320c(plVar8,plVar7,param_3,param_5,param_6);
      *(undefined4 *)((longlong)plVar7 + 0x14) = param_7;
      plVar7[3] = param_8;
      *plVar7 = param_5;
      plVar7[1] = param_6;
      *(uint *)(plVar7 + 2) = uVar10;
    }
  }
LAB_1800435d0:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return uVar5;
}

